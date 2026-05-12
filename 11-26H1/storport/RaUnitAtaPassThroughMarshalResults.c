/*
 * XREFs of RaUnitAtaPassThroughMarshalResults @ 0x14003C600
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x140055654 (RaUnitAtaPassThroughIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitAtaPassThroughMarshalResults(__int64 a1, unsigned __int16 *a2, char a3, __int64 a4)
{
  _BYTE *v4; // r11
  unsigned __int8 v5; // bl
  int v9; // eax
  char v10; // al
  char v11; // cl
  _BYTE *v12; // r8
  unsigned __int8 v13; // r9
  unsigned __int8 v14; // al
  unsigned __int8 v15; // r9
  unsigned __int8 v16; // al
  __int64 i; // r11
  __int64 result; // rax
  char v19; // si
  unsigned int v20; // ebp
  __int64 v21; // rdi
  __int64 v22; // rcx
  unsigned __int64 v23; // r9
  __int64 v24; // r8
  int v25; // ecx
  int v26; // ecx
  unsigned __int8 v27; // cl
  __int64 v28; // rcx
  _BYTE v29[8]; // [rsp+30h] [rbp+18h]

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
    goto LABEL_38;
  v20 = *(_DWORD *)(a1 + 56);
  v21 = 0LL;
  if ( !v20 )
    goto LABEL_38;
  while ( 1 )
  {
    v22 = *(unsigned int *)(a1 + 4 * v21 + 120);
    if ( (unsigned int)v22 >= 0x80 )
    {
      v23 = *(unsigned int *)(a1 + 16);
      if ( (unsigned int)v22 < (unsigned int)v23 )
        break;
    }
LABEL_41:
    v21 = (unsigned int)(v21 + 1);
    if ( (unsigned int)v21 >= v20 )
      goto LABEL_38;
  }
  v24 = (unsigned int)v22;
  v25 = *(_DWORD *)(v22 + a1) - 64;
  if ( !v25 )
  {
    if ( v24 + 40 <= v23 )
    {
      v4 = *(_BYTE **)(v24 + a1 + 16);
      goto LABEL_40;
    }
    goto LABEL_37;
  }
  v26 = v25 - 1;
  if ( !v26 )
  {
    if ( v24 + 56 <= v23 )
    {
      v4 = *(_BYTE **)(v24 + a1 + 16);
      v19 = 1;
      v5 = *(_BYTE *)(v24 + a1 + 9);
    }
LABEL_37:
    if ( v19 )
      goto LABEL_38;
    goto LABEL_41;
  }
  if ( v26 != 1 || v24 + 40 > v23 )
    goto LABEL_37;
  v4 = *(_BYTE **)(v24 + a1 + 24);
LABEL_40:
  v5 = *(_BYTE *)(v24 + a1 + 9);
LABEL_38:
  v9 = *(_DWORD *)(a1 + 60);
LABEL_3:
  *((_DWORD *)a2 + 2) = v9;
  if ( *(char *)(a1 + 3) < 0 && v4 )
  {
    *((_QWORD *)a2 + 5) = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    v10 = *v4 & 0x7F;
    if ( v10 == 114 || v10 == 115 )
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
            v29[0] = 9;
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
                      v27 = v12[1] + 2;
                      if ( v13 <= v27 )
                        goto LABEL_28;
                      v12 += v27;
                      v13 -= v27;
                      goto LABEL_17;
                    }
                    if ( *v12 == v29[i] )
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
    else if ( (unsigned __int8)(v10 - 112) <= 1u && v5 >= 0xCu )
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
LABEL_28:
  if ( a3 != 1 && (a2[1] & 2) != 0 && (v28 = *((_QWORD *)a2 + 3)) != 0 )
    result = v28 + *((unsigned int *)a2 + 2);
  else
    result = *a2;
  *(_QWORD *)(a4 + 8) = result;
  *(_DWORD *)a4 = 0;
  return result;
}
