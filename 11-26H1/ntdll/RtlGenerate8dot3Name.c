/*
 * XREFs of RtlGenerate8dot3Name @ 0x1801012F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsUtf8Process @ 0x1800832B0 (RtlpIsUtf8Process.c)
 *     GetNextWchar @ 0x180120C84 (GetNextWchar.c)
 *     RtlComputeLfnChecksum @ 0x180120F34 (RtlComputeLfnChecksum.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlGenerate8dot3Name(unsigned __int16 *a1, char a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  bool v8; // cl
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r14d
  __int16 i; // ax
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // esi
  unsigned __int16 NextWchar; // cx
  unsigned int v18; // esi
  unsigned __int16 v19; // cx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  unsigned int v23; // r9d
  unsigned __int16 v24; // ax
  int v25; // r10d
  unsigned __int16 v26; // r11
  unsigned int v27; // esi
  char v28; // r13
  __int64 v29; // rax
  char v30; // cl
  __int16 v31; // r8
  _WORD *v32; // r15
  __int64 v33; // r12
  __int16 v34; // ax
  __int64 v35; // rcx
  unsigned __int16 v36; // cx
  int v37; // eax
  unsigned int v38; // edx
  unsigned int v39; // ecx
  __int64 v40; // r8
  _WORD *v41; // r9
  __int16 v42; // ax
  unsigned __int16 v43; // cx
  unsigned int v44; // r8d
  int v45; // eax
  unsigned __int16 v47; // ax
  unsigned __int16 v48; // r10
  __int16 v49; // dx
  __int64 v50; // rax
  __int16 v51; // dx
  int v52; // eax
  signed __int32 v53[8]; // [rsp+0h] [rbp-60h] BYREF
  char v54; // [rsp+20h] [rbp-40h]
  unsigned int v55; // [rsp+24h] [rbp-3Ch] BYREF
  __int64 v56; // [rsp+28h] [rbp-38h]
  unsigned int v57; // [rsp+30h] [rbp-30h] BYREF
  __int64 v58; // [rsp+38h] [rbp-28h]
  _WORD v59[8]; // [rsp+40h] [rbp-20h] BYREF

  v4 = 0;
  v58 = a4;
  v56 = 0LL;
  if ( !RtlpIsUtf8Process() )
  {
    _InterlockedOr(v53, 0);
    v8 = word_1801C5FDC != 0;
    v56 = qword_1801C5FF8;
  }
  if ( !a2 || (v54 = 1, !v8) )
    v54 = 0;
  if ( !*(_BYTE *)(v9 + 3) )
  {
    v55 = 0;
    v11 = -1;
    if ( !*a1 || (LOBYTE(v9) = 1, **((_WORD **)a1 + 1) != 46) )
      LOBYTE(v9) = 0;
    LOBYTE(v10) = a2;
    for ( i = GetNextWchar(a1, &v55, v9, v10); i; i = GetNextWchar(a1, &v55, 0LL, v14) )
    {
      LOBYTE(v14) = a2;
      if ( i == 46 )
        v11 = v55;
    }
    v15 = *a1 >> 1;
    v55 = 0;
    *(_BYTE *)(a3 + 3) = 0;
    if ( v11 == v15 )
      v11 = -1;
    v16 = 0;
    v57 = v11;
    while ( 1 )
    {
      LOBYTE(v14) = a2;
      LOBYTE(v13) = 1;
      NextWchar = GetNextWchar(a1, &v55, v13, v14);
      if ( !NextWchar || v55 >= v11 || *(_BYTE *)(a3 + 3) >= 6u )
        break;
      if ( v54 )
      {
        if ( NextWchar <= 0x7Fu || (v52 = 2, !*(_BYTE *)(v56 + 2LL * NextWchar + 1)) )
          v52 = 1;
        v16 += v52;
        if ( v16 > 6 )
          goto LABEL_15;
      }
      *(_WORD *)(a3 + 2LL * (unsigned __int8)(*(_BYTE *)(a3 + 3))++ + 4) = NextWchar;
    }
    if ( !v54 )
      v16 = *(unsigned __int8 *)(a3 + 3);
LABEL_15:
    if ( v16 <= 2 )
    {
      v47 = RtlComputeLfnChecksum(a1);
      *(_WORD *)a3 = v47;
      v48 = v47;
      LODWORD(v13) = 0;
      do
      {
        v49 = 48;
        if ( (v48 & 0xFu) > 9 )
          v49 = 55;
        v50 = (unsigned int)v13 + *(unsigned __int8 *)(a3 + 3);
        v51 = (v48 & 0xF) + v49;
        v48 >>= 4;
        v13 = (unsigned int)(v13 + 1);
        *(_WORD *)(a3 + 2 * v50 + 4) = v51;
      }
      while ( (unsigned int)v13 < 4 );
      *(_BYTE *)(a3 + 3) += 4;
      *(_BYTE *)(a3 + 2) = 1;
    }
    if ( v11 == -1 )
    {
      *(_DWORD *)(a3 + 20) = 0;
    }
    else
    {
      v18 = 1;
      *(_WORD *)(a3 + 24) = 46;
      LOBYTE(v13) = 1;
      *(_DWORD *)(a3 + 20) = 1;
      LOBYTE(v14) = a2;
      v19 = GetNextWchar(a1, &v57, v13, v14);
      if ( v19 )
      {
        while ( *(_DWORD *)(a3 + 20) < 4u )
        {
          if ( !v54 )
            goto LABEL_84;
          if ( v19 <= 0x7Fu || (v22 = 2, !*(_BYTE *)(v56 + 2LL * v19 + 1)) )
            v22 = 1;
          v18 += v22;
          if ( v18 <= 4 )
          {
LABEL_84:
            LOBYTE(v21) = a2;
            LOBYTE(v20) = 1;
            *(_WORD *)(a3 + 2LL * (unsigned int)(*(_DWORD *)(a3 + 20))++ + 24) = v19;
            v19 = GetNextWchar(a1, &v57, v20, v21);
            if ( v19 )
              continue;
          }
          if ( !v19 )
            goto LABEL_26;
          break;
        }
        *(_WORD *)(a3 + 2LL * (unsigned int)(*(_DWORD *)(a3 + 20) - 1) + 24) = 126;
      }
    }
  }
LABEL_26:
  v23 = *(_DWORD *)(a3 + 32) + 1;
  *(_DWORD *)(a3 + 32) = v23;
  if ( v23 > 4 && !*(_BYTE *)(a3 + 2) )
  {
    v24 = RtlComputeLfnChecksum(a1);
    *(_WORD *)a3 = v24;
    v26 = v24;
    if ( 2 - v25 < (unsigned int)(6 - v25) )
    {
      v40 = 4LL;
      v41 = (_WORD *)(a3 + 2 * ((unsigned int)(2 - v25) + 2LL));
      do
      {
        v42 = 48;
        v43 = v26 & 0xF;
        if ( v43 > 9u )
          v42 = 55;
        v26 >>= 4;
        *v41++ = v43 + v42;
        --v40;
      }
      while ( v40 );
    }
    *(_DWORD *)(a3 + 32) = 1;
    *(_BYTE *)(a3 + 3) = 6 - v25;
    v23 = 1;
    *(_BYTE *)(a3 + 2) = 1;
  }
  v27 = 1;
  v28 = 1;
  do
  {
    if ( !v23 )
      break;
    v29 = 8 - v27++;
    v30 = 0;
    v31 = v23 % 0xA + 48;
    v23 /= 0xAu;
    v59[v29] = v31;
    if ( v31 == 57 )
      v30 = v28;
    v28 = v30;
  }
  while ( v27 <= 7 );
  v32 = &v59[8 - v27];
  *v32 = 126;
  if ( *(_BYTE *)(a3 + 3) && *(_BYTE *)(a3 + 3) <= 0xCu )
  {
    v33 = v58;
    memmove(*(void **)(v58 + 8), (const void *)(a3 + 4), 2LL * *(unsigned __int8 *)(a3 + 3));
    v35 = *(unsigned __int8 *)(a3 + 3);
    v34 = 2 * *(unsigned __int8 *)(a3 + 3);
  }
  else
  {
    v33 = v58;
    v34 = 0;
    v35 = 0LL;
  }
  *(_WORD *)v33 = v34;
  memmove((void *)(*(_QWORD *)(v33 + 8) + 2 * v35), v32, 2 * v27);
  v36 = *(_WORD *)v33 + 2 * v27;
  *(_WORD *)v33 = v36;
  v37 = *(_DWORD *)(a3 + 20);
  if ( v37 )
  {
    memmove(
      (void *)(*(_QWORD *)(v33 + 8) + 2 * ((unsigned __int64)v36 >> 1)),
      (const void *)(a3 + 24),
      (unsigned int)(2 * v37));
    *(_WORD *)v33 += 2 * *(_WORD *)(a3 + 20);
  }
  if ( !v28 )
    return 0LL;
  v38 = *(unsigned __int8 *)(a3 + 3);
  if ( v54 )
  {
    v39 = 0;
    v44 = 0;
    if ( (_BYTE)v38 )
    {
      do
      {
        if ( *(_WORD *)(a3 + 2LL * v39 + 4) <= 0x7Fu
          || (v45 = 2, !*(_BYTE *)(v56 + 2LL * *(unsigned __int16 *)(a3 + 2LL * v39 + 4) + 1)) )
        {
          v45 = 1;
        }
        v44 += v45;
        if ( v44 > 7 - v27 )
          break;
        ++v39;
      }
      while ( v39 < v38 );
    }
  }
  else
  {
    LOBYTE(v39) = v38 - 1;
  }
  *(_BYTE *)(a3 + 3) = v39;
  if ( !(_BYTE)v39 )
    return (unsigned int)-1073740761;
  return v4;
}
