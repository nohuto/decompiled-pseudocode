/*
 * XREFs of EtwpApplyContainerFilter @ 0x1409135A0
 * Callers:
 *     EtwpApplyScopeFilters @ 0x140912900 (EtwpApplyScopeFilters.c)
 *     EtwpApplyTransientFilters @ 0x140914E3C (EtwpApplyTransientFilters.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     RtlUTF8ToUnicodeN @ 0x14097DB50 (RtlUTF8ToUnicodeN.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

char __fastcall EtwpApplyContainerFilter(__int64 a1, unsigned __int16 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rsi
  char v5; // bl
  wchar_t *Buffer; // r15
  unsigned __int16 Length; // ax
  const CHAR *v9; // r9
  unsigned __int16 v10; // di
  unsigned int v11; // r14d
  ULONG UTF8StringByteCount; // [rsp+20h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  DestinationString = 0LL;
  v4 = *(_QWORD *)(v2 + 648);
  if ( !a2 )
    return 1;
  v5 = 1;
  if ( v4 == EtwpHostSiloState )
  {
    RtlInitUnicodeString(&DestinationString, L"Host");
    Length = DestinationString.Length;
    Buffer = DestinationString.Buffer;
  }
  else
  {
    UnicodeStringActualByteCount = 0;
    DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x40uLL);
    Buffer = DestinationString.Buffer;
    if ( !DestinationString.Buffer )
      return 1;
    v9 = *(const CHAR **)(v4 + 4488);
    UTF8StringByteCount = *(unsigned __int16 *)(v4 + 4496);
    DestinationString.MaximumLength = 2 * (UTF8StringByteCount + 1);
    RtlUTF8ToUnicodeN(
      DestinationString.Buffer,
      DestinationString.MaximumLength,
      &UnicodeStringActualByteCount,
      v9,
      UTF8StringByteCount);
    Length = UnicodeStringActualByteCount;
    DestinationString.Length = UnicodeStringActualByteCount;
  }
  v10 = 0;
  v11 = Length >> 1;
  while ( v10 < *a2 )
  {
    if ( a2[8 * v10 + 4] == v11 && !wcsnicmp(*(const wchar_t **)&a2[8 * v10 + 8], Buffer, v11) )
      goto LABEL_13;
    ++v10;
  }
  v5 = 0;
LABEL_13:
  if ( v4 != EtwpHostSiloState )
    RtlFreeAnsiString(&DestinationString);
  return v5;
}
