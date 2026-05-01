/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180156AA0
 * Callers:
 *     ?AppViewDataSourceAdapter_CreateInstance@@YAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@4PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x180156940 (-AppViewDataSourceAdapter_CreateInstance@@YAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIAppli.c)
 *     ??$com_weak_query_failfast@PEAVAppViewDataSourceAdapter@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@$$QEAPEAVAppViewDataSourceAdapter@@@Z @ 0x18029999C (--$com_weak_query_failfast@PEAVAppViewDataSourceAdapter@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180057AC0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D1CB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,AppViewDataSourceAdapterBase,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>>(
        __int64 a1,
        _DWORD *a2,
        void **a3)
{
  _DWORD *v3; // r9
  _DWORD *v4; // rcx
  __int64 v5; // r10
  const struct _GUID *v6; // r9
  int CanCastTo; // ebx

  v3 = a2;
  *a3 = 0LL;
  if ( !*a2 )
  {
    if ( a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
      || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
    {
      goto LABEL_3;
    }
LABEL_13:
    *a3 = (void *)a1;
    (*(void (__fastcall **)(__int64, _DWORD *, void **, _DWORD *))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, v3);
    return 0LL;
  }
  if ( *a2 != -1350114592 )
    goto LABEL_3;
  a2 = (_DWORD *)*(unsigned int *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
  if ( v3[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2 )
    goto LABEL_3;
  if ( *((_QWORD *)v3 + 1) == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    goto LABEL_13;
  if ( v3[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && *((_QWORD *)v3 + 1) == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
  {
    goto LABEL_18;
  }
LABEL_3:
  a1 += 8LL;
  if ( *v3 == 1920966295
    && v3[1] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data2
    && v3[2] == *(_DWORD *)GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4
    && v3[3] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4[4] )
  {
LABEL_18:
    *a3 = (void *)a1;
    goto LABEL_19;
  }
  if ( *v3 != 1260763374
    || v3[1] != *(_DWORD *)&GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data2
    || v3[2] != *(_DWORD *)GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data4
    || v3[3] != *(_DWORD *)&GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data4[4] )
  {
    if ( InlineIsEqualGUID(v3, &GUID_00000038_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v4, &GUID_12faaf23_7a01_4f04_95ca_c33c158afdf1) )
    {
      *a3 = (void *)v5;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v5 + 8), v6, a3);
    }
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
    goto LABEL_20;
  }
  *a3 = (void *)(a1 + 8);
LABEL_19:
  CanCastTo = 0;
LABEL_20:
  (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)CanCastTo;
}
