/*
 * XREFs of PoGetRequester @ 0x140603108
 * Callers:
 *     PoCaptureReasonContext @ 0x140425E58 (PoCaptureReasonContext.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     PopUnicodeStringDeepCopy @ 0x140AE5B68 (PopUnicodeStringDeepCopy.c)
 */

__int64 __fastcall PoGetRequester(char a1, void *a2, __int64 a3)
{
  __int64 ULongFromUser; // rdi
  struct _KTHREAD *CurrentThread; // rdx
  char *Teb; // rdx
  _KPROCESS *Process; // rcx
  __int16 v8; // ax
  char v9; // al
  _KPROCESS *v10; // rbx
  __int64 result; // rax

  if ( !a1 )
  {
    *(_DWORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = a2;
    if ( a2 )
      ObfReferenceObjectWithTag(a2, 0x67446F50u);
    return 0LL;
  }
  ULongFromUser = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = (char *)CurrentThread->Teb;
  if ( Teb )
  {
    if ( KeGetCurrentThread()->ApcState.Process[1].ReadyTime
      && (Process = KeGetCurrentThread()->ApcState.Process, Process[1].ReadyTime)
      && ((v8 = WORD2(Process[3].PerProcessorCycleTimes), v8 == 332) || v8 == 452 ? (v9 = 1) : (v9 = 0), v9) )
    {
      ULongFromUser = (unsigned int)RtlReadULongFromUser(Teb + 12128);
    }
    else
    {
      ULongFromUser = RtlReadULong64FromUser(Teb + 5920);
    }
  }
  *(_DWORD *)a3 = (ULongFromUser != 0) + 1;
  v10 = KeGetCurrentThread()->ApcState.Process;
  *(_DWORD *)(a3 + 24) = v10[1].Header.WaitListHead.Flink;
  *(_DWORD *)(a3 + 28) = PsGetSessionIdEx((__int64)v10);
  result = PopUnicodeStringDeepCopy((PUNICODE_STRING)(a3 + 8), (PCUNICODE_STRING)v10[1].LastRebalanceQpc);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a3 + 32) = ULongFromUser;
    return 0LL;
  }
  return result;
}
