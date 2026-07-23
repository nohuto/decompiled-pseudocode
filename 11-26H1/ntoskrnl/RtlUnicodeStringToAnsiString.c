/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x14097CC00
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x1404D8D14 (DbgUnicodeStringToAnsiString.c)
 *     PnpGetDriverNameFromString @ 0x1405DC900 (PnpGetDriverNameFromString.c)
 *     DifRtlUnicodeStringToAnsiStringWrapper @ 0x14069A0B0 (DifRtlUnicodeStringToAnsiStringWrapper.c)
 *     IopInitializeCrashDump @ 0x1407960C8 (IopInitializeCrashDump.c)
 *     KsepGetModuleInfoByName @ 0x1407C1758 (KsepGetModuleInfoByName.c)
 *     NtQuerySystemEnvironmentValue @ 0x140844070 (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x1408448F0 (NtSetSystemEnvironmentValue.c)
 *     CmpLoadLayerVersion @ 0x14085BC98 (CmpLoadLayerVersion.c)
 *     MmGetModuleRoutineAddress @ 0x14086ADF0 (MmGetModuleRoutineAddress.c)
 *     EtwpBuildProcessEvent @ 0x1408FBCAC (EtwpBuildProcessEvent.c)
 *     ExpQueryModuleInformationImage @ 0x14097B3C0 (ExpQueryModuleInformationImage.c)
 *     CmpQueryDowncastString @ 0x14097E108 (CmpQueryDowncastString.c)
 *     ExpConvertLdrEntryToModuleInfo @ 0x14097E258 (ExpConvertLdrEntryToModuleInfo.c)
 *     ObCreateObjectTypeEx @ 0x140A67030 (ObCreateObjectTypeEx.c)
 *     ExpSystemErrorHandler2 @ 0x140C056F0 (ExpSystemErrorHandler2.c)
 *     ViThunkHookExportAddress @ 0x140C3BAE0 (ViThunkHookExportAddress.c)
 *     HdlspProcessDumpCommand @ 0x140C52FF0 (HdlspProcessDumpCommand.c)
 *     IopReassignSystemRoot @ 0x140CC3E74 (IopReassignSystemRoot.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x14097D580 (RtlpIsUtf8Process.c)
 *     RtlUnicodeToUTF8N @ 0x14097D620 (RtlUnicodeToUTF8N.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS v6; // r12d
  ULONG v7; // esi
  ULONG Length; // ebx
  wchar_t *Buffer; // rdi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  ULONG v11; // ebx
  ULONG v12; // esi
  ULONG MaximumLength; // r14d
  ULONG UnicodeStringByteCount; // ebx
  wchar_t *v15; // rsi
  char *v16; // rdi
  _CPTABLEINFO *p_Blink; // rax
  unsigned int v18; // r10d
  ULONG v19; // ebx
  int v20; // r11d
  _WORD *v21; // r9
  char *v22; // r8
  __int16 v23; // cx
  _BYTE *WideCharTable; // r9
  unsigned int v25; // r8d
  unsigned int v26; // eax
  __int16 v28; // cx
  char *Pool2; // rax
  signed __int32 v30[8]; // [rsp+0h] [rbp-98h] BYREF
  ULONG UTF8StringActualByteCount; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v32; // [rsp+34h] [rbp-64h]
  unsigned int v33; // [rsp+38h] [rbp-60h]
  ULONG v34; // [rsp+40h] [rbp-58h]
  int v35; // [rsp+44h] [rbp-54h]
  int v36; // [rsp+48h] [rbp-50h]
  char *v37; // [rsp+50h] [rbp-48h]
  wchar_t *v38; // [rsp+58h] [rbp-40h]
  char v39; // [rsp+A8h] [rbp+10h]
  ULONG v40; // [rsp+B8h] [rbp+20h] BYREF

  v39 = 0;
  v6 = 0;
  v7 = 0;
  v40 = 0;
  Length = SourceString->Length;
  Buffer = SourceString->Buffer;
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    if ( Length )
    {
      RtlUnicodeToUTF8N(0LL, 0, &v40, Buffer, Length);
      v7 = v40;
    }
  }
  else
  {
    _InterlockedOr(v30, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v11 = Length >> 1;
    if ( WORD2(CurrentServerSiloGlobals[65].Flink) )
    {
      for ( ; v11; --v11 )
      {
        v28 = *((_WORD *)&CurrentServerSiloGlobals[67].Flink->Flink + *Buffer++);
        v7 += (HIBYTE(v28) != 0) + 1;
      }
    }
    else
    {
      v7 = v11;
    }
  }
  v12 = v7 + 1;
  UTF8StringActualByteCount = v12;
  if ( v12 > 0xFFFF )
    return -1073741584;
  if ( AllocateDestinationString )
  {
    Pool2 = (char *)ExAllocatePool2(0x100uLL);
    DestinationString->Buffer = Pool2;
    if ( !Pool2 )
      return -1073741801;
    DestinationString->MaximumLength = v12;
    LOWORD(MaximumLength) = v12;
  }
  else
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( v12 > MaximumLength )
    {
      if ( !(_WORD)MaximumLength )
        return -2147483643;
      v39 = 1;
    }
  }
  v35 = 0;
  UnicodeStringByteCount = SourceString->Length;
  v15 = SourceString->Buffer;
  v16 = DestinationString->Buffer;
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    p_Blink = &Utf8TableInfo;
  }
  else
  {
    _InterlockedOr(v30, 0);
    p_Blink = (_CPTABLEINFO *)&PsGetCurrentServerSiloGlobals()[64].Blink;
  }
  v38 = v15;
  v18 = (unsigned __int16)MaximumLength - 1;
  v33 = v18;
  v37 = v16;
  v32 = 0;
  v34 = 0;
  if ( !p_Blink || p_Blink->CodePage == 0xFDE9 )
  {
    v36 = 0;
    if ( !UnicodeStringByteCount )
    {
      v18 = 0;
      UTF8StringActualByteCount = 0;
      goto LABEL_30;
    }
    RtlUnicodeToUTF8N(v16, v18, &UTF8StringActualByteCount, v15, UnicodeStringByteCount);
  }
  else
  {
    v19 = UnicodeStringByteCount >> 1;
    v34 = v19;
    if ( !p_Blink->DBCSCodePage )
    {
      if ( v19 < v18 )
        v18 = v19;
      UTF8StringActualByteCount = v18;
      WideCharTable = p_Blink->WideCharTable;
      v25 = 0;
      v32 = 0;
      while ( v25 < v18 )
      {
        v16[v25] = WideCharTable[v15[v25]];
        v32 = ++v25;
      }
      goto LABEL_30;
    }
    LOWORD(v40) = 0;
    v20 = (int)v16;
    v21 = p_Blink->WideCharTable;
    while ( 1 )
    {
      v22 = v16;
      if ( !v19 || !v18 )
        break;
      v23 = v21[*v15];
      LOWORD(v40) = v23;
      v38 = ++v15;
      if ( HIBYTE(v23) )
      {
        v26 = v18--;
        v33 = v18;
        if ( v26 < 2 )
          break;
        *v16++ = HIBYTE(v23);
        v37 = v16;
        v22 = v16;
      }
      *v16 = v23;
      v16 = v22 + 1;
      v37 = v22 + 1;
      v33 = --v18;
      v34 = --v19;
    }
    UTF8StringActualByteCount = (_DWORD)v16 - v20;
  }
  v18 = UTF8StringActualByteCount;
LABEL_30:
  v35 = 0;
  DestinationString->Buffer[v18] = 0;
  DestinationString->Length = v18;
  if ( v39 )
    return -2147483643;
  return v6;
}
