/*
 * XREFs of CmpWaitForLateUnloadWorker @ 0x140478434
 * Callers:
 *     CmpDeleteKeyObject @ 0x1408CFA20 (CmpDeleteKeyObject.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x14036A040 (ExpUnblockPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140478630 (ExTimedWaitForUnblockPushLock.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmLockHive @ 0x1408CEC48 (CmLockHive.c)
 *     CmUnlockHive @ 0x1408CECB0 (CmUnlockHive.c)
 */

__int64 __fastcall CmpWaitForLateUnloadWorker(__int64 a1)
{
  int v2; // esi
  __int64 result; // rax
  signed __int64 *v4; // rdi
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  signed __int64 v7; // rcx
  volatile __int64 *v8; // rcx
  _BYTE v9[24]; // [rsp+20h] [rbp-48h] BYREF
  signed __int64 v10; // [rsp+38h] [rbp-30h]
  int v11; // [rsp+54h] [rbp-14h]

  ((void (*)(void))CmLockHive)();
  v2 = *(_DWORD *)(a1 + 4808);
  result = CmUnlockHive(a1);
  if ( v2 )
  {
    v4 = (signed __int64 *)(a1 + 4816);
    do
    {
      memset_0(v9, 0, 0x40uLL);
      v11 = 2;
      _m_prefetchw(v4);
      v10 = *v4;
      v6 = v10;
      v5 = _InterlockedCompareExchange64(v4, (signed __int64)v9, v10);
      if ( v6 != v5 )
      {
        do
        {
          v7 = v5;
          v10 = v5;
          v5 = _InterlockedCompareExchange64(v4, (signed __int64)v9, v5);
        }
        while ( v5 != v7 );
      }
      v8 = (volatile __int64 *)(a1 + 4816);
      if ( *(_DWORD *)(a1 + 4808) == v2 )
        ExTimedWaitForUnblockPushLock(v8, v9, 0LL);
      else
        ExpUnblockPushLock(v8, v9, 0);
      CmLockHive(a1);
      v2 = *(_DWORD *)(a1 + 4808);
      result = CmUnlockHive(a1);
    }
    while ( v2 );
  }
  return result;
}
