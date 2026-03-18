/*
 * XREFs of PspLookupEntryPoint @ 0x140CD8C4C
 * Callers:
 *     PspInitializeSystemDlls @ 0x140CD8B80 (PspInitializeSystemDlls.c)
 *     ?PspCopyNtdllExport@@YAJPEBU_PS_SYSTEM_DLL_INFO@@KPEBDPEAX_K@Z @ 0x140CD938C (-PspCopyNtdllExport@@YAJPEBU_PS_SYSTEM_DLL_INFO@@KPEBDPEAX_K@Z.c)
 * Callees:
 *     RtlFindExportedRoutineByName @ 0x140AAF810 (RtlFindExportedRoutineByName.c)
 */

__int64 __fastcall PspLookupEntryPoint(__int64 a1, const char *a2, unsigned __int64 *a3)
{
  unsigned int v5; // ebx
  unsigned __int64 ExportedRoutineByName; // rax

  v5 = 0;
  ExportedRoutineByName = RtlFindExportedRoutineByName(*(_QWORD *)(a1 + 32), a2);
  *a3 = ExportedRoutineByName;
  if ( ExportedRoutineByName )
    *a3 = ExportedRoutineByName + *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 32);
  else
    return (unsigned int)-1073741702;
  return v5;
}
