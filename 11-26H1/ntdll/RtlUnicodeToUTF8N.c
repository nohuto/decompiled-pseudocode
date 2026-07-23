/*
 * XREFs of RtlUnicodeToUTF8N @ 0x18001FAC0
 * Callers:
 *     UpcaseUnicodeToUTF8NHelper @ 0x18001EB00 (UpcaseUnicodeToUTF8NHelper.c)
 *     RtlxUnicodeStringToOemSize @ 0x18001ECC0 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeToMultiByteSize @ 0x18001F1D0 (RtlUnicodeToMultiByteSize.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x18001F290 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUnicodeStringToAnsiString @ 0x18001F620 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeToCustomCPN @ 0x18001F960 (RtlUnicodeToCustomCPN.c)
 *     RtlUnicodeToMultiByteN @ 0x180021380 (RtlUnicodeToMultiByteN.c)
 *     RtlUnicodeStringToUTF8String @ 0x18014A3A0 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUnicodeToUTF8N(
        PCHAR UTF8StringDestination,
        ULONG UTF8StringMaxByteCount,
        PULONG UTF8StringActualByteCount,
        PCWCH UnicodeStringSource,
        ULONG UnicodeStringByteCount)
{
  NTSTATUS v5; // edi
  unsigned int v6; // r10d
  int v8; // r11d
  const WCHAR *v9; // rbx
  CHAR *v10; // rbp
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  NTSTATUS result; // eax
  const WCHAR *v17; // r10
  unsigned int v18; // edx
  int v19; // r8d
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // edx
  CHAR v23; // dl
  PCHAR v24; // rcx
  int v25; // r8d

  v5 = 0;
  v6 = 0;
  v8 = (int)UTF8StringDestination;
  if ( !UnicodeStringSource )
    return -1073741582;
  if ( !UTF8StringDestination )
  {
    if ( UTF8StringActualByteCount )
      return CountUnicodeToUTF8(
               (PCHAR)UnicodeStringSource,
               UnicodeStringByteCount,
               UTF8StringActualByteCount,
               UnicodeStringSource,
               UnicodeStringByteCount);
    else
      return -1073741811;
  }
  if ( (UnicodeStringByteCount & 1) != 0 )
    return -1073741581;
  v9 = &UnicodeStringSource[(unsigned __int64)UnicodeStringByteCount >> 1];
  v10 = &UTF8StringDestination[UTF8StringMaxByteCount];
  while ( 1 )
  {
    do
    {
LABEL_5:
      if ( UnicodeStringSource >= v9 )
      {
        if ( !v6 )
          goto LABEL_21;
        break;
      }
      v11 = *UnicodeStringSource;
      if ( v6 )
      {
        if ( (unsigned int)(v11 - 56320) <= 0x3FF )
        {
          v6 = v11 + (v6 << 10) - 56613888;
          ++UnicodeStringSource;
        }
        break;
      }
      v6 = *UnicodeStringSource++;
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
    if ( UTF8StringDestination > &v10[-v13] )
      break;
    if ( v6 > 0x7F )
    {
      if ( v6 <= 0x7FF )
      {
        *UTF8StringDestination++ = (v6 >> 6) | 0xC0;
        LOBYTE(v6) = v6 & 0x3F | 0x80;
      }
      else
      {
        v22 = v6 >> 12;
        if ( v6 > 0xFFFF )
        {
          *UTF8StringDestination++ = (v6 >> 18) | 0xF0;
          v23 = v22 & 0x3F | 0x80;
        }
        else
        {
          v23 = v22 | 0xE0;
        }
        *UTF8StringDestination = v23;
        v24 = UTF8StringDestination + 1;
        *v24 = (v6 >> 6) & 0x3F | 0x80;
        UTF8StringDestination = v24 + 1;
        LOBYTE(v6) = v6 & 0x3F | 0x80;
      }
    }
    *UTF8StringDestination++ = v6;
    v14 = v9 - UnicodeStringSource;
    v15 = v10 - UTF8StringDestination;
    if ( v14 > 0xD )
    {
      if ( v15 < v14 )
        v14 = v10 - UTF8StringDestination;
      v17 = &UnicodeStringSource[v14 - 5];
LABEL_26:
      while ( UnicodeStringSource < v17 )
      {
        v18 = *UnicodeStringSource++;
        if ( v18 <= 0x7F )
        {
          *UTF8StringDestination++ = v18;
          if ( ((unsigned __int8)UnicodeStringSource & 2) == 0 )
            goto LABEL_29;
          v18 = *UnicodeStringSource++;
          if ( v18 <= 0x7F )
          {
            *UTF8StringDestination++ = v18;
LABEL_29:
            while ( UnicodeStringSource < v17 )
            {
              v19 = *((_DWORD *)UnicodeStringSource + 1);
              v18 = *(_DWORD *)UnicodeStringSource;
              if ( ((*(_DWORD *)UnicodeStringSource | v19) & 0xFF80FF80) != 0 )
              {
                v18 = (unsigned __int16)v18;
                ++UnicodeStringSource;
                if ( (unsigned __int16)v18 > 0x7Fu )
                  goto LABEL_41;
                *UTF8StringDestination++ = v18;
                goto LABEL_26;
              }
              *UTF8StringDestination = v18;
              UnicodeStringSource += 4;
              UTF8StringDestination[2] = v19;
              UTF8StringDestination[1] = BYTE2(v18);
              UTF8StringDestination[3] = BYTE2(v19);
              UTF8StringDestination += 4;
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
              --UnicodeStringSource;
              break;
            }
            v25 = *UnicodeStringSource++;
            if ( (unsigned int)(v25 - 56320) > 0x3FF )
            {
              UnicodeStringSource -= 2;
              v6 = 0;
              goto LABEL_5;
            }
            v18 = v25 + (v18 << 10) - 56613888;
            *UTF8StringDestination++ = (v18 >> 18) | 0xF0;
            v21 = v18 & 0x3F000 | 0x80000;
          }
          else
          {
            v21 = v18 | 0xE0000;
          }
          --v17;
          *UTF8StringDestination++ = v21 >> 12;
          v20 = v18 & 0xFC0 | 0x2000;
        }
        else
        {
          v20 = v18 | 0x3000;
        }
        *UTF8StringDestination = v20 >> 6;
        --v17;
        UTF8StringDestination[1] = v18 & 0x3F | 0x80;
        UTF8StringDestination += 2;
      }
    }
    else if ( v15 >= v14 )
    {
      while ( UnicodeStringSource < v9 )
      {
        v6 = *UnicodeStringSource++;
        if ( v6 > 0x7F )
          goto LABEL_8;
        *UTF8StringDestination++ = v6;
      }
LABEL_21:
      result = v5;
      goto LABEL_22;
    }
    v6 = 0;
  }
  result = -1073741789;
LABEL_22:
  *UTF8StringActualByteCount = (_DWORD)UTF8StringDestination - v8;
  return result;
}
