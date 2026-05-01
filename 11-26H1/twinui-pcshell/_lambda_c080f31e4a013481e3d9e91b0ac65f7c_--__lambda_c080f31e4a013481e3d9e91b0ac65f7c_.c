/*
 * XREFs of _lambda_c080f31e4a013481e3d9e91b0ac65f7c_::__lambda_c080f31e4a013481e3d9e91b0ac65f7c_ @ 0x180390380
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c080f31e4a013481e3d9e91b0ac65f7c___::_CTaskWrapper__lambda_c080f31e4a013481e3d9e91b0ac65f7c___ @ 0x180390444 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c080f31e4a013481e3d9e91b0ac65f7c___--_CTask.c)
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x180390A6C (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ @ 0x180390538 (--1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_c080f31e4a013481e3d9e91b0ac65f7c_::__lambda_c080f31e4a013481e3d9e91b0ac65f7c_(__int64 *a1)
{
  QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)(a1 + 2));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
