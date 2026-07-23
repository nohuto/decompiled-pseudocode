/*
 * XREFs of DifZwLoadEnclaveDataWrapper @ 0x1406AC830
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     ZwLoadEnclaveData @ 0x14072A1A0 (ZwLoadEnclaveData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall DifZwLoadEnclaveDataWrapper(
        void *a1,
        void *a2,
        void *a3,
        SIZE_T a4,
        ULONG Protect,
        PVOID PageInformation,
        ULONG PageInformationLength,
        ULONG_PTR *NumberOfBytesWritten,
        ULONG *EnclaveError)
{
  __int128 *APIThunkContextById; // rax
  __int64 v13; // rdx
  __int128 *v14; // r14
  int v15; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v17; // si
  __int128 *i; // rbx
  __int64 v19; // rdx
  BOOLEAN v20; // di
  __int128 *j; // rbx
  _QWORD v23[3]; // [rsp+58h] [rbp-51h] BYREF
  ULONG v24; // [rsp+70h] [rbp-39h]
  PVOID v25; // [rsp+78h] [rbp-31h]
  ULONG v26; // [rsp+80h] [rbp-29h]
  SIZE_T v27; // [rsp+88h] [rbp-21h]
  void *v28; // [rsp+90h] [rbp-19h]
  void *v29; // [rsp+98h] [rbp-11h]
  void *v30; // [rsp+A0h] [rbp-9h]
  unsigned int EnclaveData; // [rsp+A8h] [rbp-1h]
  void *retaddr; // [rsp+E0h] [rbp+37h]

  memset_0(v23, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(1063);
  v14 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v15 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v15 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v15 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v23[0] = ReturnAddressForWrappers;
LABEL_7:
  v17 = 0;
  v30 = a1;
  v26 = Protect;
  v25 = PageInformation;
  v24 = PageInformationLength;
  v23[2] = NumberOfBytesWritten;
  v23[1] = EnclaveError;
  v29 = a2;
  v28 = a3;
  v27 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v17 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v14 + 4); i != v14 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v23, v13);
    }
    if ( v17 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  EnclaveData = ZwLoadEnclaveData(
                  a1,
                  a2,
                  a3,
                  a4,
                  Protect,
                  PageInformation,
                  PageInformationLength,
                  NumberOfBytesWritten,
                  EnclaveError);
  if ( v14 )
  {
    if ( (v20 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v20 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v14 + 6); j != v14 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(v23, v19);
      }
      if ( v20 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return EnclaveData;
}
