/*
 * XREFs of sub_140004780 @ 0x140004780
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400042C0 @ 0x1400042C0 (sub_1400042C0.c)
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_140005320 @ 0x140005320 (sub_140005320.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_140004780(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 result; // rax
  char v5; // r9
  _BYTE *v6; // r13
  __int64 v7; // rdi
  _QWORD *v8; // r12
  _BYTE *v9; // rdx
  unsigned int *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r15
  unsigned int *v14; // r14
  __int64 v15; // rbp
  char *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // ecx
  char v21; // al
  char v22; // cl
  char *v23; // rsi
  char v24; // al
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  char v27; // al
  char v28; // cl
  _BYTE *v30; // [rsp+78h] [rbp+10h]

  v2 = a1;
  result = sub_140005000(a2);
  v5 = *(_BYTE *)(a2 + 2);
  v6 = 0LL;
  v7 = result;
  v8 = (_QWORD *)(result + 4160);
  v9 = *(_BYTE **)(result + 4160);
  v30 = v9;
  if ( v5 == 40 )
  {
    if ( !*(_DWORD *)(a2 + 20) )
    {
      result = *(unsigned int *)(a2 + 56);
      if ( (_DWORD)result )
      {
        v10 = (unsigned int *)(a2 + 120);
        v11 = (unsigned int)result;
        do
        {
          result = *v10;
          if ( (unsigned int)result >= 0x80 && (unsigned int)result <= *(_DWORD *)(a2 + 16) )
          {
            v12 = a2 + result;
            result = (unsigned int)(*(_DWORD *)(a2 + result) - 64);
            if ( (_DWORD)result )
            {
              result = (unsigned int)(result - 1);
              if ( (_DWORD)result )
              {
                if ( (_DWORD)result == 1 )
                {
                  result = *(unsigned int *)(v12 + 12);
                  v25 = (_BYTE *)(v12 + 32);
                  if ( !(_DWORD)result )
                    v25 = v6;
                  v6 = v25;
                }
              }
              else
              {
                result = *(unsigned __int8 *)(v12 + 10);
                v26 = (_BYTE *)(v12 + 24);
                if ( !(_BYTE)result )
                  v26 = v6;
                v6 = v26;
              }
            }
            else if ( *(_BYTE *)(v12 + 10) )
            {
              v6 = (_BYTE *)(v12 + 24);
            }
          }
          ++v10;
          --v11;
        }
        while ( v11 );
        v9 = v30;
      }
    }
  }
  else if ( !v5 && *(_BYTE *)(a2 + 10) )
  {
    v6 = (_BYTE *)(a2 + 72);
  }
  v13 = *(_QWORD *)(v2 + 1560);
  v14 = 0LL;
  LODWORD(v15) = 0;
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    if ( v5 == 40 )
    {
      v16 = *(char **)(a2 + 64);
      v17 = 60LL;
    }
    else
    {
      v16 = *(char **)(a2 + 24);
      v17 = 16LL;
    }
    v14 = (unsigned int *)(a2 + v17);
    v18 = *(unsigned int *)(a2 + v17);
    if ( (v18 & 3) != 0 )
    {
      if ( !(_DWORD)v18 )
        goto LABEL_18;
      sub_140032C80(v16, 0LL, v18);
    }
    else
    {
      v19 = (unsigned int)v18 >> 2;
      if ( !v19 )
      {
LABEL_18:
        v20 = *v14;
        if ( *v6 == 26 )
        {
          v16[1] = 0;
          v21 = 23;
          v15 = 4LL;
          if ( v20 < 0x18 )
            v21 = 15;
          v22 = v16[2] | 0x10;
          v16[2] = v22;
          *v16 = v21;
          if ( (*v9 & 8) != 0 )
            v16[2] = v22 | 0x80;
        }
        else
        {
          *v16 = 0;
          v27 = 26;
          v16[2] = 0;
          v15 = 8LL;
          if ( v20 < 0x1C )
            v27 = 18;
          v16[1] = v27;
          v28 = v16[3] | 0x10;
          v16[3] = v28;
          if ( (*v9 & 8) != 0 )
            v16[3] = v28 | 0x80;
        }
        v23 = &v16[v15];
        v24 = *v23;
        v23[2] &= 0xFAu;
        v23[1] = 10;
        *v23 = v24 & 0x40 | 8;
        v2 = a1;
        result = sub_140005320(a1, a2, v9, 14LL);
        goto LABEL_24;
      }
      sub_140032C80(v16, 0LL, 4LL * v19);
    }
    v9 = v30;
    goto LABEL_18;
  }
LABEL_24:
  if ( v8 )
  {
    if ( *v8 )
    {
      result = *(_QWORD *)(v7 + 4168);
      if ( result )
      {
        result = StorPortExtendedFunction(83LL, v2, *v8, *(unsigned int *)(v7 + 4208));
        if ( !(_DWORD)result )
          *v8 = 0LL;
      }
    }
  }
  *(_DWORD *)(v7 + 4208) = 0;
  *(_QWORD *)(v7 + 4200) = 0LL;
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    if ( (*(_BYTE *)(v13 + 525) & 1) != 0 )
    {
      *(_BYTE *)(a2 + 3) = 0;
      *(_BYTE *)(v7 + 4225) = *(_BYTE *)(v7 + 4225) & 0xF8 | 1;
      sub_1400042C0(v2, a2);
      *(_QWORD *)(v7 + 4096) = 0LL;
      *(_QWORD *)(v7 + 4104) = 0LL;
      *(_QWORD *)(v7 + 4112) = 0LL;
      *(_QWORD *)(v7 + 4120) = 0LL;
      *(_QWORD *)(v7 + 4128) = 0LL;
      *(_QWORD *)(v7 + 4136) = 0LL;
      *(_QWORD *)(v7 + 4144) = 0LL;
      *(_QWORD *)(v7 + 4152) = 0LL;
      *(_BYTE *)(v7 + 4096) = 10;
      *(_BYTE *)(v7 + 4136) = 6;
      *(_QWORD *)(v7 + 4192) = sub_140005A30;
      return sub_1400092F0(v2, a2);
    }
    result = (unsigned int)(v15 + 20);
    if ( *v14 < (unsigned __int64)(unsigned int)v15 + 20 )
      result = (unsigned int)(v15 + 12);
    *v14 = result;
  }
  *(_BYTE *)(v7 + 4225) |= 8u;
  return result;
}
