/*
 * XREFs of LdrpAllocateTlsEntry @ 0x180079130
 * Callers:
 *     LdrpInitializeTls @ 0x180073B08 (LdrpInitializeTls.c)
 *     LdrpHandleTlsData @ 0x180077550 (LdrpHandleTlsData.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     LdrpAcquireTlsIndex @ 0x180072CBC (LdrpAcquireTlsIndex.c)
 *     LdrpGenericExceptionFilter @ 0x18015B628 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpAllocateTlsEntry(__int64 a1, __int64 a2, ULONG *a3, _BYTE *a4, _QWORD *a5)
{
  _QWORD *Heap_0; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // r14
  ULONG v11; // r8d
  _QWORD *v12; // rax
  int v13; // edi

  Heap_0 = RtlAllocateHeap_0(LdrpTlsHeap, NtdllBaseTag + 786432, 0x48uLL);
  v9 = Heap_0;
  v10 = Heap_0;
  if ( !Heap_0 )
    return 3221225495LL;
  *((_OWORD *)Heap_0 + 1) = *(_OWORD *)a1;
  *((_OWORD *)Heap_0 + 2) = *(_OWORD *)(a1 + 16);
  Heap_0[6] = *(_QWORD *)(a1 + 32);
  if ( Heap_0[3] < Heap_0[2] )
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
    RtlFreeHeap_0(LdrpTlsHeap, 0, v9);
    return (unsigned int)v13;
  }
  v11 = (*a3)++;
LABEL_5:
  *(_DWORD *)v10[4] = v11;
  *((_DWORD *)v9 + 16) = v11;
  v9[7] = a2;
  v12 = off_1801C4950;
  if ( *off_1801C4950 != (_UNKNOWN *)&LdrpTlsList )
    __fastfail(3u);
  *v9 = &LdrpTlsList;
  v9[1] = v12;
  *v12 = v9;
  off_1801C4950 = (_UNKNOWN **)v9;
  if ( a5 )
    *a5 = v9;
  return 0LL;
}
