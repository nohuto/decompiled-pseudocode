/*
 * XREFs of SdbpIsEntryIdAvailableInOtherDb @ 0x14088C2C8
 * Callers:
 *     SdbpCheckKObject @ 0x1409D8348 (SdbpCheckKObject.c)
 * Callees:
 *     SdbMergeIsEntryUpdated @ 0x14088DBE0 (SdbMergeIsEntryUpdated.c)
 *     SdbGetTagFromTagID @ 0x1409D4F94 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpIsEntryIdAvailableInOtherDb(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int16 TagFromTagID; // ax
  __int64 v8; // r10
  unsigned __int64 i; // r9
  char *v10; // rcx
  int IsEntryUpdated; // eax
  int v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0;
  v5 = a3;
  TagFromTagID = SdbGetTagFromTagID(a1, (unsigned int)a3, a3, a4);
  v8 = 0LL;
  for ( i = 0LL; ; i += 10LL )
  {
    if ( i >= 0x168 )
      return 0LL;
    if ( *(_WORD *)((char *)qword_14003ED90 + i) == TagFromTagID )
      break;
    ++v8;
  }
  v10 = (char *)qword_14003ED90 + 10 * v8;
  if ( !v10 )
    return 0LL;
  if ( !*((_WORD *)v10 + 1) )
    return 0LL;
  IsEntryUpdated = SdbMergeIsEntryUpdated(a1, v5, a2, &v13);
  if ( IsEntryUpdated == -1073741275 )
    return 0LL;
  if ( IsEntryUpdated < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpIsEntryIdAvailableInOtherDb",
      4722,
      (unsigned int)"Failed to check if tag %x was updated by other PDB");
    return 0LL;
  }
  return 1LL;
}
