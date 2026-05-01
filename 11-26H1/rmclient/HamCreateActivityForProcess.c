/*
 * XREFs of HamCreateActivityForProcess @ 0x180008930
 * Callers:
 *     <none>
 * Callees:
 *     HampIpcChannelAddCallbackUnsafe @ 0x180008DE0 (HampIpcChannelAddCallbackUnsafe.c)
 */

__int64 __fastcall HamCreateActivityForProcess(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  _QWORD *v9; // r14
  _QWORD *Heap; // rax
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v14; // rbx
  __int64 v15; // [rsp+80h] [rbp+8h] BYREF

  v15 = -1LL;
  v9 = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  if ( Heap )
  {
    *Heap = 0LL;
    Heap[1] = 0LL;
    Heap[2] = 0LL;
    Heap[3] = 0LL;
    Heap[4] = 0LL;
    Heap[5] = a1 + 3;
    Heap[7] = a2;
    Heap[6] = -1LL;
    v9 = Heap;
    v11 = 0;
  }
  else
  {
    v11 = -1073741801;
  }
  if ( v11 >= 0 )
  {
    v12 = a1[1];
    v11 = v12
        ? HampInProcCreateActivityForProcess(v12, a3, a4, &v15)
        : (unsigned int)NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 4u, 0LL, *a1, a3, a4, &v15).Pointer;
    if ( v11 >= 0 )
    {
      v9[6] = v15;
      v14 = v9[5];
      RtlAcquireSRWLockExclusive(v14 + 8);
      *(_DWORD *)(v14 + 16) = GetCurrentThreadId();
      HampIpcChannelAddCallbackUnsafe(v9);
      *(_DWORD *)(v14 + 16) = 0;
      RtlReleaseSRWLockExclusive(v14 + 8);
      v9 = 0LL;
      *a5 = v15;
      v11 = 0;
    }
  }
  if ( v9 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  return (unsigned int)v11;
}
