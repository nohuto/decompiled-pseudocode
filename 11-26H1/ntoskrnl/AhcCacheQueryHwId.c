/*
 * XREFs of AhcCacheQueryHwId @ 0x1407791E0
 * Callers:
 *     NtApphelpCacheControl @ 0x140A30790 (NtApphelpCacheControl.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     ExGetPreviousMode @ 0x140469E00 (ExGetPreviousMode.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     KseLookupHardwareId @ 0x1407C137C (KseLookupHardwareId.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AhcCacheQueryHwId(char *Src)
{
  unsigned int v2; // edi
  int v3; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-1A8h] BYREF
  _BYTE v6[328]; // [rsp+30h] [rbp-198h] BYREF
  UNICODE_STRING SourceString; // [rsp+178h] [rbp-50h] BYREF

  memset_0(v6, 0, 0x188uLL);
  DestinationString = 0LL;
  if ( ExGetPreviousMode() == 1 )
  {
    RtlCopyFromUser(v6, Src, 0x188uLL);
    if ( SourceString.MaximumLength
      && SourceString.Length
      && SourceString.Buffer
      && ((SourceString.MaximumLength | SourceString.Length) & 1) == 0
      && SourceString.Length <= SourceString.MaximumLength
      && SourceString.Length <= 0xFFFCu )
    {
      DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
      if ( DestinationString.Buffer )
      {
        DestinationString.MaximumLength = SourceString.Length + 2;
        DestinationString.Length = 0;
        ProbeForRead(SourceString.Buffer, SourceString.MaximumLength, 2u);
        RtlCopyUnicodeString(&DestinationString, &SourceString);
        v3 = KseLookupHardwareId(DestinationString.Buffer);
        RtlWriteUCharToUser(Src + 320, v3 == 0);
        v2 = 0;
      }
      else
      {
        v2 = -1073741670;
      }
    }
    else
    {
      v2 = -1073741811;
    }
  }
  else
  {
    v2 = -1073741822;
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0x6F637061u);
  return v2;
}
