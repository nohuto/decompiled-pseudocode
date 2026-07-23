/*
 * XREFs of NtQueryDefaultLocale @ 0x1409E7360
 * Callers:
 *     DifNtQueryDefaultLocaleWrapper @ 0x140685240 (DifNtQueryDefaultLocaleWrapper.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     PsGetSessionLocaleId @ 0x1409E73CC (PsGetSessionLocaleId.c)
 */

NTSTATUS __cdecl NtQueryDefaultLocale(BOOLEAN UserProfile, PLCID DefaultLocaleId)
{
  __int64 v2; // r8
  PLCID v3; // r9
  int SessionLocaleId; // eax
  int Src; // [rsp+58h] [rbp+20h] BYREF

  v3 = DefaultLocaleId;
  Src = 0;
  LOBYTE(DefaultLocaleId) = KeGetCurrentThread()->PreviousMode;
  if ( UserProfile )
    SessionLocaleId = PsGetSessionLocaleId(UserProfile, DefaultLocaleId, v2, v3);
  else
    SessionLocaleId = PsDefaultSystemLocaleId;
  Src = SessionLocaleId;
  if ( (_BYTE)DefaultLocaleId )
    RtlWriteULongToUser(v3, SessionLocaleId);
  else
    RtlCopyVolatileMemory(v3, &Src, 4uLL);
  return 0;
}
