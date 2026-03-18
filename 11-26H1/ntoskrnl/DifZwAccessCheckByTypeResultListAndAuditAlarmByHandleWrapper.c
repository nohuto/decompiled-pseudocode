/*
 * XREFs of DifZwAccessCheckByTypeResultListAndAuditAlarmByHandleWrapper @ 0x140697740
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     ZwAccessCheckByTypeResultListAndAuditAlarmByHandle @ 0x1407240B0 (ZwAccessCheckByTypeResultListAndAuditAlarmByHandle.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall DifZwAccessCheckByTypeResultListAndAuditAlarmByHandleWrapper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        int a12,
        __int64 a13,
        char a14,
        __int64 a15,
        __int64 a16,
        __int64 a17)
{
  __int128 *APIThunkContextById; // rax
  __int64 v21; // rdx
  __int128 *v22; // rsi
  int v23; // eax
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v25; // r14
  __int128 *i; // rbx
  __int64 v27; // rdx
  BOOLEAN v28; // di
  _QWORD **v29; // rsi
  _QWORD *j; // rbx
  _QWORD v32[4]; // [rsp+98h] [rbp-80h] BYREF
  char v33; // [rsp+B8h] [rbp-60h]
  __int64 v34; // [rsp+C0h] [rbp-58h]
  int v35; // [rsp+C8h] [rbp-50h]
  __int64 v36; // [rsp+D0h] [rbp-48h]
  int v37; // [rsp+D8h] [rbp-40h]
  int v38; // [rsp+DCh] [rbp-3Ch]
  int v39; // [rsp+E0h] [rbp-38h]
  __int64 v40; // [rsp+E8h] [rbp-30h]
  __int64 v41; // [rsp+F0h] [rbp-28h]
  __int64 v42; // [rsp+F8h] [rbp-20h]
  __int64 v43; // [rsp+100h] [rbp-18h]
  __int64 v44; // [rsp+108h] [rbp-10h]
  __int64 v45; // [rsp+110h] [rbp-8h]
  __int64 v46; // [rsp+118h] [rbp+0h]
  unsigned int v47; // [rsp+120h] [rbp+8h]
  void *retaddr; // [rsp+150h] [rbp+38h]

  memset_0(v32, 0, 0x90uLL);
  APIThunkContextById = DifGetAPIThunkContextById(884);
  v22 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v23 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v23 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v23 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v32[0] = ReturnAddressForWrappers;
LABEL_7:
  v25 = 0;
  v46 = a1;
  v42 = a5;
  v41 = a6;
  v40 = a7;
  v39 = a8;
  v38 = a9;
  v37 = a10;
  v36 = a11;
  v35 = a12;
  v34 = a13;
  v33 = a14;
  v32[3] = a15;
  v32[2] = a16;
  v32[1] = a17;
  v45 = a2;
  v44 = a3;
  v43 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v25 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v22 + 4); i != v22 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(v32, v21);
    }
    if ( v25 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v47 = ZwAccessCheckByTypeResultListAndAuditAlarmByHandle(
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
          a15,
          a16,
          a17);
  if ( v22 )
  {
    if ( (v28 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v28 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v29 = (_QWORD **)(v22 + 3);
      for ( j = *v29; j != v29; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(v32, v27);
      }
      if ( v28 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v47;
}
