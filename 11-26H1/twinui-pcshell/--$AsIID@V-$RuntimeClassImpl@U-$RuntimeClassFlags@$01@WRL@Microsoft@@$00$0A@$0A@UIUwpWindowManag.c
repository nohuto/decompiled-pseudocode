/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUwpWindowManagerBridge@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUwpWindowManagerBridge@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800FA194
 * Callers:
 *     ??$MakeAndInitialize@VUwpWindowManagerBridge@@UIUwpWindowManagerBridge@@PEAVUwpWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIUwpWindowManagerBridge@@$$QEAPEAVUwpWindowEventDispatcher@@@Z @ 0x1800FA0D4 (--$MakeAndInitialize@VUwpWindowManagerBridge@@UIUwpWindowManagerBridge@@PEAVUwpWindowEventDispat.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUwpWindowManagerBridge@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802C5A60 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUwpWindo.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800E8D98 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VFt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUwpWindowManagerBridge,Microsoft::WRL::FtmBase>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  int CanCastTo; // ebx

  *a3 = 0LL;
  if ( *a2 )
  {
    if ( *a2 == -1449958793
      && a2[1] == *(_DWORD *)&GUID_a9936277_04ad_4680_b2ec_9b995a363b3d.Data2
      && a2[2] == *(_DWORD *)GUID_a9936277_04ad_4680_b2ec_9b995a363b3d.Data4
      && a2[3] == *(_DWORD *)&GUID_a9936277_04ad_4680_b2ec_9b995a363b3d.Data4[4] )
    {
      *a3 = a1;
      CanCastTo = 0;
      goto LABEL_12;
    }
LABEL_5:
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>::CanCastTo(
                  a1 + 8,
                  a2,
                  a3);
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
LABEL_12:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)CanCastTo;
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
