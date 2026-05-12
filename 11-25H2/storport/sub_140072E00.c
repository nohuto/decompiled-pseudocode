/*
 * XREFs of sub_140072E00 @ 0x140072E00
 * Callers:
 *     sub_1400750D4 @ 0x1400750D4 (sub_1400750D4.c)
 *     sub_140127AAC @ 0x140127AAC (sub_140127AAC.c)
 * Callees:
 *     sub_1400731C4 @ 0x1400731C4 (sub_1400731C4.c)
 */

bool __fastcall sub_140072E00(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( !(unsigned __int8)sub_1400731C4(a1, a1) || (unsigned int)(*(_DWORD *)(v2 + 8) - 1) > 7 )
    return 0;
  v3 = *(_QWORD *)(v2 + 16) - 0x481F895FDCAF9C10LL;
  if ( !v3 )
    v3 = *(_QWORD *)(v1 + 24) - 0x3356F5D2CED492A4LL;
  return !v3;
}
