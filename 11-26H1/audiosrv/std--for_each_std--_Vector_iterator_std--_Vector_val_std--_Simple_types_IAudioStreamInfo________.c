/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_IAudioStreamInfo_________lambda_95aa79fe68308ee8971a6083ea2ebe7c___ @ 0x180046974
 * Callers:
 *     ?ForEachStream@CProcessSubmixProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x180046A20 (-ForEachStream@CProcessSubmixProxy@@UEAAXV-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z.c)
 * Callees:
 *     _lambda_95aa79fe68308ee8971a6083ea2ebe7c_::__lambda_95aa79fe68308ee8971a6083ea2ebe7c_ @ 0x1800465BC (_lambda_95aa79fe68308ee8971a6083ea2ebe7c_--__lambda_95aa79fe68308ee8971a6083ea2ebe7c_.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@$$QEAV01@@Z @ 0x1800465F8 (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@$$QEAV01@@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_IAudioStreamInfo_________lambda_95aa79fe68308ee8971a6083ea2ebe7c___(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  _QWORD *v6; // r14
  __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD v11[4]; // [rsp+20h] [rbp-48h] BYREF

  v6 = a2;
  v11[0] = a1;
  for ( v11[3] = a4; v6 != a3; ++v6 )
  {
    v11[0] = *v6;
    v8 = *(_QWORD *)(a4 + 56);
    if ( !v8 )
    {
      std::_Xbad_function_call();
      JUMPOUT(0x180046A16LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v8 + 16LL))(v8, v11);
  }
  std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>(a1, a4);
  lambda_95aa79fe68308ee8971a6083ea2ebe7c_::__lambda_95aa79fe68308ee8971a6083ea2ebe7c_(a4, v9);
  return a1;
}
