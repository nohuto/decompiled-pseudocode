/*
 * XREFs of DbgkpSendApiMessage @ 0x1409534DC
 * Callers:
 *     DbgkPostModuleMessage @ 0x1404C6E8C (DbgkPostModuleMessage.c)
 *     DbgkExitProcess @ 0x14077ADD0 (DbgkExitProcess.c)
 *     PsCreateMinimalProcess @ 0x1407FC198 (PsCreateMinimalProcess.c)
 *     DbgkMapViewOfSection @ 0x1409C37E4 (DbgkMapViewOfSection.c)
 *     MiUnmapViewOfSection @ 0x1409C3C30 (MiUnmapViewOfSection.c)
 *     DbgkUnMapViewOfSection @ 0x1409C4448 (DbgkUnMapViewOfSection.c)
 *     DbgkCreateMinimalThread @ 0x1409E9C90 (DbgkCreateMinimalThread.c)
 *     DbgkCreateThread @ 0x1409EAD24 (DbgkCreateThread.c)
 *     DbgkSendSystemDllMessages @ 0x140B51ED8 (DbgkSendSystemDllMessages.c)
 * Callees:
 *     EtwTraceDebuggerEvent @ 0x1404E5B4C (EtwTraceDebuggerEvent.c)
 *     DbgkpResumeProcess @ 0x1409535CC (DbgkpResumeProcess.c)
 *     DbgkpQueueMessage @ 0x140953A1C (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x140953D38 (DbgkpSuspendProcess.c)
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
