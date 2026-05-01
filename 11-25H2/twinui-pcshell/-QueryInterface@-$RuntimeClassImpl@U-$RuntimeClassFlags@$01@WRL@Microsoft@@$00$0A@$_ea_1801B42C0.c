/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewGestureHandler@@UITouchpadGesture@@UITouchSwipe@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B42C0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewGestureHandler@@UITouchpadGesture@@UITouchSwipe@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18048C050 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18048C050.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewGestureHandler@@UITouchpadGesture@@UITouchSwipe@@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18048C060 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18048C060.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18004F930 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
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
  if ( *(_DWORD *)a2
    || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *(_DWORD *)a2 == -561153963
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_de8d7855_1edf_411b_99bf_0226775c0b72.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_de8d7855_1edf_411b_99bf_0226775c0b72.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_de8d7855_1edf_411b_99bf_0226775c0b72.Data4[4]
      || (a1 += 8LL, *(_DWORD *)a2 == 788248498)
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_2efbb7b2_92ab_4d26_9e07_39c400ca8603.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_2efbb7b2_92ab_4d26_9e07_39c400ca8603.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_2efbb7b2_92ab_4d26_9e07_39c400ca8603.Data4[4] )
    {
      *a3 = a1;
      v4 = 0;
    }
    else
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
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v4;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64, __int64, _QWORD *, __int64))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, a2);
  return v3;
}
