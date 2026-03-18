/*
 * XREFs of ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x140198720
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall EnsureRequiredApiSetExtensions(__int64 a1)
{
  int (*v1)(void); // rax
  __int64 v2; // rcx
  int (*v3)(void); // rax
  __int64 v4; // rcx
  int (*v5)(void); // rax

  v1 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 1344LL);
  if ( !v1 || v1() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"xxxUnlockMenuState", 0LL, 0LL);
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v2) + 48) + 928LL);
  if ( !v3 || v3() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"HasHidTable", 0LL, 0LL);
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4) + 48) + 1080LL);
  if ( !v5 || v5() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"LockQCursor", 0LL, 0LL);
}
