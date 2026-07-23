/*
 * XREFs of DbgkExitThread @ 0x140B3C484
 * Callers:
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 * Callees:
 *     EtwTraceDebuggerEvent @ 0x1404DF0EC (EtwTraceDebuggerEvent.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     DbgkpResumeProcess @ 0x1409CEF0C (DbgkpResumeProcess.c)
 *     DbgkpQueueMessage @ 0x1409CF35C (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x1409CF678 (DbgkpSuspendProcess.c)
 */

void __fastcall DbgkExitThread(int a1)
{
  _KPROCESS *Process; // rbx
  int v3; // edx
  struct _KTHREAD *CurrentThread; // rsi
  int v5; // edi
  __int64 v6; // rdx
  int v7; // ebp
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  _DWORD v10[2]; // [rsp+30h] [rbp-118h] BYREF
  __int64 v11; // [rsp+38h] [rbp-110h]
  __int128 v12; // [rsp+40h] [rbp-108h]
  __int64 v13; // [rsp+50h] [rbp-F8h]
  int v14; // [rsp+58h] [rbp-F0h]
  int v15; // [rsp+5Ch] [rbp-ECh]
  int v16; // [rsp+60h] [rbp-E8h]
  _BYTE v17[220]; // [rsp+64h] [rbp-E4h] BYREF

  memset_0(v17, 0, sizeof(v17));
  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 2);
  if ( (v3 & 4) == 0 && Process[1].UserTime && (v3 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v12 = 0LL;
    v11 = 0LL;
    v13 = 0LL;
    v16 = a1;
    v10[0] = 3407884;
    v10[1] = 8;
    v14 = 3;
    if ( (PerfGlobalGroupMask[0] & 0x400000) != 0 )
      EtwTraceDebuggerEvent((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)CurrentThread, 1);
    do
    {
      v5 = 0;
      if ( Process == KeGetCurrentThread()->ApcState.Process )
        v5 = (unsigned __int8)DbgkpSuspendProcess((__int64)Process);
      v15 = 259;
      v7 = DbgkpQueueMessage(Process, (char *)CurrentThread, (__int64)v10, 0, 0LL);
      if ( v5 )
        DbgkpResumeProcess((__int64)Process, v6, v8, v9);
    }
    while ( v7 >= 0 && v15 == 1073807361 );
  }
}
