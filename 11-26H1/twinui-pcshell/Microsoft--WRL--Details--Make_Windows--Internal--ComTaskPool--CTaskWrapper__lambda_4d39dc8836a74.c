/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4d39dc8836a747feab7d20b0af3bfeac_____lambda_4d39dc8836a747feab7d20b0af3bfeac___ @ 0x1802AAF8C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4d39dc8836a747feab7d20b0af3bfeac___ @ 0x18012B968 (Windows--Internal--ComTaskPool--QueueTask__lambda_4d39dc8836a747feab7d20b0af3bfeac___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4d39dc8836a747feab7d20b0af3bfeac_____lambda_4d39dc8836a747feab7d20b0af3bfeac___(
        volatile signed __int32 **a1,
        _QWORD *a2)
{
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8

  *a1 = 0LL;
  v4 = (volatile signed __int32 *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v4);
    Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>((_QWORD *)v5 + 2, a2);
    Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(
      (_QWORD *)(v6 + 8),
      a2 + 1);
    *(_DWORD *)(v8 + 8) = *(_DWORD *)(v7 + 8);
    *(_QWORD *)v5 = &off_18071A430;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(*a1);
    *a1 = v5;
  }
  return a1;
}
