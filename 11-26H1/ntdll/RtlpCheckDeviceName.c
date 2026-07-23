/*
 * XREFs of RtlpCheckDeviceName @ 0x18010ADE8
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180032060 (RtlGetFullPathName_Ustr.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlDoesFileExists_UEx @ 0x1800A501C (RtlDoesFileExists_UEx.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpCheckDeviceName(const void **a1, unsigned int a2, bool *a3)
{
  unsigned __int64 v5; // rbp
  void *ProcessHeap; // r15
  wchar_t *Heap_0; // rax
  unsigned int v8; // ebx
  wchar_t *v9; // rsi
  __int64 v11; // rdx

  v5 = a2;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap_0 = (wchar_t *)RtlAllocateHeap_0(ProcessHeap, 0, *(unsigned __int16 *)a1);
  v8 = 0;
  v9 = Heap_0;
  if ( Heap_0 )
  {
    *a3 = 1;
    memmove(Heap_0, a1[1], *(unsigned __int16 *)a1);
    LOBYTE(v11) = 1;
    v9[v5 >> 1] = 46;
    v9[((unsigned int)v5 >> 1) + 1] = 0;
    *a3 = RtlDoesFileExists_UEx(v9, v11) == 0;
    RtlFreeHeap_0(ProcessHeap, 0, v9);
  }
  else
  {
    *a3 = 0;
    return (unsigned int)-1073741801;
  }
  return v8;
}
