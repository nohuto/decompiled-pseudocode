/*
 * XREFs of ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x180173E7C
 * Callers:
 *     ??1CLayerVisual@@UEAA@XZ @ 0x18009AC0C (--1CLayerVisual@@UEAA@XZ.c)
 *     ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x18014B0F4 (-ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLayerVisual::ClearTreeEffect(struct CResource ***this)
{
  struct CResource **v2; // rdi
  struct CResource *v3; // rcx

  CResource::UnRegisterNotifierInternal((CResource *)this, *this[85]);
  v2 = this[85];
  if ( v2 )
  {
    v3 = *v2;
    if ( *v2 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v3 + 16LL))(v3);
    }
    operator delete(v2);
  }
  this[85] = 0LL;
  CLayerVisual::UpdateBackdropBlurFlagForTreeEffect((CLayerVisual *)this);
}
