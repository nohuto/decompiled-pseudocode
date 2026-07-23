/*
 * XREFs of DifNtAlpcConnectPortWrapper @ 0x14066FD30
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     NtAlpcConnectPort @ 0x1408EF820 (NtAlpcConnectPort.c)
 */

__int64 __fastcall DifNtAlpcConnectPortWrapper(
        HANDLE *a1,
        UNICODE_STRING *a2,
        OBJECT_ATTRIBUTES *a3,
        _ALPC_PORT_ATTRIBUTES *a4,
        ULONG Flags,
        PSID RequiredServerSid,
        _PORT_MESSAGE *ConnectionMessage,
        ULONG_PTR *BufferLength,
        _ALPC_MESSAGE_ATTRIBUTES *OutMessageAttributes,
        _ALPC_MESSAGE_ATTRIBUTES *InMessageAttributes,
        LARGE_INTEGER *Timeout)
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
  _QWORD v25[7]; // [rsp+68h] [rbp-69h] BYREF
  ULONG v26; // [rsp+A0h] [rbp-31h]
  _ALPC_PORT_ATTRIBUTES *v27; // [rsp+A8h] [rbp-29h]
  OBJECT_ATTRIBUTES *v28; // [rsp+B0h] [rbp-21h]
  UNICODE_STRING *v29; // [rsp+B8h] [rbp-19h]
  HANDLE *v30; // [rsp+C0h] [rbp-11h]
  unsigned int v31; // [rsp+C8h] [rbp-9h]
  void *retaddr; // [rsp+100h] [rbp+2Fh]

  memset_0(v25, 0, 0x68uLL);
  APIThunkContextById = DifGetAPIThunkContextById(595);
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
  v30 = a1;
  v26 = Flags;
  v25[6] = RequiredServerSid;
  v25[5] = ConnectionMessage;
  v25[4] = BufferLength;
  v25[3] = OutMessageAttributes;
  v25[2] = InMessageAttributes;
  v25[1] = Timeout;
  v29 = a2;
  v28 = a3;
  v27 = a4;
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
  v31 = NtAlpcConnectPort(
          a1,
          a2,
          a3,
          a4,
          Flags,
          RequiredServerSid,
          ConnectionMessage,
          BufferLength,
          OutMessageAttributes,
          InMessageAttributes,
          Timeout);
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
  return v31;
}
