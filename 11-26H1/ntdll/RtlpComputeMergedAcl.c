/*
 * XREFs of RtlpComputeMergedAcl @ 0x18005BE2C
 * Callers:
 *     RtlpSetSecurityObject @ 0x18005BF70 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpComputeMergedAcl2 @ 0x18005B3C8 (RtlpComputeMergedAcl2.c)
 */

__int64 __fastcall RtlpComputeMergedAcl(
        unsigned __int8 *a1,
        __int16 a2,
        unsigned __int8 *a3,
        __int16 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 *a9,
        _DWORD *a10)
{
  unsigned int v10; // edi
  unsigned int v15; // ebp
  __int64 Heap_0; // rax
  unsigned int v18[4]; // [rsp+60h] [rbp-38h] BYREF

  v10 = 0;
  v15 = 0;
  v18[0] = 1024;
  while ( 1 )
  {
    if ( v15 >= 2 )
      return v10;
    Heap_0 = RtlAllocateHeap_0();
    *a9 = Heap_0;
    if ( !Heap_0 )
      break;
    v10 = RtlpComputeMergedAcl2(a1, a2, a3, a4, a5, a6, a7, a8, v18, Heap_0, a10);
    if ( (v10 & 0x80000000) == 0 )
    {
      if ( !v18[0] )
      {
        RtlFreeHeap_0();
        *a9 = 0LL;
      }
      return v10;
    }
    RtlFreeHeap_0();
    *a9 = 0LL;
    if ( v10 != -1073741789 )
      return v10;
    ++v15;
  }
  return 3221225495LL;
}
