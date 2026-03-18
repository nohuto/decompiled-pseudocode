/*
 * XREFs of RestartCtxtCallback @ 0x14000EAF0
 * Callers:
 *     <none>
 * Callees:
 *     RestartContext @ 0x14000E2E0 (RestartContext.c)
 */

__int64 __fastcall RestartCtxtCallback(__int64 a1)
{
  _QWORD *v1; // r9
  __int64 v2; // r10
  struct _KTHREAD *CurrentThread; // r11
  __int64 v4; // rbx
  __int64 v5; // r8

  v1 = (_QWORD *)(a1 - 328);
  if ( a1 == 328 )
    v2 = 0LL;
  else
    v2 = v1[51];
  CurrentThread = KeGetCurrentThread();
  v4 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && qword_14008ED10 )
  {
    v5 = 9LL * (_InterlockedExchangeAdd((_DWORD *)&qword_14008ED08 + 1, 1u) % (unsigned int)qword_14008ED08);
    *((_QWORD *)qword_14008ED10 + v5 + 1) = MEMORY[0xFFFFF78000000008];
    *((_DWORD *)qword_14008ED10 + 2 * v5) = 1381188418;
    *((_QWORD *)qword_14008ED10 + v5 + 2) = CurrentThread;
    *((_QWORD *)qword_14008ED10 + v5 + 3) = v2;
    *((_QWORD *)qword_14008ED10 + v5 + 4) = v1;
    *((_QWORD *)qword_14008ED10 + v5 + 5) = v4;
    *((_QWORD *)qword_14008ED10 + v5 + 6) = v1;
    *((_QWORD *)qword_14008ED10 + v5 + 7) = 0LL;
    *((_QWORD *)qword_14008ED10 + v5 + 8) = 0LL;
  }
  return RestartContext(v1);
}
