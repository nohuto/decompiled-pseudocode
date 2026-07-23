/*
 * XREFs of PpmUpdateIdleDomains @ 0x1406061C0
 * Callers:
 *     <none>
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14021AA60 (PopExecuteOnTargetProcessors.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PpmUpdateIdleDomains(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v5; // ebx
  __int64 v6; // r10
  unsigned __int16 v7; // r8
  unsigned __int16 v8; // r11
  _KWAIT_STATUS_REGISTER *p_WaitRegister; // r9
  unsigned __int16 v10; // dx
  __int64 v11; // rcx

  PopAcquireRwLockExclusive((unsigned __int64 *)&PpmIdlePolicyLock, a2, a3, a4);
  if ( a1 )
  {
    v6 = a1 + 8;
    v7 = *(_WORD *)(a1 + 8);
    v8 = *(_WORD *)&stru_140FC11F0.WaitRegister.Flags;
    p_WaitRegister = &stru_140FC11F0.WaitRegister;
    v10 = 0;
    if ( v7 >= *(_WORD *)&stru_140FC11F0.WaitRegister.Flags )
    {
      v8 = *(_WORD *)(a1 + 8);
      p_WaitRegister = (_KWAIT_STATUS_REGISTER *)(a1 + 8);
      v7 = *(_WORD *)&stru_140FC11F0.WaitRegister.Flags;
    }
    while ( v10 < v7 )
    {
      v11 = *(_QWORD *)(v6 + 8LL * v10 + 8);
      if ( (v11 & *(_QWORD *)((char *)&stru_140FC11F0.116 + 8 * v10 + 4)) != v11 )
        goto LABEL_2;
      ++v10;
    }
    if ( p_WaitRegister != &stru_140FC11F0.WaitRegister )
    {
      while ( v10 < v8 )
      {
        if ( *(_QWORD *)(v6 + 8LL * v10 + 8) )
          goto LABEL_2;
        ++v10;
      }
    }
    v5 = PopExecuteOnTargetProcessors(a1 + 8, (__int64)PpmInstallNewIdleDomains, a1, a1 + 8);
    if ( v5 >= 0 )
      v5 = 0;
  }
  else
  {
LABEL_2:
    v5 = -1073741811;
  }
  PopReleaseRwLock(&PpmIdlePolicyLock);
  return (unsigned int)v5;
}
