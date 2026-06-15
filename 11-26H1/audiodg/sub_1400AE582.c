/*
 * XREFs of sub_1400AE582 @ 0x1400AE582
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x14004A6E8 (_CxxThrowException.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall __noreturn sub_1400AE582(__int64 a1, __int64 a2)
{
  sub_1400B6010(*(_QWORD *)(a2 + 80));
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a2 + 36);
  throw (ATL::CAtlException *)(a2 + 32);
}
