/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCShrinkButtonElement@@UIMultitaskingViewDragSource@@UISwitchItemThumbnailElement@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCShrinkButtonElement@@UIMultitaskingViewDragSource@@UISwitchItemThumbnailElement@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1804BF0FC
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCShrinkButtonElement@@UIMultitaskingViewDragSource@@UISwitchItemThumbnailElement@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804C0060 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCShrinkBu.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180057770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CShrinkButtonElement,IMultitaskingViewDragSource,ISwitchItemThumbnailElement>>(
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
  const struct _GUID *v9; // rcx
  int v10; // ebx
  const struct _GUID *v11; // rcx
  _QWORD *v12; // r8
  __int64 v13; // r9

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( InlineIsEqualGUID(v3, &GUID_43dbd2a0_5ebc_4792_9a37_421d455c8861)
      || InlineIsEqualGUID(v6, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d) )
    {
      *v7 = v8;
      v10 = 0;
      goto LABEL_11;
    }
    if ( !InlineIsEqualGUID(v9, &GUID_f8242c35_7f82_4b56_b5c8_37345206289d) )
    {
      if ( !InlineIsEqualGUID(v11, &GUID_31dacf25_23c9_4be9_a81c_2ac933c44c63) )
      {
        v10 = -2147467262;
        v8 = 0LL;
LABEL_10:
        if ( v10 < 0 )
          return (unsigned int)v10;
LABEL_11:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        return (unsigned int)v10;
      }
      v8 = v13 + 8;
    }
    *v12 = v8;
    v10 = 0;
    goto LABEL_10;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
