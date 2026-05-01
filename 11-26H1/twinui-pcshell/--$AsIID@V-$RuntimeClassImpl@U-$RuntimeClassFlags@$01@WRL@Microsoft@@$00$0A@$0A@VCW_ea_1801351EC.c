/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIVirtualDesktopSwitcherService@@UIVirtualDesktopSwitcherInvoker@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIVirtualDesktopSwitcherService@@UIVirtualDesktopSwitcherInvoker@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801351EC
 * Callers:
 *     ?CVirtualDesktopSwitcherService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x180135028 (-CVirtualDesktopSwitcherService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIVirtualDesktopSwitcherService@@UIVirtualDesktopSwitcherInvoker@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801351E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801351E0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IVirtualDesktopSwitcherService,IVirtualDesktopSwitcherInvoker>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  int v4; // ebx

  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 == -62389853
      && a2[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
      && a2[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
      && a2[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
    {
      *a3 = a1;
      v4 = 0;
LABEL_17:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
      return (unsigned int)v4;
    }
LABEL_5:
    v3 = a1 + 24;
    if ( *a2 == -225166594
      && a2[1] == *(_DWORD *)&GUID_f2943afe_cab3_4172_b1e9_59ba203c4a47.Data2
      && a2[2] == *(_DWORD *)GUID_f2943afe_cab3_4172_b1e9_59ba203c4a47.Data4
      && a2[3] == *(_DWORD *)&GUID_f2943afe_cab3_4172_b1e9_59ba203c4a47.Data4[4]
      || (v3 += 8LL, *a2 == 2049250906)
      && a2[1] == *(_DWORD *)&GUID_7a25165a_86f1_4b4a_b1d2_e89650cd9589.Data2
      && a2[2] == *(_DWORD *)GUID_7a25165a_86f1_4b4a_b1d2_e89650cd9589.Data4
      && a2[3] == *(_DWORD *)&GUID_7a25165a_86f1_4b4a_b1d2_e89650cd9589.Data4[4] )
    {
      *a3 = v3;
      v4 = 0;
    }
    else
    {
      v4 = -2147467262;
    }
    if ( v4 < 0 )
      return (unsigned int)v4;
    goto LABEL_17;
  }
  if ( a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_5;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
