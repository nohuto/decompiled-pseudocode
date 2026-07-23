/*
 * XREFs of ExfReleasePushLockSharedEx @ 0x14042833C
 * Callers:
 *     ExReleaseAutoExpandPushLockShared @ 0x140279BB0 (ExReleaseAutoExpandPushLockShared.c)
 * Callees:
 *     ExpWakePushLock @ 0x140428464 (ExpWakePushLock.c)
 */

__int64 __fastcall ExfReleasePushLockSharedEx(signed __int64 *a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // r11
  LONG SpareLong; // edi
  unsigned __int64 v5; // rbx
  signed __int64 v6; // rcx
  signed __int64 v7; // r8
  bool v8; // zf
  __int64 result; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 i; // rax
  __int64 v14; // rdx

  CurrentThread = 0LL;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    SpareLong = CurrentThread->WaitBlock[0].SpareLong;
    *a2 = 0LL;
    v5 = __rdtsc();
  }
  else
  {
    SpareLong = 0;
    v5 = 0LL;
  }
  _m_prefetchw(a1);
  v6 = *a1;
  while ( (v6 & 2) == 0 )
  {
    v7 = 0LL;
    if ( (v6 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
      v7 = v6 - 16;
    result = _InterlockedCompareExchange64(a1, v7, v6);
    v8 = v6 == result;
    v6 = result;
    if ( v8 )
    {
      if ( a2 )
      {
        result = __rdtsc();
        if ( CurrentThread->WaitBlock[0].SpareLong == SpareLong )
        {
          result -= v5;
          *a2 = result;
        }
      }
      return result;
    }
  }
  if ( (v6 & 8) != 0 )
  {
    for ( i = v6 & 0xFFFFFFFFFFFFFFF0uLL; ; i = *(_QWORD *)(i + 24) )
    {
      v14 = *(_QWORD *)(i + 32);
      if ( v14 )
        break;
    }
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 48));
    if ( (int)result > 0 )
      return result;
    v10 = -9LL;
  }
  else
  {
    v10 = -1LL;
  }
  while ( 1 )
  {
    if ( (v6 & 4) != 0 || (v11 = v10 + 4, (v6 & 2) == 0) )
      v11 = v10;
    v12 = v11 + v6;
    result = _InterlockedCompareExchange64(a1, v11 + v6, v6);
    if ( v6 == result )
      break;
    v6 = result;
  }
  if ( (v6 & 6) == 2 )
    return ExpWakePushLock(a1, v12, v10);
  return result;
}
