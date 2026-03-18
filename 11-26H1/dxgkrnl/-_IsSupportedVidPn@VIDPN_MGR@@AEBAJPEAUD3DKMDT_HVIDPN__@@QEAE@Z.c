/*
 * XREFs of ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1402A8AAC
 * Callers:
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1402A890C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z @ 0x1402A8C6C (-DdiIsSupportedVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ISSUPPORTEDVIDPN@@@Z.c)
 *     ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1403C6828 (-DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_IsSupportedVidPn(ADAPTER_DISPLAY **this, D3DKMDT_HVIDPN a2, unsigned __int8 *const a3)
{
  D3DKMDT_HVIDPN v6; // rsi
  DXGADAPTER *ContainingAdapter; // r14
  bool v8; // zf
  int IsSupportedVidPn; // eax
  unsigned int v10; // esi
  __int64 result; // rax
  _DXGKARG_ISSUPPORTEDVIDPN v12; // [rsp+20h] [rbp-28h] BYREF

  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2234;
  }
  *a3 = 0;
  if ( a2 && *((_DWORD *)a2 + 16) == 1833172997 )
    v6 = a2;
  else
    v6 = 0LL;
  if ( !*((_BYTE *)v6 + 296) && !DmmIsAllSourcesPixelFormatValid((struct DMMVIDPNTOPOLOGY *)(v6 + 24)) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2255;
    *a3 = 0;
    return 0LL;
  }
  if ( ((unsigned __int16)((2 << *((_BYTE *)v6 + 172)) - 1) & *((_WORD *)v6 + 87)) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2263;
  }
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(ContainingAdapter) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2273;
  }
  v8 = this[1] == 0LL;
  *(_QWORD *)&v12.IsVidPnSupported = 0LL;
  v12.hDesiredVidPn = a2;
  if ( v8 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  IsSupportedVidPn = ADAPTER_DISPLAY::DdiIsSupportedVidPn(this[1], &v12);
  v10 = IsSupportedVidPn;
  if ( IsSupportedVidPn >= 0 )
  {
    *a3 = v12.IsVidPnSupported;
    return 0LL;
  }
  WdLogSingleEntry3(2LL, a2, ContainingAdapter, IsSupportedVidPn);
  result = v10;
  WdLogGlobalForLineNumber = 2290;
  return result;
}
