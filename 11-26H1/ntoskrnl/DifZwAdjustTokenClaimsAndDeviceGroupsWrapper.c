/*
 * XREFs of DifZwAdjustTokenClaimsAndDeviceGroupsWrapper @ 0x140698EA0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     ZwAdjustTokenClaimsAndDeviceGroups @ 0x140724190 (ZwAdjustTokenClaimsAndDeviceGroups.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall DifZwAdjustTokenClaimsAndDeviceGroupsWrapper(
        __int64 a1,
        char a2,
        char a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10,
        __int64 a11,
        int a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16)
{
  __int128 *APIThunkContextById; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int128 *v23; // rsi
  int v24; // eax
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v26; // r14
  __int128 *i; // rbx
  __int64 v28; // rdx
  BOOLEAN v29; // di
  _QWORD **v30; // rsi
  _QWORD *j; // rbx
  PVOID v33; // [rsp+88h] [rbp-79h] BYREF
  __int64 v34; // [rsp+90h] [rbp-71h]
  __int64 v35; // [rsp+98h] [rbp-69h]
  __int64 v36; // [rsp+A0h] [rbp-61h]
  __int64 v37; // [rsp+A8h] [rbp-59h]
  int v38; // [rsp+B0h] [rbp-51h]
  __int64 v39; // [rsp+B8h] [rbp-49h]
  int v40; // [rsp+C0h] [rbp-41h]
  __int64 v41; // [rsp+C8h] [rbp-39h]
  int v42; // [rsp+D0h] [rbp-31h]
  __int64 v43; // [rsp+D8h] [rbp-29h]
  __int64 v44; // [rsp+E0h] [rbp-21h]
  __int64 v45; // [rsp+E8h] [rbp-19h]
  int v46; // [rsp+F0h] [rbp-11h]
  __int64 v47; // [rsp+F8h] [rbp-9h]
  unsigned int v48; // [rsp+100h] [rbp-1h]
  void *retaddr; // [rsp+130h] [rbp+2Fh]

  memset_0(&v33, 0, 0x80uLL);
  APIThunkContextById = DifGetAPIThunkContextById(901);
  v23 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v24 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v24 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v24 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v33 = ReturnAddressForWrappers;
LABEL_7:
  v26 = 0;
  v47 = a1;
  v45 = a5;
  v44 = a6;
  v43 = a7;
  v42 = a8;
  v41 = a9;
  v40 = a10;
  v39 = a11;
  v38 = a12;
  v37 = a13;
  v36 = a14;
  v35 = a15;
  v34 = a16;
  BYTE2(v46) = a2;
  BYTE1(v46) = a3;
  LOBYTE(v46) = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v26 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v23 + 4); i != v23 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(&v33, v20);
    }
    if ( v26 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  LOBYTE(v22) = a4;
  LOBYTE(v21) = a3;
  LOBYTE(v20) = a2;
  v48 = ZwAdjustTokenClaimsAndDeviceGroups(
          a1,
          v20,
          v21,
          v22,
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
          a15,
          a16,
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
          v45,
          v46,
          v47);
  if ( v23 )
  {
    if ( (v29 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v29 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v30 = (_QWORD **)(v23 + 3);
      for ( j = *v30; j != v30; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v33, v28);
      }
      if ( v29 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v48;
}
