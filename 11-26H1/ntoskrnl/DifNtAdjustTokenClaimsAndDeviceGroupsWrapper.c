/*
 * XREFs of DifNtAdjustTokenClaimsAndDeviceGroupsWrapper @ 0x14066E5B0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     NtWaitLowEventPair @ 0x14077FD00 (NtWaitLowEventPair.c)
 */

__int64 __fastcall DifNtAdjustTokenClaimsAndDeviceGroupsWrapper(
        void *a1,
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
  __int128 *v21; // rsi
  int v22; // eax
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v24; // r14
  __int128 *i; // rbx
  __int64 v26; // rdx
  BOOLEAN v27; // di
  _QWORD **v28; // rsi
  _QWORD *j; // rbx
  _QWORD v31[5]; // [rsp+88h] [rbp-79h] BYREF
  int v32; // [rsp+B0h] [rbp-51h]
  __int64 v33; // [rsp+B8h] [rbp-49h]
  int v34; // [rsp+C0h] [rbp-41h]
  __int64 v35; // [rsp+C8h] [rbp-39h]
  int v36; // [rsp+D0h] [rbp-31h]
  __int64 v37; // [rsp+D8h] [rbp-29h]
  __int64 v38; // [rsp+E0h] [rbp-21h]
  __int64 v39; // [rsp+E8h] [rbp-19h]
  char v40; // [rsp+F0h] [rbp-11h]
  char v41; // [rsp+F1h] [rbp-10h]
  char v42; // [rsp+F2h] [rbp-Fh]
  void *v43; // [rsp+F8h] [rbp-9h]
  unsigned int v44; // [rsp+100h] [rbp-1h]
  void *retaddr; // [rsp+130h] [rbp+2Fh]

  memset_0(v31, 0, 0x80uLL);
  APIThunkContextById = DifGetAPIThunkContextById(511);
  v21 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v22 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v22 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v22 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v31[0] = ReturnAddressForWrappers;
LABEL_7:
  v24 = 0;
  v43 = a1;
  v39 = a5;
  v38 = a6;
  v37 = a7;
  v36 = a8;
  v35 = a9;
  v34 = a10;
  v33 = a11;
  v32 = a12;
  v31[4] = a13;
  v31[3] = a14;
  v31[2] = a15;
  v31[1] = a16;
  v42 = a2;
  v41 = a3;
  v40 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v24 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v21 + 4); i != v21 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v31, v20);
    }
    if ( v24 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v44 = NtWaitLowEventPair(a1);
  if ( v21 )
  {
    if ( (v27 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v27 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v28 = (_QWORD **)(v21 + 3);
      for ( j = *v28; j != v28; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v31, v26);
      }
      if ( v27 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v44;
}
