/*
 * XREFs of DxgkEngIsDwmComposing @ 0x1400FC0F0
 * Callers:
 *     <none>
 * Callees:
 *     IsDwmActive @ 0x1400FC134 (IsDwmActive.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkEngIsDwmComposing(_DWORD *a1, __int64 a2)
{
  int (*v2)(void); // rax

  if ( a1 )
    *a1 = 0;
  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 64LL);
  if ( v2 && v2() >= 0 )
    return IsDwmActive();
  else
    return 0LL;
}
