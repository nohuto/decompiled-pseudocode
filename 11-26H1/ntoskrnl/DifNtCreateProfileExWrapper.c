/*
 * XREFs of DifNtCreateProfileExWrapper @ 0x140676A60
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     NtCreateProfileEx @ 0x14084B730 (NtCreateProfileEx.c)
 */

__int64 __fastcall DifNtCreateProfileExWrapper(
        HANDLE *a1,
        void *a2,
        void *a3,
        SIZE_T a4,
        ULONG BucketSize,
        ULONG *Buffer,
        ULONG BufferSize,
        KPROFILE_SOURCE ProfileSource,
        USHORT GroupCount,
        _GROUP_AFFINITY *GroupAffinity)
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
  _QWORD v24[2]; // [rsp+58h] [rbp-59h] BYREF
  USHORT v25; // [rsp+68h] [rbp-49h]
  KPROFILE_SOURCE v26; // [rsp+6Ch] [rbp-45h]
  ULONG v27; // [rsp+70h] [rbp-41h]
  ULONG *v28; // [rsp+78h] [rbp-39h]
  ULONG v29; // [rsp+80h] [rbp-31h]
  SIZE_T v30; // [rsp+88h] [rbp-29h]
  void *v31; // [rsp+90h] [rbp-21h]
  void *v32; // [rsp+98h] [rbp-19h]
  HANDLE *v33; // [rsp+A0h] [rbp-11h]
  unsigned int Profile; // [rsp+A8h] [rbp-9h]
  void *retaddr; // [rsp+E0h] [rbp+2Fh]

  memset_0(v24, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(715);
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
  v33 = a1;
  v29 = BucketSize;
  v28 = Buffer;
  v27 = BufferSize;
  v26 = ProfileSource;
  v25 = GroupCount;
  v24[1] = GroupAffinity;
  v32 = a2;
  v31 = a3;
  v30 = a4;
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
  Profile = NtCreateProfileEx(a1, a2, a3, a4, BucketSize, Buffer, BufferSize, ProfileSource, GroupCount, GroupAffinity);
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
  return Profile;
}
