/*
 * XREFs of sub_140A7E328 @ 0x140A7E328
 * Callers:
 *     ExpDeleteSiloState @ 0x1406CD094 (ExpDeleteSiloState.c)
 * Callees:
 *     sub_140A7E498 @ 0x140A7E498 (sub_140A7E498.c)
 */

__int64 __fastcall sub_140A7E328(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_140A7E498(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
