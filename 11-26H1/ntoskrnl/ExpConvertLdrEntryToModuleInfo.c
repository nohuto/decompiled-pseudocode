/*
 * XREFs of ExpConvertLdrEntryToModuleInfo @ 0x14097E258
 * Callers:
 *     ExpQuerySingleModuleInformation @ 0x14077DB50 (ExpQuerySingleModuleInformation.c)
 *     ExpQueryModuleInformationImageEx @ 0x14097E450 (ExpQueryModuleInformationImageEx.c)
 * Callees:
 *     RtlUnicodeStringToAnsiString @ 0x14097CC00 (RtlUnicodeStringToAnsiString.c)
 */

__int64 __fastcall ExpConvertLdrEntryToModuleInfo(int a1, __int64 a2, __int16 a3, int a4, __int64 a5)
{
  __int64 v7; // rax
  __int16 v8; // cx
  char *v9; // r8
  char *v10; // rax
  __int16 v11; // r9
  char v12; // dl
  __int64 result; // rax
  _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  v7 = 0LL;
  *(_QWORD *)(a5 + 16) = 0LL;
  if ( !a1 )
    v7 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a5 + 24) = v7;
  *(_DWORD *)(a5 + 32) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(a5 + 36) = *(_DWORD *)(a2 + 104);
  *(_WORD *)(a5 + 44) = *(_WORD *)(a2 + 108);
  *(_WORD *)(a5 + 40) = a3;
  DestinationString.Buffer = (char *)(a5 + 48);
  *(_WORD *)(a5 + 42) = 0;
  *(_DWORD *)&DestinationString.Length = 0x1000000;
  RtlUnicodeStringToAnsiString(&DestinationString, (PCUNICODE_STRING)(a2 + 72), 0);
  v8 = LOWORD(DestinationString.Buffer) + DestinationString.Length;
  v9 = &DestinationString.Buffer[DestinationString.Length];
  v10 = v9;
  while ( 1 )
  {
    v11 = (__int16)v10;
    if ( v9 <= DestinationString.Buffer )
      break;
    v8 = (_WORD)v10 - 1;
    v12 = *(v10 - 1);
    if ( !v12 )
      break;
    v9 = --v10;
    if ( v12 == 92 )
    {
      v8 = v11;
      break;
    }
  }
  *(_WORD *)(a5 + 46) = v8 - LOWORD(DestinationString.Buffer);
  *(_DWORD *)(a5 + 304) = *(_DWORD *)(a2 + 120);
  result = 0LL;
  if ( !a4 )
    result = *(unsigned int *)(a2 + 156);
  *(_DWORD *)(a5 + 308) = result;
  *(_QWORD *)(a5 + 312) = 0LL;
  return result;
}
