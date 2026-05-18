/*
 * XREFs of sub_1800CA2EC @ 0x1800CA2EC
 * Callers:
 *     sub_1800CA0F0 @ 0x1800CA0F0 (sub_1800CA0F0.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 */

char *__fastcall sub_1800CA2EC(__int64 a1, _QWORD *a2)
{
  char *result; // rax
  char *v5; // rcx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // edx

  result = (char *)memset(a2 + 1, 0, 0x100uLL);
  *a2 = 0LL;
  if ( a2 + 1 != a2 + 33 )
  {
    v5 = (char *)a2 + 12;
    do
    {
      *((_DWORD *)v5 + 2) = 1;
      *((_DWORD *)v5 + 5) = 1;
      v5[24] = 15;
      *((_DWORD *)v5 + 3) = 2;
      *((_DWORD *)v5 + 4) = 1;
      v6 = *(_DWORD *)(a1 + 8);
      if ( v6 > 16 )
      {
        if ( v6 > 24 )
        {
          v25 = v6 - 25;
          if ( !v25 )
            goto LABEL_79;
          v26 = v25 - 1;
          if ( !v26 )
          {
            *(_DWORD *)v5 = 2;
            *((_DWORD *)v5 + 1) = 6;
LABEL_20:
            *((_DWORD *)v5 + 4) = 2;
            goto LABEL_82;
          }
          v27 = v26 - 1;
          if ( !v27 )
          {
LABEL_79:
            *((_DWORD *)v5 + 4) = 2;
LABEL_80:
            *((_DWORD *)v5 + 1) = 6;
            goto LABEL_81;
          }
          v28 = v27 - 1;
          if ( !v28 )
          {
            *(_DWORD *)v5 = 2;
LABEL_18:
            *((_DWORD *)v5 + 3) = 1;
LABEL_19:
            *((_DWORD *)v5 + 1) = 2;
            goto LABEL_20;
          }
          v29 = v28 - 1;
          if ( !v29 )
          {
            *((_DWORD *)v5 + 3) = 1;
            goto LABEL_45;
          }
          v30 = v29 - 1;
          if ( !v30 )
          {
            *(_DWORD *)v5 = 1;
            *((_DWORD *)v5 + 1) = 4;
            goto LABEL_20;
          }
          if ( v30 == 1 )
          {
            *(_DWORD *)v5 = 9;
            goto LABEL_63;
          }
        }
        else
        {
          if ( v6 == 24 )
          {
            *(_DWORD *)v5 = 2;
            *((_DWORD *)v5 + 1) = 17;
            goto LABEL_82;
          }
          v19 = v6 - 17;
          if ( !v19 )
          {
            *((_DWORD *)v5 + 1) = 1;
LABEL_47:
            *(_DWORD *)v5 = 2;
            *((_DWORD *)v5 + 4) = 2;
            *((_DWORD *)v5 + 5) = 5;
LABEL_82:
            *((_DWORD *)v5 - 1) = 1;
            goto LABEL_83;
          }
          v20 = v19 - 1;
          if ( !v20 )
          {
            *(_DWORD *)v5 = 2;
LABEL_63:
            *((_DWORD *)v5 + 1) = 1;
            goto LABEL_20;
          }
          v21 = v20 - 1;
          if ( !v21 )
          {
            *(_DWORD *)v5 = 1;
            *((_DWORD *)v5 + 1) = 1;
            goto LABEL_82;
          }
          v22 = v21 - 1;
          if ( !v22 )
            goto LABEL_22;
          v23 = v22 - 1;
          if ( !v23 )
          {
            *(_DWORD *)v5 = 1;
LABEL_28:
            *((_DWORD *)v5 + 3) = 8;
            goto LABEL_19;
          }
          v24 = v23 - 1;
          if ( !v24 )
          {
            *(_DWORD *)v5 = 1;
LABEL_26:
            *((_DWORD *)v5 + 3) = 7;
LABEL_23:
            *((_DWORD *)v5 + 1) = 6;
            goto LABEL_24;
          }
          if ( v24 == 1 )
          {
            *(_DWORD *)a2 = 1;
            *((_DWORD *)v5 + 3) = 2;
LABEL_58:
            *((_DWORD *)v5 + 4) = 6;
            goto LABEL_80;
          }
        }
      }
      else
      {
        if ( v6 == 16 )
        {
          *((_DWORD *)v5 + 1) = 2;
          *((_DWORD *)v5 + 2) = 5;
          goto LABEL_47;
        }
        if ( v6 > 8 )
        {
          v13 = v6 - 9;
          if ( !v13 )
          {
            *((_DWORD *)v5 + 3) = 5;
LABEL_45:
            *((_DWORD *)v5 + 1) = 2;
            *((_DWORD *)v5 + 4) = 2;
            goto LABEL_81;
          }
          v14 = v13 - 1;
          if ( !v14 )
          {
            *(_DWORD *)v5 = 2;
            goto LABEL_19;
          }
          v15 = v14 - 1;
          if ( !v15 )
          {
            *(_DWORD *)v5 = 2;
            *((_DWORD *)v5 + 1) = 4;
LABEL_24:
            *((_DWORD *)v5 + 4) = 6;
            goto LABEL_82;
          }
          v16 = v15 - 1;
          if ( !v16 )
          {
            *(_DWORD *)v5 = 1;
            *((_DWORD *)v5 + 3) = 1;
            goto LABEL_40;
          }
          v17 = v16 - 1;
          if ( !v17 )
          {
            *(_DWORD *)v5 = 9;
            *((_DWORD *)v5 + 3) = 7;
LABEL_40:
            *((_DWORD *)v5 + 1) = 3;
            *((_DWORD *)v5 + 4) = 5;
            goto LABEL_82;
          }
          v18 = v17 - 1;
          if ( !v18 )
          {
            *((_DWORD *)v5 + 1) = 15;
            *(_DWORD *)v5 = 14;
            *((_DWORD *)v5 + 3) = 14;
            *((_DWORD *)v5 + 4) = 15;
            goto LABEL_82;
          }
          if ( v18 == 1 )
          {
            *(_DWORD *)v5 = 2;
            *((_DWORD *)v5 + 1) = 2;
            *((_DWORD *)v5 + 2) = 4;
            *((_DWORD *)v5 + 4) = 2;
            *((_DWORD *)v5 + 5) = 4;
            goto LABEL_82;
          }
        }
        else
        {
          if ( v6 == 8 )
            goto LABEL_58;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( !v7 )
            {
              *(_DWORD *)v5 = 2;
              goto LABEL_23;
            }
            v8 = v7 - 1;
            if ( !v8 )
            {
              *(_DWORD *)v5 = 8;
              goto LABEL_28;
            }
            v9 = v8 - 1;
            if ( !v9 )
            {
              *(_DWORD *)v5 = 7;
              goto LABEL_26;
            }
            v10 = v9 - 1;
            if ( !v10 )
            {
              *((_DWORD *)v5 + 3) = 1;
LABEL_22:
              *(_DWORD *)v5 = 1;
              goto LABEL_23;
            }
            v11 = v10 - 1;
            if ( !v11 )
            {
              *(_DWORD *)v5 = 1;
              goto LABEL_18;
            }
            v12 = v11 - 1;
            if ( !v12 )
            {
              *(_DWORD *)v5 = 1;
              *((_DWORD *)v5 + 1) = 1;
              *((_DWORD *)v5 + 3) = 1;
              goto LABEL_82;
            }
            if ( v12 == 1 )
            {
              *((_DWORD *)v5 + 1) = 1;
LABEL_81:
              *(_DWORD *)v5 = 5;
              goto LABEL_82;
            }
          }
        }
      }
      *((_DWORD *)v5 - 1) = 0;
      *(_DWORD *)v5 = 2;
      *((_DWORD *)v5 + 1) = 1;
LABEL_83:
      v5 += 32;
      result = v5 - 4;
    }
    while ( v5 - 4 != (char *)(a2 + 33) );
  }
  return result;
}
