/*
 * XREFs of PfSnFailProcessTrace @ 0x1409D3078
 * Callers:
 *     PfSnNameRemoveAll @ 0x1409D2C20 (PfSnNameRemoveAll.c)
 *     PfSnLogHelper @ 0x1409D2D44 (PfSnLogHelper.c)
 *     PfSnLogStreamCreate @ 0x1409D2DB8 (PfSnLogStreamCreate.c)
 *     PfSnVolumeKeyQuery @ 0x140A9439C (PfSnVolumeKeyQuery.c)
 * Callees:
 *     PfSnEndProcessTrace @ 0x140ACAE28 (PfSnEndProcessTrace.c)
 */

__int64 __fastcall PfSnFailProcessTrace(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return PfSnEndProcessTrace(*(_QWORD *)(a1 + 352), 10LL, a1 + 24);
}
