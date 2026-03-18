/*
 * XREFs of UsbhIdleIrp_CB_Canceled @ 0x14005E40C
 * Callers:
 *     UsbhIdleIrp_Event @ 0x1400152D4 (UsbhIdleIrp_Event.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x140013D04 (UsbhIdleIrp_ReleaseIrp.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhSetIdleIrpState @ 0x140035280 (UsbhSetIdleIrpState.c)
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhIdleIrp_CB_Canceled(ULONG_PTR a1, ULONG_PTR a2, IRP *a3, int a4, int a5, KIRQL NewIrql)
{
  _DWORD *v10; // r14
  __int64 v11; // rcx
  unsigned int v12; // r9d

  Log(a1, 0x10000, 1936938851, a2, (__int64)a3);
  v10 = PdoExt(a2);
  v11 = (unsigned int)(a4 - 1);
  if ( a4 == 1 )
  {
    if ( a3 )
    {
      UsbhSetIdleIrpState(v11, a2, 1, a5, NewIrql);
      v12 = -2147483631;
      return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v12);
    }
    goto LABEL_7;
  }
  if ( a4 == 4 )
  {
    if ( a3 )
    {
      UsbhSetIdleIrpState(v11, a2, 4, 0, NewIrql);
      v12 = v10[360];
      return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v12);
    }
LABEL_7:
    UsbhTrapFatal_Dbg(a1, a1);
  }
  UsbhSetIdleIrpState(v11, a2, a4, a5, NewIrql);
  v12 = -1073741823;
  return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v12);
}
