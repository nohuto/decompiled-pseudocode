/*
 * XREFs of ?OnForwardedToGestureTargeting@PointerInputMediator@@SAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180011888
 * Callers:
 *     ?DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUIInputTarget@@H@Z @ 0x180011520 (-DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$.c)
 *     ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x180011CE0 (-DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$ComPtr@UIIn.c)
 *     std::_Func_impl_no_alloc__lambda_f6407afe1cdf0263e6131e867207af7c__void_IInputTarget___::_Do_call @ 0x1800F3D60 (std--_Func_impl_no_alloc__lambda_f6407afe1cdf0263e6131e867207af7c__void_IInputTarget___--_Do_cal.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180010150 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?FindFrame@PointerInputMediator@@CA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@I@Z @ 0x180062858 (-FindFrame@PointerInputMediator@@CA-AV-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPo.c)
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     ?_Subscript@?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@QEBAAEBUPointerFrame@PointerInputMediator@@_K@Z @ 0x18008B294 (-_Subscript@-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PointerInputMediator::OnForwardedToGestureTargeting(const struct _MIT_INPUT_INTEROP_MESSAGE *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rsi
  char *v4; // r11
  char *v5; // rbx
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // r11
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+60h] [rbp+8h] BYREF
  void *v14; // [rsp+68h] [rbp+10h]

  v14 = &PointerInputMediator::s_frameQueueLock;
  std::_Mutex_base::lock((std::_Mutex_base *)&PointerInputMediator::s_frameQueueLock);
  PointerInputMediator::FindFrame(&v11, *((unsigned int *)a1 + 44));
  if ( v12 != qword_180253F40 + qword_180253F48 )
  {
    if ( v11 )
      v2 = *v11;
    else
      v2 = 0LL;
    v3 = (_QWORD *)std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>::_Subscript(v2, v12);
    v4 = (char *)a1 + 168;
    if ( a1 == (const struct _MIT_INPUT_INTEROP_MESSAGE *)-168LL && MEMORY[0xFFFFFFFFFFFFFFF4] )
    {
      _o_terminate();
      __debugbreak();
      JUMPOUT(0x1800119B9LL);
    }
    v5 = &v4[240 * *((unsigned int *)a1 + 39)];
    while ( v4 != v5 )
    {
      v6 = *((_DWORD *)v4 + 1);
      v13 = v6;
      v7 = 2
         * (v3[32] & std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)&v13));
      v9 = v3[29];
      v10 = *(_QWORD *)(v9 + 8 * v7 + 8);
      if ( v10 == v3[27] )
        goto LABEL_12;
      while ( v6 != *(_DWORD *)(v10 + 16) )
      {
        if ( v10 == *(_QWORD *)(v9 + 8 * v7) )
          goto LABEL_12;
        v10 = *(_QWORD *)(v10 + 8);
      }
      if ( !v10 )
      {
LABEL_12:
        std::_Xout_of_range("invalid unordered_map<K, T> key");
        break;
      }
      *(_BYTE *)(v10 + 24) = 1;
      v4 = (char *)(v8 + 240);
    }
  }
  _Mtx_unlock((_Mtx_t)&PointerInputMediator::s_frameQueueLock);
}
