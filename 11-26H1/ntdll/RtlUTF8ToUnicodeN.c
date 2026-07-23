/*
 * XREFs of RtlUTF8ToUnicodeN @ 0x1800261F0
 * Callers:
 *     LdrpLoadForwardedDll @ 0x180024A70 (LdrpLoadForwardedDll.c)
 *     LdrpLoadDependentModuleA @ 0x180025230 (LdrpLoadDependentModuleA.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x180025930 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     RtlMultiByteToUnicodeN @ 0x180025AE0 (RtlMultiByteToUnicodeN.c)
 *     RtlAnsiStringToUnicodeString @ 0x180025D10 (RtlAnsiStringToUnicodeString.c)
 *     RtlCustomCPToUnicodeN @ 0x180026080 (RtlCustomCPToUnicodeN.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     LdrpGenerateSnapsUnicodeStrings @ 0x1800338F0 (LdrpGenerateSnapsUnicodeStrings.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18007A190 (LdrpSnapKernelBaseExtensions.c)
 *     RtlMultiByteToUnicodeSize @ 0x18009ED20 (RtlMultiByteToUnicodeSize.c)
 *     RtlAnsiCharToUnicodeChar @ 0x1800B7C80 (RtlAnsiCharToUnicodeChar.c)
 *     RtlxOemStringToUnicodeSize @ 0x1800BCC70 (RtlxOemStringToUnicodeSize.c)
 *     RtlUTF8StringToUnicodeString @ 0x1800DA800 (RtlUTF8StringToUnicodeString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUTF8ToUnicodeN(
        PWSTR UnicodeStringDestination,
        ULONG UnicodeStringMaxByteCount,
        PULONG UnicodeStringActualByteCount,
        PCCH UTF8StringSource,
        ULONG UTF8StringByteCount)
{
  PWSTR v5; // rax
  NTSTATUS v7; // ebp
  WCHAR *v8; // rsi
  unsigned int v9; // edx
  const CHAR *v10; // r10
  const CHAR *v11; // rdi
  unsigned int v12; // ebx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  WCHAR *i; // rbx
  unsigned int v17; // edx
  unsigned int v18; // edi
  char v19; // di
  int v20; // edi
  CHAR v21; // r14
  unsigned int v22; // edi
  WCHAR v23; // dx
  __int64 v24; // rcx
  unsigned int v25; // edx
  unsigned int v26; // ecx
  unsigned int v27; // edx
  unsigned int v28; // edx

  v5 = UnicodeStringDestination;
  v7 = 0;
  v8 = &UnicodeStringDestination[(unsigned __int64)UnicodeStringMaxByteCount >> 1];
  v9 = 0;
  v10 = &UTF8StringSource[UTF8StringByteCount];
  if ( !UTF8StringSource )
    return -1073741582;
  if ( !UnicodeStringDestination )
  {
    if ( UnicodeStringActualByteCount )
      return CountUTF8ToUnicode(
               (PWSTR)UTF8StringSource,
               UTF8StringByteCount,
               UnicodeStringActualByteCount,
               UTF8StringSource,
               UTF8StringByteCount);
    else
      return -1073741811;
  }
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_3:
      v11 = UTF8StringSource;
      if ( UTF8StringSource >= v10 )
      {
        if ( v9 )
        {
          v7 = 263;
          if ( v5 >= v8 )
            v7 = -1073741789;
          else
            *v5++ = -3;
        }
LABEL_13:
        if ( UnicodeStringActualByteCount )
          *UnicodeStringActualByteCount = 2 * (v5 - UnicodeStringDestination);
        return v7;
      }
      v12 = *UTF8StringSource++;
      if ( v9 )
        break;
      LOWORD(v9) = v12;
      if ( v12 <= 0x7F )
        goto LABEL_6;
LABEL_55:
      if ( (v9 & 0x40) == 0 )
        goto LABEL_64;
      if ( (v9 & 0x20) != 0 )
      {
        v26 = v9 & 0xF;
        if ( (v9 & 0x10) != 0 )
        {
          if ( v26 > 4 )
            goto LABEL_64;
          v9 = v26 | 0x504D0C00;
        }
        else
        {
          v9 = v26 | 0x48228000;
        }
      }
      else
      {
        v27 = v9 & 0x1F;
        if ( v27 <= 1 )
          goto LABEL_64;
        v9 = v27 | 0x800000;
      }
    }
    if ( (v12 & 0xC0) != 0x80 )
    {
      UTF8StringSource = v11;
      goto LABEL_64;
    }
    v9 = (v9 << 6) | v12 & 0x3F;
    if ( (v9 & 0x20000000) != 0 )
      break;
    if ( (v9 & 0x10000000) != 0 )
    {
      if ( (v9 & 0x800000) == 0 && (v9 & 0x1F0) - 16 > 0xF0 )
        goto LABEL_64;
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
LABEL_64:
      v7 = 263;
      LOWORD(v9) = -3;
LABEL_6:
      if ( v5 >= v8 )
        goto LABEL_76;
      *v5++ = v9;
      v13 = v10 - UTF8StringSource;
      v14 = v8 - v5;
      if ( (unsigned __int64)(v10 - UTF8StringSource) > 0xD )
      {
        if ( v13 < v14 )
          v14 = v10 - UTF8StringSource;
        for ( i = &v5[v14 - 7]; ; --i )
        {
          while ( 2 )
          {
            if ( v5 >= i )
            {
LABEL_32:
              v9 = 0;
              goto LABEL_3;
            }
            v17 = *UTF8StringSource++;
            if ( v17 <= 0x7F )
            {
              *v5++ = v17;
              if ( ((unsigned __int8)UTF8StringSource & 1) != 0 )
              {
                v17 = *UTF8StringSource++;
                if ( v17 > 0x7F )
                  break;
                *v5++ = v17;
              }
              if ( ((unsigned __int8)UTF8StringSource & 2) == 0 )
                goto LABEL_28;
              LOWORD(v17) = *(_WORD *)UTF8StringSource;
              if ( (*(_WORD *)UTF8StringSource & 0x8080) == 0 )
              {
                UTF8StringSource += 2;
                *v5 = v17 & 0x7F;
                v5[1] = BYTE1(v17) & 0x7F;
                v5 += 2;
LABEL_28:
                while ( v5 < i )
                {
                  v18 = *((_DWORD *)UTF8StringSource + 1);
                  v17 = *(_DWORD *)UTF8StringSource;
                  if ( ((*(_DWORD *)UTF8StringSource | v18) & 0x80808080) != 0 )
                    goto LABEL_44;
                  UTF8StringSource += 8;
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
                goto LABEL_32;
              }
LABEL_44:
              ++UTF8StringSource;
              if ( (unsigned __int8)v17 <= 0x7Fu )
              {
                *v5++ = (unsigned __int8)v17;
                continue;
              }
            }
            break;
          }
          v19 = *UTF8StringSource++;
          if ( (v17 & 0x40) == 0 || (v19 & 0xC0) != 0x80 )
          {
LABEL_31:
            UTF8StringSource -= 2;
            goto LABEL_32;
          }
          v20 = v19 & 0x3F;
          if ( (v17 & 0x20) != 0 )
          {
            v21 = *UTF8StringSource;
            v22 = ((v17 & 0xF) << 6) | v20;
            if ( (v17 & 0x10) != 0 )
            {
              if ( (v22 >> 4) - 1 > 0xF || (v21 & 0xC0) != 0x80 || (UTF8StringSource[1] & 0xC0) != 0x80 )
                goto LABEL_31;
              v28 = UTF8StringSource[1] & 0x3F | (((v22 << 6) | v21 & 0x3F) << 6);
              *v5++ = ((v28 >> 10) & 0x7FF) - 10304;
              v23 = (v28 & 0x3FF) - 9216;
              v24 = 2LL;
            }
            else
            {
              if ( (v22 & 0x3E0) == 0 || (v22 & 0x3E0) == 0x360 || (v21 & 0xC0) != 0x80 )
                goto LABEL_31;
              v23 = ((_WORD)v22 << 6) | v21 & 0x3F;
              v24 = 1LL;
            }
            UTF8StringSource += v24;
            --i;
          }
          else
          {
            v25 = v17 & 0x1F;
            if ( v25 <= 1 )
              goto LABEL_31;
            v23 = v20 | ((_WORD)v25 << 6);
          }
          *v5++ = v23;
        }
      }
      if ( v14 >= v13 )
      {
        while ( UTF8StringSource < v10 )
        {
          v9 = *UTF8StringSource++;
          if ( v9 > 0x7F )
            goto LABEL_55;
          *v5++ = v9;
        }
        goto LABEL_13;
      }
      v9 = 0;
    }
  }
  if ( (v9 & 0x101F0000) <= 0x10000000 )
    goto LABEL_6;
  if ( v5 < v8 )
  {
    *v5++ = ((v9 >> 10) & 0x7FF) - 10304;
    LOWORD(v9) = (v9 & 0x3FF) - 9216;
    goto LABEL_6;
  }
LABEL_76:
  if ( UnicodeStringActualByteCount )
    *UnicodeStringActualByteCount = 2 * (v5 - UnicodeStringDestination);
  return -1073741789;
}
