/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveShellBuilder@@UIImmersiveShellBuilder2@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveShellBuilder@@UIImmersiveShellBuilder2@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1801F860C
 * Callers:
 *     ??$MakeAndInitialize@VCImmersiveShellBuilder@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801E5D8C (--$MakeAndInitialize@VCImmersiveShellBuilder@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIU.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveShellBuilder@@UIImmersiveShellBuilder2@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801F8600 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801F8600.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180057770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveShellBuilder,IImmersiveShellBuilder2>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  unsigned int v5; // ebx
  __int64 v7; // r10

  v3 = a2;
  v4 = a1;
  v5 = 0;
  *a3 = 0LL;
  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 == 475444196
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_1c56b3e4_e6ea_4ced_8a74_73b72c6bd435.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_1c56b3e4_e6ea_4ced_8a74_73b72c6bd435.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_1c56b3e4_e6ea_4ced_8a74_73b72c6bd435.Data4[4] )
    {
      goto LABEL_12;
    }
  }
  else if ( *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
         && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
         && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64, __int64, _QWORD *, __int64))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, a2);
    return 0LL;
  }
  if ( !InlineIsEqualGUID((const struct _GUID *)a2, &GUID_2eb59b15_1487_40ce_916e_ef65330dd224) )
    return (unsigned int)-2147467262;
  v4 = v7 + 8;
LABEL_12:
  *a3 = v4;
  (*(void (__fastcall **)(__int64, __int64, _QWORD *, __int64))(*(_QWORD *)v4 + 8LL))(v4, a2, a3, v3);
  return v5;
}
