/*
 * XREFs of sub_140909250 @ 0x140909250
 * Callers:
 *     sub_14090835C @ 0x14090835C (sub_14090835C.c)
 *     sub_14090863C @ 0x14090863C (sub_14090863C.c)
 *     sub_1409089F0 @ 0x1409089F0 (sub_1409089F0.c)
 *     sub_140908B00 @ 0x140908B00 (sub_140908B00.c)
 *     sub_140908DF4 @ 0x140908DF4 (sub_140908DF4.c)
 *     sub_140909110 @ 0x140909110 (sub_140909110.c)
 *     sub_1409E0B70 @ 0x1409E0B70 (sub_1409E0B70.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140909250(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( a1 )
  {
    if ( a2 )
      return a2 - *(_QWORD *)(a1 + 48);
    else
      LOBYTE(v2) = -1;
  }
  else
  {
    LOBYTE(v2) = a2 != 0;
  }
  return v2;
}
