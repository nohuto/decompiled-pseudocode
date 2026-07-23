/*
 * XREFs of PopInvokeStateHandlerTargetProcessor @ 0x140C08E20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopHandleNextState @ 0x140C08EA0 (PopHandleNextState.c)
 */

void __fastcall PopInvokeStateHandlerTargetProcessor(
        struct _KDPC *Dpc,
        _SLIST_HEADER *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v5; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v6[140]; // [rsp+24h] [rbp-B4h] BYREF
  _SLIST_ENTRY ListEntry; // [rsp+B0h] [rbp-28h] BYREF

  memset_0(v6, 0, 0x9CuLL);
  v5 = 0;
  RtlpInterlockedPushEntrySList(DeferredContext + 5, &ListEntry);
  do
    PopHandleNextState(DeferredContext, &v5);
  while ( v5 != 16 );
}
