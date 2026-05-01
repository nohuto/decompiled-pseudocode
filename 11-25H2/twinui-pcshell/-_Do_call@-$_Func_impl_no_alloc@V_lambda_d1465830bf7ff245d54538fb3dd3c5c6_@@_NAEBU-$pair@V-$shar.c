/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@V_lambda_d1465830bf7ff245d54538fb3dd3c5c6_@@_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@std@@EEAA_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@2@@Z @ 0x1805C86E0
 * Callers:
 *     <none>
 * Callees:
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x18005A3E4 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 */

char __fastcall std::_Func_impl_no_alloc<_lambda_d1465830bf7ff245d54538fb3dd3c5c6_,bool,std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &>::_Do_call(
        __int64 a1)
{
  char v1; // r8
  __int64 v3; // rdi
  __int64 *v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 1;
  ++**(_DWORD **)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  if ( **(_DWORD **)(a1 + 8) >= *(_DWORD *)(v3 + 168) )
  {
    v4 = std::chrono::steady_clock::now(&v6);
    v1 = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) = *v4 + *(_QWORD *)(v3 + 176);
  }
  return v1;
}
