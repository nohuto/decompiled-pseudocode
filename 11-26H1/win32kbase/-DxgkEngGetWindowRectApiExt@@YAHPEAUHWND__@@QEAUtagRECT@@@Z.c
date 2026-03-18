/*
 * XREFs of ?DxgkEngGetWindowRectApiExt@@YAHPEAUHWND__@@QEAUtagRECT@@@Z @ 0x140134070
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkEngGetWindowRectApiExt(HWND a1, struct tagRECT *const a2)
{
  unsigned int v4; // ebx
  int (*v5)(void); // rax
  __int64 v6; // rcx
  unsigned int (__fastcall *v7)(HWND, struct tagRECT *const); // rax

  v4 = 0;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 144LL);
  if ( v5 )
  {
    if ( v5() >= 0 )
    {
      v7 = *(unsigned int (__fastcall **)(HWND, struct tagRECT *const))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 24)
                                                                      + 152LL);
      if ( v7 )
        return v7(a1, a2);
    }
  }
  return v4;
}
