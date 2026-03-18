/*
 * XREFs of ?AddCompSurfInfoUpdate@CComposition@@QEAAXPEAVCCompositionSurfaceInfo@@@Z @ 0x1801604C0
 * Callers:
 *     ?SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801601D0 (-SetCompositionMode@CGlobalCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatri.c)
 *     ?NotifyOverlayFrame@CGlobalCompositionSurfaceInfo@@UEAAXAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z @ 0x180266620 (-NotifyOverlayFrame@CGlobalCompositionSurfaceInfo@@UEAAXAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENC.c)
 * Callees:
 *     ??$emplace_back@AEAPEAVCCompositionSurfaceInfo@@@?$vector@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVCCompositionSurfaceInfo@@@Z @ 0x18022953C (--$emplace_back@AEAPEAVCCompositionSurfaceInfo@@@-$vector@V-$com_ptr_t@VCCompositionSurfaceInfo@.c)
 */

void __fastcall CComposition::AddCompSurfInfoUpdate(CComposition *this, struct CCompositionSurfaceInfo *a2)
{
  struct CCompositionSurfaceInfo **i; // rax
  struct CCompositionSurfaceInfo *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  for ( i = (struct CCompositionSurfaceInfo **)*((_QWORD *)g_pComposition + 743);
        i != *((struct CCompositionSurfaceInfo ***)g_pComposition + 744);
        ++i )
  {
    if ( *i == a2 )
      return;
  }
  std::vector<wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>>::emplace_back<CCompositionSurfaceInfo * &>(
    (char *)g_pComposition + 5944,
    &v3);
}
