/*
 * XREFs of sub_14017BAE8 @ 0x14017BAE8
 * Callers:
 *     sub_140012624 @ 0x140012624 (sub_140012624.c)
 *     sub_1400D6CBC @ 0x1400D6CBC (sub_1400D6CBC.c)
 * Callees:
 *     sub_14017BB40 @ 0x14017BB40 (sub_14017BB40.c)
 */

__int64 __fastcall sub_14017BAE8(__int64 a1, _DWORD *a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // r8d

  v4 = 0;
  if ( *a2 == 176 || *a2 == 208 && (a2[46] & 1) != 0 )
    *(_BYTE *)(a1 + 248) |= 8u;
  if ( a4 && *a4 )
    return (unsigned int)sub_14017BB40(a1 + 8, *a4, (unsigned int)a2[19]);
  return v4;
}
