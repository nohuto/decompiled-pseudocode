/*
 * XREFs of PopRecordHibernateDiagnosticInfo @ 0x140BFB2F0
 * Callers:
 *     PopRequestWrite @ 0x140BFB804 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140BFCC1C (PopWriteHiberPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopRecordHibernateDiagnosticInfo(__int64 a1)
{
  int v1; // edx
  int v3; // r10d
  unsigned int v4; // r8d
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rcx

  v1 = 0;
  LOBYTE(stru_140F11D08.StackBase) = stru_140F10828.WaitBlockFill5[46];
  v3 = 0;
  *(LIST_ENTRY *)&stru_140F11D08.StateSaveArea = stru_140F10070.SuspendEvent.Header.WaitListHead;
  v4 = 0;
  *(_QWORD *)&stru_140F11D08.WaitRegister.Flags = stru_140F10070.MutantListHead.Blink;
  *($353D57E818BB6F967B4B818D974CF463 *)((char *)&stru_140F11D08.116 + 4) = ($353D57E818BB6F967B4B818D974CF463)stru_140F10070.ThreadListEntry.Blink;
  *(_QWORD *)&stru_140F11D08.SystemCallNumber = stru_140F10070.ThreadListEntry.Flink;
  stru_140F11D08.FirstArgument = *(void **)&stru_140F10070.AbWaitEntryCount;
  stru_140F11D08.TrapFrame = (_KTRAP_FRAME *)stru_140F10070.MutantListHead.Flink;
  stru_140F11D08.ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)stru_140F10070.SchedulerSharedSystemSlot;
  *(_DWORD *)&stru_140F11D08.ApcStateFill[8] = stru_140F10070.PropagateBoostsEntry.Next;
  result = (unsigned int)dword_140F0FDA4;
  *(_DWORD *)&stru_140F11D08.ApcStateFill[20] = dword_140F0FDA4;
  for ( *(_QWORD *)&stru_140F11D08.ApcStateFill[12] = 0LL;
        v4 < *(_DWORD *)(a1 + 288);
        *(_DWORD *)&stru_140F11D08.ApcStateFill[16] = v3 )
  {
    v6 = v4++;
    v7 = 168 * v6;
    v1 += *(_DWORD *)(*(_QWORD *)(a1 + 296) + 168 * v6 + 160);
    *(_DWORD *)&stru_140F11D08.ApcStateFill[12] = v1;
    result = *(_QWORD *)(a1 + 296);
    v3 += *(_DWORD *)(result + v7 + 164);
  }
  return result;
}
