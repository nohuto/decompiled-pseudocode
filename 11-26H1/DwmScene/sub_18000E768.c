/*
 * XREFs of sub_18000E768 @ 0x18000E768
 * Callers:
 *     sub_1800100C4 @ 0x1800100C4 (sub_1800100C4.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18000E768(__int64 a1)
{
  if ( !*(_BYTE *)a1 )
    SetLastError(*(_DWORD *)(a1 + 4));
}
