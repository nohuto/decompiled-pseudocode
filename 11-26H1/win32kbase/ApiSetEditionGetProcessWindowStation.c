/*
 * XREFs of ApiSetEditionGetProcessWindowStation @ 0x14003B90C
 * Callers:
 *     ?IsWinstaLessSession@@YA_NXZ @ 0x14003AE7C (-IsWinstaLessSession@@YA_NXZ.c)
 *     _GetKeyboardLayout @ 0x14003B834 (_GetKeyboardLayout.c)
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 *     _GetKeyboardLayoutList @ 0x14011C3D8 (_GetKeyboardLayoutList.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x14016CE40 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserActivateKeyboardLayout @ 0x1401E1FF0 (NtUserActivateKeyboardLayout.c)
 *     NtUserUnloadKeyboardLayout @ 0x1401E9E40 (NtUserUnloadKeyboardLayout.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionGetProcessWindowStation(__int64 a1)
{
  __int64 v1; // rbx
  int (*v2)(void); // rax
  __int64 v3; // rcx
  __int64 (__fastcall *v5)(_QWORD); // rax

  v1 = 0LL;
  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 760LL);
  if ( v2 )
  {
    if ( v2() >= 0 )
    {
      v5 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 48) + 768LL);
      if ( v5 )
        return v5(0LL);
    }
  }
  return v1;
}
