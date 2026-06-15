/*
 * XREFs of sub_1400443F8 @ 0x1400443F8
 * Callers:
 *     sub_140044230 @ 0x140044230 (sub_140044230.c)
 * Callees:
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 *     sub_14009D41C @ 0x14009D41C (sub_14009D41C.c)
 */

char __fastcall sub_1400443F8(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  char v3; // bl

  v2 = *(_QWORD *)(a1 + 88);
  v3 = 0;
  if ( a2 >= 0 )
    return 1;
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14009D41C(a1, a2, a1);
  sub_140048108("CCrossProcessBaseEndpointRT<struct VolatileControlData_V0>::IsValidOffset", 90LL, 2147500037LL);
  _InterlockedAnd((volatile signed __int32 *)(v2 + 164), 0xFFFFFFFE);
  return v3;
}
