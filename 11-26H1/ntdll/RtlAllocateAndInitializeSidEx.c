/*
 * XREFs of RtlAllocateAndInitializeSidEx @ 0x18013CBE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlLengthRequiredSid @ 0x1800CE750 (RtlLengthRequiredSid.c)
 */

__int64 __fastcall RtlAllocateAndInitializeSidEx(__int64 a1, unsigned __int8 a2, _DWORD *a3, __int64 *a4)
{
  __int64 v4; // rdi
  __int64 Heap_0; // rax
  __int64 v10; // r8
  __int64 v11; // rdx

  v4 = a2;
  if ( a2 > 0xFu )
    return 3221225485LL;
  RtlLengthRequiredSid(a2);
  Heap_0 = RtlAllocateHeap_0();
  if ( !Heap_0 )
    return 3221225495LL;
  *(_BYTE *)Heap_0 = 1;
  *(_DWORD *)(Heap_0 + 2) = *(_DWORD *)a1;
  *(_WORD *)(Heap_0 + 6) = *(_WORD *)(a1 + 4);
  *(_BYTE *)(Heap_0 + 1) = v4;
  if ( (_BYTE)v4 )
  {
    v10 = v4;
    v11 = Heap_0 - (_QWORD)a3;
    do
    {
      *(_DWORD *)((char *)a3 + v11 + 8) = *a3;
      ++a3;
      --v10;
    }
    while ( v10 );
  }
  *a4 = Heap_0;
  return 0LL;
}
