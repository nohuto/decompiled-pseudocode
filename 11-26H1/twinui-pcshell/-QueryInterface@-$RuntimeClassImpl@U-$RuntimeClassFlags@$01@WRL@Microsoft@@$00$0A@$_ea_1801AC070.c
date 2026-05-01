/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewGestureHandler@@UITouchpadGesture@@UITouchSwipe@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801AC070
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewGestureHandler@@UITouchpadGesture@@UITouchSwipe@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18049CC90 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18049CC90.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewGestureHandler@@UITouchpadGesture@@UITouchSwipe@@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18049CCA0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18049CCA0.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180057770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewGestureHandler,ITouchpadGesture,ITouchSwipe>::QueryInterface(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi
  __int64 v6; // r10

  v3 = 0;
  *a3 = 0LL;
  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 == -561153963
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_de8d7855_1edf_411b_99bf_0226775c0b72.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_de8d7855_1edf_411b_99bf_0226775c0b72.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_de8d7855_1edf_411b_99bf_0226775c0b72.Data4[4] )
    {
      goto LABEL_9;
    }
  }
  else if ( *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
         && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
         && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64, __int64, _QWORD *, __int64))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, a2);
    return v3;
  }
  a1 += 8LL;
  if ( *(_DWORD *)a2 != 788248498
    || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_2efbb7b2_92ab_4d26_9e07_39c400ca8603.Data2
    || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_2efbb7b2_92ab_4d26_9e07_39c400ca8603.Data4
    || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_2efbb7b2_92ab_4d26_9e07_39c400ca8603.Data4[4] )
  {
    if ( InlineIsEqualGUID((const struct _GUID *)a2, &GUID_9a6cbe27_4d5e_49fe_adaa_8738c2848795) )
    {
      *a3 = v6;
      v4 = 0;
    }
    else
    {
      v4 = -2147467262;
    }
    if ( v4 < 0 )
      return (unsigned int)v4;
    goto LABEL_11;
  }
LABEL_9:
  *a3 = a1;
  v4 = 0;
LABEL_11:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v4;
}
