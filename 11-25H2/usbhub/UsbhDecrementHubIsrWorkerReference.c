/*
 * XREFs of UsbhDecrementHubIsrWorkerReference @ 0x1400015BC
 * Callers:
 *     UsbhHubIsrWorker @ 0x140001440 (UsbhHubIsrWorker.c)
 *     UsbhBusPnpStop_Action @ 0x140001FCC (UsbhBusPnpStop_Action.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 */

int __fastcall UsbhDecrementHubIsrWorkerReference(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r9
  signed __int32 v4; // r8d
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = FdoExt(a1);
  v3 = v2;
  v4 = _InterlockedDecrement((volatile signed __int32 *)(v2 + 2740));
  v5 = *(int *)(v2 + 2740);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        LODWORD(v2) = 760367432;
        v7 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_DWORD *)v7 = 760367432;
        *(_QWORD *)(v7 + 16) = a1;
        *(_QWORD *)(v7 + 24) = v5;
      }
    }
  }
  if ( !v4 )
    LODWORD(v2) = KeSetEvent((PRKEVENT)(v3 + 2744), 0, 0);
  return v2;
}
