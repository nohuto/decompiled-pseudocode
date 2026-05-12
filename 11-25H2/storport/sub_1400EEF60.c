/*
 * XREFs of sub_1400EEF60 @ 0x1400EEF60
 * Callers:
 *     sub_1400ED47C @ 0x1400ED47C (sub_1400ED47C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400EF2D0 @ 0x1400EF2D0 (sub_1400EF2D0.c)
 *     sub_1400F0DFC @ 0x1400F0DFC (sub_1400F0DFC.c)
 *     sub_1400F24C8 @ 0x1400F24C8 (sub_1400F24C8.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400EEF60(__int64 a1)
{
  unsigned int v1; // edi
  _DWORD *v3; // rsi
  unsigned int v4; // r14d
  unsigned int v5; // r12d
  unsigned int v6; // r13d
  char v7; // r15
  int v8; // ecx
  unsigned int v9; // ebp
  _DWORD *v10; // rax
  unsigned int v11; // edx
  unsigned int i; // ecx
  unsigned int j; // r10d
  unsigned int v14; // ecx
  unsigned __int64 v15; // r9
  __int64 v16; // rcx
  unsigned int v17; // edx
  unsigned int k; // ecx
  unsigned int v19; // r8d
  unsigned int m; // r8d
  __int64 v21; // rax
  unsigned __int16 v22; // cx
  unsigned int v23; // r11d
  unsigned int v24; // r10d
  unsigned int v25; // r8d
  unsigned int v26; // edx
  __int64 v27; // rax
  unsigned int v28; // r10d
  unsigned int v29; // eax
  unsigned __int16 v30; // dx
  __int64 v31; // rax

  v1 = 0;
  v3 = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( *(_BYTE *)(a1 + 1728) == 1 )
  {
    v8 = *(unsigned __int16 *)(a1 + 26);
    v5 = 4 * v8 + 8;
    v6 = 4 * *(unsigned __int16 *)(a1 + 22) + 8;
    if ( v5 <= v6 )
      v8 = *(unsigned __int16 *)(a1 + 22);
    v9 = 4 * v8 + 8;
    v10 = (_DWORD *)sub_1400143E0(256LL, v9, 1380147538LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
    v3 = v10;
    if ( !v10 )
      return (unsigned int)-1073741670;
    v4 = v9;
    if ( *(_DWORD *)(a1 + 908) > 1u )
    {
      *v10 = 1;
      v10[1] = *(unsigned __int16 *)(a1 + 26);
      if ( !(unsigned int)sub_1400F0DFC(a1, 2147483656LL, v5) )
      {
        v11 = *(unsigned __int16 *)(a1 + 26);
        for ( i = 0; i < v11; ++i )
        {
          if ( v3[i + 2] >= *(_DWORD *)(a1 + 908) )
            break;
        }
        if ( i == v11 )
          v7 = 1;
      }
    }
  }
  for ( j = 0; j < *(unsigned __int16 *)(a1 + 26); *(_QWORD *)(v16 + 24) = v15 )
  {
    v14 = *(_DWORD *)(a1 + 908);
    v15 = *(_QWORD *)(a1 + 864) + ((unsigned __int64)j << 7);
    if ( v14 == 1 )
    {
      v16 = *(_QWORD *)(a1 + 912) + 32LL * j;
    }
    else if ( v7 )
    {
      v16 = *(_QWORD *)(a1 + 912) + 32LL * (unsigned int)v3[j + 2];
    }
    else
    {
      v16 = *(_QWORD *)(a1 + 912) + 32LL * ((j + 1) % v14);
      if ( *(_BYTE *)(a1 + 1728) == 1 )
        v3[j + 2] = *(_DWORD *)v16;
    }
    ++j;
    *(_DWORD *)(v15 + 24) = *(_DWORD *)v16;
  }
  if ( *(_BYTE *)(a1 + 1728) != 1 )
    goto LABEL_31;
  sub_1400F24C8(a1, 2147483656LL, v5);
  memset_0(v3, 0, v4);
  *v3 = 1;
  v3[1] = *(unsigned __int16 *)(a1 + 22);
  if ( (unsigned int)sub_1400F0DFC(a1, 2147483655LL, v6) )
    goto LABEL_31;
  v17 = *(unsigned __int16 *)(a1 + 22);
  for ( k = 0; k < v17; ++k )
  {
    v19 = v3[k + 2];
    if ( !v19 )
      break;
    if ( v19 > *(unsigned __int16 *)(a1 + 26) )
      break;
  }
  if ( k == v17 )
  {
    for ( m = 0; m < *(unsigned __int16 *)(a1 + 22); *(_WORD *)(192 * v21 + *(_QWORD *)(a1 + 728) + 138) = v3[v21 + 2] )
      v21 = m++;
  }
  else
  {
LABEL_31:
    if ( (int)sub_1400EF2D0(a1) < 0 )
    {
      v22 = *(_WORD *)(a1 + 22);
      v23 = 0;
      v24 = 0;
      if ( v22 )
      {
        v25 = *(unsigned __int16 *)(a1 + 26);
        LOWORD(v26) = *(_WORD *)(a1 + 22);
        do
        {
          v22 = v26;
          if ( v24 >= v25 )
            break;
          v27 = v23++;
          *(_WORD *)(192 * v27 + *(_QWORD *)(a1 + 728) + 138) = *(_WORD *)(((unsigned __int64)v24 << 7)
                                                                         + *(_QWORD *)(a1 + 864)
                                                                         + 32);
          v26 = *(unsigned __int16 *)(a1 + 22);
          v25 = *(unsigned __int16 *)(a1 + 26);
          v22 = *(_WORD *)(a1 + 22);
          v24 = v24 + 1 < v25 ? v24 + 1 : 0;
        }
        while ( v23 < v26 );
      }
      v28 = 1;
      v29 = v22;
      while ( v23 < v29 )
      {
        v30 = v22;
        if ( v28 <= *(unsigned __int16 *)(a1 + 26) )
        {
          v31 = v23++;
          *(_WORD *)(192 * v31 + *(_QWORD *)(a1 + 728) + 138) = v28++;
          v30 = *(_WORD *)(a1 + 22);
        }
        v22 = v30;
        v29 = v30;
        if ( v28 >= *(unsigned __int16 *)(a1 + 26) )
          v28 = 1;
      }
    }
  }
  if ( *(_BYTE *)(a1 + 1728) == 1 )
    sub_1400F24C8(a1, 2147483655LL, v6);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x52436152u);
  return v1;
}
