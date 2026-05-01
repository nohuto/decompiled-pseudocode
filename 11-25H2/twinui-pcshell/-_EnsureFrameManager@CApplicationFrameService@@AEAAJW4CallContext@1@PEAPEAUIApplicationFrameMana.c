/*
 * XREFs of ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x180080BA4
 * Callers:
 *     ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x180080990 (-EnsureFramePool@CApplicationFrameService@@UEAAJXZ.c)
 *     ?EndFrameRecovery@CApplicationFrameService@@UEAAXXZ @ 0x180238380 (-EndFrameRecovery@CApplicationFrameService@@UEAAXXZ.c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x18023A9B0 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180085690 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180091788 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4374eff018dc91e582b31b47abd97ab1__&_ @ 0x1802FE070 (Windows--Internal--ComTaskPool--QueueTask__lambda_4374eff018dc91e582b31b47abd97ab1__-_.c)
 *     ??$WaitOnAddressNotEqualHelper@W4FrameManagerState@CApplicationFrameService@@@@YAXPEAW4FrameManagerState@CApplicationFrameService@@W401@@Z @ 0x1802FE178 (--$WaitOnAddressNotEqualHelper@W4FrameManagerState@CApplicationFrameService@@@@YAXPEAW4FrameMana.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x180654658 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationFrameService::_EnsureFrameManager(__int64 a1, int a2, _QWORD *a3)
{
  _DWORD *v5; // rsi
  int v6; // r15d
  char v7; // bl
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned int UniqueContext; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  CCriticalFailureHandler *v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 *v17; // [rsp+20h] [rbp-40h]
  unsigned __int64 *v18; // [rsp+28h] [rbp-38h]
  _QWORD v19[6]; // [rsp+30h] [rbp-30h] BYREF
  CCriticalFailureHandler *v20; // [rsp+A0h] [rbp+40h] BYREF
  int v21; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+58h] BYREF

  v21 = a2;
  *a3 = 0LL;
  LODWORD(v20) = -2147023728;
  v22 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = (_DWORD *)(a1 + 196);
  v6 = *(_DWORD *)(a1 + 196);
  if ( v6 )
  {
    v7 = 0;
    if ( v6 == 2 )
    {
      LODWORD(v20) = 0;
      v8 = *(_QWORD *)(a1 + 176);
      v9 = v22;
      if ( v22 != v8 )
      {
        if ( v8 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*(_QWORD *)(a1 + 176));
          v9 = v22;
        }
        v22 = v8;
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        v7 = 0;
      }
    }
  }
  else
  {
    v7 = 1;
    *v5 = 1;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( !v7 )
  {
    if ( v6 != 1 )
      goto LABEL_11;
    WaitOnAddressNotEqualHelper<enum CApplicationFrameService::FrameManagerState>((volatile void *)(a1 + 196));
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v16 = *v5 != 2 ? 0x80070490 : 0;
    LODWORD(v20) = *v5 != 2 ? 0x80070490 : 0;
    if ( !v21 )
    {
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure((CCriticalFailureHandler *)v16, (int *)&v20);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        v16 = (unsigned int)v20;
      }
      if ( (v16 & 0x80000000) == 0LL )
        goto LABEL_30;
      if ( (_DWORD)v16 != -2147024882 && (_DWORD)v16 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          (CCriticalFailureHandler *)v16,
          (int *)&v20,
          L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          0x4CFu,
          v17,
          v18);
        LODWORD(v16) = (_DWORD)v20;
      }
    }
    if ( (v16 & 0x80000000) != 0LL )
    {
LABEL_31:
      ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      goto LABEL_11;
    }
LABEL_30:
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v22, a1 + 176);
    goto LABEL_31;
  }
  v23 = a1;
  v19[0] = &v20;
  v19[1] = a1;
  v19[2] = &v21;
  v19[3] = &v23;
  v19[4] = &v22;
  UniqueContext = SHTaskPoolGetUniqueContext();
  v14 = Windows::Internal::ComTaskPool::QueueTask__lambda_4374eff018dc91e582b31b47abd97ab1____(
          v13,
          v12,
          UniqueContext,
          v19);
  if ( v14 < 0 )
  {
    LODWORD(v20) = v14;
    if ( !v21 )
    {
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v15, (int *)&v20);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        v14 = (int)v20;
      }
      if ( v14 < 0 && v14 != -2147024882 && v14 != -2144862209 )
        CCriticalFailureHandler::HandleFailure(
          v15,
          (int *)&v20,
          L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          0x4BDu,
          v17,
          v18);
    }
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    *(_DWORD *)(v23 + 196) = 0;
    WakeByAddressAll((PVOID)(v23 + 196));
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
LABEL_11:
  *a3 = v22;
  return (unsigned int)v20;
}
