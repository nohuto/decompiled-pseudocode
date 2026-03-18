/*
 * XREFs of ?_EnumVidPnCofuncModality@VIDPN_MGR@@AEBAJQEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@QEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1402A7514
 * Callers:
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1402A890C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?_VidPnChangeToEnumPivot@VIDPN_MGR@@CA?AW4_D3DKMDT_ENUMCOFUNCMODALITY_PIVOT_TYPE@@W4VIDPN_CHANGE@1@@Z @ 0x1400505C4 (-_VidPnChangeToEnumPivot@VIDPN_MGR@@CA-AW4_D3DKMDT_ENUMCOFUNCMODALITY_PIVOT_TYPE@@W4VIDPN_CHANGE.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1402A6EE8 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1402A76C8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1402A7894 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 */

__int64 __fastcall VIDPN_MGR::_EnumVidPnCofuncModality(
        ADAPTER_DISPLAY **a1,
        D3DKMDT_HVIDPN a2,
        __int64 a3,
        DXGK_ENUM_PIVOT *a4)
{
  int v5; // r15d
  D3DKMDT_HVIDPN v8; // rax
  D3DKMDT_HVIDPN v9; // r14
  D3DKMDT_HVIDPN v10; // rbp
  DXGADAPTER *ContainingAdapter; // rax
  int v12; // eax
  unsigned int v13; // ebx
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v15; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v16[24]; // [rsp+58h] [rbp-30h] BYREF

  v5 = a3;
  if ( a2 && *((_DWORD *)a2 + 16) == 1833172997 )
    v8 = a2;
  else
    v8 = 0LL;
  v9 = v8 + 24;
  v10 = v8 + 38;
  if ( ((unsigned __int16)((2 << *((_BYTE *)v8 + 172)) - 1) & *((_WORD *)v8 + 87)) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2349;
  }
  LOBYTE(a3) = 3;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v16, (unsigned __int64)v10 & -(__int64)(v9 != 0LL), a3);
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)a1);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(ContainingAdapter) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2366;
  }
  *(_QWORD *)&v15.EnumPivot.VidPnTargetId = 0LL;
  v15.hConstrainingVidPn = a2;
  v15.EnumPivotType = VIDPN_MGR::_VidPnChangeToEnumPivot(v5);
  if ( a4 )
  {
    v15.EnumPivot = *a4;
  }
  else
  {
    v15.EnumPivot.VidPnSourceId = -1;
    v15.EnumPivot.VidPnTargetId = -1;
  }
  if ( !a1[1] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v12 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(a1[1], &v15);
  v13 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry4(2LL, a2, v15.EnumPivot.VidPnSourceId, v15.EnumPivot.VidPnTargetId, v12);
    WdLogGlobalForLineNumber = 2396;
  }
  else
  {
    v13 = 0;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v16);
  return v13;
}
