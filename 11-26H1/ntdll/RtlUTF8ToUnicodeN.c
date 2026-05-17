/*
 * XREFs of RtlUTF8ToUnicodeN @ 0x18003BC80
 * Callers:
 *     LdrpLoadForwardedDll @ 0x18003A500 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDependentModuleA @ 0x18003ACC0 (LdrpLoadDependentModuleA.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18003B3C0 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     RtlMultiByteToUnicodeN @ 0x18003B570 (RtlMultiByteToUnicodeN.c)
 *     RtlAnsiStringToUnicodeString @ 0x18003B7A0 (RtlAnsiStringToUnicodeString.c)
 *     RtlCustomCPToUnicodeN @ 0x18003BB10 (RtlCustomCPToUnicodeN.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     LdrpGenerateSnapsUnicodeStrings @ 0x180049370 (LdrpGenerateSnapsUnicodeStrings.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180082DF0 (LdrpSnapKernelBaseExtensions.c)
 *     RtlMultiByteToUnicodeSize @ 0x18009FBF0 (RtlMultiByteToUnicodeSize.c)
 *     RtlAnsiCharToUnicodeChar @ 0x1800BA750 (RtlAnsiCharToUnicodeChar.c)
 *     RtlxOemStringToUnicodeSize @ 0x1800BF100 (RtlxOemStringToUnicodeSize.c)
 *     RtlUTF8StringToUnicodeString @ 0x1800DD890 (RtlUTF8StringToUnicodeString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUTF8ToUnicodeN(_WORD *a1, unsigned int a2, _DWORD *a3, char *a4, unsigned int a5)
{
  _WORD *v5; // rax
  unsigned int v7; // r14d
  unsigned __int64 v8; // rbp
  unsigned int v9; // edx
  char *v10; // r10
  char *v11; // rdi
  unsigned int v12; // ebx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  _WORD *i; // rbx
  unsigned int v17; // edx
  unsigned int v18; // edi
  char v19; // di
  int v20; // edi
  char v21; // si
  unsigned int v22; // edi
  __int16 v23; // dx
  unsigned int v24; // edx
  unsigned int v25; // ecx
  unsigned int v26; // edx
  unsigned int v27; // edx

  v5 = a1;
  v7 = 0;
  v8 = (unsigned __int64)&a1[(unsigned __int64)a2 >> 1];
  v9 = 0;
  v10 = &a4[a5];
  if ( !a4 )
    return 3221225714LL;
  if ( !a1 )
  {
    if ( a3 )
      return CountUTF8ToUnicode(a4, a5);
    else
      return 3221225485LL;
  }
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_3:
      v11 = a4;
      if ( a4 >= v10 )
      {
        if ( v9 )
        {
          v7 = 263;
          if ( (unsigned __int64)v5 >= v8 )
            v7 = -1073741789;
          else
            *v5++ = -3;
        }
LABEL_13:
        if ( a3 )
          *a3 = 2 * (v5 - a1);
        return v7;
      }
      v12 = *a4++;
      if ( v9 )
        break;
      LOWORD(v9) = v12;
      if ( v12 <= 0x7F )
        goto LABEL_6;
LABEL_56:
      if ( (v9 & 0x40) == 0 )
        goto LABEL_65;
      if ( (v9 & 0x20) != 0 )
      {
        v25 = v9 & 0xF;
        if ( (v9 & 0x10) != 0 )
        {
          if ( v25 > 4 )
            goto LABEL_65;
          v9 = v25 | 0x504D0C00;
        }
        else
        {
          v9 = v25 | 0x48228000;
        }
      }
      else
      {
        v26 = v9 & 0x1F;
        if ( v26 <= 1 )
          goto LABEL_65;
        v9 = v26 | 0x800000;
      }
    }
    if ( (v12 & 0xC0) != 0x80 )
    {
      a4 = v11;
      goto LABEL_65;
    }
    v9 = (v9 << 6) | v12 & 0x3F;
    if ( (v9 & 0x20000000) != 0 )
      break;
    if ( (v9 & 0x10000000) != 0 )
    {
      if ( (v9 & 0x800000) == 0 && (v9 & 0x1F0) - 16 > 0xF0 )
        goto LABEL_65;
    }
    else if ( (v9 & 0x3E0) != 0 )
    {
      if ( (v9 & 0x3E0) == 0x360 )
      {
        v7 = 263;
        LOWORD(v9) = -3;
        goto LABEL_6;
      }
    }
    else
    {
LABEL_65:
      v7 = 263;
      LOWORD(v9) = -3;
LABEL_6:
      if ( (unsigned __int64)v5 >= v8 )
        goto LABEL_77;
      *v5++ = v9;
      v13 = v10 - a4;
      v14 = (__int64)(v8 - (_QWORD)v5) >> 1;
      if ( (unsigned __int64)(v10 - a4) > 0xD )
      {
        if ( v13 < v14 )
          v14 = v10 - a4;
        for ( i = &v5[v14 - 7]; ; --i )
        {
          while ( 2 )
          {
            if ( v5 >= i )
            {
LABEL_33:
              v9 = 0;
              goto LABEL_3;
            }
            v17 = *a4++;
            if ( v17 <= 0x7F )
            {
              *v5++ = v17;
              if ( ((unsigned __int8)a4 & 1) != 0 )
              {
                v17 = *a4++;
                if ( v17 > 0x7F )
                  break;
                *v5++ = v17;
              }
              if ( ((unsigned __int8)a4 & 2) == 0 )
                goto LABEL_29;
              LOWORD(v17) = *(_WORD *)a4;
              if ( (*(_WORD *)a4 & 0x8080) == 0 )
              {
                a4 += 2;
                *v5 = v17 & 0x7F;
                v5[1] = BYTE1(v17) & 0x7F;
                v5 += 2;
LABEL_29:
                while ( v5 < i )
                {
                  v18 = *((_DWORD *)a4 + 1);
                  v17 = *(_DWORD *)a4;
                  if ( ((*(_DWORD *)a4 | v18) & 0x80808080) != 0 )
                    goto LABEL_45;
                  a4 += 8;
                  *v5 = v17 & 0x7F;
                  v5[1] = (v17 >> 8) & 0x7F;
                  v5[2] = BYTE2(v17) & 0x7F;
                  v5[3] = HIBYTE(v17) & 0x7F;
                  v5[4] = v18 & 0x7F;
                  v5[5] = (v18 >> 8) & 0x7F;
                  v5[6] = BYTE2(v18) & 0x7F;
                  v5[7] = HIBYTE(v18) & 0x7F;
                  v5 += 8;
                }
                goto LABEL_33;
              }
LABEL_45:
              ++a4;
              if ( (unsigned __int8)v17 <= 0x7Fu )
              {
                *v5++ = (unsigned __int8)v17;
                continue;
              }
            }
            break;
          }
          v19 = *a4++;
          if ( (v17 & 0x40) == 0 || (v19 & 0xC0) != 0x80 )
          {
LABEL_32:
            a4 -= 2;
            goto LABEL_33;
          }
          v20 = v19 & 0x3F;
          if ( (v17 & 0x20) != 0 )
          {
            v21 = *a4;
            v22 = ((v17 & 0xF) << 6) | v20;
            if ( (v17 & 0x10) != 0 )
            {
              if ( (v22 >> 4) - 1 > 0xF || (v21 & 0xC0) != 0x80 || (a4[1] & 0xC0) != 0x80 )
                goto LABEL_32;
              v27 = a4[1] & 0x3F | (((v22 << 6) | v21 & 0x3F) << 6);
              a4 += 2;
              *v5++ = ((v27 >> 10) & 0x7FF) - 10304;
              v23 = (v27 & 0x3FF) - 9216;
            }
            else
            {
              if ( (v22 & 0x3E0) == 0 || (v22 & 0x3E0) == 0x360 || (v21 & 0xC0) != 0x80 )
                goto LABEL_32;
              ++a4;
              v23 = ((_WORD)v22 << 6) | v21 & 0x3F;
            }
            --i;
          }
          else
          {
            v24 = v17 & 0x1F;
            if ( v24 <= 1 )
              goto LABEL_32;
            v23 = v20 | ((_WORD)v24 << 6);
          }
          *v5++ = v23;
        }
      }
      if ( v14 >= v13 )
      {
        while ( a4 < v10 )
        {
          v9 = *a4++;
          if ( v9 > 0x7F )
            goto LABEL_56;
          *v5++ = v9;
        }
        goto LABEL_13;
      }
      v9 = 0;
    }
  }
  if ( (v9 & 0x101F0000) <= 0x10000000 )
    goto LABEL_6;
  if ( (unsigned __int64)v5 < v8 )
  {
    *v5++ = ((v9 >> 10) & 0x7FF) - 10304;
    LOWORD(v9) = (v9 & 0x3FF) - 9216;
    goto LABEL_6;
  }
LABEL_77:
  if ( a3 )
    *a3 = 2 * (v5 - a1);
  return 3221225507LL;
}
