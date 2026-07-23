/*
 * XREFs of ExpWorkerFactoryFinishDeferredWork @ 0x14037F25C
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14037E9F0 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     RtlSetUserMemory @ 0x140782108 (RtlSetUserMemory.c)
 *     AlpciDestroyDeferredMessageContext @ 0x140A71860 (AlpciDestroyDeferredMessageContext.c)
 */

__int64 __fastcall ExpWorkerFactoryFinishDeferredWork(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rcx
  char *Teb; // rcx

  v1 = (_DWORD *)(a1 + 36);
  result = *(unsigned int *)(a1 + 36);
  if ( (result & 1) != 0 )
  {
    AlpciDestroyDeferredMessageContext();
    *v1 &= ~1u;
    result = (unsigned int)*v1;
  }
  if ( (result & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
      Teb = 0LL;
    else
      Teb = (char *)CurrentThread->Teb;
    if ( Teb )
      result = RtlSetUserMemory(Teb + 696);
    *v1 &= ~2u;
  }
  return result;
}
