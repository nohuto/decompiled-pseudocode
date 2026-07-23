/*
 * XREFs of EtwpCreatePerfectHashFunction @ 0x140AA3308
 * Callers:
 *     EtwpAllocateFilter @ 0x140AA2CB4 (EtwpAllocateFilter.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwpFillPerfectHashTable @ 0x140AA352C (EtwpFillPerfectHashTable.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpCreatePerfectHashFunction(char a1, _WORD *a2, unsigned __int16 a3, __int64 *a4)
{
  unsigned __int8 v4; // bl
  __int64 v5; // r14
  __int64 *v6; // r13
  unsigned __int16 v8; // r10
  char v9; // si
  int v10; // ecx
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // r15
  char i; // r8
  unsigned __int16 v14; // r11
  _WORD *v15; // rax
  __int64 v16; // rcx
  _WORD *v17; // r9
  __int64 v18; // rdi
  __int64 v19; // rcx
  char v20; // cl
  unsigned __int16 v21; // r9
  unsigned __int16 v22; // ax
  unsigned __int16 v23; // di
  __int64 Pool2; // rax
  __int64 v25; // rcx
  __int16 v28; // [rsp+34h] [rbp-254h] BYREF
  __int64 *v29; // [rsp+38h] [rbp-250h]
  _BYTE v30[2]; // [rsp+40h] [rbp-248h] BYREF
  _DWORD v31[127]; // [rsp+42h] [rbp-246h] BYREF

  v4 = 0;
  v5 = a3;
  v6 = a4;
  v29 = a4;
  v8 = 0;
  v28 = 0;
  v9 = 0;
  v10 = a3 - 1;
  v11 = 1;
  v12 = 63;
  if ( v10 > 1 )
  {
    do
      v11 = (2 * v11) | 1;
    while ( v11 < v10 );
    if ( v11 > 0x40u )
      return 3221225473LL;
  }
  do
  {
    for ( i = 0; (unsigned __int8)i < 0x10u; ++i )
    {
      v14 = 0;
      v15 = v31;
      v16 = 128LL;
      do
      {
        *v15 = -1;
        v15 += 2;
        --v16;
      }
      while ( v16 );
      if ( (_WORD)v5 )
      {
        v17 = a2;
        v18 = v5;
        do
        {
          v19 = (unsigned __int16)(v11 & __ROR2__(*v17, i));
          if ( LOWORD(v31[v19]) == 0xFFFF )
          {
            ++v14;
            LOWORD(v31[v19]) = *v17;
          }
          ++v17;
          --v18;
        }
        while ( v18 );
        v6 = v29;
      }
      v20 = i;
      v21 = v11;
      if ( v14 <= v8 )
      {
        v20 = v9;
        v21 = v12;
      }
      v22 = v14;
      v9 = v20;
      if ( v14 <= v8 )
        v22 = v8;
      v12 = v21;
      v8 = v22;
      if ( v14 == (_WORD)v5 )
        goto LABEL_18;
    }
    v11 = (2 * v11) | 1;
  }
  while ( v11 <= 0x40u );
LABEL_18:
  if ( !v8 )
    return 3221225473LL;
  LOBYTE(a3) = v9;
  v23 = EtwpFillPerfectHashTable((_DWORD)a2, (unsigned __int16)v5, a3, v12, (__int64)v30, (__int64)&v28);
  Pool2 = ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 3221225495LL;
  *(_BYTE *)(Pool2 + 1) = v9;
  *(_WORD *)(Pool2 + 2) = v12;
  *(_WORD *)(Pool2 + 4) = v23;
  *(_BYTE *)Pool2 = a1 != 0;
  if ( v23 )
  {
    do
    {
      v25 = v4++;
      *(_DWORD *)(Pool2 + 4 * v25 + 6) = *(_DWORD *)&v30[4 * v25];
    }
    while ( v4 < v23 );
  }
  *v6 = Pool2;
  return 0LL;
}
