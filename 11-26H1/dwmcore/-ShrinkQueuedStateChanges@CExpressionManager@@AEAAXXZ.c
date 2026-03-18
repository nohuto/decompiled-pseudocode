/*
 * XREFs of ?ShrinkQueuedStateChanges@CExpressionManager@@AEAAXXZ @ 0x180180600
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18002D828 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?empty@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEBA_NXZ @ 0x180023B3C (-empty@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail.c)
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18004AFB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?RemoveAt@?$DynArray@UQueuedAnimationStateChange@@$00@@QEAAJI@Z @ 0x180180734 (-RemoveAt@-$DynArray@UQueuedAnimationStateChange@@$00@@QEAAJI@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x1801807C0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CExpressionManager::ShrinkQueuedStateChanges(CExpressionManager *this)
{
  int v1; // ebx
  _QWORD *v2; // r14
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  int v9; // [rsp+60h] [rbp+8h] BYREF
  int ChannelCallbackId; // [rsp+68h] [rbp+10h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF

  v1 = *((_DWORD *)this + 74) - 1;
  if ( v1 >= 0 )
  {
    v2 = (_QWORD *)((char *)this + 272);
    v3 = 16LL * v1;
    do
    {
      v4 = *(_QWORD *)(*v2 + v3 + 8);
      v5 = *(_QWORD *)(v4 + 56);
      if ( (!v5 || !*(_DWORD *)(v5 + 116) || !*(_DWORD *)(v4 + 72))
        && detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::empty((_QWORD *)(v4 + 32)) )
      {
        if ( (unsigned int)dword_1803DC880 > 4 && (qword_1803DC890 & 4) != 0 && (qword_1803DC898 & 4) == qword_1803DC898 )
        {
          v9 = *(_DWORD *)(v4 + 72);
          ChannelCallbackId = CNotificationResource::GetChannelCallbackId((CNotificationResource *)v4);
          v11 = (*(__int64 (**)(void))(*(_QWORD *)v4 + 144LL))();
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v6,
            (unsigned int)&unk_1803B37FD,
            v7,
            v8,
            (__int64)&v11,
            (__int64)&ChannelCallbackId,
            (__int64)&v9);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        DynArray<QueuedAnimationStateChange,1>::RemoveAt(v2, (unsigned int)v1);
      }
      v3 -= 16LL;
      --v1;
    }
    while ( v1 >= 0 );
  }
}
