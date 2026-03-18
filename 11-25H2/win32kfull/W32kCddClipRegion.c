/*
 * XREFs of W32kCddClipRegion @ 0x140326C60
 * Callers:
 *     <none>
 * Callees:
 *     ??$IsBaseRustExportsEnabled@$00@@YA_NXZ @ 0x14009C598 (--$IsBaseRustExportsEnabled@$00@@YA_NXZ.c)
 */

__int64 __fastcall W32kCddClipRegion(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a2;
  v4 = *(_QWORD *)((a3 + 56) & -(__int64)(a3 != 0));
  v8 = (v4 + 24) & -(__int64)(v4 != 0);
  v7 = *a1;
  if ( !v7 || !a2 )
    return 0LL;
  v5 = RGNCOREOBJ::iCombine((RGNCOREOBJ *)&v7, (struct RGNCOREOBJ *)&v9, (struct RGNCOREOBJ *)&v8, 1);
  if ( !IsBaseRustExportsEnabled<1>() )
  {
    if ( v5 )
      *a1 = v7;
  }
  return v5;
}
