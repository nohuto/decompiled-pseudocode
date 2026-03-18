/*
 * XREFs of ApiSetEditionGetProcessWindowStation @ 0x140048E08
 * Callers:
 *     _GetKeyboardLayout @ 0x140048D38 (_GetKeyboardLayout.c)
 *     ?IsWinstaLessSession@@YA_NXZ @ 0x14004A1F4 (-IsWinstaLessSession@@YA_NXZ.c)
 *     _GetKeyboardLayoutList @ 0x1401103F0 (_GetKeyboardLayoutList.c)
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 *     NtUserActivateKeyboardLayout @ 0x14016E970 (NtUserActivateKeyboardLayout.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1401BEF40 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserUnloadKeyboardLayout @ 0x1401C1180 (NtUserUnloadKeyboardLayout.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 ApiSetEditionGetProcessWindowStation()
{
  __int64 v0; // rbx
  int (*v1)(void); // rax
  __int64 (__fastcall *v2)(_QWORD); // rax

  v0 = 0LL;
  v1 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 880LL);
  if ( v1 )
  {
    if ( v1() >= 0 )
    {
      v2 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 888LL);
      if ( v2 )
        return v2(0LL);
    }
  }
  return v0;
}
