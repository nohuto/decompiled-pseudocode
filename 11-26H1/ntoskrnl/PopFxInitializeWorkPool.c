/*
 * XREFs of PopFxInitializeWorkPool @ 0x1407D0630
 * Callers:
 *     PopFxRegisterPluginEx @ 0x140608104 (PopFxRegisterPluginEx.c)
 *     PoFxInitPowerManagement @ 0x140CD6FEC (PoFxInitPowerManagement.c)
 * Callees:
 *     KeInitializeSemaphore @ 0x1404AF2D0 (KeInitializeSemaphore.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopFxCreateStaticWorkPoolThread @ 0x1407D0598 (PopFxCreateStaticWorkPoolThread.c)
 */

__int64 __fastcall PopFxInitializeWorkPool(struct _KSEMAPHORE *a1, __int64 a2)
{
  struct _KSEMAPHORE *v4; // rbx
  __int64 v5; // rsi
  LIST_ENTRY *p_WaitListHead; // rax
  LIST_ENTRY *v7; // rcx
  __int64 v8; // rdx
  int v9; // ebx
  __int64 result; // rax

  memset_0(&a1[1], 0, 0x110uLL);
  *(_QWORD *)&a1->Header.Lock = a2;
  a1->Header.WaitListHead.Flink = 0LL;
  v4 = a1 + 1;
  *(_QWORD *)&a1->Limit = &a1->Header.WaitListHead.Blink;
  v5 = 2LL;
  a1->Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&a1->Header.WaitListHead.Blink;
  do
  {
    KeInitializeSemaphore(v4++, 0, 0x7FFFFFFF);
    --v5;
  }
  while ( v5 );
  p_WaitListHead = &a1[4].Header.WaitListHead;
  v7 = &a1[3].Header.WaitListHead;
  v8 = 4LL;
  do
  {
    p_WaitListHead[-2].Flink = (struct _LIST_ENTRY *)a1;
    p_WaitListHead->Flink = v7;
    v7 = (LIST_ENTRY *)((char *)v7 + 40);
    p_WaitListHead[-1].Blink = (struct _LIST_ENTRY *)PopFxPluginWork;
    p_WaitListHead[-2].Blink = 0LL;
    p_WaitListHead = (LIST_ENTRY *)((char *)p_WaitListHead + 40);
    --v8;
  }
  while ( v8 );
  v9 = 0;
  do
  {
    result = PopFxCreateStaticWorkPoolThread((__int64)a1);
    if ( (int)result < 0 )
      break;
    ++v9;
  }
  while ( !v9 );
  return result;
}
