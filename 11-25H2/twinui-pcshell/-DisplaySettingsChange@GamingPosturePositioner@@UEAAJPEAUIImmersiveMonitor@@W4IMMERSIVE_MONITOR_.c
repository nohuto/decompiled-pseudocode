/*
 * XREFs of ?DisplaySettingsChange@GamingPosturePositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1804E2450
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$?0VGamingPosturePositioner@@@?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVGamingPosturePositioner@@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1804E0058 (--$-0VGamingPosturePositioner@@@-$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEA.c)
 *     CreationThreadDispatcher::RunAsync__lambda_ad7a42fd7c88720b7dc13ba1f6feb34a___ @ 0x1804E09D4 (CreationThreadDispatcher--RunAsync__lambda_ad7a42fd7c88720b7dc13ba1f6feb34a___.c)
 */

__int64 __fastcall GamingPosturePositioner::DisplaySettingsChange(__int64 a1, __int64 a2, char a3, const char *a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  try
  {
    if ( (a3 & 0x38) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 672);
      v5 = a1 - 24;
      wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(
        &v10,
        (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))(a1 - 24));
      v6 = v10;
      v10 = 0LL;
      v8[0] = v6;
      v8[1] = v5;
      CreationThreadDispatcher::RunAsync__lambda_ad7a42fd7c88720b7dc13ba1f6feb34a___(v4, (__int64)v8);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x39D,
                           (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
                           a4);
  }
  return result;
}
