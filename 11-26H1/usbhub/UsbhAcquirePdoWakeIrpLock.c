/*
 * XREFs of UsbhAcquirePdoWakeIrpLock @ 0x140035760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UsbhAcquirePdoWakeIrpLock(PIO_CSQ Csq, PKIRQL Irql)
{
  _QWORD *ReservePointer; // rcx
  __int64 v5; // rcx
  signed __int32 v6; // eax
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rdx

  if ( (UsbhLogMask & 0x10) != 0 )
  {
    ReservePointer = Csq[-18].ReservePointer;
    if ( ReservePointer )
    {
      v5 = ReservePointer[8];
      if ( v5 )
      {
        v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 880), 0xFFFFFFFF);
        v7 = *(_DWORD *)(v5 + 884);
        v8 = *(_QWORD *)(v5 + 888);
        v9 = 32LL * ((v6 - 1) & v7);
        *(_DWORD *)(v9 + v8) = 726431607;
        *(_QWORD *)(v9 + v8 + 8) = 0LL;
        *(_QWORD *)(v9 + v8 + 16) = 0LL;
        *(_QWORD *)(v9 + v8 + 24) = 0LL;
      }
    }
  }
  *Irql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Csq[1].Type);
}
