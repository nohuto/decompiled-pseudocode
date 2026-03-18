/*
 * XREFs of ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z @ 0x1400205D8
 * Callers:
 *     _DrainThreadCoreMessagingCompletions2 @ 0x14001A4E4 (_DrainThreadCoreMessagingCompletions2.c)
 *     xxxMsgWaitForMultipleObjectsEx @ 0x14001F190 (xxxMsgWaitForMultipleObjectsEx.c)
 *     NtUserGetQueueStatus @ 0x14001FC70 (NtUserGetQueueStatus.c)
 *     _GetQueueStatus @ 0x14001FFE0 (_GetQueueStatus.c)
 *     xxxRemoveQueueCompletion @ 0x140020350 (xxxRemoveQueueCompletion.c)
 *     xxxDrainQueueCompletions @ 0x140020480 (xxxDrainQueueCompletions.c)
 * Callees:
 *     _PostMessage @ 0x1400208B0 (_PostMessage.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 */

void __fastcall xxxHandleCoreMessagingQueueCompletion(
        struct tagWND *a1,
        struct _FILE_IO_COMPLETION_INFORMATION *const a2,
        PVOID a3)
{
  __int64 v5; // rbx
  PVOID ApcContext; // rdx
  __int64 *v7; // r14
  ULONG64 v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // r15
  _QWORD *KeyContext; // rdi
  _QWORD *v12; // rcx
  ULONG_PTR v13[2]; // [rsp+40h] [rbp-48h] BYREF

  v5 = 0LL;
  ApcContext = a2->ApcContext;
  v7 = (__int64 *)((char *)KeGetPcr()->NtTib.Self[45].StackLimit + 8 * (_QWORD)ApcContext + 8);
  v8 = MmUserProbeAddress;
  v9 = v7;
  if ( (unsigned __int64)v7 >= MmUserProbeAddress )
    v9 = (__int64 *)MmUserProbeAddress;
  v10 = *v9;
  if ( (((unsigned int)a3 & 0x80000000) != 0 || a3 != ApcContext)
    && !v10
    && !(unsigned int)PostMessage(a1, 96LL, 1LL, 0LL) )
  {
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v13, a1);
    xxxSendMessage(a1, 96LL, 2LL);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v13);
  }
  KeyContext = a2->KeyContext;
  if ( !PsGetCurrentProcessWow64Process(v8, ApcContext) )
    v5 = 3LL;
  if ( (v5 & (__int64)a2->KeyContext) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = KeyContext;
  if ( (unsigned __int64)KeyContext >= MmUserProbeAddress )
    v12 = (_QWORD *)MmUserProbeAddress;
  *v12 = v10;
  if ( (unsigned __int64)v7 >= MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  *v7 = (__int64)KeyContext;
}
