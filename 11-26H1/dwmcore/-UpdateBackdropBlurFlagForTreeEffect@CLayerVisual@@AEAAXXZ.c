/*
 * XREFs of ?UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ @ 0x180173F30
 * Callers:
 *     ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x18014B0F4 (-ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z.c)
 *     ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x180173E7C (-ClearTreeEffect@CLayerVisual@@AEAAXXZ.c)
 *     ?OnChanged@CLayerVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180173EF0 (-OnChanged@CLayerVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?UpdateHasBackdropInputFlag@CVisual@@IEAAX_N@Z @ 0x180173FB4 (-UpdateHasBackdropInputFlag@CVisual@@IEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLayerVisual::UpdateBackdropBlurFlagForTreeEffect(CLayerVisual *this, __int64 a2)
{
  _QWORD *v2; // rax
  bool v3; // bl
  bool v5; // si
  char v6; // al

  v2 = (_QWORD *)*((_QWORD *)this + 85);
  v3 = 0;
  v5 = 0;
  LOBYTE(a2) = 0;
  if ( v2 && *v2 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v2 + 312LL))(*v2, a2);
    v5 = (v6 & 2) != 0;
    LOBYTE(a2) = (v6 & 8) != 0;
    v3 = v6 & 1;
  }
  *((_BYTE *)this + 102) &= ~1u;
  *((_BYTE *)this + 102) |= a2;
  CVisual::UpdateHasBackdropInputFlag(this, v3);
  CVisual::UpdateHasWindowBackdropInputFlag(this, v5);
}
