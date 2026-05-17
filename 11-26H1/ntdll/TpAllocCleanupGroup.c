/*
 * XREFs of TpAllocCleanupGroup @ 0x1800ED550
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocCleanupGroup(_QWORD *a1)
{
  _QWORD *Heap_0; // rax
  _QWORD *v3; // r8
  _QWORD *v4; // rax
  int v5; // ebx

  if ( !a1 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  else
  {
    *a1 = 0LL;
    Heap_0 = (_QWORD *)RtlAllocateHeap_0();
    v3 = Heap_0;
    if ( Heap_0 )
    {
      *Heap_0 = 1LL;
      Heap_0[1] = 0LL;
      Heap_0[7] = 0LL;
      v4 = Heap_0 + 2;
      v4[1] = v4;
      *v4 = v4;
      v3[9] = v3 + 8;
      v3[8] = v3 + 8;
      *((_OWORD *)v3 + 2) = 0LL;
      v3[6] = 0LL;
      v5 = 0;
      *a1 = v3;
    }
    else
    {
      v5 = -1073741801;
    }
    if ( v5 < 0 )
    {
      if ( v3 )
        RtlFreeHeap_0();
    }
    return (unsigned int)v5;
  }
}
