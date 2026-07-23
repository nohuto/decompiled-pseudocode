/*
 * XREFs of DifIoConnectInterruptWrapper @ 0x14065DED0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IoConnectInterrupt @ 0x1407A1EA0 (IoConnectInterrupt.c)
 */

__int64 __fastcall DifIoConnectInterruptWrapper(
        PKINTERRUPT *a1,
        KSERVICE_ROUTINE *a2,
        void *a3,
        KSPIN_LOCK *a4,
        ULONG Vector,
        KIRQL Irql,
        KIRQL SynchronizeIrql,
        KINTERRUPT_MODE InterruptMode,
        BOOLEAN ShareVector,
        KAFFINITY ProcessorEnableMask,
        BOOLEAN FloatingSave)
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
  PVOID v25; // [rsp+68h] [rbp-49h] BYREF
  BOOLEAN v26; // [rsp+70h] [rbp-41h]
  KAFFINITY v27; // [rsp+78h] [rbp-39h]
  BOOLEAN v28; // [rsp+80h] [rbp-31h]
  KINTERRUPT_MODE v29; // [rsp+84h] [rbp-2Dh]
  KIRQL v30; // [rsp+88h] [rbp-29h]
  KIRQL v31; // [rsp+89h] [rbp-28h]
  ULONG v32; // [rsp+8Ch] [rbp-25h]
  KSPIN_LOCK *v33; // [rsp+90h] [rbp-21h]
  void *v34; // [rsp+98h] [rbp-19h]
  KSERVICE_ROUTINE *v35; // [rsp+A0h] [rbp-11h]
  PKINTERRUPT *v36; // [rsp+A8h] [rbp-9h]
  unsigned int v37; // [rsp+B0h] [rbp-1h]
  void *retaddr; // [rsp+E0h] [rbp+2Fh]

  memset_0(&v25, 0, 0x50uLL);
  APIThunkContextById = DifGetAPIThunkContextById(357);
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
  v25 = ReturnAddressForWrappers;
LABEL_7:
  v19 = 0;
  v36 = a1;
  v32 = Vector;
  v31 = Irql;
  v30 = SynchronizeIrql;
  v29 = InterruptMode;
  v28 = ShareVector;
  v27 = ProcessorEnableMask;
  v26 = FloatingSave;
  v35 = a2;
  v34 = a3;
  v33 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v19 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v16 + 4); i != v16 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(&v25, v15);
    }
    if ( v19 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v37 = IoConnectInterrupt(
          a1,
          a2,
          a3,
          a4,
          Vector,
          Irql,
          SynchronizeIrql,
          InterruptMode,
          ShareVector,
          ProcessorEnableMask,
          FloatingSave);
  if ( v16 )
  {
    if ( (v22 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v22 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int128 *)*((_QWORD *)v16 + 6); j != v16 + 3; j = *(__int128 **)j )
      {
        if ( j != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v25, v21);
      }
      if ( v22 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v37;
}
