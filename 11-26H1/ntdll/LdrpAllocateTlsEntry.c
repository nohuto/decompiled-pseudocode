/*
 * XREFs of LdrpAllocateTlsEntry @ 0x180081D90
 * Callers:
 *     LdrpHandleTlsData @ 0x1800801B0 (LdrpHandleTlsData.c)
 *     LdrpInitializeTls @ 0x18009299C (LdrpInitializeTls.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     LdrpAcquireTlsIndex @ 0x180093AEC (LdrpAcquireTlsIndex.c)
 *     LdrpGenericExceptionFilter @ 0x18015B768 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpAllocateTlsEntry(__int64 a1, __int64 a2, int *a3, __int64 a4, __int64 *a5)
{
  __int64 Heap_0; // rax
  __int64 v9; // rbx
  __int64 v10; // r14
  int v11; // r8d
  __int64 *v12; // rax
  int v13; // edi

  Heap_0 = RtlAllocateHeap_0();
  v9 = Heap_0;
  v10 = Heap_0;
  if ( !Heap_0 )
    return 3221225495LL;
  *(_OWORD *)(Heap_0 + 16) = *(_OWORD *)a1;
  *(_OWORD *)(Heap_0 + 32) = *(_OWORD *)(a1 + 16);
  *(_QWORD *)(Heap_0 + 48) = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(Heap_0 + 24) < *(_QWORD *)(Heap_0 + 16) )
  {
    v13 = -1073741701;
    goto LABEL_13;
  }
  if ( a4 )
  {
    v13 = LdrpAcquireTlsIndex(a3, a4);
    if ( v13 >= 0 )
    {
      v11 = *a3;
      goto LABEL_5;
    }
LABEL_13:
    RtlFreeHeap_0();
    return (unsigned int)v13;
  }
  v11 = (*a3)++;
LABEL_5:
  **(_DWORD **)(v10 + 32) = v11;
  *(_DWORD *)(v9 + 64) = v11;
  *(_QWORD *)(v9 + 56) = a2;
  v12 = (__int64 *)off_1801C5950;
  if ( *off_1801C5950 != (_UNKNOWN *)&LdrpTlsList )
    __fastfail(3u);
  *(_QWORD *)v9 = &LdrpTlsList;
  *(_QWORD *)(v9 + 8) = v12;
  *v12 = v9;
  off_1801C5950 = (_UNKNOWN **)v9;
  if ( a5 )
    *a5 = v9;
  return 0LL;
}
