/*
 * XREFs of UsbhCompletePdoIdleIrp @ 0x140010A24
 * Callers:
 *     UsbhPdoRemoveCleanup @ 0x140010CF0 (UsbhPdoRemoveCleanup.c)
 *     UsbhPdoSetDx @ 0x140012618 (UsbhPdoSetDx.c)
 *     UsbhPdoSetD0 @ 0x140016CD0 (UsbhPdoSetD0.c)
 * Callees:
 *     UsbhIdleIrp_Event @ 0x1400152D4 (UsbhIdleIrp_Event.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhSetIdleIrpState @ 0x140035280 (UsbhSetIdleIrpState.c)
 */

LONG __fastcall UsbhCompletePdoIdleIrp(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  __int64 v6; // r14
  __int64 v7; // rbx
  KIRQL v8; // al
  KIRQL v9; // r15
  int v10; // r12d
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  PIRP v14; // rbx
  LONG result; // eax
  __int64 v16; // rcx
  signed __int32 v17; // eax
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rdx

  v4 = a3;
  v6 = PdoExt(a2);
  KeWaitForSingleObject((PVOID)(v6 + 2056), Executive, 0, 0, 0LL);
  v7 = PdoExt(a2);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 2048));
  v9 = v8;
  v10 = *(_DWORD *)(v7 + 1536);
  v11 = 32 * (*(unsigned int *)(v7 + 1788) + 56LL);
  *(_DWORD *)(v11 + v7 + 4) = v10;
  *(_DWORD *)(v11 + v7) = 0;
  if ( v10 == 2 )
  {
    *(_DWORD *)(v6 + 1440) = v4;
    UsbhSetIdleIrpState(v11, a2, 9, 3, v8);
  }
  else
  {
    v12 = PdoExt(a2);
    v13 = 32 * (*(unsigned int *)(v12 + 1788) + 56LL);
    *(_DWORD *)(v13 + v12) = 9;
    *(_DWORD *)(v12 + 1536) = v10;
    *(_DWORD *)(v13 + v12 + 8) = v10;
    *(_DWORD *)(v12 + 1788) = ((unsigned __int8)*(_DWORD *)(v12 + 1788) + 1) & 7;
    KeReleaseSpinLock((PKSPIN_LOCK)(v12 + 2048), v9);
  }
  v14 = IoCsqRemoveNextIrp((PIO_CSQ)(v6 + 1464), 0LL);
  result = KeSetEvent((PRKEVENT)(v6 + 2056), 0, 0);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( v16 )
      {
        v17 = _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 880), 0xFFFFFFFF);
        v18 = *(_DWORD *)(v16 + 884);
        v19 = *(_QWORD *)(v16 + 888);
        v20 = (v17 - 1) & v18;
        result = 1145663587;
        v20 *= 32LL;
        *(_DWORD *)(v20 + v19) = 1145663587;
        *(_QWORD *)(v20 + v19 + 8) = 0LL;
        *(_QWORD *)(v20 + v19 + 16) = v4;
        *(_QWORD *)(v20 + v19 + 24) = v14;
      }
    }
  }
  if ( v14 )
    return UsbhIdleIrp_Event(a1, a2, v14, 5LL, v4);
  return result;
}
