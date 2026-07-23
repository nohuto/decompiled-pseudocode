/*
 * XREFs of MiZeroInflectionPointReached @ 0x140715A10
 * Callers:
 *     MiZeroPageCalibrateLastDpcProcessorDone @ 0x140716288 (MiZeroPageCalibrateLastDpcProcessorDone.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiZeroInflectionPointReached(__int64 a1)
{
  __int64 v1; // rbx
  char v3; // r11
  unsigned __int64 v4; // r10
  __int64 v5; // r13
  unsigned int v6; // r9d
  __int64 *v7; // rdi
  unsigned int v8; // esi
  int v9; // r14d
  int v10; // r15d
  unsigned __int64 v11; // r12
  __int64 v12; // rbp
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned __int64 v19; // rcx
  __int64 i; // rax
  bool v21; // zf
  unsigned __int64 v22; // rbp
  unsigned int *v23; // rbx
  int v24; // edx
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx

  v1 = *(int *)(a1 + 8);
  v3 = *(_BYTE *)(v1 + a1 + 46);
  if ( v3 == 3 )
    return 1LL;
  v4 = *(unsigned int *)(a1 + 192);
  v5 = *(_QWORD *)(a1 + 88);
  v6 = 0;
  v7 = (__int64 *)(v5 + 8 * v1);
  v8 = 0;
  v9 = 0;
  v10 = 1;
  v11 = *v7;
  if ( *(_DWORD *)(a1 + 28) )
  {
    if ( (unsigned int)v4 > 1 )
    {
      v19 = 0LL;
      for ( i = v5 + 16 * v4; i != v5; v19 += *(_QWORD *)(i + 8 * v1) )
        i -= 16LL;
      if ( v19 / v4 > v11 + v11 / 0xA )
      {
        v10 = 0;
        if ( (_DWORD)v4 == *(_DWORD *)(a1 + 40) )
          goto LABEL_32;
        v9 = 1;
        goto LABEL_29;
      }
    }
LABEL_31:
    *(_DWORD *)(a1 + 4 * v1 + 80) = v4;
    goto LABEL_32;
  }
  v12 = (unsigned int)(v4 - 1);
  v13 = *(_QWORD *)(v5 + 8 * (v1 + 2 * v12));
  if ( v13 > v11 + v11 / 0xA )
  {
    v10 = 0;
    if ( *(_DWORD *)(a1 + 36) > (unsigned int)v12 )
      *(_DWORD *)(a1 + 36) = v12;
    v18 = *(_DWORD *)(a1 + 32);
    v17 = ((v18 + v12) & 1) + ((v18 + (unsigned int)v12) >> 1);
    if ( v17 > v18 && v17 < (unsigned int)v4 )
      goto LABEL_13;
  }
  else
  {
    v14 = v13 | 1;
    if ( (_DWORD)v4 )
    {
      v15 = (unsigned int)v4;
      do
      {
        if ( !*v7 )
          *v7 = v14;
        v7 += 2;
        --v15;
      }
      while ( v15 );
    }
    if ( *(_DWORD *)(a1 + 32) < (unsigned int)v4 )
      *(_DWORD *)(a1 + 32) = v4;
    v16 = *(_DWORD *)(a1 + 36);
    v17 = ((v16 + v4 + 1) & 1) + ((v16 + (_DWORD)v4 + 1) >> 1);
    if ( v17 <= v16 && v17 > (unsigned int)v4 )
    {
LABEL_13:
      *(_DWORD *)(a1 + 192) = v17 - 1;
      goto LABEL_14;
    }
  }
  v8 = 1;
  LOBYTE(v9) = (_DWORD)v4 != *(_DWORD *)(a1 + 40);
LABEL_14:
  if ( v10 )
    goto LABEL_31;
  if ( !v9 )
    goto LABEL_32;
LABEL_29:
  v3 = *(_BYTE *)(v1 + a1 + 46);
  if ( (v3 & 2) == 0 )
  {
    v3 |= 2u;
    *(_BYTE *)(v1 + a1 + 46) = v3;
  }
LABEL_32:
  if ( !*(_DWORD *)(a1 + 28) )
  {
    if ( !v10 )
    {
      v21 = v9 == 0;
      goto LABEL_39;
    }
LABEL_37:
    *(_DWORD *)(a1 + 4 * v1 + 72) = v4;
    goto LABEL_42;
  }
  if ( (_DWORD)v4 == 1 || *(_QWORD *)(v5 + 8 * (v1 + 2 * v4) - 16) <= v11 + v11 / 7 )
    goto LABEL_37;
  v21 = (_DWORD)v4 == *(_DWORD *)(a1 + 40);
LABEL_39:
  if ( !v21 )
  {
    v3 = *(_BYTE *)(v1 + a1 + 46);
    if ( (v3 & 1) == 0 )
    {
      v3 |= 1u;
      *(_BYTE *)(v1 + a1 + 46) = v3;
    }
  }
LABEL_42:
  v22 = -1LL;
  v23 = (unsigned int *)(a1 + 72);
  v24 = 0;
  v25 = 0LL;
  do
  {
    v26 = *v23;
    if ( (_DWORD)v26 )
    {
      v27 = v25 + 2 * v26;
      if ( *(_QWORD *)(v5 + 8 * v27 - 16) < v22 )
      {
        v22 = *(_QWORD *)(v5 + 8 * v27 - 16);
        *(_BYTE *)(a1 + 44) = v24;
      }
    }
    ++v24;
    ++v25;
    ++v23;
  }
  while ( v24 <= 1 );
  if ( v3 == 3 )
    return 1LL;
  if ( !*(_DWORD *)(a1 + 28) )
    return v8;
  LOBYTE(v6) = (_DWORD)v4 == *(_DWORD *)(a1 + 40);
  return v6;
}
