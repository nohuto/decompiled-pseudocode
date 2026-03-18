/*
 * XREFs of DifZwAccessCheckByTypeWrapper @ 0x140697E70
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     ZwAccessCheckByType @ 0x140724050 (ZwAccessCheckByType.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall DifZwAccessCheckByTypeWrapper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
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
  _QWORD v25[6]; // [rsp+68h] [rbp-69h] BYREF
  int v26; // [rsp+98h] [rbp-39h]
  __int64 v27; // [rsp+A0h] [rbp-31h]
  unsigned int v28; // [rsp+A8h] [rbp-29h]
  __int64 v29; // [rsp+B0h] [rbp-21h]
  __int64 v30; // [rsp+B8h] [rbp-19h]
  __int64 v31; // [rsp+C0h] [rbp-11h]
  unsigned int v32; // [rsp+C8h] [rbp-9h]
  void *retaddr; // [rsp+100h] [rbp+2Fh]

  memset_0(v25, 0, 0x68uLL);
  APIThunkContextById = DifGetAPIThunkContextById(890);
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
  v31 = a1;
  v27 = a5;
  v26 = a6;
  v25[5] = a7;
  v25[4] = a8;
  v25[3] = a9;
  v25[2] = a10;
  v25[1] = a11;
  v30 = a2;
  v29 = a3;
  v28 = a4;
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
  v32 = ZwAccessCheckByType(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
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
  return v32;
}
