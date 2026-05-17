/*
 * XREFs of RtlpCheckDeviceName @ 0x18010B478
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180047AE0 (RtlGetFullPathName_Ustr.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlDoesFileExists_UEx @ 0x1800A5EEC (RtlDoesFileExists_UEx.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpCheckDeviceName(const void **a1, unsigned int a2, bool *a3)
{
  unsigned __int64 v5; // rbp
  wchar_t *Heap_0; // rax
  unsigned int v7; // ebx
  const wchar_t *v8; // rsi
  __int64 v10; // rdx

  v5 = a2;
  Heap_0 = (wchar_t *)RtlAllocateHeap_0();
  v7 = 0;
  v8 = Heap_0;
  if ( Heap_0 )
  {
    *a3 = 1;
    memmove(Heap_0, a1[1], *(unsigned __int16 *)a1);
    LOBYTE(v10) = 1;
    v8[v5 >> 1] = 46;
    v8[((unsigned int)v5 >> 1) + 1] = 0;
    *a3 = RtlDoesFileExists_UEx(v8, v10) == 0;
    RtlFreeHeap_0();
  }
  else
  {
    *a3 = 0;
    return (unsigned int)-1073741801;
  }
  return v7;
}
