/*
 * XREFs of sub_1800128EC @ 0x1800128EC
 * Callers:
 *     sub_1800118F4 @ 0x1800118F4 (sub_1800118F4.c)
 *     sub_18003437C @ 0x18003437C (sub_18003437C.c)
 *     sub_180036C34 @ 0x180036C34 (sub_180036C34.c)
 *     sub_1800382B8 @ 0x1800382B8 (sub_1800382B8.c)
 *     sub_18004232C @ 0x18004232C (sub_18004232C.c)
 *     sub_18004B480 @ 0x18004B480 (sub_18004B480.c)
 *     sub_18008B25C @ 0x18008B25C (sub_18008B25C.c)
 *     sub_18009980C @ 0x18009980C (sub_18009980C.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800128EC(__int64 a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  v1 = *(_DWORD *)(a1 + 8);
  while ( v1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  return 0;
}
