/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800E5CA8
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueSetBase@@UIOleWindow@@UIShouldSwitchToDesktop@@UIAppActivationUIInfo@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueSetBase@@UIOleWindow@@UIShouldSwitchToDesktop@@UIAppActivationUIInfo@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800E5B90 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValue.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E4E00 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectWithSite,IServiceProvider,IUpdateViewValueSet,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  __int64 result; // rax

  if ( *(_DWORD *)a2 == -62389853
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == 1834041537)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == -516420832)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_e1380b20_f578_40aa_bb7d_a22bd11b0836.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_e1380b20_f578_40aa_bb7d_a22bd11b0836.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_e1380b20_f578_40aa_bb7d_a22bd11b0836.Data4[4] )
  {
    *a3 = (void *)a1;
    return 0LL;
  }
  else
  {
    result = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 8), (const struct _GUID *)a2, a3);
    if ( (_DWORD)result == -2147467262 )
      return 2147500034LL;
  }
  return result;
}
