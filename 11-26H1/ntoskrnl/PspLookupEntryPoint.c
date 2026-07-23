/*
 * XREFs of PspLookupEntryPoint @ 0x140CDEFCC
 * Callers:
 *     PspInitializeSystemDlls @ 0x140CDEF00 (PspInitializeSystemDlls.c)
 *     ?PspCopyNtdllExport@@YAJPEBU_PS_SYSTEM_DLL_INFO@@KPEBDPEAX_K@Z @ 0x140CDF70C (-PspCopyNtdllExport@@YAJPEBU_PS_SYSTEM_DLL_INFO@@KPEBDPEAX_K@Z.c)
 * Callees:
 *     RtlFindExportedRoutineByName @ 0x140AAD460 (RtlFindExportedRoutineByName.c)
 */

__int64 __fastcall PspLookupEntryPoint(__int64 a1, const CHAR *a2, _QWORD *a3)
{
  unsigned int v5; // ebx
  char *ExportedRoutineByName; // rax

  v5 = 0;
  ExportedRoutineByName = (char *)RtlFindExportedRoutineByName(*(PVOID *)(a1 + 32), a2);
  *a3 = ExportedRoutineByName;
  if ( ExportedRoutineByName )
    *a3 = &ExportedRoutineByName[*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 32)];
  else
    return (unsigned int)-1073741702;
  return v5;
}
