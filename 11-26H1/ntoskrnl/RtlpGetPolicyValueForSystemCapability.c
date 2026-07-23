/*
 * XREFs of RtlpGetPolicyValueForSystemCapability @ 0x140A96988
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x140A968F8 (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     ZwQueryLicenseValue @ 0x14072ABE0 (ZwQueryLicenseValue.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpGetPolicyValueForSystemCapability(PCUNICODE_STRING Source, PUNICODE_STRING UnicodeString)
{
  void *v4; // r14
  NTSTATUS appended; // ebx
  unsigned int v6; // ebx
  wchar_t *Pool2; // rax
  wchar_t *v8; // r15
  NTSTATUS v9; // eax
  ULONG v11; // esi
  ULONG v12; // r15d
  wchar_t *v13; // rax
  wchar_t *v14; // rsi
  __int64 v15; // rcx
  wchar_t *v16; // rax
  __int16 v17; // cx
  UNICODE_STRING Destination; // [rsp+30h] [rbp-10h] BYREF
  ULONG DataSize; // [rsp+80h] [rbp+40h] BYREF
  ULONG Type; // [rsp+90h] [rbp+50h] BYREF

  DataSize = 0;
  Type = 0;
  v4 = 0LL;
  Destination = 0LL;
  if ( !Source || !UnicodeString )
  {
    appended = -1073741811;
LABEL_3:
    if ( !UnicodeString )
      goto LABEL_11;
    goto LABEL_4;
  }
  v6 = (unsigned __int16)(Source->Length + 56);
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  v8 = Pool2;
  if ( !Pool2 )
    goto LABEL_14;
  memset_0(Pool2, 0, v6);
  Destination.MaximumLength = v6;
  Destination.Buffer = v8;
  appended = RtlAppendUnicodeStringToString(&Destination, &stru_140004790);
  if ( appended < 0 )
    goto LABEL_4;
  appended = RtlAppendUnicodeStringToString(&Destination, Source);
  if ( appended < 0 )
    goto LABEL_4;
  v9 = ZwQueryLicenseValue(&Destination, &Type, 0LL, 0, &DataSize);
  appended = v9;
  if ( v9 != -1073741789 )
  {
    if ( v9 >= 0 )
      goto LABEL_11;
    goto LABEL_3;
  }
  v11 = DataSize;
  v12 = DataSize;
  v4 = (void *)ExAllocatePool2(0x41uLL);
  appended = ZwQueryLicenseValue(&Destination, &Type, v4, v11, &DataSize);
  if ( appended < 0 )
  {
LABEL_4:
    RtlFreeAnsiString(UnicodeString);
    goto LABEL_27;
  }
  if ( Type != 1 || !v11 || (v11 & 1) != 0 )
  {
    appended = -1073741823;
    goto LABEL_4;
  }
  v13 = (wchar_t *)ExAllocatePool2(0x100uLL);
  v14 = v13;
  if ( !v13 )
  {
LABEL_14:
    appended = -1073741801;
    goto LABEL_4;
  }
  memmove(v13, v4, v12);
  v15 = 0x7FFFLL;
  *UnicodeString = 0LL;
  v16 = v14;
  do
  {
    if ( !*v16 )
      break;
    ++v16;
    --v15;
  }
  while ( v15 );
  appended = v15 == 0 ? 0xC000000D : 0;
  if ( v15 )
  {
    v17 = 2 * v15;
    UnicodeString->Buffer = v14;
    UnicodeString->Length = -2 - v17;
    UnicodeString->MaximumLength = -v17;
  }
  if ( appended < 0 )
    goto LABEL_4;
  appended = 0;
LABEL_27:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
LABEL_11:
  if ( Destination.Buffer )
    ExFreePool(Destination.Buffer);
  return (unsigned int)appended;
}
