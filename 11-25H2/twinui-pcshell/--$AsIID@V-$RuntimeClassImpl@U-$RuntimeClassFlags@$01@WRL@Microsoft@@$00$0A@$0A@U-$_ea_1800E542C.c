/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIApplicationViewVisibilityDebouncedNotificationServicePrivate@@UIApplicationViewVisibilityDebouncedNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewChangeListener@@UIApplicationViewCollection@@UIApplicationViewCollectionTestHook@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIApplicationViewVisibilityDebouncedNotificationServicePrivate@@UIApplicationViewVisibilityDebouncedNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewChangeListener@@UIApplicationViewCollection@@UIApplicationViewCollectionTestHook@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800E542C
 * Callers:
 *     ?ApplicationViewManagerVisibilityDebouncer_CreateInstance@@YAJPEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180132468 (-ApplicationViewManagerVisibilityDebouncer_CreateInstance@@YAJPEAUIApplicationViewCollection@@AE.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIApplicationViewVisibilityDebouncedNotificationServicePrivate@@UIApplicationViewVisibilityDebouncedNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewChangeListener@@UIApplicationViewCollection@@UIApplicationViewCollectionTestHook@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18022EF20 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18022EF20.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E4E00 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IApplicationViewVisibilityDebouncedNotificationServicePrivate,IApplicationViewVisibilityDebouncedNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewChangeListener,IApplicationViewCollection,IApplicationViewCollectionTestHook,Microsoft::WRL::FtmBase>>(
        char *a1,
        __int64 a2,
        void **a3)
{
  int CanCastTo; // ebx
  char *v5; // rcx
  char *v6; // rcx

  *a3 = 0LL;
  if ( !*(_DWORD *)a2
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
    return 0LL;
  }
  if ( *(_DWORD *)a2 == 2071323060
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_7b75e1b4_5965_48b5_9daa_59f76b0d9b87.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_7b75e1b4_5965_48b5_9daa_59f76b0d9b87.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_7b75e1b4_5965_48b5_9daa_59f76b0d9b87.Data4[4]
    || *(_DWORD *)a2 == -1351685073
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3.Data4[4] )
  {
    *a3 = a1;
  }
  else
  {
    v5 = a1 + 8;
    if ( *(_DWORD *)a2 != 1920966295
      || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data2
      || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4
      || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4[4] )
    {
      v6 = v5 + 8;
      if ( *(_DWORD *)a2 == 406963927
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5.Data4[4]
        || (v6 += 8, *(_DWORD *)a2 == 184376270)
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_0afd5bce_d688_4973_ad54_ad0ce775f26b.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_0afd5bce_d688_4973_ad54_ad0ce775f26b.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_0afd5bce_d688_4973_ad54_ad0ce775f26b.Data4[4] )
      {
        *a3 = v6;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                      (Microsoft::WRL::FtmBase *)(v6 + 8),
                      (const struct _GUID *)a2,
                      a3);
        if ( CanCastTo == -2147467262 )
          CanCastTo = -2147467262;
      }
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
      goto LABEL_12;
    }
    *a3 = v5;
  }
  CanCastTo = 0;
LABEL_12:
  (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)CanCastTo;
}
