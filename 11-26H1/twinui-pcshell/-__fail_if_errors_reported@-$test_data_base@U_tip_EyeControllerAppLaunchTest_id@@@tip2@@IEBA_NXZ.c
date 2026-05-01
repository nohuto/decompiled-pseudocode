/*
 * XREFs of ?__fail_if_errors_reported@?$test_data_base@U_tip_EyeControllerAppLaunchTest_id@@@tip2@@IEBA_NXZ @ 0x18048EB64
 * Callers:
 *     ?evaluate@_tip_EyeControllerAppLaunchTest@@QEAAXXZ @ 0x18048ECC4 (-evaluate@_tip_EyeControllerAppLaunchTest@@QEAAXXZ.c)
 *     ?evaluate@_tip_CopilotHardwareKeyInvokedTest@@QEAAXXZ @ 0x180636E48 (-evaluate@_tip_CopilotHardwareKeyInvokedTest@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall tip2::test_data_base<_tip_EyeControllerAppLaunchTest_id>::__fail_if_errors_reported(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( !*(_QWORD *)(v1 + 80) )
    return 0;
  if ( !*(_BYTE *)(v1 + 152) )
  {
    *(_BYTE *)(v1 + 152) = 3;
    *(_WORD *)(v1 + 154) = 0x4000;
    *(_QWORD *)(v1 + 160) = 0LL;
  }
  return 1;
}
