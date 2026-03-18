/*
 * XREFs of DifNtAssociateWaitCompletionPacketWrapper @ 0x14066DCB0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     NtAssociateWaitCompletionPacket @ 0x14051B900 (NtAssociateWaitCompletionPacket.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall DifNtAssociateWaitCompletionPacketWrapper(
        void *a1,
        void *a2,
        void *a3,
        KSPIN_LOCK a4,
        KSPIN_LOCK a5,
        int a6,
        KSPIN_LOCK a7,
        char *a8)
{
  __int128 *APIThunkContextById; // rax
  __int64 v12; // rdx
  __int128 *v13; // r14
  int v14; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v16; // si
  __int128 *i; // rbx
  __int64 v18; // rdx
  BOOLEAN v19; // di
  __int128 *j; // rbx
  _QWORD v22[3]; // [rsp+48h] [rbp-39h] BYREF
  int v23; // [rsp+60h] [rbp-21h]
  KSPIN_LOCK v24; // [rsp+68h] [rbp-19h]
  KSPIN_LOCK v25; // [rsp+70h] [rbp-11h]
  void *v26; // [rsp+78h] [rbp-9h]
  void *v27; // [rsp+80h] [rbp-1h]
  void *v28; // [rsp+88h] [rbp+7h]
  unsigned int v29; // [rsp+90h] [rbp+Fh]
  void *retaddr; // [rsp+C0h] [rbp+3Fh]

  memset_0(v22, 0, 0x50uLL);
  APIThunkContextById = DifGetAPIThunkContextById(652);
  v13 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v14 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v14 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v14 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v22[0] = ReturnAddressForWrappers;
LABEL_7:
  v16 = 0;
  v28 = a1;
  v24 = a5;
  v23 = a6;
  v22[2] = a7;
  v22[1] = a8;
  v27 = a2;
  v26 = a3;
  v25 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v16 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v13 + 4); i != v13 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v22, v12);
    }
    if ( v16 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v29 = NtAssociateWaitCompletionPacket(a1, a2, a3, a4, a5, a6, a7, a8);
  if ( v13 )
  {
    if ( (v19 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v19 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v13 + 6); j != v13 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(v22, v18);
      }
      if ( v19 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v29;
}
