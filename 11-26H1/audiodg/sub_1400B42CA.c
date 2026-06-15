/*
 * XREFs of sub_1400B42CA @ 0x1400B42CA
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004EEE4 @ 0x14004EEE4 (sub_14004EEE4.c)
 */

__int64 __fastcall sub_1400B42CA(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 240) = sub_14004EEE4(
                            *(_QWORD *)(a2 + 184),
                            150,
                            (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp");
  return 0LL;
}
