/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_63b61c2369133a205197eda5bd671ee7_@@CAXPEAU_FAST_ERESOURCE@@PEAU_W32THREADNONPAGED@@@Z @ 0x1401ABF70
 * Callers:
 *     NtUserGetKeyState @ 0x140170360 (NtUserGetKeyState.c)
 *     NtUserToUnicodeEx @ 0x140176C30 (NtUserToUnicodeEx.c)
 * Callees:
 *     EtwTraceAcquireExclusiveUserCrit @ 0x14003CDD0 (EtwTraceAcquireExclusiveUserCrit.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x14003CED0 (EtwTraceAcquiredExclusiveUserCrit.c)
 */

void __fastcall _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_(
        struct _FAST_ERESOURCE *a1,
        struct _W32THREADNONPAGED *a2)
{
  __int64 v4; // r8

  EtwTraceAcquireExclusiveUserCrit();
  LOBYTE(v4) = 1;
  ExAcquireFastResourceExclusive(a1, (char *)a2 + 32, v4);
  *((_DWORD *)a2 + 6) = *((_DWORD *)a2 + 6) & 0xFFFFFFE7 | 0x10;
  EtwTraceAcquiredExclusiveUserCrit();
}
