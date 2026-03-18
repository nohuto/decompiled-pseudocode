/*
 * XREFs of NtGdiGetOPMRandomNumber @ 0x140151120
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1401511A4 (-GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z.c)
 *     SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_RANDOM_NUMBER_ @ 0x1401C9438 (SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_RANDOM_NUMBER_.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

int __fastcall NtGdiGetOPMRandomNumber(void *a1, __int64 a2)
{
  __int64 SessionState; // rax
  int result; // eax
  _DXGKMDT_OPM_RANDOM_NUMBER v6; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0LL;
  SessionState = W32GetSessionState(a1);
  result = COPM::GetRandomNumber(*(COPM **)(*(_QWORD *)(SessionState + 88) + 3648LL), a1, &v6);
  if ( result >= 0 )
  {
    result = SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_RANDOM_NUMBER_(a2, &v6);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
