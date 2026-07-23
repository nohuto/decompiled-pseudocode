/*
 * XREFs of DifKeWaitForMultipleObjectsWrapper @ 0x1404BAA10
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     DifGetAPIThunkContextById @ 0x1404BAFF4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifKeWaitForMultipleObjectsWrapper(
        ULONG a1,
        PVOID *a2,
        WAIT_TYPE a3,
        KWAIT_REASON a4,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        LARGE_INTEGER *Timeout,
        struct _KWAIT_BLOCK *WaitBlockArray)
{
  __int64 APIThunkContextById; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rdx
  BOOLEAN v15; // di
  int v17; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v19; // si
  _QWORD *i; // rbx
  _QWORD *j; // rbx
  __int128 v22; // [rsp+40h] [rbp-40h] BYREF
  __int128 v23; // [rsp+50h] [rbp-30h]
  __int128 v24; // [rsp+60h] [rbp-20h]
  __int64 v25; // [rsp+70h] [rbp-10h]
  void *retaddr; // [rsp+A8h] [rbp+28h]

  v25 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(241LL);
  v13 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_2;
  v17 = *(_DWORD *)(APIThunkContextById + 12);
  if ( (v17 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v17 & 4) == 0 )
      goto LABEL_10;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  *(_QWORD *)&v22 = ReturnAddressForWrappers;
LABEL_10:
  v19 = 0;
  LODWORD(v25) = a1;
  BYTE9(v23) = WaitMode;
  BYTE8(v23) = Alertable;
  *(_QWORD *)&v23 = Timeout;
  *((_QWORD *)&v22 + 1) = WaitBlockArray;
  *((_QWORD *)&v24 + 1) = a2;
  LODWORD(v24) = a3;
  HIDWORD(v23) = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v19 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = *(_QWORD **)(v13 + 32); i != (_QWORD *)(v13 + 32); i = (_QWORD *)*i )
    {
      if ( i != (_QWORD *)16 )
        guard_dispatch_icall_no_overrides(&v22, v12);
    }
    if ( v19 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_2:
  HIDWORD(v25) = KeWaitForMultipleObjects(a1, a2, a3, a4, WaitMode, Alertable, Timeout, WaitBlockArray);
  if ( v13 )
  {
    if ( (v15 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v15 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = *(_QWORD **)(v13 + 48); j != (_QWORD *)(v13 + 48); j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v22, v14);
      }
      if ( v15 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return HIDWORD(v25);
}
