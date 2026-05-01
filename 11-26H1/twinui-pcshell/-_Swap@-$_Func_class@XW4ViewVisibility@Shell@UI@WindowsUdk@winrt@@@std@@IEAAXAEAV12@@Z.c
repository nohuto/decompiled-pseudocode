/*
 * XREFs of ?_Swap@?$_Func_class@XW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@std@@IEAAXAEAV12@@Z @ 0x1800E56DC
 * Callers:
 *     ??4?$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800E5650 (--4-$function@$$A6AXW4ViewVisibility@Shell@UI@WindowsUdk@winrt@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x180016460 (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::_Func_class<void,enum winrt::WindowsUdk::UI::Shell::ViewVisibility>::_Swap(__int64 a1, __int64 a2)
{
  _BYTE *v2; // r8
  __int64 *v3; // rbx
  _BYTE *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  _BYTE *v11; // rcx
  _BYTE *v12; // rdx
  _BYTE v13[56]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+58h] [rbp-20h]

  v2 = *(_BYTE **)(a1 + 56);
  v3 = (__int64 *)(a2 + 56);
  if ( v2 != (_BYTE *)a1 && *v3 != a2 )
  {
    *(_QWORD *)(a1 + 56) = *v3;
    *v3 = (__int64)v2;
    return;
  }
  v6 = 0LL;
  v14 = 0LL;
  if ( v2 )
  {
    v6 = v2;
    if ( v2 == (_BYTE *)a1 )
    {
      v14 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v2 + 8LL))(v2, v13);
      std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
        a1,
        v7);
      v6 = (_BYTE *)v14;
    }
    else
    {
      v14 = (__int64)v2;
      *(_QWORD *)(a1 + 56) = 0LL;
    }
  }
  v8 = *v3;
  if ( *v3 )
  {
    if ( v8 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(*v3, a1);
      std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
        a2,
        v9);
      v6 = (_BYTE *)v14;
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v8;
      *v3 = 0LL;
    }
  }
  if ( v6 )
  {
    if ( v6 != v13 )
    {
      *v3 = (__int64)v6;
      goto LABEL_15;
    }
    v10 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v6 + 8LL))(v6, a2);
    v11 = (_BYTE *)v14;
    *v3 = v10;
    if ( v11 )
    {
      v12 = v13;
      LOBYTE(v12) = v11 != v13;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v11 + 32LL))(v11, v12);
LABEL_15:
      v14 = 0LL;
    }
  }
}
