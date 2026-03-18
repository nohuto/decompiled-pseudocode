/*
 * XREFs of SdbpUmaInit_PCWSTR @ 0x1407149BC
 * Callers:
 *     SdbpCheckContainment @ 0x1408824D0 (SdbpCheckContainment.c)
 *     SdbpCheckMatchingDevice @ 0x140882640 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140882780 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x1408829B0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140882FC0 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingText @ 0x1408833A0 (SdbpCheckMatchingText.c)
 *     SdbpCheckMatchingTextEntry @ 0x140883550 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckSdbCapability @ 0x140883E50 (SdbpCheckSdbCapability.c)
 *     SdbpGetMatchingTextAttributes @ 0x1408843F0 (SdbpGetMatchingTextAttributes.c)
 *     SdbpMatchList @ 0x1408850CC (SdbpMatchList.c)
 *     SdbpResolveMatchingFile @ 0x140885488 (SdbpResolveMatchingFile.c)
 *     SdbpCheckAllAttributes @ 0x140B45B64 (SdbpCheckAllAttributes.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlWideStringLengthFromUser @ 0x14077F6B4 (RtlWideStringLengthFromUser.c)
 *     AslAlloc @ 0x1409E4C90 (AslAlloc.c)
 *     AslFree @ 0x1409E6BD8 (AslFree.c)
 */

__int64 (*__fastcall SdbpUmaInit_PCWSTR(__int64 (*Src)(void), __int64 (**a2)(void)))(void)
{
  __int64 (*result)(void); // rax
  size_t v5; // r14
  __int64 v6; // rcx
  __int64 (*v7)(void); // rsi

  a2[1] = Src;
  result = (__int64 (*)(void))((char *)Src - 1);
  if ( (unsigned __int64)Src - 1 > 0xFFFF7FFFFFFFFFFEuLL )
  {
    *a2 = Src;
  }
  else
  {
    v5 = 2 * RtlWideStringLengthFromUser(Src) + 2;
    result = (__int64 (*)(void))AslAlloc(v6, v5);
    v7 = result;
    if ( result )
      result = RtlCopyFromUser(result, Src, v5);
    *a2 = v7;
  }
  return result;
}
