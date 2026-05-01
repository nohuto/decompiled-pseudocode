/*
 * XREFs of Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139_____lambda_5f246d3d225ef97a552fc7098e7c8139__const_&_ @ 0x18029410C
 * Callers:
 *     MakeMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139___ @ 0x180294070 (MakeMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18013435C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCall.c)
 *     _anonymous_namespace_::ProcessInputLambdaArgs::ProcessInputLambdaArgs @ 0x180134624 (_anonymous_namespace_--ProcessInputLambdaArgs--ProcessInputLambdaArgs.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_5f246d3d225ef97a552fc7098e7c8139_____lambda_5f246d3d225ef97a552fc7098e7c8139__const___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdi

  *a1 = 0LL;
  v4 = operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>((__int64)v4);
    *v5 = off_1806F91E0;
    v5[4] = off_1806F9230;
    anonymous_namespace_::ProcessInputLambdaArgs::ProcessInputLambdaArgs((__int64)(v5 + 6), a2);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
