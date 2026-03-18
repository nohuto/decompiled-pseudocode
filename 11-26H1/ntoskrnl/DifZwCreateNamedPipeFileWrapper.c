/*
 * XREFs of DifZwCreateNamedPipeFileWrapper @ 0x1406A04B0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     ZwCreateNamedPipeFile @ 0x140724B50 (ZwCreateNamedPipeFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall DifZwCreateNamedPipeFileWrapper(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        unsigned int a11,
        unsigned int a12,
        unsigned int a13,
        __int64 a14)
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
  PVOID v29; // [rsp+78h] [rbp-59h] BYREF
  __int64 v30; // [rsp+80h] [rbp-51h]
  unsigned __int64 v31; // [rsp+88h] [rbp-49h]
  unsigned __int64 v32; // [rsp+90h] [rbp-41h]
  unsigned __int64 v33; // [rsp+98h] [rbp-39h]
  unsigned __int64 v34; // [rsp+A0h] [rbp-31h]
  int v35; // [rsp+A8h] [rbp-29h]
  __int64 v36; // [rsp+B0h] [rbp-21h]
  __int64 v37; // [rsp+B8h] [rbp-19h]
  unsigned int v38; // [rsp+C0h] [rbp-11h]
  __int64 v39; // [rsp+C8h] [rbp-9h]
  unsigned int NamedPipeFile; // [rsp+D0h] [rbp-1h]
  void *retaddr; // [rsp+100h] [rbp+2Fh]

  memset_0(&v29, 0, 0x60uLL);
  APIThunkContextById = DifGetAPIThunkContextById(975);
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
  v29 = ReturnAddressForWrappers;
LABEL_7:
  v22 = 0;
  v39 = a1;
  v35 = a5;
  v34 = __PAIR64__(a6, a7);
  v33 = __PAIR64__(a8, a9);
  v32 = __PAIR64__(a10, a11);
  v31 = __PAIR64__(a12, a13);
  v30 = a14;
  v38 = a2;
  v37 = a3;
  v36 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v22 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v19 + 4); i != v19 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(&v29, v18);
    }
    if ( v22 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  NamedPipeFile = ZwCreateNamedPipeFile(
                    a1,
                    a2,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7,
                    a8,
                    a9,
                    a10,
                    a11,
                    a12,
                    a13,
                    a14,
                    v29,
                    v30,
                    v31,
                    v32,
                    v33,
                    v34,
                    v35,
                    v36,
                    v37,
                    v38,
                    v39);
  if ( v19 )
  {
    if ( (v25 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v25 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v26 = (_QWORD **)(v19 + 3);
      for ( j = *v26; j != v26; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v29, v24);
      }
      if ( v25 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return NamedPipeFile;
}
