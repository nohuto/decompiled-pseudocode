/*
 * XREFs of CmpInitializeMachineHiveLoadedCallbacks @ 0x1408571FC
 * Callers:
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 * Callees:
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 */

void CmpInitializeMachineHiveLoadedCallbacks()
{
  struct _LIST_ENTRY **p_Blink; // rbx
  __int64 v1; // rdi

  KeInitializeEvent(&CmpMachineHiveCallbackEvent, NotificationEvent, 0);
  p_Blink = &stru_140E098B8.Header.WaitListHead.Blink;
  v1 = 7LL;
  do
  {
    *(p_Blink - 2) = 0LL;
    *(p_Blink - 1) = 0LL;
    p_Blink[1] = (struct _LIST_ENTRY *)p_Blink;
    *p_Blink = (struct _LIST_ENTRY *)p_Blink;
    KeInitializeEvent((PRKEVENT)(p_Blink - 5), NotificationEvent, 0);
    p_Blink += 23;
    --v1;
  }
  while ( v1 );
}
