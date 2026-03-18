/*
 * XREFs of ??1CEtwTraceDispatchMessage@@QEAA@XZ @ 0x1401D030C
 * Callers:
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall CEtwTraceDispatchMessage::~CEtwTraceDispatchMessage(CEtwTraceDispatchMessage *this)
{
  unsigned int v1; // ebx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // rcx

  v1 = *(_DWORD *)this;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(this);
  v3 = 0LL;
  if ( CurrentThreadWin32Thread )
    v3 = *CurrentThreadWin32Thread;
  LOBYTE(v3) = *(_BYTE *)(v3 + 1456);
  EtwTraceEndDispatchMessage(v3, v1);
}
