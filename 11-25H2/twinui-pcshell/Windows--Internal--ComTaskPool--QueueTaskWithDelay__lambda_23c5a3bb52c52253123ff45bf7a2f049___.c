/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_23c5a3bb52c52253123ff45bf7a2f049___ @ 0x180459470
 * Callers:
 *     ?RelaunchAfterMilliseconds@TouchKeyboardExperienceManager@@AEAAJI@Z @ 0x180463938 (-RelaunchAfterMilliseconds@TouchKeyboardExperienceManager@@AEAAJI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_23c5a3bb52c52253123ff45bf7a2f049_____lambda_23c5a3bb52c52253123ff45bf7a2f049___ @ 0x1804589EC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_23c5a3bb52c52.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_23c5a3bb52c52253123ff45bf7a2f049___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        volatile signed __int32 *a5,
        __int128 *a6)
{
  volatile signed __int32 **v7; // rax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rcx
  unsigned int v10; // edi

  v7 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_23c5a3bb52c52253123ff45bf7a2f049_____lambda_23c5a3bb52c52253123ff45bf7a2f049___(
         &a5,
         a6);
  v8 = *v7;
  *v7 = 0LL;
  v9 = a5;
  if ( a5 )
  {
    a5 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v9);
  }
  v10 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  if ( v8 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
  return v10;
}
