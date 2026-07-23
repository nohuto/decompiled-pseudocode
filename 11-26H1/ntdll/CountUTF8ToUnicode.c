/*
 * XREFs of CountUTF8ToUnicode @ 0x1800266E0
 * Callers:
 *     RtlUTF8ToUnicodeN @ 0x1800261F0 (RtlUTF8ToUnicodeN.c)
 *     RtlUTF8StringToUnicodeString @ 0x1800DA800 (RtlUTF8StringToUnicodeString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CountUTF8ToUnicode(char *a1, int a2, _DWORD *a3)
{
  int v3; // r9d
  char *v4; // r11
  int v5; // r10d
  unsigned int v6; // ebx
  char *v8; // r8
  unsigned int v9; // edx
  unsigned int v10; // r9d
  unsigned int v11; // eax
  __int64 result; // rax
  unsigned __int64 v13; // r8
  unsigned int v14; // edx
  char v15; // r9
  int v16; // eax
  unsigned int v17; // r9d
  char v18; // dl

  v3 = 0;
  v4 = &a1[a2];
  v5 = a2;
  v6 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_2:
      v8 = a1;
      if ( a1 >= v4 )
      {
        if ( v3 )
        {
          v5 += (v3 >> 30) + 1;
          v6 = 263;
        }
        goto LABEL_14;
      }
      v9 = *a1++;
      if ( v3 )
        break;
      LOBYTE(v10) = v9;
      if ( v9 <= 0x7F )
        goto LABEL_5;
LABEL_8:
      --v5;
      if ( (v10 & 0x40) != 0 )
      {
        if ( (v10 & 0x20) != 0 )
        {
          v11 = v10 & 0xF;
          if ( (v10 & 0x10) != 0 )
          {
            if ( v11 > 4 )
              goto LABEL_28;
            v3 = v11 | 0x504D0C00;
            --v5;
          }
          else
          {
            v3 = v11 | 0x48228000;
            --v5;
          }
        }
        else
        {
          v17 = v10 & 0x1F;
          if ( v17 <= 1 )
            goto LABEL_28;
          v3 = v17 | 0x800000;
        }
      }
      else
      {
LABEL_28:
        v6 = 263;
        ++v5;
LABEL_29:
        v3 = 0;
      }
    }
    if ( (v9 & 0xC0) != 0x80 )
    {
      a1 = v8;
      v5 += v3 >> 30;
      goto LABEL_28;
    }
    v3 = (v3 << 6) | v9 & 0x3F;
    if ( (v3 & 0x20000000) != 0 )
      break;
    if ( (v3 & 0x10000000) != 0 )
    {
      if ( (v3 & 0x800000) == 0 && (v3 & 0x1F0u) - 16 > 0xF0 )
        goto LABEL_28;
    }
    else
    {
      if ( (v3 & 0x3E0) == 0 )
        goto LABEL_28;
      if ( (v3 & 0x3E0) == 0x360 )
      {
        ++v5;
        v6 = 263;
        v3 = 0;
      }
    }
  }
LABEL_5:
  if ( (unsigned __int64)(v4 - a1) > 0xD )
  {
    v13 = (unsigned __int64)(v4 - 7);
    while ( 1 )
    {
      do
      {
        if ( (unsigned __int64)a1 >= v13 )
          goto LABEL_29;
        v14 = *a1++;
        if ( v14 > 0x7F )
          break;
        if ( ((unsigned __int8)a1 & 1) != 0 )
        {
          v14 = *a1++;
          if ( v14 > 0x7F )
            break;
        }
        if ( ((unsigned __int8)a1 & 2) == 0 )
          goto LABEL_22;
        LOWORD(v14) = *(_WORD *)a1;
        if ( (*(_WORD *)a1 & 0x8080) == 0 )
        {
          a1 += 2;
LABEL_22:
          while ( (unsigned __int64)a1 < v13 )
          {
            v14 = *(_DWORD *)a1;
            if ( ((*((_DWORD *)a1 + 1) | *(_DWORD *)a1) & 0x80808080) != 0 )
              goto LABEL_30;
            a1 += 8;
            if ( (unsigned __int64)a1 >= v13 )
              break;
            v14 = *(_DWORD *)a1;
            if ( ((*((_DWORD *)a1 + 1) | *(_DWORD *)a1) & 0x80808080) != 0 )
              goto LABEL_30;
            a1 += 8;
          }
          goto LABEL_29;
        }
LABEL_30:
        ++a1;
      }
      while ( (unsigned __int8)v14 <= 0x7Fu );
      v15 = *a1++;
      if ( (v14 & 0x40) == 0 || (v15 & 0xC0) != 0x80 )
      {
LABEL_41:
        a1 -= 2;
        v3 = 0;
        goto LABEL_2;
      }
      if ( (v14 & 0x20) == 0 )
        break;
      if ( (v14 & 0x10) != 0 )
      {
        if ( ((v15 & 0x3F | ((v14 & 0xF) << 6)) >> 4) - 1 > 0xF )
          goto LABEL_41;
        v18 = *a1 & 0xC0;
        if ( v18 != (char)0x80 || (a1[1] & 0xC0) != v18 )
          goto LABEL_41;
        a1 += 2;
        v5 -= 2;
      }
      else
      {
        v16 = v15 & 0x20 | ((v14 & 0xF) << 6) & 0x3E0;
        if ( !v16 || v16 == 864 || (*a1 & 0xC0) != 0x80 )
          goto LABEL_41;
        ++a1;
        --v5;
LABEL_39:
        --v5;
      }
    }
    if ( (v14 & 0x1E) == 0 )
      goto LABEL_41;
    goto LABEL_39;
  }
  while ( a1 < v4 )
  {
    v10 = *a1++;
    if ( v10 > 0x7F )
      goto LABEL_8;
  }
LABEL_14:
  result = v6;
  *a3 = 2 * v5;
  return result;
}
