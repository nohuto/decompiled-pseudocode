/*
 * XREFs of RtlNtStatusToDosError @ 0x140A62640
 * Callers:
 *     EtwpEnumerateAutologgerPath @ 0x14082D9D8 (EtwpEnumerateAutologgerPath.c)
 *     LocalGetAclForString @ 0x1409243B0 (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x140925520 (LocalGetSidForString.c)
 *     LocalConvertAclToString @ 0x140A607C4 (LocalConvertAclToString.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x140A61674 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140A61D64 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForSid @ 0x140A626A0 (LocalGetStringForSid.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140AD7C68 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpEnumerateKeyProviders @ 0x140B3E040 (EtwpEnumerateKeyProviders.c)
 *     EtwStartAutoLogger @ 0x140B42448 (EtwStartAutoLogger.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x140473A00 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 */

ULONG __stdcall RtlNtStatusToDosError(NTSTATUS Status)
{
  struct _KTHREAD *CurrentThread; // rcx
  _DWORD *Teb; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = CurrentThread->Teb;
  if ( Teb )
    RtlWriteULongToUser(Teb + 1172, Status);
  return RtlNtStatusToDosErrorNoTeb(Status);
}
