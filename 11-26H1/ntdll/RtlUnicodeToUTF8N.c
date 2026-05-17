/*
 * XREFs of RtlUnicodeToUTF8N @ 0x180034960
 * Callers:
 *     UpcaseUnicodeToUTF8NHelper @ 0x1800339A0 (UpcaseUnicodeToUTF8NHelper.c)
 *     RtlxUnicodeStringToOemSize @ 0x180033B60 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeToMultiByteSize @ 0x180034070 (RtlUnicodeToMultiByteSize.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x180034130 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUnicodeStringToAnsiString @ 0x1800344C0 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeToCustomCPN @ 0x180034800 (RtlUnicodeToCustomCPN.c)
 *     RtlUnicodeToMultiByteN @ 0x180036220 (RtlUnicodeToMultiByteN.c)
 *     RtlUnicodeStringToUTF8String @ 0x18014A4F0 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeToUTF8N(_BYTE *a1, int a2, _DWORD *a3, unsigned int *a4, unsigned int a5)
{
  unsigned int v5; // edi
  unsigned int v6; // r10d
  int v8; // r11d
  unsigned int *v9; // rbx
  _BYTE *v10; // rbp
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 result; // rax
  unsigned int *v17; // r10
  unsigned int v18; // edx
  unsigned int v19; // r8d
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // edx
  char v23; // dl
  _BYTE *v24; // rcx
  int v25; // r8d

  v5 = 0;
  v6 = 0;
  v8 = (int)a1;
  if ( !a4 )
    return 3221225714LL;
  if ( !a1 )
  {
    if ( a3 )
      return CountUnicodeToUTF8(a4, a5);
    else
      return 3221225485LL;
  }
  if ( (a5 & 1) != 0 )
    return 3221225715LL;
  v9 = (unsigned int *)((char *)a4 + 2 * ((unsigned __int64)a5 >> 1));
  v10 = &a1[a2];
  while ( 1 )
  {
    do
    {
LABEL_5:
      if ( a4 >= v9 )
      {
        if ( !v6 )
          goto LABEL_21;
        break;
      }
      v11 = *(unsigned __int16 *)a4;
      if ( v6 )
      {
        if ( (unsigned int)(v11 - 56320) <= 0x3FF )
        {
          v6 = v11 + (v6 << 10) - 56613888;
          a4 = (unsigned int *)((char *)a4 + 2);
        }
        break;
      }
      v6 = *(unsigned __int16 *)a4;
      a4 = (unsigned int *)((char *)a4 + 2);
LABEL_8:
      ;
    }
    while ( v6 - 55296 <= 0x3FF );
    if ( v6 - 55296 <= 0x7FF )
    {
      v5 = 263;
      v6 = 65533;
LABEL_11:
      v12 = (v6 > 0xFFFF) + 2LL;
LABEL_12:
      v13 = v12 + 1;
      goto LABEL_14;
    }
    v13 = 1LL;
    if ( v6 > 0x7F )
    {
      v12 = 1LL;
      if ( v6 <= 0x7FF )
        goto LABEL_12;
      goto LABEL_11;
    }
LABEL_14:
    if ( a1 > &v10[-v13] )
      break;
    if ( v6 > 0x7F )
    {
      if ( v6 <= 0x7FF )
      {
        *a1++ = (v6 >> 6) | 0xC0;
        LOBYTE(v6) = v6 & 0x3F | 0x80;
      }
      else
      {
        v22 = v6 >> 12;
        if ( v6 > 0xFFFF )
        {
          *a1++ = (v6 >> 18) | 0xF0;
          v23 = v22 & 0x3F | 0x80;
        }
        else
        {
          v23 = v22 | 0xE0;
        }
        *a1 = v23;
        v24 = a1 + 1;
        *v24 = (v6 >> 6) & 0x3F | 0x80;
        a1 = v24 + 1;
        LOBYTE(v6) = v6 & 0x3F | 0x80;
      }
    }
    *a1++ = v6;
    v14 = ((char *)v9 - (char *)a4) >> 1;
    v15 = v10 - a1;
    if ( v14 > 0xD )
    {
      if ( v15 < v14 )
        v14 = v10 - a1;
      v17 = (unsigned int *)((char *)a4 + 2 * v14 - 10);
LABEL_26:
      while ( a4 < v17 )
      {
        v18 = *(unsigned __int16 *)a4;
        a4 = (unsigned int *)((char *)a4 + 2);
        if ( v18 <= 0x7F )
        {
          *a1++ = v18;
          if ( ((unsigned __int8)a4 & 2) == 0 )
            goto LABEL_29;
          v18 = *(unsigned __int16 *)a4;
          a4 = (unsigned int *)((char *)a4 + 2);
          if ( v18 <= 0x7F )
          {
            *a1++ = v18;
LABEL_29:
            while ( a4 < v17 )
            {
              v19 = a4[1];
              v18 = *a4;
              if ( ((*a4 | v19) & 0xFF80FF80) != 0 )
              {
                v18 = (unsigned __int16)v18;
                a4 = (unsigned int *)((char *)a4 + 2);
                if ( (unsigned __int16)v18 > 0x7Fu )
                  goto LABEL_41;
                *a1++ = v18;
                goto LABEL_26;
              }
              *a1 = v18;
              a4 += 2;
              a1[2] = v19;
              a1[1] = BYTE2(v18);
              a1[3] = BYTE2(v19);
              a1 += 4;
            }
            break;
          }
        }
LABEL_41:
        if ( v18 > 0x7FF )
        {
          if ( v18 - 55296 <= 0x7FF )
          {
            if ( v18 > 0xDBFF )
            {
              a4 = (unsigned int *)((char *)a4 - 2);
              break;
            }
            v25 = *(unsigned __int16 *)a4;
            a4 = (unsigned int *)((char *)a4 + 2);
            if ( (unsigned int)(v25 - 56320) > 0x3FF )
            {
              --a4;
              v6 = 0;
              goto LABEL_5;
            }
            v18 = v25 + (v18 << 10) - 56613888;
            *a1++ = (v18 >> 18) | 0xF0;
            v21 = v18 & 0x3F000 | 0x80000;
          }
          else
          {
            v21 = v18 | 0xE0000;
          }
          v17 = (unsigned int *)((char *)v17 - 2);
          *a1++ = v21 >> 12;
          v20 = v18 & 0xFC0 | 0x2000;
        }
        else
        {
          v20 = v18 | 0x3000;
        }
        *a1 = v20 >> 6;
        v17 = (unsigned int *)((char *)v17 - 2);
        a1[1] = v18 & 0x3F | 0x80;
        a1 += 2;
      }
    }
    else if ( v15 >= v14 )
    {
      while ( a4 < v9 )
      {
        v6 = *(unsigned __int16 *)a4;
        a4 = (unsigned int *)((char *)a4 + 2);
        if ( v6 > 0x7F )
          goto LABEL_8;
        *a1++ = v6;
      }
LABEL_21:
      result = v5;
      goto LABEL_22;
    }
    v6 = 0;
  }
  result = 3221225507LL;
LABEL_22:
  *a3 = (_DWORD)a1 - v8;
  return result;
}
