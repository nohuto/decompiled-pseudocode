/*
 * XREFs of SleepstudyHelperSetBlockerFriendlyName @ 0x14042FDA0
 * Callers:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x14042FCB0 (SleepstudyHelperCreateBlockerFromGuid.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x14042FE80 (RtlUnicodeStringCopy.c)
 *     SSHSupportAllocatePaged @ 0x140ABB050 (SSHSupportAllocatePaged.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SleepstudyHelperSetBlockerFriendlyName(UNICODE_STRING *a1, const UNICODE_STRING *a2)
{
  wchar_t *Paged; // rax
  NTSTATUS v5; // edi
  wchar_t *Buffer; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( !a1 || !a2 || !a2->Length )
  {
    v5 = -1073741811;
    goto LABEL_13;
  }
  Paged = (wchar_t *)SSHSupportAllocatePaged(a2->Length, *(unsigned int *)(*(_QWORD *)&a1->Length + 24LL));
  DestinationString.Buffer = Paged;
  if ( !Paged )
  {
    v5 = -1073741670;
    goto LABEL_9;
  }
  DestinationString.MaximumLength = a2->Length;
  DestinationString.Length = 0;
  v5 = RtlUnicodeStringCopy(&DestinationString, a2);
  if ( v5 < 0 )
  {
LABEL_13:
    Paged = DestinationString.Buffer;
    goto LABEL_9;
  }
  Buffer = a1[3].Buffer;
  if ( Buffer )
    ExFreePoolWithTag(Buffer, *(_DWORD *)(*(_QWORD *)&a1->Length + 24LL));
  v5 = 0;
  a1[3] = DestinationString;
  Paged = (wchar_t *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
LABEL_9:
  if ( Paged )
    ExFreePoolWithTag(Paged, *(_DWORD *)(*(_QWORD *)&a1->Length + 24LL));
  return (unsigned int)v5;
}
