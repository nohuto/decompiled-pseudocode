/*
 * XREFs of DifNtCreateWorkerFactoryWrapper @ 0x1406790B0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     NtCreateWorkerFactory @ 0x140A95E40 (NtCreateWorkerFactory.c)
 */

__int64 __fastcall DifNtCreateWorkerFactoryWrapper(
        HANDLE *a1,
        ACCESS_MASK a2,
        OBJECT_ATTRIBUTES *a3,
        void *a4,
        HANDLE WorkerProcessHandle,
        PVOID StartRoutine,
        PVOID StartParameter,
        ULONG MaxThreadCount,
        SIZE_T StackReserve,
        SIZE_T StackCommit)
{
  __int128 *APIThunkContextById; // rax
  __int64 v14; // rdx
  __int128 *v15; // r14
  int v16; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v18; // si
  __int128 *i; // rbx
  __int64 v20; // rdx
  BOOLEAN v21; // di
  __int128 *j; // rbx
  _QWORD v24[3]; // [rsp+58h] [rbp-59h] BYREF
  ULONG v25; // [rsp+70h] [rbp-41h]
  PVOID v26; // [rsp+78h] [rbp-39h]
  PVOID v27; // [rsp+80h] [rbp-31h]
  HANDLE v28; // [rsp+88h] [rbp-29h]
  void *v29; // [rsp+90h] [rbp-21h]
  OBJECT_ATTRIBUTES *v30; // [rsp+98h] [rbp-19h]
  ACCESS_MASK v31; // [rsp+A0h] [rbp-11h]
  HANDLE *v32; // [rsp+A8h] [rbp-9h]
  unsigned int WorkerFactory; // [rsp+B0h] [rbp-1h]
  void *retaddr; // [rsp+E0h] [rbp+2Fh]

  memset_0(v24, 0, 0x60uLL);
  APIThunkContextById = DifGetAPIThunkContextById(853);
  v15 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v16 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v16 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v16 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v24[0] = ReturnAddressForWrappers;
LABEL_7:
  v18 = 0;
  v32 = a1;
  v28 = WorkerProcessHandle;
  v27 = StartRoutine;
  v26 = StartParameter;
  v25 = MaxThreadCount;
  v24[2] = StackReserve;
  v24[1] = StackCommit;
  v31 = a2;
  v30 = a3;
  v29 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v18 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v15 + 4); i != v15 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v24, v14);
    }
    if ( v18 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  WorkerFactory = NtCreateWorkerFactory(
                    a1,
                    a2,
                    a3,
                    a4,
                    WorkerProcessHandle,
                    StartRoutine,
                    StartParameter,
                    MaxThreadCount,
                    StackReserve,
                    StackCommit);
  if ( v15 )
  {
    if ( (v21 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v21 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v15 + 6); j != v15 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(v24, v20);
      }
      if ( v21 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return WorkerFactory;
}
