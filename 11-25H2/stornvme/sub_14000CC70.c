/*
 * XREFs of sub_14000CC70 @ 0x14000CC70
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_140006540 @ 0x140006540 (sub_140006540.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_140021AB0 @ 0x140021AB0 (sub_140021AB0.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_14000CC70(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rbp
  _BYTE *v6; // r12
  _DWORD *v7; // rdi
  char *v8; // r15
  unsigned int v9; // eax
  unsigned int v10; // eax
  char v11; // al
  unsigned __int8 v12; // dl
  unsigned int v13; // r9d
  __int64 v14; // r8
  char v15; // al
  char v16; // al
  int v17; // eax
  _DWORD *v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // r8d
  int v21; // eax
  int v22; // r8d
  int v23; // eax
  unsigned __int8 i; // dl
  __int64 v25; // r8
  char *v26; // r9
  char v27; // al
  __int64 result; // rax
  char v29; // [rsp+50h] [rbp+8h]

  v4 = sub_140005000(a2);
  v5 = *(_QWORD *)(a1 + 1560);
  v6 = *(_BYTE **)(v4 + 4160);
  if ( *(_BYTE *)(v3 + 2) == 40 )
    v7 = *(_DWORD **)(v3 + 64);
  else
    v7 = *(_DWORD **)(v3 + 24);
  v8 = (char *)v7 + (unsigned int)v7[11];
  if ( *(_BYTE *)(v3 + 3) == 1 )
  {
    if ( *(_DWORD *)v8 != 2 || (v29 = 1, *((_DWORD *)v8 + 1) < 0x18u) )
      v29 = 0;
    v9 = v7[12];
    if ( (v9 & 3) != 0 )
    {
      if ( v9 )
        sub_140032C80(v8, 0LL, (unsigned int)v7[12]);
    }
    else
    {
      v10 = v9 >> 2;
      if ( v10 )
        sub_140032C80(v8, 0LL, 4LL * v10);
    }
    if ( !v29 )
    {
      *(_DWORD *)v8 = 1;
      *((_DWORD *)v8 + 1) = 16;
      v8[8] = (*(_BYTE *)(v5 + 256) & 4) != 0;
      v8[9] = (*(_BYTE *)(v5 + 260) >> 1) & 7;
      v8[10] = *v6 & 7;
      v11 = -1;
      if ( ((*v6 >> 4) & 7) != 0 )
        v11 = (*v6 >> 4) & 7;
      v12 = 0;
      v8[11] = v11;
      while ( 1 )
      {
        v13 = *(unsigned __int8 *)(v5 + 260);
        if ( v12 >= (unsigned __int8)(((unsigned __int8)v13 >> 1) & 7) )
          break;
        v14 = v12;
        if ( (unsigned int)v7[12] < 16 * ((unsigned __int64)v12 + 2) )
          goto LABEL_38;
        v8[16 * v12 + 16] = v12 + 1;
        if ( v12 )
          v15 = 0;
        else
          v15 = *(_BYTE *)(v5 + 260) & 1;
        v8[16 * v12++ + 17] = v15;
        *(_QWORD *)&v8[16 * (unsigned int)v14 + 24] = *(_QWORD *)&v6[8 * v14 + 8];
      }
LABEL_39:
      v7[5] = 0;
      goto LABEL_40;
    }
    *(_DWORD *)v8 = 2;
    *((_DWORD *)v8 + 1) = 24;
    v8[8] = (*(_BYTE *)(v5 + 256) & 4) != 0;
    v8[9] = (*(_BYTE *)(v5 + 260) >> 1) & 7;
    v8[10] = *v6 & 7;
    v16 = -1;
    if ( ((*v6 >> 4) & 7) != 0 )
      v16 = (*v6 >> 4) & 7;
    v8[11] = v16;
    v8[12] = 1;
    v17 = sub_140021AB0(a1);
    v18 = (_DWORD *)a1;
    if ( v17 )
    {
      *((_DWORD *)v8 + 4) = v17;
      v19 = sub_140006540((_DWORD *)a1);
      if ( v19 % v20 )
      {
        v21 = sub_140006540(v18);
        v23 = v21 - v22;
        goto LABEL_31;
      }
    }
    else
    {
      *((_DWORD *)v8 + 4) = 4;
    }
    v23 = sub_140006540(v18);
LABEL_31:
    *((_DWORD *)v8 + 5) = v23;
    for ( i = 0; ; ++i )
    {
      v13 = *(unsigned __int8 *)(v5 + 260);
      if ( i >= (unsigned __int8)(((unsigned __int8)v13 >> 1) & 7) )
        break;
      v25 = i;
      if ( (unsigned int)v7[12] < 16 * ((unsigned __int64)i + 2) )
      {
LABEL_38:
        v7[12] = 16 * (((v13 >> 1) & 7) + 1);
        v7[5] = 5;
        goto LABEL_40;
      }
      v26 = &v8[24 * i];
      v26[24] = i + 1;
      if ( i )
        v27 = 0;
      else
        v27 = *(_BYTE *)(v5 + 260) & 1;
      v26[25] = v27;
      *((_QWORD *)v26 + 4) = *(_QWORD *)&v6[8 * v25 + 8];
    }
    goto LABEL_39;
  }
  v7[5] = 1;
LABEL_40:
  result = sub_14000CF50(a1, *(unsigned int *)(v4 + 4208), v4 + 4160, *(_QWORD *)(v4 + 4168));
  *(_BYTE *)(v4 + 4225) |= 8u;
  *(_DWORD *)(v4 + 4208) = 0;
  return result;
}
