/*
 * XREFs of IsUserResetPointerSupported @ 0x14017E380
 * Callers:
 *     ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x14016C2F0 (-DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z.c)
 *     DxgkEngResetPointer @ 0x14017E360 (DxgkEngResetPointer.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsUserResetPointerSupported(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 32LL);
  if ( v1 )
    return v1();
  else
    return 3221225659LL;
}
