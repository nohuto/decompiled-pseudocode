/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_ff3af0abcf4100822182f80ac5bd56ae___ @ 0x180293814
 * Callers:
 *     ?OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@AEAAJPEAUHSTRING__@@0@Z @ 0x180293614 (-OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@AEAAJPEAUHSTRING__@@0@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ff3af0abcf4100822182f80ac5bd56ae_____lambda_ff3af0abcf4100822182f80ac5bd56ae___ @ 0x180458BC4 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ff3af0abcf410.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_ff3af0abcf4100822182f80ac5bd56ae___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 *v5; // rax
  __int64 v6; // rbx
  volatile signed __int32 *v7; // rcx
  unsigned int v8; // edi
  volatile signed __int32 *v10; // [rsp+30h] [rbp-18h] BYREF

  v5 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ff3af0abcf4100822182f80ac5bd56ae_____lambda_ff3af0abcf4100822182f80ac5bd56ae___(
                    &v10,
                    a4);
  v6 = *v5;
  *v5 = 0LL;
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v7);
  }
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v8;
}
