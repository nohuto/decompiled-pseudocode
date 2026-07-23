/*
 * XREFs of LdrpCreateSoftwareEnclave @ 0x18010E094
 * Callers:
 *     LdrCreateEnclave @ 0x18010DF90 (LdrCreateEnclave.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlInitializeCriticalSectionEx @ 0x18006A3B0 (RtlInitializeCriticalSectionEx.c)
 */

__int64 __fastcall LdrpCreateSoftwareEnclave(__int64 a1, __int64 a2, int a3)
{
  char *Heap_0; // rax
  _QWORD *v7; // rbx
  _RTL_CRITICAL_SECTION *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rax

  Heap_0 = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x88uLL);
  v7 = Heap_0;
  if ( !Heap_0 )
    return 3221225626LL;
  *((_QWORD *)Heap_0 + 9) = a1;
  v9 = (_RTL_CRITICAL_SECTION *)(Heap_0 + 16);
  *((_QWORD *)Heap_0 + 10) = a2;
  *((_DWORD *)Heap_0 + 14) = a3;
  *((_QWORD *)Heap_0 + 11) = 0LL;
  *((_QWORD *)Heap_0 + 14) = 0LL;
  v10 = Heap_0 + 96;
  v10[1] = v10;
  *v10 = v10;
  RtlInitializeCriticalSectionEx(v9, 0, 0);
  *(_QWORD *)((char *)v7 + 60) = 1LL;
  v7[15] = 0LL;
  v7[16] = 0LL;
  RtlEnterCriticalSection(&LdrpEnclaveListLock);
  v11 = (_QWORD *)qword_1801CC268;
  if ( *(__int64 **)qword_1801CC268 != &LdrpEnclaveList )
    __fastfail(3u);
  *v7 = &LdrpEnclaveList;
  v7[1] = v11;
  *v11 = v7;
  qword_1801CC268 = (__int64)v7;
  RtlLeaveCriticalSection(&LdrpEnclaveListLock);
  return 0LL;
}
