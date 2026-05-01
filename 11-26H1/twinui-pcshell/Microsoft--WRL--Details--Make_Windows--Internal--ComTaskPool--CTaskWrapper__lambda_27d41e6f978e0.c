/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_27d41e6f978e0f5a6483d2ed3ecdf382_____lambda_27d41e6f978e0f5a6483d2ed3ecdf382___ @ 0x1802925A0
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_27d41e6f978e0f5a6483d2ed3ecdf382___ @ 0x18029250C (Windows--Internal--ComTaskPool--QueueTask__lambda_27d41e6f978e0f5a6483d2ed3ecdf382___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_27d41e6f978e0f5a6483d2ed3ecdf382_____lambda_27d41e6f978e0f5a6483d2ed3ecdf382___(
        volatile signed __int32 **a1,
        __int64 *a2)
{
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx

  *a1 = 0LL;
  v4 = (volatile signed __int32 *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v4);
    v6 = *a2;
    *a2 = 0LL;
    *((_QWORD *)v5 + 2) = v6;
    v7 = a2[1];
    a2[1] = 0LL;
    *((_QWORD *)v5 + 3) = v7;
    *(_QWORD *)v5 = &off_1808D4C50;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(*a1);
    *a1 = v5;
  }
  return a1;
}
