/*
 * XREFs of DifZwAccessCheckByTypeAndAuditAlarmWrapper @ 0x1406974C0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     ZwAccessCheckByTypeAndAuditAlarm @ 0x140723F10 (ZwAccessCheckByTypeAndAuditAlarm.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall DifZwAccessCheckByTypeAndAuditAlarmWrapper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        __int64 a10,
        int a11,
        __int64 a12,
        char a13,
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
  PVOID v31; // [rsp+88h] [rbp-80h] BYREF
  __int64 v32; // [rsp+90h] [rbp-78h]
  __int64 v33; // [rsp+98h] [rbp-70h]
  __int64 v34; // [rsp+A0h] [rbp-68h]
  int v35; // [rsp+A8h] [rbp-60h]
  __int64 v36; // [rsp+B0h] [rbp-58h]
  int v37; // [rsp+B8h] [rbp-50h]
  __int64 v38; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v39; // [rsp+C8h] [rbp-40h]
  int v40; // [rsp+D0h] [rbp-38h]
  __int64 v41; // [rsp+D8h] [rbp-30h]
  __int64 v42; // [rsp+E0h] [rbp-28h]
  __int64 v43; // [rsp+E8h] [rbp-20h]
  __int64 v44; // [rsp+F0h] [rbp-18h]
  __int64 v45; // [rsp+F8h] [rbp-10h]
  __int64 v46; // [rsp+100h] [rbp-8h]
  unsigned int v47; // [rsp+108h] [rbp+0h]
  void *retaddr; // [rsp+140h] [rbp+38h]

  memset_0(&v31, 0, 0x88uLL);
  APIThunkContextById = DifGetAPIThunkContextById(882);
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
  v31 = ReturnAddressForWrappers;
LABEL_7:
  v24 = 0;
  v46 = a1;
  v42 = a5;
  v41 = a6;
  v40 = a7;
  v39 = __PAIR64__(a8, a9);
  v38 = a10;
  v37 = a11;
  v36 = a12;
  LOBYTE(v35) = a13;
  v34 = a14;
  v33 = a15;
  v32 = a16;
  v45 = a2;
  v44 = a3;
  v43 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v24 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int128 *)*((_QWORD *)v21 + 4); i != v21 + 2; i = *(__int128 **)i )
    {
      if ( i != (__int128 *)16 )
        guard_dispatch_icall_no_overrides(&v31, v20);
    }
    if ( v24 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  v47 = ZwAccessCheckByTypeAndAuditAlarm(
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
          v45,
          v46);
  if ( v21 )
  {
    if ( (v27 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v27 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v28 = (_QWORD **)(v21 + 3);
      for ( j = *v28; j != v28; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v31, v26);
      }
      if ( v27 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v47;
}
