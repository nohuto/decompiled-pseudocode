/*
 * XREFs of DifNtNotifyChangeMultipleKeysWrapper @ 0x14067C600
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     NtNotifyChangeMultipleKeys @ 0x14097A180 (NtNotifyChangeMultipleKeys.c)
 */

__int64 __fastcall DifNtNotifyChangeMultipleKeysWrapper(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        int a8,
        char a9,
        volatile void *Address,
        int a11,
        char a12)
{
  __int128 *APIThunkContextById; // rax
  __int64 v16; // rdx
  __int128 *v17; // rsi
  int v18; // eax
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v20; // r14
  __int128 *i; // rbx
  __int64 v22; // rdx
  BOOLEAN v23; // di
  _QWORD **v24; // rsi
  _QWORD *j; // rbx
  SIZE_T Length; // [rsp+58h] [rbp-69h]
  PVOID v28; // [rsp+68h] [rbp-59h] BYREF
  char v29; // [rsp+70h] [rbp-51h]
  int v30; // [rsp+74h] [rbp-4Dh]
  volatile void *v31; // [rsp+78h] [rbp-49h]
  char v32; // [rsp+80h] [rbp-41h]
  int v33; // [rsp+84h] [rbp-3Dh]
  void *v34; // [rsp+88h] [rbp-39h]
  __int64 v35; // [rsp+90h] [rbp-31h]
  __int64 v36; // [rsp+98h] [rbp-29h]
  __int64 v37; // [rsp+A0h] [rbp-21h]
  __int64 v38; // [rsp+A8h] [rbp-19h]
  int v39; // [rsp+B0h] [rbp-11h]
  __int64 v40; // [rsp+B8h] [rbp-9h]
  unsigned int v41; // [rsp+C0h] [rbp-1h]
  void *retaddr; // [rsp+F0h] [rbp+2Fh]

  memset_0(&v28, 0, 0x60uLL);
  APIThunkContextById = DifGetAPIThunkContextById(792);
  v17 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v18 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v18 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v18 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v28 = ReturnAddressForWrappers;
LABEL_7:
  v20 = 0;
  v40 = a1;
  v36 = a5;
  v35 = a6;
  v34 = a7;
  v33 = a8;
  v32 = a9;
  v31 = Address;
  v30 = a11;
  v29 = a12;
  v39 = a2;
  v38 = a3;
  v37 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v20 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v17 + 4); i != v17 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(&v28, v16);
    }
    if ( v20 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  LODWORD(Length) = a11;
  v41 = NtNotifyChangeMultipleKeys(a1, a2, a3, a4, a5, a6, a7, a8, a9, Address, Length, a12);
  if ( v17 )
  {
    if ( (v23 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v23 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v24 = (_QWORD **)(v17 + 3);
      for ( j = *v24; j != v24; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v28, v22);
      }
      if ( v23 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v41;
}
