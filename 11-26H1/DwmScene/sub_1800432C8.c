/*
 * XREFs of sub_1800432C8 @ 0x1800432C8
 * Callers:
 *     sub_180042E1C @ 0x180042E1C (sub_180042E1C.c)
 *     sub_18004AD40 @ 0x18004AD40 (sub_18004AD40.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800432C8(__int64 a1)
{
  if ( !*(_DWORD *)a1 )
    return *(_QWORD *)(a1 + 8) == 0LL;
  if ( *(_DWORD *)a1 != 1 )
    return 1;
  return *(_QWORD *)(a1 + 16) == *(_QWORD *)(a1 + 24);
}
