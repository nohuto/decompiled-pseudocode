/*
 * XREFs of RtlUnicodeToMultiByteN @ 0x14097D240
 * Callers:
 *     wcstombs @ 0x14053AB30 (wcstombs.c)
 *     _wctomb_s_l @ 0x14053AE88 (_wctomb_s_l.c)
 *     _safecrt_wctomb_s @ 0x14053FB68 (_safecrt_wctomb_s.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x14097D580 (RtlpIsUtf8Process.c)
 *     RtlUnicodeToUTF8N @ 0x14097D620 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rdi
  PCWCH v10; // r11
  ULONG v11; // eax
  PCHAR v12; // r9
  _CPTABLEINFO *p_Blink; // rdi
  ULONG v14; // r10d
  _WORD *WideCharTable; // rbx
  __int64 v16; // rcx
  __int16 v17; // dx
  _BYTE *v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned int v22; // ecx
  ULONG *v23; // r8
  signed __int32 v24[8]; // [rsp+0h] [rbp-48h] BYREF
  char v25; // [rsp+58h] [rbp+10h] BYREF

  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    p_Blink = &Utf8TableInfo;
    v12 = MultiByteString;
    v10 = UnicodeString;
    v11 = MaxBytesInMultiByteString;
  }
  else
  {
    _InterlockedOr(v24, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v10 = UnicodeString;
    v11 = MaxBytesInMultiByteString;
    v12 = MultiByteString;
    p_Blink = (_CPTABLEINFO *)&CurrentServerSiloGlobals[64].Blink;
    if ( !p_Blink )
    {
LABEL_22:
      v23 = (ULONG *)&v25;
      if ( BytesInMultiByteString )
        v23 = BytesInMultiByteString;
      if ( BytesInUnicodeString )
        RtlUnicodeToUTF8N(MultiByteString, MaxBytesInMultiByteString, v23, UnicodeString, BytesInUnicodeString);
      else
        *v23 = 0;
      return 0;
    }
  }
  if ( p_Blink->CodePage == 0xFDE9 )
    goto LABEL_22;
  v14 = BytesInUnicodeString >> 1;
  if ( p_Blink->DBCSCodePage )
  {
    WideCharTable = p_Blink->WideCharTable;
    if ( v14 )
    {
      while ( v11 )
      {
        v16 = *v10++;
        v17 = WideCharTable[v16];
        if ( HIBYTE(v17) )
        {
          v22 = v11--;
          if ( v22 < 2 )
            break;
          *v12++ = HIBYTE(v17);
        }
        *v12 = v17;
        --v11;
        ++v12;
        if ( !--v14 )
          break;
      }
    }
    if ( BytesInMultiByteString )
      *BytesInMultiByteString = (_DWORD)v12 - (_DWORD)MultiByteString;
  }
  else
  {
    if ( v14 < MaxBytesInMultiByteString )
      MaxBytesInMultiByteString = BytesInUnicodeString >> 1;
    if ( BytesInMultiByteString )
      *BytesInMultiByteString = MaxBytesInMultiByteString;
    v19 = p_Blink->WideCharTable;
    if ( MaxBytesInMultiByteString )
    {
      v20 = MaxBytesInMultiByteString;
      do
      {
        v21 = *UnicodeString;
        ++MultiByteString;
        ++UnicodeString;
        *(MultiByteString - 1) = v19[v21];
        --v20;
      }
      while ( v20 );
    }
  }
  return 0;
}
