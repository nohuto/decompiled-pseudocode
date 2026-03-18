/*
 * XREFs of DifNtAlpcQueryInformationMessageWrapper @ 0x14066D300
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     NtAlpcQueryInformationMessage @ 0x1407C0BF0 (NtAlpcQueryInformationMessage.c)
 */

__int64 __fastcall DifNtAlpcQueryInformationMessageWrapper(
        void *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        SIZE_T a5,
        __int64 a6)
{
  __int128 *APIThunkContextById; // rax
  __int64 v10; // rdx
  __int128 *v11; // r14
  int v12; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v14; // si
  __int128 *i; // rbx
  __int64 v16; // rdx
  BOOLEAN v17; // di
  __int128 *j; // rbx
  SIZE_T Length; // [rsp+20h] [rbp-50h]
  _QWORD v21[2]; // [rsp+30h] [rbp-40h] BYREF
  int v22; // [rsp+40h] [rbp-30h]
  __int64 v23; // [rsp+48h] [rbp-28h]
  int v24; // [rsp+50h] [rbp-20h]
  __int64 v25; // [rsp+58h] [rbp-18h]
  void *v26; // [rsp+60h] [rbp-10h]
  unsigned int InformationMessage; // [rsp+68h] [rbp-8h]
  void *retaddr; // [rsp+98h] [rbp+28h]

  memset_0(v21, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(609);
  v11 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v12 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v12 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v12 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v21[0] = ReturnAddressForWrappers;
LABEL_7:
  v14 = 0;
  v26 = a1;
  v22 = a5;
  v21[1] = a6;
  v25 = a2;
  v24 = a3;
  v23 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v14 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v11 + 4); i != v11 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v21, v10);
    }
    if ( v14 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  LODWORD(Length) = a5;
  InformationMessage = NtAlpcQueryInformationMessage(a1, Length, a6);
  if ( v11 )
  {
    if ( (v17 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v17 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v11 + 6); j != v11 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(v21, v16);
      }
      if ( v17 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return InformationMessage;
}
