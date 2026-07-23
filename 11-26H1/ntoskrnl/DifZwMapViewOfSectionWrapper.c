/*
 * XREFs of DifZwMapViewOfSectionWrapper @ 0x1406ADF50
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     ZwMapViewOfSection @ 0x1407284C0 (ZwMapViewOfSection.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall DifZwMapViewOfSectionWrapper(
        void *a1,
        void *a2,
        PVOID *a3,
        ULONG_PTR a4,
        SIZE_T CommitSize,
        LARGE_INTEGER *SectionOffset,
        ULONG_PTR *ViewSize,
        SECTION_INHERIT InheritDisposition,
        ULONG AllocationType,
        ULONG Win32Protect)
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
  PVOID v24; // [rsp+58h] [rbp-59h] BYREF
  ULONG v25; // [rsp+60h] [rbp-51h]
  ULONG v26; // [rsp+64h] [rbp-4Dh]
  SECTION_INHERIT v27; // [rsp+68h] [rbp-49h]
  ULONG_PTR *v28; // [rsp+70h] [rbp-41h]
  LARGE_INTEGER *v29; // [rsp+78h] [rbp-39h]
  SIZE_T v30; // [rsp+80h] [rbp-31h]
  ULONG_PTR v31; // [rsp+88h] [rbp-29h]
  PVOID *v32; // [rsp+90h] [rbp-21h]
  void *v33; // [rsp+98h] [rbp-19h]
  void *v34; // [rsp+A0h] [rbp-11h]
  unsigned int v35; // [rsp+A8h] [rbp-9h]
  void *retaddr; // [rsp+E0h] [rbp+2Fh]

  memset_0(&v24, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(92);
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
  v24 = ReturnAddressForWrappers;
LABEL_7:
  v18 = 0;
  v34 = a1;
  v30 = CommitSize;
  v29 = SectionOffset;
  v28 = ViewSize;
  v27 = InheritDisposition;
  v26 = AllocationType;
  v25 = Win32Protect;
  v33 = a2;
  v32 = a3;
  v31 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v18 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v15 + 4); i != v15 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(&v24, v14);
    }
    if ( v18 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v35 = ZwMapViewOfSection(
          a1,
          a2,
          a3,
          a4,
          CommitSize,
          SectionOffset,
          ViewSize,
          InheritDisposition,
          AllocationType,
          Win32Protect);
  if ( v15 )
  {
    if ( (v21 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v21 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v15 + 6); j != v15 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v24, v20);
      }
      if ( v21 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v35;
}
