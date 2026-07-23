/*
 * XREFs of TtmpDispatchCreateTerminal @ 0x1407ED9E4
 * Callers:
 *     TtmDispatchApi @ 0x1409F5FD0 (TtmDispatchApi.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1407ED6A8 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiCreateTerminal @ 0x1407F15A8 (TtmiCreateTerminal.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchCreateTerminal(__int64 a1, __int64 a2)
{
  int Terminal; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  struct _KTHREAD *CurrentThread; // r8
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  Object = 0LL;
  Terminal = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 16), 1, 0, &v9, &Object);
  v5 = Terminal;
  if ( Terminal < 0 )
  {
    v6 = 225LL;
LABEL_3:
    TtmiLogError("TtmpDispatchCreateTerminal", v6, (unsigned int)Terminal, (unsigned int)Terminal);
    goto LABEL_7;
  }
  CurrentThread = KeGetCurrentThread();
  LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
  Terminal = TtmiCreateTerminal(v9, *(_DWORD *)(a1 + 8), (int)CurrentThread, a2, (PVOID)(a2 + 8), 0LL);
  v5 = Terminal;
  if ( Terminal < 0 )
  {
    v6 = 237LL;
    goto LABEL_3;
  }
  v5 = 0;
LABEL_7:
  if ( v9 )
  {
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WpsFeedback);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v5;
}
