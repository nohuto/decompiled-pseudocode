/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITabletModeViewManagerProxy@@UITabletModeViewManager@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITabletModeViewManagerProxy@@UITabletModeViewManager@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801D473C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITabletModeViewManagerProxy@@UITabletModeViewManager@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801D4730 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITabletMo.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITabletModeViewManagerProxy,ITabletModeViewManager>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 == 916278114 )
    {
      if ( a2[1] != *(_DWORD *)&GUID_369d4b62_03d7_4a19_aa1b_7f542f36e74b.Data2
        || a2[2] != *(_DWORD *)GUID_369d4b62_03d7_4a19_aa1b_7f542f36e74b.Data4
        || a2[3] != *(_DWORD *)&GUID_369d4b62_03d7_4a19_aa1b_7f542f36e74b.Data4[4] )
      {
        return (unsigned int)-2147467262;
      }
    }
    else
    {
      if ( *a2 != 926832335
        || a2[1] != *(_DWORD *)&GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3.Data2
        || a2[2] != *(_DWORD *)GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3.Data4
        || a2[3] != *(_DWORD *)&GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3.Data4[4] )
      {
        return (unsigned int)-2147467262;
      }
      a1 += 8LL;
    }
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return v3;
  }
  if ( a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    return (unsigned int)-2147467262;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
