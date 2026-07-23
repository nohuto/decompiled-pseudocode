/*
 * XREFs of EtwpTrackDebugIdForSession @ 0x1801155B8
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x18003F580 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlCompareMemory @ 0x1801630E0 (RtlCompareMemory.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall EtwpTrackDebugIdForSession(__int64 a1, const void *a2, unsigned int a3)
{
  __int64 *v3; // r14
  SIZE_T v4; // rsi
  __int64 *i; // rdi
  _QWORD *Heap_0; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rcx

  v3 = (__int64 *)(a1 + 448);
  v4 = a3;
  for ( i = *(__int64 **)(a1 + 448); i != v3; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 5) == (_DWORD)v4 && RtlCompareMemory(i + 3, a2, v4) == v4 )
      return 183LL;
  }
  if ( (int)v4 + 24 < (unsigned int)v4 )
    return 534LL;
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v4 + 24));
  v10 = Heap_0;
  if ( !Heap_0 )
    return 14LL;
  *((_DWORD *)Heap_0 + 5) = v4;
  memmove(Heap_0 + 3, a2, v4);
  v11 = (_QWORD *)(a1 + 448);
  v12 = *(_QWORD *)(a1 + 448);
  if ( *(_QWORD *)(v12 + 8) != a1 + 448 )
    __fastfail(3u);
  v10[1] = v11;
  *v10 = v12;
  *(_QWORD *)(v12 + 8) = v10;
  *v11 = v10;
  *(_DWORD *)(a1 + 316) |= 0x10u;
  return 0LL;
}
