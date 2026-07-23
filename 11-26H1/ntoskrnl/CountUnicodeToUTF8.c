/*
 * XREFs of CountUnicodeToUTF8 @ 0x14047E5B8
 * Callers:
 *     RtlUnicodeStringToUTF8String @ 0x14080EF10 (RtlUnicodeStringToUTF8String.c)
 *     RtlUnicodeToUTF8N @ 0x14097D620 (RtlUnicodeToUTF8N.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CountUnicodeToUTF8(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r10d
  unsigned __int64 v4; // rax
  unsigned int *v6; // r9
  unsigned int v7; // edx
  unsigned __int64 v8; // rbx
  unsigned int v9; // ecx
  unsigned __int64 v10; // rax
  __int64 result; // rax
  unsigned int *v12; // r11
  unsigned int v13; // ecx
  unsigned int v14; // r8d
  int v15; // eax
  unsigned int v16; // r8d
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // ecx
  char v20; // r8
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned int *v24; // rax

  v3 = 0;
  v4 = (unsigned __int64)a2 >> 1;
  v6 = a1;
  v7 = a2 >> 1;
  v8 = (unsigned __int64)a1 + 2 * v4;
LABEL_2:
  v9 = 0;
  while ( (unsigned __int64)v6 < v8 )
  {
    if ( v9 )
    {
      ++v7;
      if ( (unsigned int)*(unsigned __int16 *)v6 - 56320 > 0x3FF )
      {
        v20 = 0;
      }
      else
      {
        v20 = 1;
        v9 = 65533;
      }
      v24 = (unsigned int *)((char *)v6 + 2);
      if ( !v20 )
        v24 = v6;
      v6 = v24;
LABEL_7:
      if ( v9 - 55296 <= 0x7FF )
      {
        v9 = 65533;
        v3 = 263;
      }
      else if ( v9 <= 0x7F )
      {
        goto LABEL_9;
      }
      v21 = v7 + 1;
      if ( v9 <= 0x7FF )
        v21 = v7;
      v7 = v21 + 1;
LABEL_9:
      v10 = (__int64)(v8 - (_QWORD)v6) >> 1;
      if ( v10 <= 0xD )
      {
        while ( (unsigned __int64)v6 < v8 )
        {
          v9 = *(unsigned __int16 *)v6;
          v6 = (unsigned int *)((char *)v6 + 2);
          if ( v9 > 0x7F )
            goto LABEL_6;
        }
        goto LABEL_14;
      }
      v12 = (unsigned int *)((char *)v6 + 2 * v10 - 14);
LABEL_16:
      while ( 2 )
      {
        if ( v6 >= v12 )
          goto LABEL_2;
        v13 = *(unsigned __int16 *)v6;
        v6 = (unsigned int *)((char *)v6 + 2);
        if ( (unsigned __int16)v13 <= 0x7Fu )
        {
LABEL_18:
          if ( ((unsigned __int8)v6 & 2) == 0
            || (v13 = *(unsigned __int16 *)v6, v6 = (unsigned int *)((char *)v6 + 2), v13 <= 0x7F) )
          {
            while ( 1 )
            {
LABEL_19:
              if ( v6 >= v12 )
                goto LABEL_2;
              v14 = v6[1];
              v13 = *v6;
              v15 = *v6 | v14;
              if ( (v15 & 0xFF80FF80) != 0 )
              {
                if ( (v15 & 0xF800F800) != 0 )
                {
LABEL_30:
                  v13 = (unsigned __int16)v13;
                  v6 = (unsigned int *)((char *)v6 + 2);
                  if ( (unsigned __int16)v13 > 0x7Fu )
                    goto LABEL_31;
                  goto LABEL_16;
                }
                v18 = v7 + 1;
                if ( (v13 & 0xFF800000) == 0 )
                  v18 = v7;
                v19 = v18 + 1;
                if ( (*v6 & 0xFF80) == 0 )
                  v19 = v18;
                v7 = v19 + 1;
                if ( (v14 & 0xFF800000) == 0 )
                  v7 = v19;
                if ( (v14 & 0xFF80) != 0 )
                  ++v7;
              }
              v16 = v6[3];
              v6 += 2;
              v13 = *v6;
              v17 = *v6 | v16;
              if ( (v17 & 0xFF80FF80) != 0 )
              {
                if ( (v17 & 0xF800F800) != 0 )
                  goto LABEL_30;
                v22 = v7 + 1;
                if ( (v13 & 0xFF800000) == 0 )
                  v22 = v7;
                v23 = v22 + 1;
                if ( (*v6 & 0xFF80) == 0 )
                  v23 = v22;
                v7 = v23 + 1;
                if ( (v16 & 0xFF800000) == 0 )
                  v7 = v23;
                if ( (v16 & 0xFF80) != 0 )
                  ++v7;
              }
              v6 += 2;
            }
          }
          if ( v13 <= 0x7FF )
            goto LABEL_64;
          if ( (v13 & 0xF800) != 0xD800 )
          {
            ++v7;
LABEL_64:
            ++v7;
            goto LABEL_19;
          }
LABEL_65:
          if ( v13 - 55296 <= 0x7FF )
          {
            if ( v13 > 0xDBFF || (unsigned int)*(unsigned __int16 *)v6 - 56320 > 0x3FF )
            {
              v6 = (unsigned int *)((char *)v6 - 2);
              goto LABEL_2;
            }
            v6 = (unsigned int *)((char *)v6 + 2);
          }
          ++v7;
LABEL_70:
          ++v7;
          continue;
        }
        break;
      }
      if ( (unsigned __int16)v13 > 0x7FFu )
      {
        if ( (v13 & 0xF800) == 0xD800 )
        {
LABEL_31:
          if ( v13 > 0x7FF )
            goto LABEL_65;
          goto LABEL_70;
        }
        ++v7;
      }
      ++v7;
      goto LABEL_18;
    }
    v9 = *(unsigned __int16 *)v6;
    v6 = (unsigned int *)((char *)v6 + 2);
LABEL_6:
    if ( v9 - 55296 > 0x3FF )
      goto LABEL_7;
    --v7;
  }
  if ( v9 )
  {
    ++v7;
    goto LABEL_7;
  }
LABEL_14:
  result = v3;
  *a3 = v7;
  return result;
}
