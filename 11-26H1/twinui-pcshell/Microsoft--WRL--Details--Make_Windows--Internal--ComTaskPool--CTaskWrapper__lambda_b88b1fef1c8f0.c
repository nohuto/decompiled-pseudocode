/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b88b1fef1c8f048fc62b8eb3823c7c67_____lambda_b88b1fef1c8f048fc62b8eb3823c7c67___ @ 0x18012A57C
 * Callers:
 *     CIAMGlobals::QueueViewManagementTask__lambda_baf5fa06f24787c535c6de70fdf76b60___ @ 0x18012A4A8 (CIAMGlobals--QueueViewManagementTask__lambda_baf5fa06f24787c535c6de70fdf76b60___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b88b1fef1c8f048fc62b8eb3823c7c67_____lambda_b88b1fef1c8f048fc62b8eb3823c7c67___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx

  *a1 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v4);
    v5[2] = 0LL;
    if ( v5 + 2 != (_QWORD *)a2 )
    {
      v5[2] = *(_QWORD *)a2;
      *(_QWORD *)a2 = 0LL;
    }
    *(_OWORD *)(v5 + 3) = *(_OWORD *)(a2 + 8);
    *v5 = &off_18071A458;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release();
    *a1 = v5;
  }
  return a1;
}
