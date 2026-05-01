/*
 * XREFs of ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x180063140
 * Callers:
 *     ?HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x1800139F4 (-HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARA.c)
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x1800862DC (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RmpSystemDuplicateHandle(HANDLE SourceHandle, ACCESS_MASK DesiredAccess, PHANDLE TargetHandle)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v7; // rax

  CurrentProcess = GetCurrentProcess();
  v7 = GetCurrentProcess();
  return NtDuplicateObject(v7, SourceHandle, CurrentProcess, TargetHandle, DesiredAccess, 0, DesiredAccess == 0 ? 2 : 0);
}
