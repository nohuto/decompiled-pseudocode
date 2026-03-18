/*
 * XREFs of LogSchedEvent @ 0x140030800
 * Callers:
 *     RunContext @ 0x140009490 (RunContext.c)
 *     InsertReadyQueue @ 0x14000E500 (InsertReadyQueue.c)
 *     SyncEvalObject @ 0x14000EE78 (SyncEvalObject.c)
 *     AMLIPauseInterpreter @ 0x1400305A0 (AMLIPauseInterpreter.c)
 *     AMLIResumeInterpreter @ 0x140030690 (AMLIResumeInterpreter.c)
 *     NestAsyncEvalObject @ 0x1400704D4 (NestAsyncEvalObject.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall LogSchedEvent(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rbp
  struct _KTHREAD *CurrentThread; // r9
  __int64 v9; // r11
  __int64 v10; // r8
  PVOID result; // rax

  if ( a2 )
    v7 = *(_QWORD *)(a2 + 408);
  else
    v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 )
  {
    if ( qword_14008ED10 )
    {
      v10 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_14008ED08 + 1, 1u) % (unsigned int)qword_14008ED08);
      *(_QWORD *)((char *)qword_14008ED10 + v10 + 8) = MEMORY[0xFFFFF78000000008];
      *(_DWORD *)((char *)qword_14008ED10 + v10) = a1;
      *(_QWORD *)((char *)qword_14008ED10 + v10 + 16) = CurrentThread;
      *(_QWORD *)((char *)qword_14008ED10 + v10 + 24) = v7;
      *(_QWORD *)((char *)qword_14008ED10 + v10 + 32) = a2;
      *(_QWORD *)((char *)qword_14008ED10 + v10 + 40) = v9;
      *(_QWORD *)((char *)qword_14008ED10 + v10 + 48) = a3;
      *(_QWORD *)((char *)qword_14008ED10 + v10 + 56) = a4;
      result = qword_14008ED10;
      *(_QWORD *)((char *)qword_14008ED10 + v10 + 64) = a5;
    }
  }
  return result;
}
