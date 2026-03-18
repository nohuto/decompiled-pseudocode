/*
 * XREFs of DifNtFilterTokenExWrapper @ 0x140677760
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     NtWaitLowEventPair @ 0x14077D200 (NtWaitLowEventPair.c)
 */

__int64 __fastcall DifNtFilterTokenExWrapper(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
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
  PVOID v29; // [rsp+78h] [rbp-79h] BYREF
  __int64 v30; // [rsp+80h] [rbp-71h]
  __int64 v31; // [rsp+88h] [rbp-69h]
  __int64 v32; // [rsp+90h] [rbp-61h]
  __int64 v33; // [rsp+98h] [rbp-59h]
  __int64 v34; // [rsp+A0h] [rbp-51h]
  __int64 v35; // [rsp+A8h] [rbp-49h]
  int v36; // [rsp+B0h] [rbp-41h]
  __int64 v37; // [rsp+B8h] [rbp-39h]
  int v38; // [rsp+C0h] [rbp-31h]
  __int64 v39; // [rsp+C8h] [rbp-29h]
  __int64 v40; // [rsp+D0h] [rbp-21h]
  __int64 v41; // [rsp+D8h] [rbp-19h]
  __int64 v42; // [rsp+E0h] [rbp-11h]
  __int64 v43; // [rsp+E8h] [rbp-9h]
  unsigned int v44; // [rsp+F0h] [rbp-1h]
  __int64 v45; // [rsp+F8h] [rbp+7h]
  void *retaddr; // [rsp+120h] [rbp+2Fh]

  memset_0(&v29, 0, 0x80uLL);
  APIThunkContextById = DifGetAPIThunkContextById(509);
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
  v43 = a1;
  v39 = a5;
  v38 = a6;
  v37 = a7;
  v36 = a8;
  v35 = a9;
  v34 = a10;
  v33 = a11;
  v32 = a12;
  v31 = a13;
  v30 = a14;
  LODWORD(v42) = a2;
  v41 = a3;
  v40 = a4;
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
  v44 = NtWaitLowEventPair(
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
          v39,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
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
  return v44;
}
