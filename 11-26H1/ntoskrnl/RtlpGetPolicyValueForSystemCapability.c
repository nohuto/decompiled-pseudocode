/*
 * XREFs of RtlpGetPolicyValueForSystemCapability @ 0x140A91E38
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x140A91DA8 (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140432F70 (RtlAppendUnicodeStringToString.c)
 *     ZwQueryLicenseValue @ 0x140726010 (ZwQueryLicenseValue.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpGetPolicyValueForSystemCapability(PCUNICODE_STRING Source, PUNICODE_STRING UnicodeString)
{
  void *v4; // r14
  int appended; // ebx
  unsigned int v6; // ebx
  wchar_t *Pool2; // rax
  wchar_t *v8; // r15
  int LicenseValue; // eax
  UNICODE_STRING Destination; // [rsp+30h] [rbp-10h] BYREF
  int v12; // [rsp+90h] [rbp+50h] BYREF

  v12 = 0;
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
  if ( Pool2 )
  {
    memset_0(Pool2, 0, v6);
    Destination.MaximumLength = v6;
    Destination.Buffer = v8;
    appended = RtlAppendUnicodeStringToString(&Destination, &stru_140004770);
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeStringToString(&Destination, Source);
      if ( appended >= 0 )
      {
        LicenseValue = ZwQueryLicenseValue((__int64)&Destination, (__int64)&v12);
        appended = LicenseValue;
        if ( LicenseValue != -1073741789 )
        {
          if ( LicenseValue >= 0 )
            goto LABEL_11;
          goto LABEL_3;
        }
        v4 = (void *)ExAllocatePool2(0x41uLL);
        appended = ZwQueryLicenseValue((__int64)&Destination, (__int64)&v12);
        if ( appended >= 0 )
          appended = -1073741823;
      }
    }
  }
  else
  {
    appended = -1073741801;
  }
LABEL_4:
  RtlFreeAnsiString(UnicodeString);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
LABEL_11:
  if ( Destination.Buffer )
    ExFreePool(Destination.Buffer);
  return (unsigned int)appended;
}
