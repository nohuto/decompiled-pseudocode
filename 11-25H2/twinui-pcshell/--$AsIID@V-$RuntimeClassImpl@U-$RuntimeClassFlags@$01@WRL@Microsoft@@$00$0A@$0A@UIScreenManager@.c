/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIScreenManager@@UIAppViewCloseOverrideBehavior@@UITabletModePositionerManagerNotification@@UIApplicationViewChangeListener@@UIScreenManagerTestHook@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIScreenManager@@UIAppViewCloseOverrideBehavior@@UITabletModePositionerManagerNotification@@UIApplicationViewChangeListener@@UIScreenManagerTestHook@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801B6B60
 * Callers:
 *     ?ScreenManager_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A8E24 (-ScreenManager_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IScreenManager,IAppViewCloseOverrideBehavior,ITabletModePositionerManagerNotification,IApplicationViewChangeListener,IScreenManagerTestHook>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int v4; // ebx
  __int64 v5; // rcx

  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return 0LL;
  }
  if ( *a2 == -784166492
    && a2[1] == *(_DWORD *)&GUID_d14291a4_8dc6_4788_b850_8b00ca5c80e0.Data2
    && a2[2] == *(_DWORD *)GUID_d14291a4_8dc6_4788_b850_8b00ca5c80e0.Data4
    && a2[3] == *(_DWORD *)&GUID_d14291a4_8dc6_4788_b850_8b00ca5c80e0.Data4[4]
    || (a1 += 8LL, *a2 == -2053322278)
    && a2[1] == *(_DWORD *)&GUID_859cc9da_cb27_4a90_b8fa_749bb1944473.Data2
    && a2[2] == *(_DWORD *)GUID_859cc9da_cb27_4a90_b8fa_749bb1944473.Data4
    && a2[3] == *(_DWORD *)&GUID_859cc9da_cb27_4a90_b8fa_749bb1944473.Data4[4] )
  {
    *a3 = a1;
    v4 = 0;
  }
  else
  {
    v5 = a1 + 8;
    if ( *a2 == -1334129192
      && a2[1] == *(_DWORD *)&GUID_b07acdd8_280b_4fe2_b920_95f945832a24.Data2
      && a2[2] == *(_DWORD *)GUID_b07acdd8_280b_4fe2_b920_95f945832a24.Data4
      && a2[3] == *(_DWORD *)&GUID_b07acdd8_280b_4fe2_b920_95f945832a24.Data4[4]
      || (v5 += 8LL, *a2 == 1920966295)
      && a2[1] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data2
      && a2[2] == *(_DWORD *)GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4
      && a2[3] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4[4]
      || (v5 += 8LL, *a2 == 2022762739)
      && a2[1] == *(_DWORD *)&GUID_7890e8f3_e5c1_41d3_9e28_fe5846e0dc9b.Data2
      && a2[2] == *(_DWORD *)GUID_7890e8f3_e5c1_41d3_9e28_fe5846e0dc9b.Data4
      && a2[3] == *(_DWORD *)&GUID_7890e8f3_e5c1_41d3_9e28_fe5846e0dc9b.Data4[4] )
    {
      *a3 = v5;
      v4 = 0;
    }
    else
    {
      v4 = -2147467262;
    }
    if ( v4 < 0 )
      return (unsigned int)v4;
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v4;
}
