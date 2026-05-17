/*
 * XREFs of RtlEnableThreadProfiling @ 0x1801390C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlEnableThreadProfiling(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  _QWORD *Heap_0; // rax
  _QWORD *v10; // rbx
  int v11; // edi
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+2Ch] [rbp-2Ch]
  _QWORD *v15; // [rsp+30h] [rbp-28h]

  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  if ( (a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    return 3221225713LL;
  Heap_0 = (_QWORD *)RtlAllocateHeap_0();
  v10 = Heap_0;
  if ( !Heap_0 )
    return 3221225495LL;
  memset_thunk_772440563353939046(Heap_0, 0, 0x1C0uLL);
  *(_DWORD *)v10 = 65984;
  v10[4] = a3;
  v14 = 1;
  v13 = a2;
  v12 = a3;
  v15 = v10;
  v11 = NtSetInformationThread(a1, 32LL, &v12, 24LL);
  if ( v11 < 0 )
    RtlFreeHeap_0();
  else
    *a4 = v10;
  return (unsigned int)v11;
}
