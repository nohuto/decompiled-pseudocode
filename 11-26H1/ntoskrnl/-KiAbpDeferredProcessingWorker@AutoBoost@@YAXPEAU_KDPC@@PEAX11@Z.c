/*
 * XREFs of ?KiAbpDeferredProcessingWorker@AutoBoost@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1403770D0
 * Callers:
 *     <none>
 * Callees:
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     ?KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403777D0 (-KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEX.c)
 */

void __fastcall AutoBoost::KiAbpDeferredProcessingWorker(
        AutoBoost *this,
        struct _KDPC *a2,
        struct _KPRCB *a3,
        struct AutoBoost::_AB_BOOST_CONTEXT *a4)
{
  char v4; // di
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r15
  unsigned int v6; // ebx
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // r14
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  volatile signed __int16 *v10; // rsi
  struct _SINGLE_LIST_ENTRY *v11; // rcx
  struct _SINGLE_LIST_ENTRY *v12; // rbx
  char *p_DeferredDispatchInterrupts; // rsi
  volatile signed __int16 *v14; // rsi
  signed __int32 v15[8]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v16[2]; // [rsp+20h] [rbp-38h] BYREF
  _SINGLE_LIST_ENTRY *v17; // [rsp+30h] [rbp-28h]
  int v18; // [rsp+38h] [rbp-20h]
  int v19; // [rsp+3Ch] [rbp-1Ch]
  struct _SINGLE_LIST_ENTRY v20; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v16[0] = &v20;
  p_AbPropagateBoostsList = &a3->AbPropagateBoostsList;
  v16[1] = &a3->AbPropagateBoostsList;
  v20.Next = 0LL;
  v19 = 0;
  v6 = 2;
  p_AbSelfIoBoostsList = &a3->AbSelfIoBoostsList;
  v18 = 2;
  do
  {
    Next = p_AbSelfIoBoostsList->Next;
    v17 = 0LL;
    if ( Next )
    {
      do
      {
        v10 = (volatile signed __int16 *)&Next[-102];
        p_AbSelfIoBoostsList->Next = Next->Next;
        Next->Next = (struct _SINGLE_LIST_ENTRY *)1;
        _InterlockedOr(v15, 0);
        if ( BYTE1(Next[-3].Next) )
          AutoBoost::KiAbpProcessThreadState(
            (AutoBoost *)&Next[-102],
            *((struct _KTHREAD **)v10 + 142),
            (struct AutoBoost::_AB_THREAD_STATE *)v16,
            a4);
        _InterlockedDecrement16(v10 + 434);
        Next = p_AbSelfIoBoostsList->Next;
      }
      while ( p_AbSelfIoBoostsList->Next );
    }
    v11 = p_AbPropagateBoostsList->Next;
    v6 = v6 & 0xFFFFFFF8 | 4;
    v17 = p_AbSelfIoBoostsList;
    v18 = v6;
    if ( v11 )
    {
      do
      {
        v14 = (volatile signed __int16 *)&v11[-101];
        p_AbPropagateBoostsList->Next = v11->Next;
        v11->Next = (struct _SINGLE_LIST_ENTRY *)1;
        _InterlockedOr(v15, 0);
        if ( LOBYTE(v11[-2].Next) )
          AutoBoost::KiAbpProcessThreadState(
            (AutoBoost *)&v11[-101],
            *((struct _KTHREAD **)v14 + 142),
            (struct AutoBoost::_AB_THREAD_STATE *)v16,
            a4);
        _InterlockedDecrement16(v14 + 434);
        v11 = p_AbPropagateBoostsList->Next;
      }
      while ( p_AbPropagateBoostsList->Next );
    }
  }
  while ( p_AbSelfIoBoostsList->Next );
  v12 = v20.Next;
  a3->AbDpc.DeferredContext = 0LL;
  if ( v12 )
  {
    v20.Next = v12->Next;
    do
    {
      KiDeferredReadySingleThread(a3, (ULONG_PTR)&v12[-27], &v20, 0LL);
      v12 = v20.Next;
      ++v4;
      if ( v20.Next )
        v20.Next = v20.Next->Next;
      p_DeferredDispatchInterrupts = (char *)&a3->DeferredDispatchInterrupts;
      if ( (v4 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch((char *)&a3->DeferredDispatchInterrupts);
    }
    while ( v12 );
  }
  else
  {
    p_DeferredDispatchInterrupts = (char *)&a3->DeferredDispatchInterrupts;
  }
  KiFlushSoftwareInterruptBatch(p_DeferredDispatchInterrupts);
}
