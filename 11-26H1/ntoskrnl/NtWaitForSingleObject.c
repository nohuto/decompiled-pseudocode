/*
 * XREFs of NtWaitForSingleObject @ 0x14092A200
 * Callers:
 *     SepRmCallLsa @ 0x14030EA80 (SepRmCallLsa.c)
 *     DifNtWaitForSingleObjectWrapper @ 0x140695230 (DifNtWaitForSingleObjectWrapper.c)
 *     PfSnPrefetchFileMetadata @ 0x140989940 (PfSnPrefetchFileMetadata.c)
 *     PfSnGetSectionObject @ 0x14098A718 (PfSnGetSectionObject.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     ObWaitForSingleObject @ 0x14092A290 (ObWaitForSingleObject.c)
 */

NTSTATUS __cdecl NtWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  int v4; // esi
  unsigned __int8 PreviousMode; // bl
  __int64 ULong64FromUser; // [rsp+58h] [rbp+20h] BYREF

  v4 = (int)Handle;
  ULong64FromUser = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( Timeout && PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(Timeout);
    Timeout = (PLARGE_INTEGER)&ULong64FromUser;
  }
  return ObWaitForSingleObject(v4, PreviousMode, PreviousMode, Alertable, Timeout);
}
