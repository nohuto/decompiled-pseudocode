/*
 * XREFs of sub_180042B54 @ 0x180042B54
 * Callers:
 *     sub_180042A7C @ 0x180042A7C (sub_180042A7C.c)
 *     sub_180058C70 @ 0x180058C70 (sub_180058C70.c)
 *     sub_180096CF0 @ 0x180096CF0 (sub_180096CF0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180042B54(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
