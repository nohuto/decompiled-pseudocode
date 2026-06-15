/*
 * XREFs of sub_1400481BC @ 0x1400481BC
 * Callers:
 *     sub_14003AB50 @ 0x14003AB50 (sub_14003AB50.c)
 *     sub_140050F5C @ 0x140050F5C (sub_140050F5C.c)
 *     sub_140051D70 @ 0x140051D70 (sub_140051D70.c)
 *     sub_140051E10 @ 0x140051E10 (sub_140051E10.c)
 *     sub_140086B50 @ 0x140086B50 (sub_140086B50.c)
 *     sub_140086BF0 @ 0x140086BF0 (sub_140086BF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400481BC(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  if ( *a2 != 56 || a2[1] || a2[2] != 192 || a2[3] != 1174405120 )
    return 2147500034LL;
  *a3 = a1;
  return 0LL;
}
