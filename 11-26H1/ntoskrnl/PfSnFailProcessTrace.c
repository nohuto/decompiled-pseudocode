/*
 * XREFs of PfSnFailProcessTrace @ 0x1409E9C58
 * Callers:
 *     PfSnNameRemoveAll @ 0x1409E9800 (PfSnNameRemoveAll.c)
 *     PfSnLogHelper @ 0x1409E9924 (PfSnLogHelper.c)
 *     PfSnLogStreamCreate @ 0x1409E9998 (PfSnLogStreamCreate.c)
 *     PfSnVolumeKeyQuery @ 0x140A8F6CC (PfSnVolumeKeyQuery.c)
 * Callees:
 *     PfSnEndProcessTrace @ 0x140A43CB4 (PfSnEndProcessTrace.c)
 */

__int64 __fastcall PfSnFailProcessTrace(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return PfSnEndProcessTrace(*(_QWORD *)(a1 + 352), 10LL, a1 + 24);
}
