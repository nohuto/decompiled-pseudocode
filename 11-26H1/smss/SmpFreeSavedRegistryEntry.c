/*
 * XREFs of SmpFreeSavedRegistryEntry @ 0x14000D2D4
 * Callers:
 *     SmpSaveRegistryValue_U @ 0x140008210 (SmpSaveRegistryValue_U.c)
 *     SmpInitializeKnownDllsInternal @ 0x1400088B0 (SmpInitializeKnownDllsInternal.c)
 *     SmpConfigureSharedSessionData @ 0x14000A020 (SmpConfigureSharedSessionData.c)
 *     SmpCleanupStalePageFiles @ 0x14000F040 (SmpCleanupStalePageFiles.c)
 *     SmpCreatePagingFile @ 0x14000F9C0 (SmpCreatePagingFile.c)
 *     SmpCreatePagingFiles @ 0x14000FD28 (SmpCreatePagingFiles.c)
 *     SmpInitializeDosDevices @ 0x1400152F0 (SmpInitializeDosDevices.c)
 *     SmpInitializeKnownDlls @ 0x1400154E0 (SmpInitializeKnownDlls.c)
 *     SmpLoadDataFromRegistry @ 0x1400159FC (SmpLoadDataFromRegistry.c)
 *     SmpProcessFileRenames @ 0x1400173C0 (SmpProcessFileRenames.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall SmpFreeSavedRegistryEntry(struct _UNICODE_STRING *a1)
{
  __int64 v1; // rdx
  _QWORD *Buffer; // rax

  v1 = *(_QWORD *)&a1->Length;
  if ( *(struct _UNICODE_STRING **)(*(_QWORD *)&a1->Length + 8LL) != a1
    || (Buffer = a1->Buffer, (struct _UNICODE_STRING *)*Buffer != a1) )
  {
    __fastfail(3u);
  }
  *Buffer = v1;
  *(_QWORD *)(v1 + 8) = Buffer;
  return SmpDeallocSavedRegistryEntry(a1);
}
