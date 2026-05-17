/*
 * XREFs of RtlQueryRegistryValueWithFallback @ 0x1801253C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlQueryRegistryValueWithFallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        void *a6,
        _DWORD *a7)
{
  unsigned int v12; // esi
  _DWORD *Heap_0; // rdi
  int v14; // ebx
  int v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = 0;
  if ( !a1 && !a2 )
    return 3221225485LL;
  v12 = a4 + 16;
  if ( a4 >= 0xFFFFFFF0 )
    return (unsigned int)-1073741675;
  Heap_0 = (_DWORD *)RtlAllocateHeap_0();
  if ( Heap_0 )
  {
    v14 = -1073741772;
    if ( !a1 || (v14 = NtQueryValueKey(a1, a3, 2LL, Heap_0, v12, &v15), v14 == -1073741772) )
    {
      if ( !a2 )
      {
LABEL_20:
        RtlFreeHeap_0();
        return (unsigned int)v14;
      }
      v14 = NtQueryValueKey(a2, a3, 2LL, Heap_0, v12, &v15);
    }
    if ( (int)(v14 + 0x80000000) < 0 || v14 == -2147483643 )
    {
      if ( a5 )
        *a5 = Heap_0[1];
      if ( v14 >= 0 )
      {
        if ( a4 < Heap_0[2] )
          v14 = -2147483643;
        else
          memmove(a6, Heap_0 + 3, (unsigned int)Heap_0[2]);
      }
      *a7 = Heap_0[2];
    }
    goto LABEL_20;
  }
  return (unsigned int)-1073741801;
}
