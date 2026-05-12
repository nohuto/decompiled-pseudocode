/*
 * XREFs of sub_1400A1E68 @ 0x1400A1E68
 * Callers:
 *     sub_14009EB0C @ 0x14009EB0C (sub_14009EB0C.c)
 *     sub_14017CD1C @ 0x14017CD1C (sub_14017CD1C.c)
 * Callees:
 *     sub_14017BD1C @ 0x14017BD1C (sub_14017BD1C.c)
 */

__int64 __fastcall sub_1400A1E68(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8

  if ( (*(_BYTE *)(a1 + 24) & 4) == 0 )
  {
    if ( *(_QWORD *)a1 )
    {
      v3 = *(_QWORD *)a1 + 16LL;
      goto LABEL_7;
    }
    return 3221225485LL;
  }
  v2 = *(_QWORD *)(a1 + 48);
  if ( !v2 )
    return 3221225485LL;
  v3 = v2 + 25;
LABEL_7:
  sub_14017BD1C(a2, 17LL, v3);
  return 0LL;
}
