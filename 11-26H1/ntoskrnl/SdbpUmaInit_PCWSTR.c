/*
 * XREFs of SdbpUmaInit_PCWSTR @ 0x1407196AC
 * Callers:
 *     SdbpCheckContainment @ 0x1408888D0 (SdbpCheckContainment.c)
 *     SdbpCheckMatchingDevice @ 0x140888A40 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140888B80 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x140888DB0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1408893C0 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingText @ 0x1408897A0 (SdbpCheckMatchingText.c)
 *     SdbpCheckMatchingTextEntry @ 0x140889950 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckSdbCapability @ 0x14088A250 (SdbpCheckSdbCapability.c)
 *     SdbpGetMatchingTextAttributes @ 0x14088A7F0 (SdbpGetMatchingTextAttributes.c)
 *     SdbpMatchList @ 0x14088B4CC (SdbpMatchList.c)
 *     SdbpResolveMatchingFile @ 0x14088B888 (SdbpResolveMatchingFile.c)
 *     SdbpCheckAllAttributes @ 0x140B47B94 (SdbpCheckAllAttributes.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlWideStringLengthFromUser @ 0x1407821B4 (RtlWideStringLengthFromUser.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
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
