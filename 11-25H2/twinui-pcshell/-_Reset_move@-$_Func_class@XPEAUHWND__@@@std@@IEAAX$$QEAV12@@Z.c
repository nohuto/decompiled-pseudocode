/*
 * XREFs of ?_Reset_move@?$_Func_class@XPEAUHWND__@@@std@@IEAAX$$QEAV12@@Z @ 0x1804684E0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6fd8c80f4e8205d0daf1b865183c59df___::CTaskWrapper__lambda_6fd8c80f4e8205d0daf1b865183c59df_____lambda_6fd8c80f4e8205d0daf1b865183c59df___ @ 0x180457424 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6fd8c80f4e8205d0daf1b865183c59df___--CTaskW.c)
 *     ??4?$function@$$A6AJPEBG@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18045D0E8 (--4-$function@$$A6AJPEBG@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??4?$function@$$A6AXPEAUHWND__@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x1804893F4 (--4-$function@$$A6AXPEAUHWND__@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x180071F24 (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::_Func_class<void,HWND__ *>::_Reset_move(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
        a2,
        v5);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
}
