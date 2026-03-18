/*
 * XREFs of UsbhIdleIrp_CB_Pending @ 0x1400347F0
 * Callers:
 *     UsbhIdleIrp_Event @ 0x1400152D4 (UsbhIdleIrp_Event.c)
 * Callees:
 *     UsbhIdleIrp_ReleaseIrp @ 0x140013D04 (UsbhIdleIrp_ReleaseIrp.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhSetIdleIrpState @ 0x140035280 (UsbhSetIdleIrpState.c)
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhIdleIrp_CB_Pending(__int64 a1, ULONG_PTR a2, IRP *a3, int a4, int a5, KIRQL NewIrql)
{
  __int64 v10; // rcx
  signed __int32 v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // ecx
  _DWORD *v16; // r14
  KSPIN_LOCK *v17; // rax
  __int64 v18; // rcx
  unsigned int v20; // r9d

  if ( (UsbhLogMask & 0x10000) != 0 && a1 )
  {
    v10 = *(_QWORD *)(a1 + 64);
    if ( v10 )
    {
      v11 = _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 880), 0xFFFFFFFF);
      v12 = *(_DWORD *)(v10 + 884);
      v13 = *(_QWORD *)(v10 + 888);
      v14 = 32LL * ((v11 - 1) & v12);
      *(_DWORD *)(v14 + v13) = 1666675571;
      *(_QWORD *)(v14 + v13 + 8) = 0LL;
      *(_QWORD *)(v14 + v13 + 16) = a2;
      *(_QWORD *)(v14 + v13 + 24) = a3;
    }
  }
  v16 = PdoExt(a2);
  switch ( a4 )
  {
    case 1:
      if ( !a3 )
LABEL_8:
        UsbhTrapFatal_Dbg(a1, a1);
      UsbhSetIdleIrpState(v15, a2, 1, 2, NewIrql);
      v20 = -2147483631;
      break;
    case 4:
      if ( !a3 )
        goto LABEL_8;
      if ( !a3->Cancel )
      {
        v17 = (KSPIN_LOCK *)PdoExt(a2);
        v18 = 4 * (*((unsigned int *)v17 + 447) + 56LL);
        LODWORD(v17[v18]) = 4;
        *((_DWORD *)v17 + 384) = 4;
        LODWORD(v17[v18 + 1]) = 4;
        *((_DWORD *)v17 + 447) = ((unsigned __int8)*((_DWORD *)v17 + 447) + 1) & 7;
        KeReleaseSpinLock(v17 + 256, NewIrql);
        IoCsqInsertIrp((PIO_CSQ)(v16 + 366), a3, 0LL);
        return 259LL;
      }
      UsbhSetIdleIrpState(v15, a2, 4, 0, NewIrql);
      v20 = -1073741536;
      break;
    case 5:
      UsbhSetIdleIrpState(v15, a2, 5, 3, NewIrql);
      return 259LL;
    default:
      UsbhSetIdleIrpState(v15, a2, a4, a5, NewIrql);
      v20 = -1073741823;
      break;
  }
  return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v20);
}
