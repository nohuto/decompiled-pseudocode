/*
 * XREFs of AslpImageFirstSectionUma @ 0x140895834
 * Callers:
 *     AslpFileGetExeWrapper @ 0x140892FA0 (AslpFileGetExeWrapper.c)
 *     AslpImageRvaToSectionUma @ 0x140895930 (AslpImageRvaToSectionUma.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     AslpMemoryCheckFileBounds @ 0x140719B70 (AslpMemoryCheckFileBounds.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     AslpFileGetImageNtHeader @ 0x14089382C (AslpFileGetImageNtHeader.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpImageFirstSectionUma(_WORD *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v6; // rbx
  unsigned __int16 UShortFromUser; // r14
  __int16 v9; // di
  __int64 v10; // rcx
  unsigned __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0LL;
  if ( !a2 || (v11 = *a2, (v6 = v11) == 0) || !AslpMemoryCheckFileBounds(v11, 0x108uLL, a3) )
  {
    if ( (int)AslpFileGetImageNtHeader(&v11, a3) < 0 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"AslpImageFirstSectionUma",
        5222,
        (unsigned int)"AslpFileGetImageNtHeader failed [%x]");
      return 0LL;
    }
    v6 = v11;
    if ( a2 )
      *a2 = v11;
  }
  if ( MmIsUserAddress(v6) )
  {
    UShortFromUser = RtlReadUShortFromUser((unsigned __int16 *)(v6 + 20));
    v9 = RtlReadUShortFromUser((unsigned __int16 *)(v6 + 6));
  }
  else
  {
    UShortFromUser = *(_WORD *)(v6 + 20);
    v9 = *(_WORD *)(v6 + 6);
  }
  if ( !AslpMemoryCheckFileBounds(v6 + UShortFromUser + 24LL, 0x28uLL, a3) )
    return 0LL;
  if ( a1 )
    *a1 = v9;
  return v10;
}
