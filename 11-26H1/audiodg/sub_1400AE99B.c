/*
 * XREFs of sub_1400AE99B @ 0x1400AE99B
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000DC7C @ 0x14000DC7C (sub_14000DC7C.c)
 *     _CxxThrowException @ 0x14004A6E8 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1400AE99B(__int64 a1, __int64 a2)
{
  sub_14000DC7C(*(_QWORD *)(a2 + 80));
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a2 + 36);
  throw (ATL::CAtlException *)(a2 + 32);
}
