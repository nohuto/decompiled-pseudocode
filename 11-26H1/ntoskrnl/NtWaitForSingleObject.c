/*
 * XREFs of NtWaitForSingleObject @ 0x1408FA270
 * Callers:
 *     SepRmCallLsa @ 0x1402C3DC0 (SepRmCallLsa.c)
 *     DifNtWaitForSingleObjectWrapper @ 0x140691650 (DifNtWaitForSingleObjectWrapper.c)
 *     PfSnPrefetchFileMetadata @ 0x1409B8960 (PfSnPrefetchFileMetadata.c)
 *     PfSnGetSectionObject @ 0x1409B9738 (PfSnGetSectionObject.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     ObWaitForSingleObject @ 0x1408FA300 (ObWaitForSingleObject.c)
 */

__int64 __fastcall NtWaitForSingleObject(int a1, unsigned __int8 a2, LARGE_INTEGER *p_ULong64FromUser)
{
  unsigned __int8 PreviousMode; // bl
  __int64 ULong64FromUser; // [rsp+58h] [rbp+20h] BYREF

  ULong64FromUser = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( p_ULong64FromUser && PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(p_ULong64FromUser);
    p_ULong64FromUser = (LARGE_INTEGER *)&ULong64FromUser;
  }
  return ObWaitForSingleObject(a1, PreviousMode, PreviousMode, a2, p_ULong64FromUser);
}
