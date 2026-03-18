/*
 * XREFs of ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x18014B0F4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x180173E7C (-ClearTreeEffect@CLayerVisual@@AEAAXXZ.c)
 *     ?UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ @ 0x180173F30 (-UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLayerVisual::ProcessSetEffect(
        CLayerVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LAYERVISUAL_SETEFFECT *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  struct CResource *Resource; // rdi
  struct CResource **v8; // rax
  struct CResource **v10; // rsi
  struct CResource *v11; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v5 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource(a2, v5, 47LL);
    if ( Resource )
    {
      v8 = (struct CResource **)*((_QWORD *)this + 85);
      if ( !v8 )
      {
        v8 = (struct CResource **)DefaultHeap::AllocClear(0x10uLL);
        if ( !v8 )
          ModuleFailFastForHRESULT(-2147024882, retaddr);
        v8[1] = 0LL;
        *v8 = 0LL;
        *((_QWORD *)this + 85) = v8;
      }
      if ( *v8 != Resource )
      {
        CResource::UnRegisterNotifierInternal(this, *v8);
        v10 = (struct CResource **)*((_QWORD *)this + 85);
        if ( *v10 != Resource )
        {
          (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)Resource + 8LL))(Resource);
          v11 = *v10;
          *v10 = Resource;
          if ( v11 )
            (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v11 + 16LL))(v11);
        }
        CResource::RegisterNotifier(this, Resource);
        CLayerVisual::UpdateBackdropBlurFlagForTreeEffect(this);
        CVisual::PropagateFlags((__int64)this, 5u);
      }
      return 0;
    }
    else
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x31u, 0LL);
    }
  }
  else if ( *((_QWORD *)this + 85) )
  {
    CLayerVisual::ClearTreeEffect(this);
    CVisual::PropagateFlags((__int64)this, 5u);
  }
  return v4;
}
