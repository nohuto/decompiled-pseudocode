/*
 * XREFs of ?SetMask@ShadowIntermediates@CDropShadow@@QEAAXPEAV2@PEAVCBrush@@@Z @ 0x1800172E8
 * Callers:
 *     ??0CDropShadow@@QEAA@PEAVCComposition@@@Z @ 0x180016504 (--0CDropShadow@@QEAA@PEAVCComposition@@@Z.c)
 *     ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180018D34 (-UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETMASK@@@Z @ 0x18021ADFC (-ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETMASK@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 */

void __fastcall CDropShadow::ShadowIntermediates::SetMask(
        CDropShadow::ShadowIntermediates *this,
        struct CDropShadow *a2,
        struct CBrush *a3)
{
  struct CResource *v5; // rdx
  CResource *v7; // rcx

  v5 = (struct CResource *)*((_QWORD *)this + 6);
  if ( a3 != v5 )
  {
    v7 = (CResource *)*((_QWORD *)this + 5);
    if ( v7 )
    {
      CResource::UnRegisterNotifierInternal(v7, v5);
      *((_QWORD *)this + 6) = 0LL;
    }
    CResource::RegisterNotifier(a2, a3);
    *((_QWORD *)this + 6) = a3;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 7);
  }
  *((_QWORD *)this + 5) = a2;
}
