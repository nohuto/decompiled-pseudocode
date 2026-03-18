/*
 * XREFs of AddAllFlEntryWorker @ 0x140214EDC
 * Callers:
 *     bAddAllFlEntry @ 0x1401475F8 (bAddAllFlEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall AddAllFlEntryWorker(PCWSTR Path, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx

  v2 = (int)a2;
  v4 = *(_QWORD *)(W32GetSessionState((_DWORD)Path, a2) + 96);
  *(_DWORD *)(v4 + 14184) = 4;
  *(_QWORD *)(v4 + 14192) = 0LL;
  *(_QWORD *)(v4 + 14200) = v2;
  *(_DWORD *)(v4 + 14208) = 0;
  *(_QWORD *)(v4 + 14216) = 0LL;
  *(_DWORD *)(v4 + 14224) = 0;
  *(_QWORD *)(v4 + 14232) = 0LL;
  *(_DWORD *)(v4 + 14240) = 0;
  *(_QWORD *)(v4 + 14248) = 0LL;
  *(_QWORD *)(v4 + 14176) = BuildAndLoadLinkedFontRoutine;
  return RtlQueryRegistryValues(0, Path, (PRTL_QUERY_REGISTRY_TABLE)(v4 + 14176), 0LL, 0LL);
}
