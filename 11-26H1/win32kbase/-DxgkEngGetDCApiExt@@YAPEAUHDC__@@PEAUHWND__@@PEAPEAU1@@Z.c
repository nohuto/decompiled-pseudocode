/*
 * XREFs of ?DxgkEngGetDCApiExt@@YAPEAUHDC__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x14013C1D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkEngGetDCApiExt(HWND a1, HDC *a2)
{
  __int64 v4; // rbx
  int (*v5)(void); // rax
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(HWND, HDC *); // rax

  v4 = 0LL;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 128LL);
  if ( v5 )
  {
    if ( v5() >= 0 )
    {
      v7 = *(__int64 (__fastcall **)(HWND, HDC *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 24) + 136LL);
      if ( v7 )
        return v7(a1, a2);
    }
  }
  return v4;
}
