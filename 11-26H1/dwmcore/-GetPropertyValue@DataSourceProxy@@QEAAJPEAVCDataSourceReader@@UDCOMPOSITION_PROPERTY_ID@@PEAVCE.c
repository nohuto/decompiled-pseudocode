/*
 * XREFs of ?GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@UDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180242DCC
 * Callers:
 *     ?GetPropertyValue@DataProviderManager@@QEAAJPEAVCDataSourceReader@@_K1UDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180207808 (-GetPropertyValue@DataProviderManager@@QEAAJPEAVCDataSourceReader@@_K1UDCOMPOSITION_PROPERTY_ID@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetEffectiveCompositionFrameId@CComposition@@QEBA_KXZ @ 0x18013E700 (-GetEffectiveCompositionFrameId@CComposition@@QEBA_KXZ.c)
 *     ?DoesResourceHaveAccess@DataSourceProxy@@QEAA_NPEAVCResource@@@Z @ 0x1801625C8 (-DoesResourceHaveAccess@DataSourceProxy@@QEAA_NPEAVCResource@@@Z.c)
 *     ?GetPropertyValue@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1801675CC (-GetPropertyValue@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DataSourceProxy::GetPropertyValue(__int64 a1, struct CResource *a2, int a3, __int64 a4)
{
  char v8; // al
  CComposition *v9; // rcx
  unsigned __int64 EffectiveCompositionFrameId; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( DataSourceProxy::DoesResourceHaveAccess((DataSourceProxy *)a1, a2) )
  {
    v8 = *(_BYTE *)(a1 + 224);
    if ( (v8 & 1) == 0 )
    {
      v9 = g_pComposition;
      *(_BYTE *)(a1 + 224) = v8 | 1;
      EffectiveCompositionFrameId = CComposition::GetEffectiveCompositionFrameId(v9);
      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)(a1 + 8) + 24LL))(
        a1 + 8,
        EffectiveCompositionFrameId);
    }
    return DataSourcePropertySet::GetPropertyValue(a1 + 64, a3, a4);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x180,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\datasourceproxy.cpp",
      (const char *)0x80070005LL);
    return 2147942405LL;
  }
}
