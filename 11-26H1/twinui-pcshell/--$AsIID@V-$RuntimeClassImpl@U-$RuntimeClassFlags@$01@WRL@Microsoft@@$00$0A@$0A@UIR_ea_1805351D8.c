/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIRawElementProviderFragment@@UIRawElementProviderFragmentRoot@@UICoverWindowAcc@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIRawElementProviderFragment@@UIRawElementProviderFragmentRoot@@UICoverWindowAcc@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1805351D8
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIRawElementProviderFragment@@UIRawElementProviderFragmentRoot@@UICoverWindowAcc@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180535A50 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180535A50.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180057770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IRawElementProviderFragment,IRawElementProviderFragmentRoot,ICoverWindowAcc>>(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  const struct _GUID *v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // r11
  const struct _GUID *v13; // rcx
  _QWORD *v14; // r8
  __int64 v15; // r9

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( InlineIsEqualGUID(v3, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c) )
    {
      *v7 = v8;
LABEL_4:
      v9 = 0;
      goto LABEL_13;
    }
    if ( InlineIsEqualGUID(v6, &GUID_f7063da8_8359_439c_9297_bbc5299a7d87) )
    {
      *v11 = v12;
      goto LABEL_4;
    }
    if ( !InlineIsEqualGUID(v10, &GUID_620ce2a5_ab8f_40a9_86cb_de3c75599b58) )
    {
      if ( !InlineIsEqualGUID(v13, &GUID_231595a6_2227_4cb4_910c_0b70e7e3a76c) )
      {
        v9 = -2147467262;
        v8 = 0LL;
LABEL_12:
        if ( v9 < 0 )
          return (unsigned int)v9;
LABEL_13:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        return (unsigned int)v9;
      }
      v8 = v15 + 8;
    }
    *v14 = v8;
    v9 = 0;
    goto LABEL_12;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
