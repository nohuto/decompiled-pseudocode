/*
 * XREFs of CountUTF8ToUnicode @ 0x1404ACA70
 * Callers:
 *     RtlUTF8StringToUnicodeString @ 0x14080EE00 (RtlUTF8StringToUnicodeString.c)
 *     RtlUTF8ToUnicodeN @ 0x14097DB50 (RtlUTF8ToUnicodeN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CountUTF8ToUnicode(char *a1, int a2, _DWORD *a3)
{
  int v3; // r9d
  char *v4; // rbx
  unsigned int v5; // r11d
  char *v7; // r10
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  __int64 result; // rax
  unsigned __int64 v11; // r10
  unsigned int v12; // r8d
  char v13; // al
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  unsigned int v17; // eax
  int v18; // r8d
  char v19; // r8
  unsigned int v20; // r9d

  v3 = 0;
  v4 = &a1[a2];
  v5 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = a1;
        if ( a1 >= v4 )
        {
          if ( v3 )
          {
            a2 += (v3 >> 30) + 1;
            v5 = 263;
          }
          goto LABEL_12;
        }
        v8 = *a1++;
        if ( v3 )
          break;
        v9 = v8;
LABEL_5:
        if ( v9 <= 0x7F )
          goto LABEL_6;
        --a2;
        if ( (v9 & 0x40) == 0 )
          goto LABEL_49;
        if ( (v9 & 0x20) != 0 )
        {
          v17 = v9 & 0xF;
          if ( (v9 & 0x10) != 0 )
          {
            if ( v17 > 4 )
              goto LABEL_49;
            v18 = 1347226624;
          }
          else
          {
            v18 = 1210220544;
          }
          --a2;
          v3 = v18 | v17;
        }
        else
        {
          v20 = v9 & 0x1F;
          if ( v20 <= 1 )
            goto LABEL_49;
          v3 = v20 | 0x800000;
        }
      }
      if ( (v8 & 0xC0) != 0x80 )
      {
        a1 = v7;
        a2 += v3 >> 30;
LABEL_49:
        v5 = 263;
        ++a2;
        goto LABEL_26;
      }
      v3 = (v3 << 6) | v8 & 0x3F;
      if ( (v3 & 0x20000000) != 0 )
        break;
      if ( (v3 & 0x10000000) != 0 )
      {
        if ( (v3 & 0x800000) == 0 && (v3 & 0x1F0u) - 16 > 0xF0 )
          goto LABEL_49;
      }
      else if ( (v3 & 0x3E0) == 0 || (v3 & 0x3E0) == 0x360 )
      {
        goto LABEL_49;
      }
    }
LABEL_6:
    if ( (unsigned __int64)(v4 - a1) <= 0xD )
      break;
    v11 = (unsigned __int64)(v4 - 7);
    while ( (unsigned __int64)a1 < v11 )
    {
      v12 = *a1++;
      if ( v12 <= 0x7F )
      {
        if ( ((unsigned __int8)a1 & 1) == 0 || (v12 = *a1, ++a1, v12 <= 0x7F) )
        {
          if ( ((unsigned __int8)a1 & 2) == 0 )
            goto LABEL_20;
          LOWORD(v12) = *(_WORD *)a1;
          if ( (*(_WORD *)a1 & 0x8080) == 0 )
          {
            a1 += 2;
LABEL_20:
            while ( (unsigned __int64)a1 < v11 )
            {
              v12 = *(_DWORD *)a1;
              if ( ((*((_DWORD *)a1 + 1) | *(_DWORD *)a1) & 0x80808080) != 0 )
                goto LABEL_27;
              a1 += 8;
              if ( (unsigned __int64)a1 >= v11 )
                break;
              v12 = *(_DWORD *)a1;
              if ( ((*((_DWORD *)a1 + 1) | *(_DWORD *)a1) & 0x80808080) != 0 )
                goto LABEL_27;
              a1 += 8;
            }
            break;
          }
LABEL_27:
          ++a1;
          if ( (unsigned __int8)v12 <= 0x7Fu )
            continue;
        }
      }
      v13 = *a1++;
      if ( (v12 & 0x40) == 0 || (v13 & 0xC0) != 0x80 )
      {
LABEL_25:
        a1 -= 2;
        break;
      }
      if ( (v12 & 0x20) != 0 )
      {
        v14 = v13 & 0x3F | ((v12 & 0xF) << 6);
        if ( (v12 & 0x10) != 0 )
        {
          if ( (v14 >> 4) - 1 > 0xF )
            goto LABEL_25;
          v19 = *a1 & 0xC0;
          if ( v19 != (char)0x80 || (a1[1] & 0xC0) != v19 )
            goto LABEL_25;
          v16 = 2LL;
        }
        else
        {
          v15 = v14 & 0x3E0;
          if ( !v15 || v15 == 864 || (*a1 & 0xC0) != 0x80 )
            goto LABEL_25;
          v16 = 1LL;
        }
        --a2;
        a1 += v16;
      }
      else if ( (v12 & 0x1E) == 0 )
      {
        goto LABEL_25;
      }
      --a2;
    }
LABEL_26:
    v3 = 0;
  }
  while ( a1 < v4 )
  {
    v9 = *a1++;
    if ( v9 > 0x7F )
      goto LABEL_5;
  }
LABEL_12:
  result = v5;
  *a3 = 2 * a2;
  return result;
}
