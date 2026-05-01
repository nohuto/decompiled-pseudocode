/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_014daf4e80f8d9d33103ca7fb469f571___ @ 0x1801ED0BC
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180244780 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 Windows::Internal::ComTaskPool::QueueTask__lambda_014daf4e80f8d9d33103ca7fb469f571___()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v3; // edi

  v0 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v1 = v0;
  if ( v0 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v0);
    *v1 = &off_180721A38;
  }
  else
  {
    v1 = 0LL;
  }
  CurrentThreadId = GetCurrentThreadId();
  v3 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v1 )
    (*(void (__fastcall **)(_QWORD *))(*v1 + 16LL))(v1);
  return v3;
}
