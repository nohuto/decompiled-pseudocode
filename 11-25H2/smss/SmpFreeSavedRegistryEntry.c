/*
 * XREFs of SmpFreeSavedRegistryEntry @ 0x14000D6BC
 * Callers:
 *     SmpSaveRegistryValue_U @ 0x140008890 (SmpSaveRegistryValue_U.c)
 *     SmpInitializeKnownDllsInternal @ 0x140008F30 (SmpInitializeKnownDllsInternal.c)
 *     SmpConfigureSharedSessionData @ 0x14000A3D0 (SmpConfigureSharedSessionData.c)
 *     SmpCleanupStalePageFiles @ 0x14000F3F0 (SmpCleanupStalePageFiles.c)
 *     SmpCreatePagingFile @ 0x14000FD88 (SmpCreatePagingFile.c)
 *     SmpCreatePagingFiles @ 0x1400100F4 (SmpCreatePagingFiles.c)
 *     SmpInitializeDosDevices @ 0x140015700 (SmpInitializeDosDevices.c)
 *     SmpInitializeKnownDlls @ 0x1400158F0 (SmpInitializeKnownDlls.c)
 *     SmpLoadDataFromRegistry @ 0x140015DF4 (SmpLoadDataFromRegistry.c)
 *     SmpProcessFileRenames @ 0x1400176FC (SmpProcessFileRenames.c)
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
