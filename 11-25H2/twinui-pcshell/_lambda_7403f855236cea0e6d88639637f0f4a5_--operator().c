/*
 * XREFs of _lambda_7403f855236cea0e6d88639637f0f4a5_::operator() @ 0x1804E1840
 * Callers:
 *     _lambda_7403f855236cea0e6d88639637f0f4a5_::_lambda_invoker_cdecl_ @ 0x1804DFE50 (_lambda_7403f855236cea0e6d88639637f0f4a5_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180069F2C (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1801D2050 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_f45959a3646b89147a97246aec46a198_::__lambda_f45959a3646b89147a97246aec46a198_ @ 0x1804D8218 (_lambda_f45959a3646b89147a97246aec46a198_--__lambda_f45959a3646b89147a97246aec46a198_.c)
 *     ??$?0VGamingPosturePositioner@@@?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVGamingPosturePositioner@@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1804E0058 (--$-0VGamingPosturePositioner@@@-$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEA.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_f45959a3646b89147a97246aec46a198___ @ 0x1804E0690 (Windows--Internal--ComTaskPool--QueueTask__lambda_f45959a3646b89147a97246aec46a198___.c)
 */

void __fastcall lambda_7403f855236cea0e6d88639637f0f4a5_::operator()(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  volatile int *v4; // rdx
  __int64 v5; // r8
  volatile int *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+10h] BYREF
  __int64 v13; // [rsp+68h] [rbp+18h] BYREF

  v12 = a1;
  v2 = *(_QWORD *)(a2 + 696);
  wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(
    &v12,
    (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2);
  v12 = 0LL;
  v9[1] = a2;
  v13 = v2;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v13, v4);
  v9[0] = 0LL;
  v10[0] = v5;
  v10[1] = a2;
  v11 = v2;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(&v11, v6);
  Windows::Internal::ComTaskPool::QueueTask__lambda_f45959a3646b89147a97246aec46a198___(v7, 0, v8, v10);
  lambda_f45959a3646b89147a97246aec46a198_::__lambda_f45959a3646b89147a97246aec46a198_(v10);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v13);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v9);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
}
