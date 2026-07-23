/*
 * XREFs of AslpFileVerBlockGetValueOffset @ 0x1404DFE9C
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x140894F58 (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileVerStringBlockGetValue @ 0x1408956B4 (AslpFileVerStringBlockGetValue.c)
 *     AslpFileVerQueryBlock @ 0x1409D7CBC (AslpFileVerQueryBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslpFileVerBlockGetValueOffset(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  _WORD *v4; // rax
  unsigned __int64 v5; // rdx
  __int64 result; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx

  *a1 = 0LL;
  if ( (unsigned __int64)(a3 - 8) > 0x7FF7 )
    return 3221225485LL;
  v4 = (_WORD *)(a2 + 6);
  v5 = (unsigned __int64)(a3 - 6) >> 1;
  if ( !v4 || v5 > 0x7FFFFFFF )
    return 3221225485LL;
  v7 = (unsigned __int64)(a3 - 6) >> 1;
  if ( v5 )
  {
    do
    {
      if ( !*v4 )
        break;
      ++v4;
      --v7;
    }
    while ( v7 );
  }
  result = v7 == 0 ? 0xC000000D : 0;
  if ( v7 )
    v8 = v5 - v7;
  else
    v8 = 0LL;
  if ( v7 )
  {
    if ( 2 * v8 + 8 < 2 * v8 )
    {
      return 3221225621LL;
    }
    else
    {
      *a1 = (2 * v8 + 11) & 0xFFFFFFFFFFFFFFFCuLL;
      return 0LL;
    }
  }
  return result;
}
