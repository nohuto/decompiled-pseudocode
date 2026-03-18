/*
 * XREFs of UsbhDecrementHubIsrWorkerReference @ 0x1400304E4
 * Callers:
 *     UsbhBusPnpStop_Action @ 0x140011CAC (UsbhBusPnpStop_Action.c)
 *     UsbhHubIsrWorker @ 0x140030360 (UsbhHubIsrWorker.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

int __fastcall UsbhDecrementHubIsrWorkerReference(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // r9
  signed __int32 v4; // r8d
  __int64 v5; // r10
  __int64 v6; // rcx
  signed __int32 v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rdx

  v2 = FdoExt(a1);
  v3 = v2;
  v4 = _InterlockedDecrement(v2 + 685);
  v5 = (int)v2[685];
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 880), 0xFFFFFFFF);
        v8 = *(_DWORD *)(v6 + 884);
        v9 = *(_QWORD *)(v6 + 888);
        v10 = (v7 - 1) & v8;
        LODWORD(v2) = 760367432;
        v10 *= 32LL;
        *(_DWORD *)(v10 + v9) = 760367432;
        *(_QWORD *)(v10 + v9 + 8) = 0LL;
        *(_QWORD *)(v10 + v9 + 16) = a1;
        *(_QWORD *)(v10 + v9 + 24) = v5;
      }
    }
  }
  if ( !v4 )
    LODWORD(v2) = KeSetEvent((PRKEVENT)(v3 + 686), 0, 0);
  return (int)v2;
}
