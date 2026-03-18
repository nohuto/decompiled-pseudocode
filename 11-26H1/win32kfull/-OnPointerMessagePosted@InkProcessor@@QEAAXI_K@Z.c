/*
 * XREFs of ?OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z @ 0x1401D1EB4
 * Callers:
 *     InkProcessorOnPointerMessagePosted @ 0x1401D1E70 (InkProcessorOnPointerMessagePosted.c)
 * Callees:
 *     ?GetPointerInfoByPointerMsgId@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z @ 0x1401D1FA0 (-GetPointerInfoByPointerMsgId@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall InkProcessor::OnPointerMessagePosted(InkProcessor *this, int a2, unsigned __int64 a3)
{
  struct tagPOINTER_INFO *v5; // rsi
  _QWORD **v6; // r14
  _QWORD *i; // rbx
  int PointerInfoByPointerMsgId; // eax
  struct tagPOINTER_INFO *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v5 = 0LL;
  if ( a2 == 583 || a2 == 594 )
  {
    PointerInfoByPointerMsgId = GetPointerInfoByPointerMsgId(a3, &v9);
    v5 = v9;
    if ( PointerInfoByPointerMsgId < 0 )
      v5 = 0LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  if ( *((_BYTE *)this + 8) )
  {
    v6 = (_QWORD **)((char *)this + 96);
    if ( a2 == 594 || a2 == 583 )
    {
      if ( v5 )
      {
        for ( i = *v6; i != v6; i = (_QWORD *)*i )
          (*(void (__fastcall **)(_QWORD *, _QWORD))(*(i - 1) + 16LL))(i - 1, *((unsigned int *)v5 + 1));
      }
    }
  }
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
