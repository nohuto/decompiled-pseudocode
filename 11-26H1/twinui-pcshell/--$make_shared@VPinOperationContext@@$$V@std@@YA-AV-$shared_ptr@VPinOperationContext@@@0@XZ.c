/*
 * XREFs of ??$make_shared@VPinOperationContext@@$$V@std@@YA?AV?$shared_ptr@VPinOperationContext@@@0@XZ @ 0x18028D10C
 * Callers:
 *     ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@AEBUhstring@winrt@@1@Z @ 0x18028CDF0 (-Create@PinOperationContext@@SA-AV-$shared_ptr@VPinOperationContext@@@std@@V-$shared_ptr@VPinReq.c)
 *     ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@PEFBU_ITEMIDLIST@@V?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x1805E50B4 (-Create@PinOperationContext@@SA-AV-$shared_ptr@VPinOperationContext@@@std@@V-$share_ea_1805E50B4.c)
 * Callees:
 *     ??0PinOperationContext@@QEAA@XZ @ 0x18028D42C (--0PinOperationContext@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

__int64 __fastcall std::make_shared<PinOperationContext,>(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v3; // [rsp+40h] [rbp+8h]

  v3 = operator new(0x70uLL);
  *(_OWORD *)v3 = 0LL;
  v3[2] = 1;
  v3[3] = 1;
  *(_QWORD *)v3 = &std::_Ref_count_obj2<PinOperationContext>::`vftable';
  memset_0(v3 + 4, 0, 0x60uLL);
  PinOperationContext::PinOperationContext((PinOperationContext *)(v3 + 4));
  result = a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v3 + 4;
  *(_QWORD *)(a1 + 8) = v3;
  return result;
}
