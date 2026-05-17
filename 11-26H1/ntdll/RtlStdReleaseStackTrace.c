/*
 * XREFs of RtlStdReleaseStackTrace @ 0x18007C530
 * Callers:
 *     RtlInitializeResource @ 0x180079E50 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18007AED0 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlLogStackBackTraceEx @ 0x18007C250 (RtlLogStackBackTraceEx.c)
 *     RtlReleaseStackTrace @ 0x1801010C0 (RtlReleaseStackTrace.c)
 * Callees:
 *     RtlpStdLockAcquire @ 0x18007C4EC (RtlpStdLockAcquire.c)
 *     RtlpStdLockRelease @ 0x18007C50C (RtlpStdLockRelease.c)
 *     RtlpInterlockedPushEntrySList @ 0x180162D10 (RtlpInterlockedPushEntrySList.c)
 */

struct _TEB *__fastcall RtlStdReleaseStackTrace(__int64 a1, __int64 *a2)
{
  int v4; // r14d
  unsigned int v5; // eax
  __int64 v6; // rcx
  _DWORD *v7; // rdx
  unsigned int v8; // edx
  __int64 *v9; // rsi
  volatile signed __int64 *v10; // r15
  _WORD *v11; // rdi
  struct _TEB *result; // rax
  __int16 v13; // cx

  v4 = 0;
  v5 = 0;
  if ( *((_WORD *)a2 + 7) )
  {
    v6 = *((unsigned __int16 *)a2 + 7);
    v7 = a2 + 2;
    do
    {
      v5 += *v7;
      v7 += 2;
      --v6;
    }
    while ( v6 );
  }
  v8 = v5 % *(_DWORD *)(a1 + 720);
  v9 = (__int64 *)(a1 + 16LL * v8 + 728);
  v10 = v9 + 1;
  RtlpStdLockAcquire(v9 + 1, v8);
  v11 = a2 + 1;
  if ( (a2[1] & 0x7FF) != 0x7FF )
  {
    v13 = *v11 - 1;
    *v11 ^= (*v11 ^ v13) & 0x7FF;
    if ( (v13 & 0x7FF) == 0 )
    {
      while ( *v9 )
      {
        if ( (__int64 *)*v9 == a2 )
        {
          *v9 = *a2;
          goto LABEL_13;
        }
        v9 = (__int64 *)*v9;
      }
      __debugbreak();
LABEL_13:
      v4 = 1;
      v11 = a2 + 1;
    }
  }
  result = RtlpStdLockRelease(v10);
  if ( v4 )
  {
    result = (struct _TEB *)RtlpInterlockedPushEntrySList(
                              a1 + 16 * (((unsigned __int64)(unsigned __int16)*v11 >> 11) + 13),
                              a2 + 2);
    _InterlockedAdd((volatile signed __int32 *)(a1 + 196), 1u);
  }
  return result;
}
