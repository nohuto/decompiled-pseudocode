/*
 * XREFs of DifKeRegisterNmiCallbackWrapper @ 0x140662930
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall DifKeRegisterNmiCallbackWrapper(__int64 a1, __int64 a2)
{
  __int128 *APIThunkContextById; // rax
  __int64 v5; // rdx
  __int128 *v6; // rsi
  int v7; // eax
  BOOLEAN v8; // bp
  __int128 *i; // rbx
  _QWORD *Pool2; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rbx
  KIRQL v13; // al
  BOOLEAN v14; // di
  _QWORD **v15; // rsi
  _QWORD *j; // rbx
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF
  __int128 v19; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v18 = 0LL;
  v19 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(267);
  v6 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v7 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v7 & 0x18) != 0 )
    {
      *(_QWORD *)&v18 = retaddr;
    }
    else if ( (v7 & 4) != 0 )
    {
      *(_QWORD *)&v18 = DifGetReturnAddressForWrappers();
    }
    v8 = 0;
    *(_QWORD *)&v19 = a1;
    *((_QWORD *)&v18 + 1) = a2;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v8 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int128 *)*((_QWORD *)v6 + 4); i != v6 + 2; i = *(__int128 **)i )
      {
        if ( i != (__int128 *)16 )
          guard_dispatch_icall_no_overrides(&v18, v5);
      }
      if ( v8 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  v12 = Pool2;
  if ( Pool2 )
  {
    Pool2[1] = a1;
    Pool2[2] = a2;
    Pool2[3] = Pool2;
    v13 = KeAcquireSpinLockRaiseToDpc(&KiNmiCallbackListLock);
    *v12 = KiNmiCallbackListHead;
    KiNmiCallbackListHead = v12;
    KeReleaseSpinLock(&KiNmiCallbackListLock, v13);
    Pool2 = (_QWORD *)v12[3];
  }
  *((_QWORD *)&v19 + 1) = Pool2;
  if ( v6 )
  {
    if ( (v14 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v14 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v15 = (_QWORD **)(v6 + 3);
      for ( j = *v15; j != v15; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v18, v11);
      }
      if ( v14 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return *((_QWORD *)&v19 + 1);
}
