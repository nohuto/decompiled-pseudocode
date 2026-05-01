/*
 * XREFs of ??4?$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800FAB80
 * Callers:
 *     ??0TouchEdgeGripperHost@@QEAA@AEBV?$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@AEBV?$function@$$A6AXXZ@2@@Z @ 0x1800FAA60 (--0TouchEdgeGripperHost@@QEAA@AEBV-$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@.c)
 * Callees:
 *     ?_Swap@?$_Func_class@XIAEBUPoint@Foundation@Windows@winrt@@@std@@IEAAXAEAV12@@Z @ 0x1800FAE00 (-_Swap@-$_Func_class@XIAEBUPoint@Foundation@Windows@winrt@@@std@@IEAAXAEAV12@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::function<void (unsigned int,winrt::Windows::Foundation::Point const &)>::operator=(
        __int64 a1,
        __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, _BYTE *); // rcx
  _BYTE *v4; // rdx
  _BYTE v6[56]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE *v7; // [rsp+58h] [rbp-20h]

  v7 = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v3 )
    v7 = (_BYTE *)(**v3)(v3, v6);
  std::_Func_class<void,unsigned int,winrt::Windows::Foundation::Point const &>::_Swap(v6, a1);
  if ( v7 )
  {
    v4 = v6;
    LOBYTE(v4) = v7 != v6;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v7 + 32LL))(v7, v4);
  }
  return a1;
}
