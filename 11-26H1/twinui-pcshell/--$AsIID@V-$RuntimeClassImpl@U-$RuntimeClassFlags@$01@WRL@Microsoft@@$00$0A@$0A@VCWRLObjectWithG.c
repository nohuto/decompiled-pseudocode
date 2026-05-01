/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithGITSite@@VFtmBase@23@UITabletModeCoverWindow@@UITabletModeChrome@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithGITSite@@VFtmBase@23@UITabletModeCoverWindow@@UITabletModeChrome@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800D2E0C
 * Callers:
 *     ?CoverWindow_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1802AD358 (-CoverWindow_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithGITSite@@VFtmBase@23@UITabletModeCoverWindow@@UITabletModeChrome@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802C4FB0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802C4FB0.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D1CB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabletModeChrome@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18052FCEC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabletModeChrome@@@De.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithGITSite,Microsoft::WRL::FtmBase,ITabletModeCoverWindow,ITabletModeChrome>>(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  _DWORD *v3; // rdx
  __int64 v4; // rcx
  int CanCastTo; // ebx
  char *v6; // rcx

  *a3 = 0LL;
  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 == -62389853
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
    {
      *a3 = (void *)a1;
      CanCastTo = 0;
LABEL_12:
      (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
      return (unsigned int)CanCastTo;
    }
LABEL_5:
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 40), (const struct _GUID *)a2, a3);
    if ( CanCastTo == -2147467262 )
    {
      v6 = (char *)(v4 + 32);
      if ( *v3 == 555930471
        && v3[1] == *(_DWORD *)&GUID_2122d367_9c2a_4d30_ba5e_105a9e2c3965.Data2
        && v3[2] == *(_DWORD *)GUID_2122d367_9c2a_4d30_ba5e_105a9e2c3965.Data4
        && v3[3] == *(_DWORD *)&GUID_2122d367_9c2a_4d30_ba5e_105a9e2c3965.Data4[4] )
      {
        *a3 = v6;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModeChrome>::CanCastTo(v6 + 8);
      }
    }
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
    goto LABEL_12;
  }
  if ( *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_5;
  }
  *a3 = (void *)a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
