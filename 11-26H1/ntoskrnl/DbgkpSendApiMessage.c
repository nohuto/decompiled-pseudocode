/*
 * XREFs of DbgkpSendApiMessage @ 0x1409CEE1C
 * Callers:
 *     DbgkPostModuleMessage @ 0x1404C083C (DbgkPostModuleMessage.c)
 *     DbgkExitProcess @ 0x14077DD00 (DbgkExitProcess.c)
 *     PsCreateMinimalProcess @ 0x140801BC8 (PsCreateMinimalProcess.c)
 *     DbgkMapViewOfSection @ 0x1409947C4 (DbgkMapViewOfSection.c)
 *     MiUnmapViewOfSection @ 0x140994C10 (MiUnmapViewOfSection.c)
 *     DbgkUnMapViewOfSection @ 0x140995428 (DbgkUnMapViewOfSection.c)
 *     DbgkCreateMinimalThread @ 0x1409E6974 (DbgkCreateMinimalThread.c)
 *     DbgkCreateThread @ 0x1409E74F4 (DbgkCreateThread.c)
 *     DbgkSendSystemDllMessages @ 0x140B54778 (DbgkSendSystemDllMessages.c)
 * Callees:
 *     EtwTraceDebuggerEvent @ 0x1404DF0EC (EtwTraceDebuggerEvent.c)
 *     DbgkpResumeProcess @ 0x1409CEF0C (DbgkpResumeProcess.c)
 *     DbgkpQueueMessage @ 0x1409CF35C (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x1409CF678 (DbgkpSuspendProcess.c)
 */

__int64 __fastcall DbgkpSendApiMessage(_KPROCESS *Object, char a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r12
  int v7; // ebp
  int v8; // esi

  CurrentThread = KeGetCurrentThread();
  if ( (PerfGlobalGroupMask & 0x400000) != 0 )
    EtwTraceDebuggerEvent((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)CurrentThread, 1);
  do
  {
    v7 = 0;
    if ( Object == KeGetCurrentThread()->ApcState.Process && (a2 & 1) != 0 )
      v7 = (unsigned __int8)DbgkpSuspendProcess(Object);
    *(_DWORD *)(a3 + 44) = 259;
    v8 = DbgkpQueueMessage(Object, CurrentThread, 0LL);
    if ( v7 )
      DbgkpResumeProcess(Object);
  }
  while ( v8 >= 0 && *(_DWORD *)(a3 + 44) == 1073807361 );
  return (unsigned int)v8;
}
