/*
 * XREFs of sub_1400AEE1A @ 0x1400AEE1A
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x14004A6E8 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1400AEE1A(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(a2 + 80);
  v4 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v4 + 32) = *(_QWORD *)(v3 + 64);
  *(_QWORD *)(v3 + 64) = v4;
  throw;
}
