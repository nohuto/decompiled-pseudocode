/*
 * XREFs of ExpComputeLookasideDepth @ 0x140428A30
 * Callers:
 *     ExpScanSystemLookasideList @ 0x14042894C (ExpScanSystemLookasideList.c)
 *     ?ExpScanProcessorLookasideLists@@YAXKK@Z @ 0x140AD80F8 (-ExpScanProcessorLookasideLists@@YAXKK@Z.c)
 *     ?ExpScanSystemLookasideLists@@YAXK@Z @ 0x140B8761C (-ExpScanSystemLookasideLists@@YAXK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpComputeLookasideDepth(__int64 a1, int a2, int a3)
{
  unsigned int v4; // r10d
  signed int v5; // ebx
  __int64 result; // rax
  unsigned int v7; // r8d
  __int16 v8; // r9
  unsigned int v9; // kr00_4
  unsigned int v10; // edx

  v4 = *(_DWORD *)(a1 + 20) - *(_DWORD *)(a1 + 80);
  v5 = *(unsigned __int16 *)(a1 + 18);
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 20);
  result = 0xFFFFLL;
  if ( (_WORD)v5 != 0xFFFF )
  {
    v7 = *(unsigned __int16 *)(a1 + 16);
    result = (unsigned int)(25 * a3);
    if ( v4 >= (unsigned int)result )
    {
      result = 1000 * a2 / v4;
      if ( (unsigned int)result >= 5 )
      {
        v9 = result * (v5 - v7);
        result = 30LL;
        v10 = v9 / 0x7D0 + 5;
        if ( v10 > 0x1E )
          v10 = 30;
        v8 = v10 + v7;
        if ( (int)(v10 + v7) > v5 )
          v8 = v5;
      }
      else
      {
        v8 = v7 - 1;
        if ( v7 < 5 )
        {
          *(_WORD *)(a1 + 16) = 4;
          return result;
        }
      }
    }
    else
    {
      v8 = v7 - 10;
      if ( v7 < 0xE )
        v8 = 4;
    }
    *(_WORD *)(a1 + 16) = v8;
  }
  return result;
}
