/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPolicyConfig@@UIPolicyConfigInternal@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPolicyConfig@@UIPolicyConfigInternal@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180081104
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPolicyConfig@@UIPolicyConfigInternal@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B1050 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPolicyCo.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180049230 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPolicyConfig,IPolicyConfigInternal>>(
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
    if ( *(_DWORD *)a2 == -397965824
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_e8478600_a74b_4b3a_a96b_1fc3e796fc46.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_e8478600_a74b_4b3a_a96b_1fc3e796fc46.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_e8478600_a74b_4b3a_a96b_1fc3e796fc46.Data4[4] )
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
  if ( !InlineIsEqualGUID((const struct _GUID *)a2, &GUID_4a33ea62_d512_48c0_a726_eb2893da4d34) )
    return (unsigned int)-2147467262;
  v4 = v7 + 8;
LABEL_12:
  *a3 = v4;
  (*(void (__fastcall **)(__int64, __int64, _QWORD *, __int64))(*(_QWORD *)v4 + 8LL))(v4, a2, a3, v3);
  return v5;
}
