/*
 * XREFs of ?VirtualRefreshRateSupport@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IPEBU_D3DDDI_RATIONAL@@I@Z @ 0x1403BE950
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x14004B4A4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x1402E12D0 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::VirtualRefreshRateSupport(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        __int64 a3,
        const struct _D3DDDI_RATIONAL *a4)
{
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // r8
  const struct _D3DDDI_RATIONAL *v7; // r11
  __int64 v8; // rbx
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rax

  if ( !a3 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2006;
    return 3221225485LL;
  }
  if ( !(_DWORD)a4 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2014;
    return 3221225485LL;
  }
  v4 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
  if ( v4 )
  {
    v8 = v4 + 48;
    v9 = 0LL;
    v10 = *(_QWORD *)(v4 + 48);
    if ( v10 != v4 + 48 )
      v9 = v10 - 8;
    while ( 1 )
    {
      if ( !v9 )
      {
        WdLogSingleEntry2(2LL, v5, v6);
        result = 3223192337LL;
        WdLogGlobalForLineNumber = 2040;
        return result;
      }
      if ( *(_DWORD *)(v9 + 24) == v5 )
        break;
      v12 = *(_QWORD *)(v9 + 8);
      v9 = v12 - 8;
      if ( v12 == v8 )
        v9 = 0LL;
    }
    return !DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)v9, v7) ? 0xC01E0306 : 0;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3223192329LL;
    WdLogGlobalForLineNumber = 2027;
  }
  return result;
}
