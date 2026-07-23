/*
 * XREFs of KiThawSingleThread @ 0x140310CA4
 * Callers:
 *     KeForceResumeProcess @ 0x140203224 (KeForceResumeProcess.c)
 *     KeThawMultiProcess @ 0x140310998 (KeThawMultiProcess.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KiResumeThread @ 0x140310D78 (KiResumeThread.c)
 */

void __fastcall KiThawSingleThread(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  volatile signed __int32 *v4; // rbp
  char v7; // bl
  unsigned __int8 v9; // dl
  __int64 v10; // r8

  v4 = (volatile signed __int32 *)(a2 + 736);
  v7 = a3;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a2 + 736), a2, a3);
  v9 = *(_BYTE *)(a2 + 794);
  LOBYTE(v10) = v9 & 6;
  if ( v7 )
  {
    *(_BYTE *)(a2 + 794) = v9 & 0xF9;
    if ( (_BYTE)v10 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xEu);
      if ( !*(_BYTE *)(a2 + 644) )
      {
        LOBYTE(v10) = 1;
        goto LABEL_6;
      }
    }
  }
  else
  {
    *(_BYTE *)(a2 + 794) = v9 & (a4 != 0 ? -5 : -3);
    if ( (_BYTE)v10 )
    {
      if ( ((unsigned __int8)(a4 != 0 ? 2 : 4) & v9) == 0 )
      {
        _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xEu);
        if ( !*(_BYTE *)(a2 + 644) )
        {
          v10 = 0LL;
LABEL_6:
          KiResumeThread(a2, a1, v10);
        }
      }
    }
  }
  _InterlockedAnd(v4, 0xFFFFFF7F);
}
