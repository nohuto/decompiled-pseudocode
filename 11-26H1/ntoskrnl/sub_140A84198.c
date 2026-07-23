/*
 * XREFs of sub_140A84198 @ 0x140A84198
 * Callers:
 *     ExpDeleteSiloState @ 0x1406D10C4 (ExpDeleteSiloState.c)
 * Callees:
 *     sub_140A84308 @ 0x140A84308 (sub_140A84308.c)
 */

__int64 __fastcall sub_140A84198(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_140A84308(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
