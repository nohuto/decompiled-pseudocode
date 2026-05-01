/*
 * XREFs of ??0?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIInspectable@@PEAUITopLevelViewEventArgs@ComposableShell@Internal@Windows@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAA@AEBVAsyncEventSerialInvocationContextToken@1@@Z @ 0x1800E2454
 * Callers:
 *     ??0HolographicPositioner@@QEAA@XZ @ 0x1800E24D4 (--0HolographicPositioner@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rcx

  *(_QWORD *)a1 = 0LL;
  InitializeSRWLock((PSRWLOCK)(a1 + 8));
  InitializeSRWLock((PSRWLOCK)(a1 + 16));
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_BYTE *)(a1 + 32) = 1;
  v4 = *a2;
  *(_QWORD *)(a1 + 40) = *a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 1;
  *(_BYTE *)(a1 + 64) = 0;
  return a1;
}
