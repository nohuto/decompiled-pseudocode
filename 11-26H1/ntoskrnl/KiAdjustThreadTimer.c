/*
 * XREFs of KiAdjustThreadTimer @ 0x1405F8DC8
 * Callers:
 *     KeAdjustTimerDelayProcess @ 0x1405E806C (KeAdjustTimerDelayProcess.c)
 * Callees:
 *     KiSuspendThread @ 0x14020917C (KiSuspendThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiResumeThread @ 0x140310D78 (KiResumeThread.c)
 */

char __fastcall KiAdjustThreadTimer(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  volatile signed __int32 *v4; // rdi
  char v9; // bp
  __int64 v10; // rax
  __int64 v11; // rcx
  int v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = (volatile signed __int32 *)(a1 + 736);
  v9 = 0;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a1 + 736), a2, a3);
  if ( *(char *)(a1 + 644) < 1 && (*(_DWORD *)(a1 + 120) & 0x4000) == 0 )
  {
    LOBYTE(v10) = KiSuspendThread(a1, a2, 0LL);
    if ( !(_BYTE)v10 )
      goto LABEL_21;
    v9 = 1;
  }
  v13 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v13);
    while ( *(_QWORD *)(a1 + 64) );
  }
  LODWORD(v10) = *(_DWORD *)(a1 + 116) & 0x60000;
  if ( (_DWORD)v10 == 393216 && (*(_BYTE *)(a1 + 257) & 1) == 0 )
  {
    v11 = *(_QWORD *)(a1 + 280);
    if ( a3 >= 0 )
    {
      if ( a3 > 0 )
      {
        LOBYTE(v10) = v11 - a3;
        if ( v11 - a3 < v11 )
          v11 -= a3;
      }
    }
    else
    {
      v10 = v11 - a3;
      v11 = 0LL;
      if ( v10 <= 0 )
        v11 = v10;
    }
    *(_QWORD *)(a1 + 280) = v11;
  }
  *(_DWORD *)(a1 + 952) = a4;
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v9 )
    LOBYTE(v10) = KiResumeThread(a1, a2, 0LL);
LABEL_21:
  _InterlockedAnd(v4, 0xFFFFFF7F);
  return v10;
}
