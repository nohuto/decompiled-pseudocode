/*
 * XREFs of ?_Reset_map@?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@AEAAXXZ @ 0x1805EC874
 * Callers:
 *     ?_Tidy@?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@AEAAXXZ @ 0x1805EC920 (-_Tidy@-$deque@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@chr.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::_Reset_map(
        __int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v3; // rdi
  void **v4; // rbx
  void *v5; // rcx
  _QWORD *v6; // rdi

  v1 = (_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = (void **)(a1 + 8);
  if ( v3 <= 0 )
  {
    v6 = (_QWORD *)(a1 + 16);
  }
  else
  {
    do
    {
      --v3;
      v5 = (void *)*((_QWORD *)*v4 + v3);
      if ( v5 )
        std::_Deallocate<16>(v5, (struct std::nothrow_t *)0x18);
    }
    while ( v3 > 0 );
    v6 = (_QWORD *)(a1 + 16);
  }
  std::_Deallocate<16>(*v4, (struct std::nothrow_t *)(8LL * *v1));
  *v4 = 0LL;
  *v6 = 0LL;
}
