/*
 * XREFs of RtlUnicodeToUTF8N @ 0x14097D620
 * Callers:
 *     UpcaseUnicodeToUTF8NHelper @ 0x1402151E0 (UpcaseUnicodeToUTF8NHelper.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x1406C79F8 (EtwpQueryPartitionRegistryInformation.c)
 *     RtlUnicodeStringToUTF8String @ 0x14080EF10 (RtlUnicodeStringToUTF8String.c)
 *     RtlUnicodeToCustomCPN @ 0x14097BE40 (RtlUnicodeToCustomCPN.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14097C810 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlUnicodeToMultiByteSize @ 0x14097CA40 (RtlUnicodeToMultiByteSize.c)
 *     RtlxUnicodeStringToOemSize @ 0x14097CB20 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x14097CC00 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeToMultiByteN @ 0x14097D240 (RtlUnicodeToMultiByteN.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x140AD41CC (EtwpGetAutoLoggerEventNameFilter.c)
 * Callees:
 *     CountUnicodeToUTF8 @ 0x14047E5B8 (CountUnicodeToUTF8.c)
 */

NTSTATUS __stdcall RtlUnicodeToUTF8N(
        PCHAR UTF8StringDestination,
        ULONG UTF8StringMaxByteCount,
        PULONG UTF8StringActualByteCount,
        PCWCH UnicodeStringSource,
        ULONG UnicodeStringByteCount)
{
  NTSTATUS v5; // ebx
  unsigned int v6; // r10d
  int v8; // r11d
  PCHAR v9; // rax
  CHAR *v10; // rbp
  const WCHAR *v11; // rsi
  int v12; // edx
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  const WCHAR *v17; // r10
  unsigned int v18; // edx
  int v19; // r8d
  unsigned int v20; // edx
  CHAR v21; // dl
  CHAR v22; // cl
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  int v25; // r8d

  v5 = 0;
  v6 = 0;
  v8 = (int)UTF8StringDestination;
  if ( !UnicodeStringSource )
    return -1073741582;
  if ( UTF8StringDestination )
  {
    if ( (UnicodeStringByteCount & 1) == 0 )
    {
      v9 = UTF8StringDestination;
      v10 = &UTF8StringDestination[UTF8StringMaxByteCount];
      v11 = &UnicodeStringSource[(unsigned __int64)UnicodeStringByteCount >> 1];
      while ( UnicodeStringSource < v11 )
      {
        v12 = *UnicodeStringSource;
        if ( v6 )
        {
          if ( (unsigned int)(v12 - 56320) <= 0x3FF )
          {
            v6 = v12 + (v6 << 10) - 56613888;
            ++UnicodeStringSource;
          }
          goto LABEL_9;
        }
        v6 = *UnicodeStringSource++;
LABEL_8:
        if ( v6 - 55296 > 0x3FF )
        {
LABEL_9:
          if ( v6 - 55296 <= 0x7FF )
          {
            v5 = 263;
            v6 = 65533;
LABEL_39:
            v13 = (v6 > 0xFFFF) + 2LL;
            goto LABEL_40;
          }
          v13 = 1LL;
          if ( v6 <= 0x7F )
            goto LABEL_11;
          if ( v6 > 0x7FF )
            goto LABEL_39;
LABEL_40:
          ++v13;
LABEL_11:
          if ( v9 > &v10[-v13] )
          {
            *UTF8StringActualByteCount = (_DWORD)v9 - v8;
            return -1073741789;
          }
          if ( v6 > 0x7F )
          {
            if ( v6 <= 0x7FF )
            {
              v22 = (v6 >> 6) | 0xC0;
            }
            else
            {
              v20 = v6 >> 12;
              if ( v6 > 0xFFFF )
              {
                *v9++ = (v6 >> 18) | 0xF0;
                v21 = v20 & 0x3F | 0x80;
              }
              else
              {
                v21 = v20 | 0xE0;
              }
              *v9++ = v21;
              v22 = (v6 >> 6) & 0x3F | 0x80;
            }
            *v9++ = v22;
            LOBYTE(v6) = v6 & 0x3F | 0x80;
          }
          *v9++ = v6;
          v14 = v11 - UnicodeStringSource;
          v15 = v10 - v9;
          if ( v14 > 0xD )
          {
            if ( v15 < v14 )
              v14 = v10 - v9;
            v17 = &UnicodeStringSource[v14 - 5];
LABEL_27:
            while ( UnicodeStringSource < v17 )
            {
              v18 = *UnicodeStringSource++;
              if ( v18 <= 0x7F )
              {
                *v9++ = v18;
                if ( ((unsigned __int8)UnicodeStringSource & 2) == 0 )
                  goto LABEL_30;
                v18 = *UnicodeStringSource++;
                if ( v18 <= 0x7F )
                {
                  *v9++ = v18;
LABEL_30:
                  while ( UnicodeStringSource < v17 )
                  {
                    v19 = *((_DWORD *)UnicodeStringSource + 1);
                    v18 = *(_DWORD *)UnicodeStringSource;
                    if ( ((*(_DWORD *)UnicodeStringSource | v19) & 0xFF80FF80) != 0 )
                    {
                      v18 = (unsigned __int16)v18;
                      ++UnicodeStringSource;
                      if ( (unsigned __int16)v18 > 0x7Fu )
                        goto LABEL_47;
                      *v9++ = v18;
                      goto LABEL_27;
                    }
                    *v9 = v18;
                    UnicodeStringSource += 4;
                    v9[2] = v19;
                    v9[1] = BYTE2(v18);
                    v9[3] = BYTE2(v19);
                    v9 += 4;
                  }
                  break;
                }
              }
LABEL_47:
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
                    break;
                  }
                  v18 = v25 + (v18 << 10) - 56613888;
                  *v9++ = (v18 >> 18) | 0xF0;
                  v24 = v18 & 0x3F000 | 0x80000;
                }
                else
                {
                  v24 = v18 | 0xE0000;
                }
                --v17;
                *v9++ = v24 >> 12;
                v23 = v18 & 0xFC0 | 0x2000;
              }
              else
              {
                v23 = v18 | 0x3000;
              }
              *v9 = v23 >> 6;
              --v17;
              v9[1] = v18 & 0x3F | 0x80;
              v9 += 2;
            }
          }
          else if ( v15 >= v14 )
          {
            while ( UnicodeStringSource < v11 )
            {
              v6 = *UnicodeStringSource++;
              if ( v6 > 0x7F )
                goto LABEL_8;
              *v9++ = v6;
            }
LABEL_16:
            *UTF8StringActualByteCount = (_DWORD)v9 - v8;
            return v5;
          }
          v6 = 0;
        }
      }
      if ( !v6 )
        goto LABEL_16;
      goto LABEL_9;
    }
    return -1073741581;
  }
  else if ( UTF8StringActualByteCount )
  {
    return CountUnicodeToUTF8((unsigned int *)UnicodeStringSource, UnicodeStringByteCount, UTF8StringActualByteCount);
  }
  else
  {
    return -1073741811;
  }
}
