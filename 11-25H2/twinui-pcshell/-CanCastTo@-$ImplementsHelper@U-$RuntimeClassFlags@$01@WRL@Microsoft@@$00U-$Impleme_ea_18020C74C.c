/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@UIRotationManagerSync@@UIShellRotationManager@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18020C74C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIRotationManagerSync@@UIShellRotationManager@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E3DE0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@2.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18004F930 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IRotationManagerSync,IShellRotationManager>::CanCastTo(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ecx
  BOOL IsEqualGUID; // eax
  _QWORD *v5; // r8
  __int64 v6; // r10

  if ( *(_DWORD *)a2 == -62389853
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
  {
    *a3 = a1;
    return 0;
  }
  if ( *(_DWORD *)a2 == -155475828
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee.Data4[4] )
  {
    *a3 = a1 + 40;
    return 0;
  }
  IsEqualGUID = InlineIsEqualGUID((const struct _GUID *)a2, &GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425);
  v3 = 0;
  if ( IsEqualGUID )
    *v5 = v6 + 8;
  else
    return (unsigned int)-2147467262;
  return v3;
}
