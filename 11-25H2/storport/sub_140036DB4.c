/*
 * XREFs of sub_140036DB4 @ 0x140036DB4
 * Callers:
 *     sub_14004E0E8 @ 0x14004E0E8 (sub_14004E0E8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140036DB4(__int64 a1, unsigned __int16 *a2, char a3, __int64 a4)
{
  _BYTE *v4; // r11
  unsigned __int8 v5; // bl
  int v9; // eax
  char v10; // cl
  char v11; // di
  _BYTE *v12; // r8
  unsigned __int8 v13; // r9
  unsigned __int8 v14; // al
  unsigned __int8 v15; // r9
  unsigned __int8 v16; // al
  __int64 i; // r11
  __int64 result; // rax
  char v19; // bp
  unsigned int v20; // r14d
  unsigned int v21; // esi
  unsigned int *v22; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // r9
  unsigned __int8 v25; // cl
  __int64 v26; // rcx
  _BYTE v27[8]; // [rsp+38h] [rbp+18h]

  v4 = 0LL;
  v5 = 0;
  if ( *(_BYTE *)(a1 + 2) != 40 )
  {
    v4 = *(_BYTE **)(a1 + 32);
    v5 = *(_BYTE *)(a1 + 11);
    v9 = *(_DWORD *)(a1 + 16);
    goto LABEL_3;
  }
  v19 = 0;
  if ( *(_DWORD *)(a1 + 20) )
    goto LABEL_39;
  v20 = *(_DWORD *)(a1 + 56);
  v21 = 0;
  if ( !v20 )
    goto LABEL_39;
  v22 = (unsigned int *)(a1 + 120);
  while ( 1 )
  {
    v23 = *v22;
    if ( (unsigned int)v23 >= 0x80 )
    {
      v24 = *(unsigned int *)(a1 + 16);
      if ( (unsigned int)v23 < (unsigned int)v24 )
        break;
    }
LABEL_42:
    ++v21;
    ++v22;
    if ( v21 >= v20 )
      goto LABEL_39;
  }
  if ( *(_DWORD *)(v23 + a1) == 64 )
  {
    if ( v23 + 40 <= v24 )
    {
      v4 = *(_BYTE **)(v23 + a1 + 16);
      goto LABEL_41;
    }
    goto LABEL_38;
  }
  if ( *(_DWORD *)(v23 + a1) == 65 )
  {
    if ( v23 + 56 <= v24 )
    {
      v4 = *(_BYTE **)(v23 + a1 + 16);
      v19 = 1;
      v5 = *(_BYTE *)(v23 + a1 + 9);
    }
LABEL_38:
    if ( v19 )
      goto LABEL_39;
    goto LABEL_42;
  }
  if ( *(_DWORD *)(v23 + a1) != 66 || v23 + 40 > v24 )
    goto LABEL_38;
  v4 = *(_BYTE **)(v23 + a1 + 24);
LABEL_41:
  v5 = *(_BYTE *)(v23 + a1 + 9);
LABEL_39:
  v9 = *(_DWORD *)(a1 + 60);
LABEL_3:
  *((_DWORD *)a2 + 2) = v9;
  if ( *(char *)(a1 + 3) < 0 && v4 )
  {
    *((_QWORD *)a2 + 5) = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    v10 = *v4 & 0x7F;
    if ( (unsigned __int8)(v10 - 114) > 1u )
    {
      if ( (unsigned __int8)(v10 - 112) <= 1u && v5 >= 0xCu )
      {
        *((_BYTE *)a2 + 40) = v4[3];
        *((_BYTE *)a2 + 41) = v4[6];
        *((_BYTE *)a2 + 42) = v4[11];
        *((_BYTE *)a2 + 43) = v4[10];
        *((_BYTE *)a2 + 44) = v4[9];
        *((_BYTE *)a2 + 45) = v4[5];
        *((_BYTE *)a2 + 46) = v4[4];
        goto LABEL_26;
      }
    }
    else
    {
      v11 = 0;
      if ( v5 )
      {
        v12 = 0LL;
        v13 = 0;
        if ( (unsigned __int8)(v10 - 114) <= 1u )
        {
          if ( v4 + 8 <= &v4[v5] )
          {
            v14 = v4[7];
            if ( v14 <= 0xF7u )
            {
              v15 = v5;
              v16 = v14 + 8;
              if ( v16 <= v5 )
                v15 = v16;
              v13 = v15 - 8;
              if ( v13 )
              {
                v12 = v4 + 8;
                v11 = 1;
              }
            }
          }
          if ( v11 )
          {
            v27[0] = 9;
            if ( v12 )
            {
              if ( v13 )
              {
LABEL_17:
                if ( v13 >= 2u )
                {
                  for ( i = 0LL; ; i = 1LL )
                  {
                    if ( (_DWORD)i )
                    {
                      v25 = v12[1] + 2;
                      if ( v13 <= v25 )
                        goto LABEL_28;
                      v12 += v25;
                      v13 -= v25;
                      goto LABEL_17;
                    }
                    if ( *v12 == v27[i] )
                      break;
                  }
                  if ( v13 < 0xEu || !v12 )
                    goto LABEL_28;
                  *((_BYTE *)a2 + 40) = v12[3];
                  *((_BYTE *)a2 + 41) = v12[5];
                  *((_BYTE *)a2 + 42) = v12[7];
                  *((_BYTE *)a2 + 43) = v12[9];
                  *((_BYTE *)a2 + 44) = v12[11];
                  *((_BYTE *)a2 + 45) = v12[12];
                  *((_BYTE *)a2 + 46) = v12[13];
                  if ( (v12[2] & 1) != 0 )
                  {
                    *((_BYTE *)a2 + 33) = v12[4];
                    *((_BYTE *)a2 + 34) = v12[6];
                    *((_BYTE *)a2 + 35) = v12[8];
                    *((_BYTE *)a2 + 36) = v12[10];
                  }
LABEL_26:
                  if ( (*(_BYTE *)(a1 + 3) & 0x3F) == 0xE )
                  {
                    *((_BYTE *)a2 + 46) = 65;
                    *((_BYTE *)a2 + 40) = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_28:
  if ( a3 != 1 && (a2[1] & 2) != 0 && (v26 = *((_QWORD *)a2 + 3)) != 0 )
    result = v26 + *((unsigned int *)a2 + 2);
  else
    result = *a2;
  *(_QWORD *)(a4 + 8) = result;
  *(_DWORD *)a4 = 0;
  return result;
}
