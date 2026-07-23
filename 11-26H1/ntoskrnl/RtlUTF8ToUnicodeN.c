/*
 * XREFs of RtlUTF8ToUnicodeN @ 0x14097DB50
 * Callers:
 *     RtlUTF8StringToUnicodeString @ 0x14080EE00 (RtlUTF8StringToUnicodeString.c)
 *     EtwpApplyContainerFilter @ 0x1409135A0 (EtwpApplyContainerFilter.c)
 *     RtlMultiByteToUnicodeSize @ 0x14097BFE0 (RtlMultiByteToUnicodeSize.c)
 *     RtlAnsiStringToUnicodeString @ 0x14097C370 (RtlAnsiStringToUnicodeString.c)
 *     RtlMultiByteToUnicodeN @ 0x14097CF30 (RtlMultiByteToUnicodeN.c)
 *     RtlAnsiCharToUnicodeChar @ 0x14097D3A0 (RtlAnsiCharToUnicodeChar.c)
 *     RtlCustomCPToUnicodeN @ 0x14097D9D0 (RtlCustomCPToUnicodeN.c)
 * Callees:
 *     CountUTF8ToUnicode @ 0x1404ACA70 (CountUTF8ToUnicode.c)
 */

NTSTATUS __stdcall RtlUTF8ToUnicodeN(
        PWSTR UnicodeStringDestination,
        ULONG UnicodeStringMaxByteCount,
        PULONG UnicodeStringActualByteCount,
        PCCH UTF8StringSource,
        ULONG UTF8StringByteCount)
{
  NTSTATUS v5; // esi
  PWSTR v6; // r10
  unsigned __int64 v7; // rax
  unsigned int v8; // edx
  const CHAR *v9; // r11
  WCHAR *v10; // rdi
  const CHAR *v12; // rbp
  unsigned int v13; // ebx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  WCHAR *i; // rbp
  unsigned int v17; // edx
  unsigned int v18; // ebx
  unsigned int v19; // eax
  int v20; // ebx
  char v21; // bl
  int v22; // ebx
  CHAR v23; // r14
  unsigned int v24; // ebx
  WCHAR v25; // dx
  __int64 v26; // rax
  unsigned int v27; // edx
  unsigned int v28; // edx
  unsigned int v29; // edx

  v5 = 0;
  v6 = UnicodeStringDestination;
  v7 = (unsigned __int64)UnicodeStringMaxByteCount >> 1;
  v8 = 0;
  v9 = &UTF8StringSource[UTF8StringByteCount];
  v10 = &UnicodeStringDestination[v7];
  if ( !UTF8StringSource )
    return -1073741582;
  if ( !UnicodeStringDestination )
  {
    if ( UnicodeStringActualByteCount )
      return CountUTF8ToUnicode((char *)UTF8StringSource, UTF8StringByteCount, UnicodeStringActualByteCount);
    else
      return -1073741811;
  }
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_4:
      v12 = UTF8StringSource;
      if ( UTF8StringSource >= v9 )
      {
        if ( v8 )
        {
          v5 = 263;
          if ( v6 < v10 )
            *v6++ = -3;
          else
            v5 = -1073741789;
        }
LABEL_11:
        if ( UnicodeStringActualByteCount )
          *UnicodeStringActualByteCount = 2 * (v6 - UnicodeStringDestination);
        return v5;
      }
      v13 = *UTF8StringSource++;
      if ( v8 )
        break;
      LOWORD(v8) = v13;
      if ( v13 <= 0x7F )
        goto LABEL_7;
LABEL_36:
      if ( (v8 & 0x40) == 0 )
        goto LABEL_71;
      if ( (v8 & 0x20) != 0 )
      {
        v19 = v8 & 0xF;
        if ( (v8 & 0x10) == 0 )
        {
          v20 = 1210220544;
          goto LABEL_40;
        }
        if ( v19 > 4 )
          goto LABEL_71;
        v20 = 1347226624;
LABEL_40:
        v8 = v20 | v19;
      }
      else
      {
        v27 = v8 & 0x1F;
        if ( v27 <= 1 )
          goto LABEL_71;
        v8 = v27 | 0x800000;
      }
    }
    if ( (v13 & 0xC0) != 0x80 )
    {
      UTF8StringSource = v12;
LABEL_71:
      v5 = 263;
      LOWORD(v8) = -3;
      goto LABEL_7;
    }
    v8 = (v8 << 6) | v13 & 0x3F;
    if ( (v8 & 0x20000000) != 0 )
      break;
    if ( (v8 & 0x10000000) != 0 )
    {
      if ( (v8 & 0x800000) == 0 && (v8 & 0x1F0) - 16 > 0xF0 )
      {
        v5 = 263;
        LOWORD(v8) = -3;
LABEL_7:
        if ( v6 >= v10 )
          goto LABEL_43;
        *v6++ = v8;
        v14 = v9 - UTF8StringSource;
        v15 = v10 - v6;
        if ( (unsigned __int64)(v9 - UTF8StringSource) > 0xD )
        {
          if ( v14 < v15 )
            v15 = v9 - UTF8StringSource;
          for ( i = &v6[v15 - 7]; ; --i )
          {
            while ( 2 )
            {
              if ( v6 >= i )
              {
LABEL_34:
                v8 = 0;
                goto LABEL_4;
              }
              v17 = *UTF8StringSource++;
              if ( v17 <= 0x7F )
              {
                *v6++ = v17;
                if ( ((unsigned __int8)UTF8StringSource & 1) != 0 )
                {
                  v17 = *UTF8StringSource++;
                  if ( v17 > 0x7F )
                    break;
                  *v6++ = v17;
                }
                if ( ((unsigned __int8)UTF8StringSource & 2) == 0 )
                  goto LABEL_27;
                LOWORD(v17) = *(_WORD *)UTF8StringSource;
                if ( (*(_WORD *)UTF8StringSource & 0x8080) == 0 )
                {
                  UTF8StringSource += 2;
                  *v6 = v17 & 0x7F;
                  v6[1] = BYTE1(v17) & 0x7F;
                  v6 += 2;
LABEL_27:
                  while ( v6 < i )
                  {
                    v18 = *((_DWORD *)UTF8StringSource + 1);
                    v17 = *(_DWORD *)UTF8StringSource;
                    if ( ((*(_DWORD *)UTF8StringSource | v18) & 0x80808080) != 0 )
                      goto LABEL_62;
                    UTF8StringSource += 8;
                    *v6 = v17 & 0x7F;
                    v6[1] = (v17 >> 8) & 0x7F;
                    v6[2] = BYTE2(v17) & 0x7F;
                    v6[3] = HIBYTE(v17) & 0x7F;
                    v6[4] = v18 & 0x7F;
                    v6[5] = (v18 >> 8) & 0x7F;
                    v6[6] = BYTE2(v18) & 0x7F;
                    v6[7] = HIBYTE(v18) & 0x7F;
                    v6 += 8;
                  }
                  goto LABEL_34;
                }
LABEL_62:
                ++UTF8StringSource;
                if ( (unsigned __int8)v17 <= 0x7Fu )
                {
                  *v6++ = (unsigned __int8)v17;
                  continue;
                }
              }
              break;
            }
            v21 = *UTF8StringSource++;
            if ( (v17 & 0x40) == 0 || (v21 & 0xC0) != 0x80 )
            {
LABEL_33:
              UTF8StringSource -= 2;
              goto LABEL_34;
            }
            v22 = v21 & 0x3F;
            if ( (v17 & 0x20) != 0 )
            {
              v23 = *UTF8StringSource;
              v24 = ((v17 & 0xF) << 6) | v22;
              if ( (v17 & 0x10) != 0 )
              {
                if ( (v24 >> 4) - 1 > 0xF || (v23 & 0xC0) != 0x80 || (UTF8StringSource[1] & 0xC0) != 0x80 )
                  goto LABEL_33;
                v29 = UTF8StringSource[1] & 0x3F | (((v24 << 6) | v23 & 0x3F) << 6);
                *v6++ = ((v29 >> 10) & 0x7FF) - 10304;
                v25 = (v29 & 0x3FF) - 9216;
                v26 = 2LL;
              }
              else
              {
                if ( (v24 & 0x3E0) == 0 || (v24 & 0x3E0) == 0x360 || (v23 & 0xC0) != 0x80 )
                  goto LABEL_33;
                v25 = ((_WORD)v24 << 6) | v23 & 0x3F;
                v26 = 1LL;
              }
              UTF8StringSource += v26;
              --i;
            }
            else
            {
              v28 = v17 & 0x1F;
              if ( v28 <= 1 )
                goto LABEL_33;
              v25 = v22 | ((_WORD)v28 << 6);
            }
            *v6++ = v25;
          }
        }
        if ( v15 >= v14 )
        {
          while ( UTF8StringSource < v9 )
          {
            v8 = *UTF8StringSource++;
            if ( v8 > 0x7F )
              goto LABEL_36;
            *v6++ = v8;
          }
          goto LABEL_11;
        }
        v8 = 0;
      }
    }
    else if ( (v8 & 0x3E0) == 0 || (v8 & 0x3E0) == 0x360 )
    {
      goto LABEL_71;
    }
  }
  if ( (v8 & 0x101F0000) <= 0x10000000 )
    goto LABEL_7;
  if ( v6 < v10 )
  {
    *v6++ = ((v8 >> 10) & 0x7FF) - 10304;
    LOWORD(v8) = (v8 & 0x3FF) - 9216;
    goto LABEL_7;
  }
LABEL_43:
  if ( UnicodeStringActualByteCount )
    *UnicodeStringActualByteCount = 2 * (v6 - UnicodeStringDestination);
  return -1073741789;
}
