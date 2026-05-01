/*
 * XREFs of ??4?$function@$$A6AJPEBG@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18045D0E8
 * Callers:
 *     _lambda_6fd8c80f4e8205d0daf1b865183c59df_::operator() @ 0x18045DC98 (_lambda_6fd8c80f4e8205d0daf1b865183c59df_--operator().c)
 * Callees:
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x180071F24 (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     ??0?$function@$$A6AJPEBG@Z@std@@QEAA@AEBV01@@Z @ 0x1802C6744 (--0-$function@$$A6AJPEBG@Z@std@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?_Reset_move@?$_Func_class@XPEAUHWND__@@@std@@IEAAX$$QEAV12@@Z @ 0x1804684E0 (-_Reset_move@-$_Func_class@XPEAUHWND__@@@std@@IEAAX$$QEAV12@@Z.c)
 */

__int64 __fastcall std::function<long (unsigned short const *)>::operator=(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  _BYTE v9[56]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v10; // [rsp+58h] [rbp-60h]
  _BYTE v11[64]; // [rsp+60h] [rbp-58h] BYREF

  v4 = std::function<long (unsigned short const *)>::function<long (unsigned short const *)>((__int64)v11, a2);
  v5 = *(_QWORD *)(v4 + 56);
  if ( v5 == v4 || (v6 = *(_QWORD *)(a1 + 56), v6 == a1) )
  {
    v10 = 0LL;
    std::_Func_class<void,HWND__ *>::_Reset_move(v9, v4);
    std::_Func_class<void,HWND__ *>::_Reset_move(v4, a1);
    std::_Func_class<void,HWND__ *>::_Reset_move(a1, v9);
    std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
      (__int64)v9,
      v7);
  }
  else
  {
    *(_QWORD *)(v4 + 56) = v6;
    *(_QWORD *)(a1 + 56) = v5;
  }
  std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
    (__int64)v11,
    v3);
  return a1;
}
