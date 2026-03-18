/*
 * XREFs of DxgkEngIsDwmComposing @ 0x140140410
 * Callers:
 *     <none>
 * Callees:
 *     IsDwmActive @ 0x140140458 (IsDwmActive.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkEngIsDwmComposing(_DWORD *a1)
{
  int (*v1)(void); // rax

  if ( a1 )
    *a1 = 0;
  v1 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 64LL);
  if ( v1 && v1() >= 0 )
    return IsDwmActive();
  else
    return 0LL;
}
