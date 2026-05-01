/*
 * XREFs of _lambda_4374eff018dc91e582b31b47abd97ab1_::operator() @ 0x180227EC0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4374eff018dc91e582b31b47abd97ab1__&_::Run @ 0x1802FA650 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4374eff018dc91e582b31b47abd97ab1__-_--Run.c)
 * Callees:
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180083CC4 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A7308 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x180227FB4 (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18067A61C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

void __fastcall lambda_4374eff018dc91e582b31b47abd97ab1_::operator()(__int64 a1)
{
  int *v2; // rbx
  CCriticalFailureHandler *v3; // rcx
  int *v4; // rbx
  __int64 v5; // rdx
  unsigned __int64 *v6; // [rsp+20h] [rbp-18h]
  unsigned __int64 *v7; // [rsp+28h] [rbp-10h]

  v2 = *(int **)a1;
  *v2 = CApplicationFrameService::_CreateFrameManager(*(_QWORD *)(a1 + 8), **(unsigned int **)(a1 + 16));
  if ( !**(_DWORD **)(a1 + 16) )
  {
    v4 = *(int **)a1;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v3, v4);
      CRVPrivate::cfhImmersiveShellStartup = 1;
    }
    if ( *v4 < 0 && *v4 != -2147024882 && *v4 != -2144862209 )
      CCriticalFailureHandler::HandleFailure(
        v3,
        v4,
        L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
        0x4A9u,
        v6,
        v7);
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(*(_QWORD *)v5 + 196LL) = ((**(int **)a1 >> 31) & 0xFFFFFFFE) + 2;
  WakeByAddressAll((PVOID)(*(_QWORD *)v5 + 196LL));
  if ( **(int **)a1 >= 0 )
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(*(__int64 **)(a1 + 32), (_QWORD *)(*(_QWORD *)(a1 + 8) + 176LL));
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
}
