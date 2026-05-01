/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewGestureHandler@@UITouchpadGesture@@UITouchSwipe@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewGestureHandler@@UITouchpadGesture@@UITouchSwipe@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800FAF00
 * Callers:
 *     ?MultitaskingViewGestureHandler_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@AEBU_GUID@@PEAPEAX@Z @ 0x1800FA708 (-MultitaskingViewGestureHandler_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMult.c)
 *     ?Get@?$CWeakReference@VMultitaskingViewGestureHandler@@@WeakReference@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18048A9A0 (-Get@-$CWeakReference@VMultitaskingViewGestureHandler@@@WeakReference@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18004F930 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewGestureHandler,ITouchpadGesture,ITouchSwipe>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  int v4; // ebx
  __int64 v5; // r10

  *a3 = 0LL;
  if ( !*(_DWORD *)a2
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64, __int64, _QWORD *, __int64))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, a2);
    return 0LL;
  }
  if ( *(_DWORD *)a2 == -561153963
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_de8d7855_1edf_411b_99bf_0226775c0b72.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_de8d7855_1edf_411b_99bf_0226775c0b72.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_de8d7855_1edf_411b_99bf_0226775c0b72.Data4[4] )
  {
    *a3 = a1;
  }
  else
  {
    if ( *(_DWORD *)a2 != 788248498
      || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_2efbb7b2_92ab_4d26_9e07_39c400ca8603.Data2
      || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_2efbb7b2_92ab_4d26_9e07_39c400ca8603.Data4
      || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_2efbb7b2_92ab_4d26_9e07_39c400ca8603.Data4[4] )
    {
      if ( InlineIsEqualGUID((const struct _GUID *)a2, &GUID_9a6cbe27_4d5e_49fe_adaa_8738c2848795) )
      {
        *a3 = v5 + 8;
        v4 = 0;
      }
      else
      {
        v4 = -2147467262;
      }
      if ( v4 < 0 )
        return (unsigned int)v4;
      goto LABEL_12;
    }
    *a3 = a1 + 8;
  }
  v4 = 0;
LABEL_12:
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v4;
}
