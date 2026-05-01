/*
 * XREFs of ?_Reset_move@?$_Func_class@XIAEBUPoint@Foundation@Windows@winrt@@@std@@IEAAX$$QEAV12@@Z @ 0x1800BE64C
 * Callers:
 *     ??0?$heap_implements@VVirtualDestopSwitcherViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x1800BE3D8 (--0-$heap_implements@VVirtualDestopSwitcherViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIM.c)
 *     ??0?$heap_implements@VTaskViewViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIMultitaskingViewVisibilityService@@V?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@@Z @ 0x1800BE4DC (--0-$heap_implements@VTaskViewViewChangeNotificationProxy@@@impl@winrt@@QEAA@PEAUIMultitaskingVi.c)
 *     ?_Swap@?$_Func_class@XIAEBUPoint@Foundation@Windows@winrt@@@std@@IEAAXAEAV12@@Z @ 0x1800FAE00 (-_Swap@-$_Func_class@XIAEBUPoint@Foundation@Windows@winrt@@@std@@IEAAXAEAV12@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::_Func_class<void,unsigned int,winrt::Windows::Foundation::Point const &>::_Reset_move(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      v6 = *(_QWORD *)(a2 + 56);
      if ( v6 )
      {
        LOBYTE(v5) = v6 != a2;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(v6, v5);
        *(_QWORD *)(a2 + 56) = 0LL;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
}
