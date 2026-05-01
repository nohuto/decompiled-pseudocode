/*
 * XREFs of ?CreateSnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@YA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@12345@UDateTime@Foundation@5@_K@Z @ 0x1803F514C
 * Callers:
 *     ?TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@23456@PEAUIApplicationView@@@Z @ 0x1803F3060 (-TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA-AV-$co.c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802ED74C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VSnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAW4SnapEventType@23456@AEAUDateTime@Foundation@6@AEA_K@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@@12@AEAW4SnapEventType@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAUDateTime@Foundation@9@AEA_K@Z @ 0x1803F5048 (--$Make@VSnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAW4SnapEventType@23456@AEA.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *Windows::Internal::Shell::TaskFlow::DataEngine::CreateSnapSignalData(_QWORD *a1, int a2, ...)
{
  const char *v3; // r9
  __int64 v5; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  va_list va; // [rsp+50h] [rbp+18h]
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF
  va_list va1; // [rsp+58h] [rbp+20h]
  va_list va2; // [rsp+60h] [rbp+28h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  v7 = a2;
  Microsoft::WRL::Details::Make<Windows::Internal::Shell::TaskFlow::DataEngine::SnapSignalData,enum Windows::Internal::Shell::TaskFlow::DataEngine::SnapEventType &,Windows::Foundation::DateTime &,unsigned __int64 &>(
    &v5,
    &v7,
    (__int64 *)va,
    (__int64 *)va1);
  if ( !v5 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x38,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\snapsignaldata.cpp",
      v3);
  *a1 = v5;
  return a1;
}
