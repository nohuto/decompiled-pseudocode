/*
 * XREFs of DifNtCreateUserProcessWrapper @ 0x1406789C0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 */

__int64 __fastcall DifNtCreateUserProcessWrapper(
        HANDLE *a1,
        HANDLE *a2,
        ACCESS_MASK a3,
        ACCESS_MASK a4,
        OBJECT_ATTRIBUTES *ProcessObjectAttributes,
        OBJECT_ATTRIBUTES *ThreadObjectAttributes,
        ULONG ProcessFlags,
        ULONG ThreadFlags,
        PVOID ProcessParameters,
        _PS_CREATE_INFO *CreateInfo,
        _PS_ATTRIBUTE_LIST *AttributeList)
{
  __int128 *APIThunkContextById; // rax
  __int64 v15; // rdx
  __int128 *v16; // r14
  int v17; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v19; // si
  __int128 *i; // rbx
  __int64 v21; // rdx
  BOOLEAN v22; // di
  __int128 *j; // rbx
  _QWORD v25[4]; // [rsp+68h] [rbp-59h] BYREF
  ULONG v26; // [rsp+88h] [rbp-39h]
  ULONG v27; // [rsp+8Ch] [rbp-35h]
  OBJECT_ATTRIBUTES *v28; // [rsp+90h] [rbp-31h]
  OBJECT_ATTRIBUTES *v29; // [rsp+98h] [rbp-29h]
  ACCESS_MASK v30; // [rsp+A0h] [rbp-21h]
  ACCESS_MASK v31; // [rsp+A4h] [rbp-1Dh]
  HANDLE *v32; // [rsp+A8h] [rbp-19h]
  HANDLE *v33; // [rsp+B0h] [rbp-11h]
  unsigned int UserProcess; // [rsp+B8h] [rbp-9h]
  void *retaddr; // [rsp+F0h] [rbp+2Fh]

  memset_0(v25, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(537);
  v16 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v17 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v17 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v17 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v25[0] = ReturnAddressForWrappers;
LABEL_7:
  v19 = 0;
  v33 = a1;
  v29 = ProcessObjectAttributes;
  v28 = ThreadObjectAttributes;
  v27 = ProcessFlags;
  v26 = ThreadFlags;
  v25[3] = ProcessParameters;
  v25[2] = CreateInfo;
  v25[1] = AttributeList;
  v32 = a2;
  v31 = a3;
  v30 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v19 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v16 + 4); i != v16 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v25, v15);
    }
    if ( v19 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  UserProcess = NtCreateUserProcess(
                  a1,
                  a2,
                  a3,
                  a4,
                  ProcessObjectAttributes,
                  ThreadObjectAttributes,
                  ProcessFlags,
                  ThreadFlags,
                  ProcessParameters,
                  CreateInfo,
                  AttributeList);
  if ( v16 )
  {
    if ( (v22 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v22 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v16 + 6); j != v16 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(v25, v21);
      }
      if ( v22 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return UserProcess;
}
