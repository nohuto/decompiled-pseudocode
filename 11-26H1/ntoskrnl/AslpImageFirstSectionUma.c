/*
 * XREFs of AslpImageFirstSectionUma @ 0x14088F438
 * Callers:
 *     AslpFileGetExeWrapper @ 0x14088CBA4 (AslpFileGetExeWrapper.c)
 *     AslpImageRvaToSectionUma @ 0x14088F534 (AslpImageRvaToSectionUma.c)
 * Callees:
 *     MmIsUserAddress @ 0x14044E7C0 (MmIsUserAddress.c)
 *     AslpMemoryCheckFileBounds @ 0x140714E80 (AslpMemoryCheckFileBounds.c)
 *     RtlReadUShortFromUser @ 0x14077F5CC (RtlReadUShortFromUser.c)
 *     AslpFileGetImageNtHeader @ 0x14088D430 (AslpFileGetImageNtHeader.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
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
