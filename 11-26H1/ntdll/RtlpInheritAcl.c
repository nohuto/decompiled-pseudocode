/*
 * XREFs of RtlpInheritAcl @ 0x18004BBA0
 * Callers:
 *     RtlpConvertAclToAutoInherit @ 0x180124828 (RtlpConvertAclToAutoInherit.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpInheritAcl2 @ 0x18004A930 (RtlpInheritAcl2.c)
 */

__int64 __fastcall RtlpInheritAcl(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        int a14,
        PVOID *a15,
        _BYTE *a16,
        int *a17)
{
  unsigned int v17; // edi
  __int16 v19; // bx
  void *ProcessHeap; // rsi
  unsigned int v23; // eax
  unsigned int v24; // r13d
  PVOID *v25; // r14
  _WORD *Heap_0; // rax
  unsigned int v28; // [rsp+D0h] [rbp+18h] BYREF

  v17 = 0;
  v19 = a3;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( a3 || a1 )
  {
    v23 = 200;
    v24 = 0;
    v25 = a15;
    v28 = 200;
    while ( 1 )
    {
      if ( v24 >= 2 )
        return v17;
      Heap_0 = RtlAllocateHeap_0(ProcessHeap, NtdllBaseTag + 1310720, v23);
      *v25 = Heap_0;
      if ( !Heap_0 )
        break;
      v17 = RtlpInheritAcl2(a1, a2, v19, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, &v28, Heap_0, a16, a17);
      if ( (v17 & 0x80000000) == 0 )
      {
        if ( !v28 )
        {
          RtlFreeHeap_0(ProcessHeap, 0, *v25);
          *v25 = 0LL;
        }
        return v17;
      }
      RtlFreeHeap_0(ProcessHeap, 0, *v25);
      *v25 = 0LL;
      if ( v17 != -1073741789 )
        return v17;
      v23 = v28;
      ++v24;
    }
    return 3221225495LL;
  }
  else
  {
    *a16 = 0;
    *a17 = a5 != 0 ? 0x400 : 0;
    *a15 = 0LL;
    return 2147483659LL;
  }
}
