/*
 * XREFs of ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x1800862DC
 * Callers:
 *     ?RmSrvCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAX_KPEA_K@Z @ 0x180081FF4 (-RmSrvCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAX_KPEA_K.c)
 *     ?RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180087F40 (-RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x180063140 (-RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z.c)
 *     ?RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x180084A48 (-RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpCpuSetManagerCreateProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180085178 (-RmpCpuSetManagerCreateProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_P.c)
 *     ?RmpCpuSetManagerDestroyProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x1800852A8 (-RmpCpuSetManagerDestroyProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpCpuSetManagerFindProcess@@YAPEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_MANAGER@@PEAX@Z @ 0x1800853E4 (-RmpCpuSetManagerFindProcess@@YAPEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_MANAGER@@PEAX@Z.c)
 *     ?RmpCpuSetManagerInsertProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x180085860 (-RmpCpuSetManagerInsertProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18008662C (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 __fastcall RmpCpuSetManagerRegisterProcessWithAllocation(
        struct _RM_CPU_SET_MANAGER **a1,
        HANDLE SourceHandle,
        struct _RM_CPU_SET_ALLOCATION *a3,
        PVOID *a4)
{
  struct _RM_CPU_SET_MANAGER *v4; // rbp
  struct _RM_CPU_SET_MANAGER *v6; // rcx
  struct _RM_CPU_SET_PROCESS *v10; // rbx
  struct _RM_CPU_SET_PROCESS *Process; // rax
  struct _RM_CPU_SET_PROCESS *v12; // rsi
  struct _RM_CPU_SET_PROCESS *Heap; // rax
  NTSTATUS ProcessRegistration; // edi
  DWORD ProcessId; // eax
  PVOID v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *i; // rax
  PVOID P; // [rsp+20h] [rbp-38h] BYREF

  v4 = *a1;
  v6 = *a1;
  P = 0LL;
  v10 = 0LL;
  Process = RmpCpuSetManagerFindProcess(v6, SourceHandle);
  v12 = Process;
  if ( Process )
  {
    v17 = (_QWORD *)((char *)Process + 24);
    for ( i = (_QWORD *)*((_QWORD *)Process + 3); i != v17; i = (_QWORD *)*i )
    {
      if ( (struct _RM_CPU_SET_ALLOCATION *)*(i - 3) == a3 )
        return (unsigned int)-1073740008;
    }
  }
  else
  {
    Heap = (struct _RM_CPU_SET_PROCESS *)HampAllocateHeap(0x40uLL);
    v10 = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    v12 = Heap;
    memset_0(Heap, 0, 0x40uLL);
    *((_QWORD *)v10 + 4) = (char *)v10 + 24;
    *((_QWORD *)v10 + 3) = (char *)v10 + 24;
    ProcessRegistration = RmpSystemDuplicateHandle(SourceHandle, 0, (PHANDLE)v10 + 2);
    if ( ProcessRegistration < 0 )
    {
LABEL_17:
      RmpCpuSetManagerDestroyProcess(v4, v10);
      return (unsigned int)ProcessRegistration;
    }
    ProcessId = GetProcessId(*((HANDLE *)v10 + 2));
    *((_DWORD *)v10 + 14) = ProcessId;
    *((_QWORD *)v10 + 1) = HIBYTE(ProcessId)
                         + 37
                         * (BYTE2(ProcessId) + 37 * (BYTE1(ProcessId) + 37 * ((unsigned __int8)ProcessId + 11623883LL)));
    RmpCpuSetManagerInsertProcess(v4, v10);
  }
  ProcessRegistration = RmpCpuSetManagerCreateProcessRegistration(
                          (struct _RM_CPU_SET_CLIENT_CONTEXT *)a1,
                          v12,
                          a3,
                          (struct _RM_CPU_SET_PROCESS_REGISTRATION **)&P);
  if ( ProcessRegistration < 0 )
  {
    v16 = P;
  }
  else
  {
    v10 = 0LL;
    RmpCpuSetManagerApplyProcessPolicy(v4, v12);
    v16 = 0LL;
    *a4 = P;
  }
  if ( v16 )
    RmpCpuSetManagerReleaseProcessRegistrationEx(v4, v16, 1u);
  if ( v10 )
    goto LABEL_17;
  return (unsigned int)ProcessRegistration;
}
