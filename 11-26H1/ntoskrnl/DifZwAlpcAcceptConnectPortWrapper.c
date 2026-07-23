/*
 * XREFs of DifZwAlpcAcceptConnectPortWrapper @ 0x14069DC80
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     ZwAlpcAcceptConnectPort @ 0x140728EE0 (ZwAlpcAcceptConnectPort.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall DifZwAlpcAcceptConnectPortWrapper(
        HANDLE *a1,
        void *a2,
        ULONG a3,
        OBJECT_ATTRIBUTES *a4,
        _ALPC_PORT_ATTRIBUTES *PortAttributes,
        PVOID PortContext,
        _PORT_MESSAGE *ConnectionRequest,
        _ALPC_MESSAGE_ATTRIBUTES *ConnectionMessageAttributes,
        BOOLEAN AcceptConnection)
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
  PVOID v23; // [rsp+58h] [rbp-51h] BYREF
  BOOLEAN v24; // [rsp+60h] [rbp-49h]
  _ALPC_MESSAGE_ATTRIBUTES *v25; // [rsp+68h] [rbp-41h]
  _PORT_MESSAGE *v26; // [rsp+70h] [rbp-39h]
  PVOID v27; // [rsp+78h] [rbp-31h]
  _ALPC_PORT_ATTRIBUTES *v28; // [rsp+80h] [rbp-29h]
  OBJECT_ATTRIBUTES *v29; // [rsp+88h] [rbp-21h]
  ULONG v30; // [rsp+90h] [rbp-19h]
  void *v31; // [rsp+98h] [rbp-11h]
  HANDLE *v32; // [rsp+A0h] [rbp-9h]
  unsigned int v33; // [rsp+A8h] [rbp-1h]
  void *retaddr; // [rsp+E0h] [rbp+37h]

  memset_0(&v23, 0, 0x58uLL);
  APIThunkContextById = DifGetAPIThunkContextById(143);
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
  v23 = ReturnAddressForWrappers;
LABEL_7:
  v17 = 0;
  v32 = a1;
  v28 = PortAttributes;
  v27 = PortContext;
  v26 = ConnectionRequest;
  v25 = ConnectionMessageAttributes;
  v24 = AcceptConnection;
  v31 = a2;
  v30 = a3;
  v29 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v17 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v14 + 4); i != v14 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(&v23, v13);
    }
    if ( v17 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v33 = ZwAlpcAcceptConnectPort(
          a1,
          a2,
          a3,
          a4,
          PortAttributes,
          PortContext,
          ConnectionRequest,
          ConnectionMessageAttributes,
          AcceptConnection);
  if ( v14 )
  {
    if ( (v20 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v20 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v14 + 6); j != v14 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v23, v19);
      }
      if ( v20 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v33;
}
