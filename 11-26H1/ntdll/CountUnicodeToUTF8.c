/*
 * XREFs of CountUnicodeToUTF8 @ 0x18001FE70
 * Callers:
 *     RtlUnicodeToUTF8N @ 0x18001FAC0 (RtlUnicodeToUTF8N.c)
 *     RtlUnicodeStringToUTF8String @ 0x18014A3A0 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CountUnicodeToUTF8(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // r10d
  unsigned int *v6; // r11
  unsigned int v7; // r9d
  unsigned int v8; // eax
  unsigned __int64 v9; // rax
  __int64 result; // rax
  unsigned int *v11; // r9
  unsigned int v12; // edx
  unsigned int v13; // r8d
  int v14; // eax
  unsigned int v15; // r8d
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // eax
  unsigned int v20; // edx

  v3 = 0;
  v5 = a2 >> 1;
  v6 = (unsigned int *)((char *)a1 + 2 * ((unsigned __int64)a2 >> 1));
LABEL_2:
  v7 = 0;
  while ( a1 < v6 )
  {
    if ( v7 )
    {
      ++v5;
      if ( (unsigned int)*(unsigned __int16 *)a1 - 56320 <= 0x3FF )
      {
        v7 = 65533;
        a1 = (unsigned int *)((char *)a1 + 2);
      }
LABEL_7:
      if ( v7 - 55296 <= 0x7FF )
      {
        v3 = 263;
        v7 = 65533;
        goto LABEL_9;
      }
      if ( v7 > 0x7F )
      {
LABEL_9:
        v8 = v5 + 1;
        if ( v7 <= 0x7FF )
          v8 = v5;
        v5 = v8 + 1;
      }
      v9 = ((char *)v6 - (char *)a1) >> 1;
      if ( v9 <= 0xD )
      {
        while ( a1 < v6 )
        {
          v7 = *(unsigned __int16 *)a1;
          a1 = (unsigned int *)((char *)a1 + 2);
          if ( v7 > 0x7F )
            goto LABEL_6;
        }
        goto LABEL_18;
      }
      v11 = (unsigned int *)((char *)a1 + 2 * v9 - 14);
LABEL_20:
      while ( 2 )
      {
        if ( a1 >= v11 )
          goto LABEL_2;
        v12 = *(unsigned __int16 *)a1;
        a1 = (unsigned int *)((char *)a1 + 2);
        if ( v12 <= 0x7F )
        {
LABEL_22:
          if ( ((unsigned __int8)a1 & 2) == 0
            || (v12 = *(unsigned __int16 *)a1, a1 = (unsigned int *)((char *)a1 + 2), v12 <= 0x7F) )
          {
            while ( 1 )
            {
LABEL_23:
              if ( a1 >= v11 )
                goto LABEL_2;
              v13 = a1[1];
              v12 = *a1;
              v14 = *a1 | v13;
              if ( (v14 & 0xFF80FF80) != 0 )
              {
                if ( (v14 & 0xF800F800) != 0 )
                  goto LABEL_28;
                v19 = v5 + 1;
                if ( (v12 & 0xFF800000) == 0 )
                  v19 = v5;
                v20 = v19 + 1;
                if ( (*a1 & 0xFF80) == 0 )
                  v20 = v19;
                v5 = v20 + 1;
                if ( (v13 & 0xFF800000) == 0 )
                  v5 = v20;
                if ( (v13 & 0xFF80) != 0 )
                  ++v5;
              }
              v15 = a1[3];
              a1 += 2;
              v12 = *a1;
              v16 = *a1 | v15;
              if ( (v16 & 0xFF80FF80) != 0 )
              {
                if ( (v16 & 0xF800F800) != 0 )
                {
LABEL_28:
                  v12 = (unsigned __int16)v12;
                  a1 = (unsigned int *)((char *)a1 + 2);
                  if ( (unsigned __int16)v12 > 0x7Fu )
                    goto LABEL_29;
                  goto LABEL_20;
                }
                v17 = v5 + 1;
                if ( (v12 & 0xFF800000) == 0 )
                  v17 = v5;
                v18 = v17 + 1;
                if ( (*a1 & 0xFF80) == 0 )
                  v18 = v17;
                v5 = v18 + 1;
                if ( (v15 & 0xFF800000) == 0 )
                  v5 = v18;
                if ( (v15 & 0xFF80) != 0 )
                  ++v5;
              }
              a1 += 2;
            }
          }
          if ( v12 <= 0x7FF )
            goto LABEL_56;
          if ( (v12 & 0xF800) != 0xD800 )
          {
            ++v5;
LABEL_56:
            ++v5;
            goto LABEL_23;
          }
LABEL_30:
          if ( v12 - 55296 <= 0x7FF )
          {
            if ( v12 > 0xDBFF || (unsigned int)*(unsigned __int16 *)a1 - 56320 > 0x3FF )
            {
              a1 = (unsigned int *)((char *)a1 - 2);
              goto LABEL_2;
            }
            a1 = (unsigned int *)((char *)a1 + 2);
          }
          ++v5;
LABEL_32:
          ++v5;
          continue;
        }
        break;
      }
      if ( (unsigned __int16)v12 > 0x7FFu )
      {
        if ( (v12 & 0xF800) == 0xD800 )
        {
LABEL_29:
          if ( v12 > 0x7FF )
            goto LABEL_30;
          goto LABEL_32;
        }
        ++v5;
      }
      ++v5;
      goto LABEL_22;
    }
    v7 = *(unsigned __int16 *)a1;
    a1 = (unsigned int *)((char *)a1 + 2);
LABEL_6:
    if ( v7 - 55296 > 0x3FF )
      goto LABEL_7;
    --v5;
  }
  if ( v7 )
  {
    ++v5;
    goto LABEL_7;
  }
LABEL_18:
  result = v3;
  *a3 = v5;
  return result;
}
