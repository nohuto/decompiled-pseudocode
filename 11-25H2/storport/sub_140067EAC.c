/*
 * XREFs of sub_140067EAC @ 0x140067EAC
 * Callers:
 *     sub_14005B208 @ 0x14005B208 (sub_14005B208.c)
 *     sub_14005B648 @ 0x14005B648 (sub_14005B648.c)
 *     sub_14005DB44 @ 0x14005DB44 (sub_14005DB44.c)
 *     sub_140185324 @ 0x140185324 (sub_140185324.c)
 *     sub_14018576C @ 0x14018576C (sub_14018576C.c)
 *     sub_140185CF0 @ 0x140185CF0 (sub_140185CF0.c)
 *     sub_140185F6C @ 0x140185F6C (sub_140185F6C.c)
 *     sub_140186130 @ 0x140186130 (sub_140186130.c)
 *     sub_1401867AC @ 0x1401867AC (sub_1401867AC.c)
 *     sub_140186AFC @ 0x140186AFC (sub_140186AFC.c)
 *     sub_140186D04 @ 0x140186D04 (sub_140186D04.c)
 *     sub_1401870D8 @ 0x1401870D8 (sub_1401870D8.c)
 *     sub_1401873E4 @ 0x1401873E4 (sub_1401873E4.c)
 *     sub_1401875C8 @ 0x1401875C8 (sub_1401875C8.c)
 *     sub_1401879D4 @ 0x1401879D4 (sub_1401879D4.c)
 *     sub_140187C38 @ 0x140187C38 (sub_140187C38.c)
 *     sub_140188328 @ 0x140188328 (sub_140188328.c)
 *     sub_14018852C @ 0x14018852C (sub_14018852C.c)
 *     sub_140188720 @ 0x140188720 (sub_140188720.c)
 *     sub_140188988 @ 0x140188988 (sub_140188988.c)
 *     sub_140188B8C @ 0x140188B8C (sub_140188B8C.c)
 *     sub_140188EAC @ 0x140188EAC (sub_140188EAC.c)
 *     sub_1401891B4 @ 0x1401891B4 (sub_1401891B4.c)
 *     sub_1401896FC @ 0x1401896FC (sub_1401896FC.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140067EAC(unsigned __int16 a1, _DWORD *a2)
{
  char v2; // r8
  int v3; // eax

  v2 = 1;
  v3 = a1 >> 1;
  switch ( (unsigned __int8)v3 )
  {
    case 0xC5u:
      goto LABEL_9;
    case 0xC6u:
    case 0xC7u:
      *a2 = -2147483210;
      return v2;
    case 0xC8u:
LABEL_9:
      *a2 = -2147483599;
      return v2;
  }
  if ( (unsigned __int8)v3 != 201 )
    return 0;
  *a2 = -1073741790;
  return v2;
}
