/*
 * XREFs of _lambda_458e1681217b8f4af03ab89c30ee8cb2_::_lambda_invoker_cdecl_ @ 0x1401ABF20
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredSharedUserCrit @ 0x14003CB40 (EtwTraceAcquiredSharedUserCrit.c)
 *     EtwTraceAcquireExclusiveUserCrit @ 0x14003CDD0 (EtwTraceAcquireExclusiveUserCrit.c)
 */

void __fastcall lambda_458e1681217b8f4af03ab89c30ee8cb2_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  __int64 v4; // r8

  EtwTraceAcquireExclusiveUserCrit();
  LOBYTE(v4) = 1;
  ExAcquireFastResourceShared(a1, a2 + 32, v4);
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(a2 + 24) & 0xFFFFFFE7 | 8;
  EtwTraceAcquiredSharedUserCrit();
}
