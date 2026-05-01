/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_ad7a42fd7c88720b7dc13ba1f6feb34a___ @ 0x1804E09D4
 * Callers:
 *     ?DisplaySettingsChange@GamingPosturePositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1804E2450 (-DisplaySettingsChange@GamingPosturePositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180069F2C (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1801D2050 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_f45959a3646b89147a97246aec46a198_::__lambda_f45959a3646b89147a97246aec46a198_ @ 0x1804D8218 (_lambda_f45959a3646b89147a97246aec46a198_--__lambda_f45959a3646b89147a97246aec46a198_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_873a4b1025a20ecc8a11fd8ddd38b8a7___ @ 0x1804E05EC (Windows--Internal--ComTaskPool--QueueTask__lambda_873a4b1025a20ecc8a11fd8ddd38b8a7___.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_ad7a42fd7c88720b7dc13ba1f6feb34a___(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  volatile int *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v10[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = a1;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v12, (volatile int *)a2);
  v3 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  v10[0] = v3;
  v10[1] = *(_QWORD *)(a2 + 8);
  v11[0] = v4;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(v11, v5);
  v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_873a4b1025a20ecc8a11fd8ddd38b8a7___(v6, 0, v7, v10);
  lambda_f45959a3646b89147a97246aec46a198_::__lambda_f45959a3646b89147a97246aec46a198_(v10);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v12);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)a2);
  return v8;
}
