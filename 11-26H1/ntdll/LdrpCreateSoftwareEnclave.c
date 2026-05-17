/*
 * XREFs of LdrpCreateSoftwareEnclave @ 0x18010E544
 * Callers:
 *     LdrCreateEnclave @ 0x18010E440 (LdrCreateEnclave.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlInitializeCriticalSectionEx @ 0x18007BB90 (RtlInitializeCriticalSectionEx.c)
 */

__int64 __fastcall LdrpCreateSoftwareEnclave(__int64 a1, __int64 a2, int a3)
{
  __int64 Heap_0; // rax
  _QWORD *v7; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rax

  Heap_0 = RtlAllocateHeap_0();
  v7 = (_QWORD *)Heap_0;
  if ( !Heap_0 )
    return 3221225626LL;
  *(_QWORD *)(Heap_0 + 72) = a1;
  v9 = Heap_0 + 16;
  *(_QWORD *)(Heap_0 + 80) = a2;
  *(_DWORD *)(Heap_0 + 56) = a3;
  *(_QWORD *)(Heap_0 + 88) = 0LL;
  *(_QWORD *)(Heap_0 + 112) = 0LL;
  v10 = (_QWORD *)(Heap_0 + 96);
  v10[1] = v10;
  *v10 = v10;
  RtlInitializeCriticalSectionEx(v9, 0, 0);
  *(_QWORD *)((char *)v7 + 60) = 1LL;
  v7[15] = 0LL;
  v7[16] = 0LL;
  RtlEnterCriticalSection((__int64)&LdrpEnclaveListLock);
  v11 = (_QWORD *)qword_1801CD228;
  if ( *(__int64 **)qword_1801CD228 != &LdrpEnclaveList )
    __fastfail(3u);
  *v7 = &LdrpEnclaveList;
  v7[1] = v11;
  *v11 = v7;
  qword_1801CD228 = (__int64)v7;
  RtlLeaveCriticalSection((__int64)&LdrpEnclaveListLock);
  return 0LL;
}
