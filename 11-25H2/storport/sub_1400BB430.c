/*
 * XREFs of sub_1400BB430 @ 0x1400BB430
 * Callers:
 *     sub_1400B6558 @ 0x1400B6558 (sub_1400B6558.c)
 *     sub_1400B9670 @ 0x1400B9670 (sub_1400B9670.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400BB430(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  _BYTE *v5; // rax
  __int64 v6; // r8
  __int64 result; // rax
  _BYTE *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r10
  char v12; // r8
  _BYTE *v13; // rax

  v4 = 351LL;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  v6 = (351 - v4) & -(__int64)(v4 != 0);
  result = v4 == 0 ? 0x80070057 : 0;
  if ( v4 )
  {
    v8 = &a1[v6];
    v9 = 351 - v6;
    if ( 351 != v6 )
    {
      v10 = 2147483646LL;
      v11 = a3 - (_QWORD)v8;
      do
      {
        if ( !v10 )
          break;
        v12 = v8[v11];
        if ( !v12 )
          break;
        *v8 = v12;
        --v10;
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    v13 = v8 - 1;
    if ( v9 )
      v13 = v8;
    *v13 = 0;
    return v9 == 0 ? 0x8007007A : 0;
  }
  return result;
}
