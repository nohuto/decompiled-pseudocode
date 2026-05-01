/*
 * XREFs of ?InitializeViewDependent@CActivatedEventArgsBase@@UEAAJW4ApplicationExecutionState@Activation@ApplicationModel@Windows@@HPEAUISplashScreen@345@E@Z @ 0x180652330
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18065EE5C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActivatedEventArgsBase::InitializeViewDependent(__int64 a1, int a2, int a3, __int64 a4, char a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v15; // [rsp+58h] [rbp+20h] BYREF

  wil::AcquireSRWLockExclusive(&v15, (RTL_SRWLOCK *)(a1 + 128));
  if ( a4 && *(_QWORD *)(a1 + 72) != a4 )
  {
    v14 = a4;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v14);
    v14 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = a4;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  }
  *(_DWORD *)(a1 + 60) = a2;
  *(_BYTE *)(a1 + 96) = a5;
  if ( *(_DWORD *)(a1 + 80) )
    MicrosoftTelemetryAssertTriggeredNoArgs(v10, v9, v11, v12);
  else
    *(_DWORD *)(a1 + 80) = a3;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v15);
  return 0LL;
}
