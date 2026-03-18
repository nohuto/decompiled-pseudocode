/*
 * XREFs of ?attach@?$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIDisplayTarget@Core@Display@Devices@Windows@@@Z @ 0x1801B56D8
 * Callers:
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800E4690 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x180103060 (-Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GRADIENT.c)
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18012B7D8 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ @ 0x18014921C (-EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?Initialize@CRedirectedVisualContent@@MEAAJXZ @ 0x1801B5AD0 (-Initialize@CRedirectedVisualContent@@MEAAJXZ.c)
 *     ??1?$out_param_t@V?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1801B60D4 (--1-$out_param_t@V-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_poli.c)
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x18020D8C8 (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z.c)
 *     ??$move@V?$move_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x18022961C (--$move@V-$move_iterator@PEAV-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@V-$c.c)
 *     ??4?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18028E160 (--4-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x180291690 (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 *     ??4DDisplayTargetResources@@QEAAAEAU0@$$QEAU0@@Z @ 0x18029CFF8 (--4DDisplayTargetResources@@QEAAAEAU0@$$QEAU0@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayTarget,wil::err_returncode_policy>::attach(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
