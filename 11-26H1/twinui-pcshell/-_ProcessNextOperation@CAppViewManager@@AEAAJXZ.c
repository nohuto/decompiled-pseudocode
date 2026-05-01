/*
 * XREFs of ?_ProcessNextOperation@CAppViewManager@@AEAAJXZ @ 0x1801E1C3C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d8d2db46f898e0ad7843c45335dab43b___::Run @ 0x1802F3600 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d8d2db46f898e0ad7843c45335dab43b___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180042238 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1800B1BF4 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     ?_AddDelayedOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x1801E1E90 (-_AddDelayedOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1802ED558 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAppViewManager::_ProcessNextOperation(CAppViewManager *this)
{
  __int64 v2; // rdi
  RTL_SRWLOCK *v3; // rbx
  unsigned __int64 *v4; // rax
  unsigned __int64 v5; // rsi
  char v6; // r14
  unsigned __int64 v7; // rdx
  char *Event; // rsi
  signed int Error; // ebx
  struct IAsyncCallback *v10; // rax
  struct IAsyncCallback *v11; // rbx
  __int64 v13; // [rsp+28h] [rbp-20h] BYREF
  char *v14; // [rsp+30h] [rbp-18h]
  int *v15; // [rsp+38h] [rbp-10h]
  int v16; // [rsp+80h] [rbp+38h] BYREF
  unsigned __int64 UnbiasedTime; // [rsp+88h] [rbp+40h] BYREF
  __int64 pvParam; // [rsp+90h] [rbp+48h] BYREF
  unsigned __int64 v19; // [rsp+98h] [rbp+50h]

  v2 = 0LL;
  v19 = 0LL;
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = (unsigned __int64 *)*((_QWORD *)this + 17);
  v5 = *v4;
  if ( *v4 )
  {
    UnbiasedTime = *v4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&UnbiasedTime);
    UnbiasedTime = 0LL;
    v2 = v5;
    v19 = v5;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&UnbiasedTime);
  }
  CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::RemoveAt(
    (_QWORD *)this + 17,
    0LL);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  pvParam = 8LL;
  if ( SystemParametersInfoW(0x48u, 8u, &pvParam, 0) && HIDWORD(pvParam) )
  {
    v6 = 1;
    UnbiasedTime = 0LL;
    QueryUnbiasedInterruptTime(&UnbiasedTime);
    v7 = (UnbiasedTime - *((_QWORD *)this + 22)) / 0x2710;
    if ( (unsigned int)v7 < 0x1C2 )
      Sleep(450 - v7);
  }
  else
  {
    v6 = 0;
  }
  Event = (char *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  UnbiasedTime = (unsigned __int64)Event;
  if ( Event )
    Error = 0;
  else
    Error = ResultFromKnownLastError();
  v16 = Error;
  if ( Error >= 0 )
  {
    v13 = v2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
    v14 = Event;
    v15 = &v16;
    v10 = (struct IAsyncCallback *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    if ( v10 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>(v10);
      Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(
        (_QWORD *)v11 + 2,
        &v13);
      *((_QWORD *)v11 + 3) = v14;
      *((_QWORD *)v11 + 4) = v15;
      *(_QWORD *)v11 = &off_18072E888;
    }
    else
    {
      v11 = 0LL;
    }
    v16 = CAppViewManager::_AddDelayedOperation(this, v11);
    if ( v16 >= 0 )
    {
      WaitForSingleObjectEx(Event, 0xFFFFFFFF, 0);
      if ( v16 == 1 )
      {
        if ( v6 )
          QueryUnbiasedInterruptTime((PULONGLONG)this + 22);
      }
    }
    if ( v11 )
      (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v11 + 16LL))(v11);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    Error = v16;
  }
  if ( (unsigned __int64)(Event - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(Event);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return (unsigned int)Error;
}
