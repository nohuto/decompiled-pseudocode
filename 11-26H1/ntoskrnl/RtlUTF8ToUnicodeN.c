/*
 * XREFs of RtlUTF8ToUnicodeN @ 0x14096D210
 * Callers:
 *     RtlUTF8StringToUnicodeString @ 0x140809370 (RtlUTF8StringToUnicodeString.c)
 *     EtwpApplyContainerFilter @ 0x140937A00 (EtwpApplyContainerFilter.c)
 *     RtlMultiByteToUnicodeSize @ 0x14096B6A0 (RtlMultiByteToUnicodeSize.c)
 *     RtlAnsiStringToUnicodeString @ 0x14096BA30 (RtlAnsiStringToUnicodeString.c)
 *     RtlMultiByteToUnicodeN @ 0x14096C5F0 (RtlMultiByteToUnicodeN.c)
 *     RtlAnsiCharToUnicodeChar @ 0x14096CA60 (RtlAnsiCharToUnicodeChar.c)
 *     RtlCustomCPToUnicodeN @ 0x14096D090 (RtlCustomCPToUnicodeN.c)
 * Callees:
 *     CountUTF8ToUnicode @ 0x1404B33F0 (CountUTF8ToUnicode.c)
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
  char v20; // bl
  int v21; // ebx
  CHAR v22; // r14
  unsigned int v23; // ebx
  WCHAR v24; // dx
  unsigned int v25; // edx
  unsigned int v26; // edx
  unsigned int v27; // edx

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
        goto LABEL_70;
      if ( (v8 & 0x20) != 0 )
      {
        v19 = v8 & 0xF;
        if ( (v8 & 0x10) != 0 )
        {
          if ( v19 > 4 )
            goto LABEL_70;
          v8 = v19 | 0x504D0C00;
        }
        else
        {
          v8 = v19 | 0x48228000;
        }
      }
      else
      {
        v25 = v8 & 0x1F;
        if ( v25 <= 1 )
          goto LABEL_70;
        v8 = v25 | 0x800000;
      }
    }
    if ( (v13 & 0xC0) != 0x80 )
    {
      UTF8StringSource = v12;
LABEL_70:
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
          goto LABEL_42;
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
                      goto LABEL_61;
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
LABEL_61:
                ++UTF8StringSource;
                if ( (unsigned __int8)v17 <= 0x7Fu )
                {
                  *v6++ = (unsigned __int8)v17;
                  continue;
                }
              }
              break;
            }
            v20 = *UTF8StringSource++;
            if ( (v17 & 0x40) == 0 || (v20 & 0xC0) != 0x80 )
            {
LABEL_33:
              UTF8StringSource -= 2;
              goto LABEL_34;
            }
            v21 = v20 & 0x3F;
            if ( (v17 & 0x20) != 0 )
            {
              v22 = *UTF8StringSource;
              v23 = ((v17 & 0xF) << 6) | v21;
              if ( (v17 & 0x10) != 0 )
              {
                if ( (v23 >> 4) - 1 > 0xF || (v22 & 0xC0) != 0x80 || (UTF8StringSource[1] & 0xC0) != 0x80 )
                  goto LABEL_33;
                v27 = UTF8StringSource[1] & 0x3F | (((v23 << 6) | v22 & 0x3F) << 6);
                UTF8StringSource += 2;
                *v6++ = ((v27 >> 10) & 0x7FF) - 10304;
                v24 = (v27 & 0x3FF) - 9216;
              }
              else
              {
                if ( (v23 & 0x3E0) == 0 || (v23 & 0x3E0) == 0x360 || (v22 & 0xC0) != 0x80 )
                  goto LABEL_33;
                ++UTF8StringSource;
                v24 = ((_WORD)v23 << 6) | v22 & 0x3F;
              }
              --i;
            }
            else
            {
              v26 = v17 & 0x1F;
              if ( v26 <= 1 )
                goto LABEL_33;
              v24 = v21 | ((_WORD)v26 << 6);
            }
            *v6++ = v24;
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
      goto LABEL_70;
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
LABEL_42:
  if ( UnicodeStringActualByteCount )
    *UnicodeStringActualByteCount = 2 * (v6 - UnicodeStringDestination);
  return -1073741789;
}
