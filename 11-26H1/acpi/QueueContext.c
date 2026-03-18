/*
 * XREFs of QueueContext @ 0x14000F2B4
 * Callers:
 *     ParseAcquire @ 0x14000D400 (ParseAcquire.c)
 *     WriteCookAccess @ 0x14000F370 (WriteCookAccess.c)
 *     WaitASLEvent @ 0x14004D878 (WaitASLEvent.c)
 * Callees:
 *     <none>
 */

void __fastcall QueueContext(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v4; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // rcx

  v4 = a2;
  byte_14008EB70 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v6 = (_QWORD *)(a1 + 32);
  v7 = *(_QWORD **)(a3 + 8);
  if ( *v7 != a3 )
    __fastfail(3u);
  *v6 = a3;
  *(_QWORD *)(a1 + 40) = v7;
  *v7 = v6;
  *(_QWORD *)(a3 + 8) = v6;
  if ( (_WORD)v4 != 0xFFFF )
  {
    *(_DWORD *)(a1 + 64) |= 1u;
    KeSetTimer((PKTIMER)(a1 + 192), (LARGE_INTEGER)(-10000 * v4), (PKDPC)(a1 + 256));
  }
  KeReleaseSpinLock(&SpinLock, byte_14008EB70);
}
