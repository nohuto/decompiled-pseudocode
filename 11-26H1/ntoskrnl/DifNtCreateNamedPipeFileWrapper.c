/*
 * XREFs of DifNtCreateNamedPipeFileWrapper @ 0x1406720B0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     NtCreateNamedPipeFile @ 0x1409B3580 (NtCreateNamedPipeFile.c)
 */

__int64 __fastcall DifNtCreateNamedPipeFileWrapper(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        void *Src)
{
  __int128 *APIThunkContextById; // rax
  __int64 v18; // rdx
  __int128 *v19; // rsi
  int v20; // eax
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v22; // r14
  __int128 *i; // rbx
  __int64 v24; // rdx
  BOOLEAN v25; // di
  _QWORD **v26; // rsi
  _QWORD *j; // rbx
  _QWORD v29[2]; // [rsp+78h] [rbp-59h] BYREF
  int v30; // [rsp+88h] [rbp-49h]
  int v31; // [rsp+8Ch] [rbp-45h]
  int v32; // [rsp+90h] [rbp-41h]
  int v33; // [rsp+94h] [rbp-3Dh]
  int v34; // [rsp+98h] [rbp-39h]
  int v35; // [rsp+9Ch] [rbp-35h]
  int v36; // [rsp+A0h] [rbp-31h]
  int v37; // [rsp+A4h] [rbp-2Dh]
  int v38; // [rsp+A8h] [rbp-29h]
  __int64 v39; // [rsp+B0h] [rbp-21h]
  __int64 v40; // [rsp+B8h] [rbp-19h]
  int v41; // [rsp+C0h] [rbp-11h]
  __int64 v42; // [rsp+C8h] [rbp-9h]
  unsigned int NamedPipeFile; // [rsp+D0h] [rbp-1h]
  void *retaddr; // [rsp+100h] [rbp+2Fh]

  memset_0(v29, 0, 0x60uLL);
  APIThunkContextById = DifGetAPIThunkContextById(630);
  v19 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v20 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v20 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v20 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v29[0] = ReturnAddressForWrappers;
LABEL_7:
  v22 = 0;
  v42 = a1;
  v38 = a5;
  v37 = a6;
  v36 = a7;
  v35 = a8;
  v34 = a9;
  v33 = a10;
  v32 = a11;
  v31 = a12;
  v30 = a13;
  v29[1] = Src;
  v41 = a2;
  v40 = a3;
  v39 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v22 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v19 + 4); i != v19 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v29, v18);
    }
    if ( v22 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  NamedPipeFile = NtCreateNamedPipeFile(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, Src);
  if ( v19 )
  {
    if ( (v25 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v25 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v26 = (_QWORD **)(v19 + 3);
      for ( j = *v26; j != v26; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v29, v24);
      }
      if ( v25 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return NamedPipeFile;
}
