/*
 * XREFs of ??1IsGameManager@@UEAA@XZ @ 0x18013EEE0
 * Callers:
 *     ??_EIsGameManager@@UEAAPEAXI@Z @ 0x1803196F0 (--_EIsGameManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800B718C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     PiiFilterDelete @ 0x1802CDF8C (PiiFilterDelete.c)
 *     ??1?$unique_ptr@UIGameConfigStore@ExecutionModel@@Uop_GameConfigStoredeleter@IsGameManager@@@std@@QEAA@XZ @ 0x1802CF328 (--1-$unique_ptr@UIGameConfigStore@ExecutionModel@@Uop_GameConfigStoredeleter@IsGameManager@@@std.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall IsGameManager::~IsGameManager(IsGameManager *this)
{
  volatile __int64 *v2; // rbx
  __int64 v3; // rsi
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  *(_QWORD *)this = &IsGameManager::`vftable';
  *((_BYTE *)this + 48) = 1;
  v2 = (volatile __int64 *)&unk_1808962F8;
  v3 = 7LL;
  do
  {
    v4 = (void *)_InterlockedExchange64(v2, -1LL);
    if ( v4 != (void *)-1LL )
      UnregisterWaitEx(v4, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
    v5 = (void *)_InterlockedExchange64(v2, -1LL);
    if ( v5 != (void *)-1LL )
      UnregisterWaitEx(v5, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
    v6 = (void *)_InterlockedExchange64(v2 - 1, -1LL);
    if ( v6 != (void *)-1LL )
      FindCloseChangeNotification(v6);
    v2 += 9;
    --v3;
  }
  while ( v3 );
  IsGameManager::_pStaticThis = 0LL;
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 12);
  PiiFilterDelete(*((_QWORD *)this + 9));
  *((_QWORD *)this + 9) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  std::unique_ptr<ExecutionModel::IGameConfigStore,IsGameManager::op_GameConfigStoredeleter>::~unique_ptr<ExecutionModel::IGameConfigStore,IsGameManager::op_GameConfigStoredeleter>((char *)this + 16);
  *((_DWORD *)this + 3) = -1073741823;
}
