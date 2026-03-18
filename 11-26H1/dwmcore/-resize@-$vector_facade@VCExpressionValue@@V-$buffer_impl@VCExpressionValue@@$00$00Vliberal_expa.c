/*
 * XREFs of ?resize@?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18010C430
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180046660 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResu.c)
 *     ?PushStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@XZ @ 0x18010B120 (-PushStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@XZ.c)
 *     ??0CExpressionValueStack@@QEAA@XZ @ 0x18010B9C0 (--0CExpressionValueStack@@QEAA@XZ.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAXAEBVCExpressionValue@@@Z @ 0x18010BF90 (-PushConstant@CExpressionValueStack@@QEAAXAEBVCExpressionValue@@@Z.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18010C730 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAXM@Z @ 0x18013B264 (-PushConstant@CExpressionValueStack@@QEAAXM@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x18013E0F4 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?EnsureAvailablePushSpace@CExpressionValueStack@@AEAAXXZ @ 0x1802882B8 (-EnsureAvailablePushSpace@CExpressionValueStack@@AEAAXXZ.c)
 * Callees:
 *     ?resize@?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBVCExpressionValue@@@Z @ 0x18010C490 (-resize@-$vector_facade@VCExpressionValue@@V-$buffer_impl@VCExpressionValue@@$00$00_ea_18010C490.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall detail::vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>::resize(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  _QWORD v3[8]; // [rsp+20h] [rbp-68h] BYREF
  int v4; // [rsp+60h] [rbp-28h]

  v4 = 0;
  result = detail::vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>::resize(
             a1,
             a2,
             v3);
  if ( v4 == 11 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v3[0] + 16LL))(v3[0]);
  return result;
}
