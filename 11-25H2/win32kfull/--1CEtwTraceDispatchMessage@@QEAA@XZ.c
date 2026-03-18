/*
 * XREFs of ??1CEtwTraceDispatchMessage@@QEAA@XZ @ 0x140197A68
 * Callers:
 *     xxxDispatchMessage @ 0x140116D64 (xxxDispatchMessage.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall CEtwTraceDispatchMessage::~CEtwTraceDispatchMessage(CEtwTraceDispatchMessage *this, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rcx

  v2 = *(_DWORD *)this;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(this, a2);
  v4 = 0LL;
  if ( CurrentThreadNonPaged )
    v4 = *CurrentThreadNonPaged;
  LOBYTE(v4) = *(_BYTE *)(v4 + 1456);
  EtwTraceEndDispatchMessage(v4, v2);
}
