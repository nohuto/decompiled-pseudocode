/*
 * XREFs of DifNtAcceptConnectPortWrapper @ 0x14066C800
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     NtAcceptConnectPort @ 0x1408EC8F0 (NtAcceptConnectPort.c)
 */

__int64 __fastcall DifNtAcceptConnectPortWrapper(
        HANDLE *a1,
        void *a2,
        _PORT_MESSAGE *a3,
        BOOLEAN a4,
        _PORT_VIEW *ServerView,
        _REMOTE_PORT_VIEW *ClientView)
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
  _QWORD v20[3]; // [rsp+30h] [rbp-40h] BYREF
  BOOLEAN v21; // [rsp+48h] [rbp-28h]
  _PORT_MESSAGE *v22; // [rsp+50h] [rbp-20h]
  void *v23; // [rsp+58h] [rbp-18h]
  HANDLE *v24; // [rsp+60h] [rbp-10h]
  unsigned int v25; // [rsp+68h] [rbp-8h]
  void *retaddr; // [rsp+98h] [rbp+28h]

  memset_0(v20, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(583);
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
  v20[0] = ReturnAddressForWrappers;
LABEL_7:
  v14 = 0;
  v24 = a1;
  v20[2] = ServerView;
  v20[1] = ClientView;
  v23 = a2;
  v22 = a3;
  v21 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v14 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v11 + 4); i != v11 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v20, v10);
    }
    if ( v14 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v25 = NtAcceptConnectPort(a1, a2, a3, a4, ServerView, ClientView);
  if ( v11 )
  {
    if ( (v17 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v17 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v11 + 6); j != v11 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(v20, v16);
      }
      if ( v17 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v25;
}
