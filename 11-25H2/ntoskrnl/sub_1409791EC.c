/*
 * XREFs of sub_1409791EC @ 0x1409791EC
 * Callers:
 *     ExpDeleteSiloState @ 0x1406497C4 (ExpDeleteSiloState.c)
 * Callees:
 *     sub_1409797D8 @ 0x1409797D8 (sub_1409797D8.c)
 */

__int64 __fastcall sub_1409791EC(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1409797D8(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
