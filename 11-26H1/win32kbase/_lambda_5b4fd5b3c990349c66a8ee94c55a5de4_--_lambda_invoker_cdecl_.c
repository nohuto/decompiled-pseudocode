/*
 * XREFs of _lambda_5b4fd5b3c990349c66a8ee94c55a5de4_::_lambda_invoker_cdecl_ @ 0x1401CE590
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredSharedUserCrit @ 0x1400BC250 (EtwTraceAcquiredSharedUserCrit.c)
 *     EtwTraceAcquireSharedUserCrit @ 0x1400DB020 (EtwTraceAcquireSharedUserCrit.c)
 */

void __fastcall lambda_5b4fd5b3c990349c66a8ee94c55a5de4_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // r8
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // r8d

  EtwTraceAcquireSharedUserCrit(a1, a2, a3);
  LOBYTE(v5) = 1;
  ExAcquireFastResourceShared(a1, a2 + 32, v5);
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(a2 + 24) & 0xFFFFFFF3 | 4;
  EtwTraceAcquiredSharedUserCrit(v7, v6, v8);
}
