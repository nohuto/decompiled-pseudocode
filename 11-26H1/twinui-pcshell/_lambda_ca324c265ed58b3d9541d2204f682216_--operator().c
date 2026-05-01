/*
 * XREFs of _lambda_ca324c265ed58b3d9541d2204f682216_::operator() @ 0x18005CF4C
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&_::Invoke @ 0x18005CB30 (CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__-_--Invoke.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___ @ 0x18005D048 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___.c)
 *     ?InternalAddRef@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x18005D0E4 (-InternalAddRef@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D120 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_ca324c265ed58b3d9541d2204f682216_::operator()(__int64 *a1)
{
  __int64 v2; // rdi
  int (__fastcall *v3)(__int64, __int64 *); // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v12; // [rsp+40h] [rbp+20h] BYREF
  unsigned int v13; // [rsp+48h] [rbp+28h] BYREF
  __int64 v14; // [rsp+50h] [rbp+30h] BYREF

  v13 = 0;
  v12 = 0LL;
  v2 = *(_QWORD *)(*a1 + 120);
  v3 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 136LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  if ( v3(v2, &v12) >= 0 )
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12 + 168LL))(v12, &v13);
  v14 = *a1;
  Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalAddRef(&v14, v4, v5, v6);
  v9 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___(v7, v13, v8, &v14);
  Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(&v14);
  if ( v9 < 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    *(_BYTE *)(*a1 + 129) = 0;
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
