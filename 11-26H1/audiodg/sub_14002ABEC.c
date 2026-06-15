/*
 * XREFs of sub_14002ABEC @ 0x14002ABEC
 * Callers:
 *     sub_14002AAF4 @ 0x14002AAF4 (sub_14002AAF4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14002ABEC(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  int v4; // eax

  if ( *a2 == 970609541 )
  {
    if ( a2[1] != 1133279571 || a2[2] != 580283010 )
      return 2147500034LL;
    v4 = -1196198878;
  }
  else
  {
    if ( *a2 != 1834041537 || a2[1] != 298742838 || a2[2] != -1442827136 )
      return 2147500034LL;
    v4 = -100048896;
  }
  if ( a2[3] != v4 )
    return 2147500034LL;
  *a3 = a1;
  return 0LL;
}
