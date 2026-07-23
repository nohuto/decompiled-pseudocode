/*
 * XREFs of DifZwQueueApcThreadEx2Wrapper @ 0x1406B8F30
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     ZwQueueApcThreadEx2 @ 0x14072AE40 (ZwQueueApcThreadEx2.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall DifZwQueueApcThreadEx2Wrapper(
        void *a1,
        void *a2,
        ULONG a3,
        void (__cdecl *a4)(PVOID, PVOID, PVOID),
        PVOID ApcArgument1,
        PVOID ApcArgument2,
        PVOID ApcArgument3)
{
  __int128 *APIThunkContextById; // rax
  __int64 v11; // rdx
  __int128 *v12; // r14
  int v13; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v15; // si
  __int128 *i; // rbx
  __int64 v17; // rdx
  BOOLEAN v18; // di
  __int128 *j; // rbx
  _QWORD v21[5]; // [rsp+48h] [rbp-31h] BYREF
  ULONG v22; // [rsp+70h] [rbp-9h]
  void *v23; // [rsp+78h] [rbp-1h]
  void *v24; // [rsp+80h] [rbp+7h]
  unsigned int v25; // [rsp+88h] [rbp+Fh]
  void *retaddr; // [rsp+C0h] [rbp+47h]

  memset_0(v21, 0, 0x48uLL);
  APIThunkContextById = DifGetAPIThunkContextById(928);
  v12 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v13 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v13 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v13 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v21[0] = ReturnAddressForWrappers;
LABEL_7:
  v15 = 0;
  v24 = a1;
  v21[3] = ApcArgument1;
  v21[2] = ApcArgument2;
  v21[1] = ApcArgument3;
  v23 = a2;
  v22 = a3;
  v21[4] = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v15 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v12 + 4); i != v12 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v21, v11);
    }
    if ( v15 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v25 = ZwQueueApcThreadEx2(a1, a2, a3, a4, ApcArgument1, ApcArgument2, ApcArgument3);
  if ( v12 )
  {
    if ( (v18 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v18 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v12 + 6); j != v12 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(v21, v17);
      }
      if ( v18 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v25;
}
