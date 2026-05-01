/*
 * XREFs of HamCreateActivityForProcess @ 0x180009610
 * Callers:
 *     ?StartAsyncForProcess@HamActivityWrapper@@QEAAJPEAXPEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY_START_TYPE@@@Z @ 0x18001A134 (-StartAsyncForProcess@HamActivityWrapper@@QEAAJPEAXPEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY.c)
 * Callees:
 *     HampIpcChannelAddCallbackUnsafe @ 0x180009AD0 (HampIpcChannelAddCallbackUnsafe.c)
 */

CLIENT_CALL_RETURN __fastcall HamCreateActivityForProcess(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  _QWORD *v9; // r14
  _QWORD *Heap; // rax
  CLIENT_CALL_RETURN result; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned int Pointer; // [rsp+40h] [rbp-38h]
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
    result.Simple = 0LL;
  }
  else
  {
    result.Simple = 3221225495LL;
  }
  Pointer = (unsigned int)result.Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    v12 = a1[1];
    if ( v12 )
      result.Simple = HampInProcCreateActivityForProcess(v12, a3, a4, &v15);
    else
      result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 4u, 0LL, *a1, a3, a4, &v15).Pointer;
    Pointer = (unsigned int)result.Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
    {
      v9[6] = v15;
      v13 = v9[5];
      RtlAcquireSRWLockExclusive(v13 + 8);
      *(_DWORD *)(v13 + 16) = GetCurrentThreadId();
      HampIpcChannelAddCallbackUnsafe(v9);
      *(_DWORD *)(v13 + 16) = 0;
      RtlReleaseSRWLockExclusive(v13 + 8);
      v9 = 0LL;
      *a5 = v15;
      result.Simple = 0LL;
      Pointer = 0;
    }
  }
  if ( v9 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    return (CLIENT_CALL_RETURN)Pointer;
  }
  return result;
}
