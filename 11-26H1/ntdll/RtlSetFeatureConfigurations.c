/*
 * XREFs of RtlSetFeatureConfigurations @ 0x18010EA40
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     ZwSetSystemInformation @ 0x1801626D0 (ZwSetSystemInformation.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlSetFeatureConfigurations(_QWORD *a1, int a2, const void *a3, unsigned __int64 a4)
{
  int v7; // ebx
  unsigned __int64 v8; // rbx
  int v9; // ebp
  __int64 Heap_0; // rax
  __int64 v11; // rdi

  if ( a4 <= 0xFFFFFFFF )
  {
    v8 = 32LL * (unsigned int)a4;
    v9 = a4;
    if ( v8 > 0xFFFFFFFF )
    {
      return (unsigned int)-1073741675;
    }
    else
    {
      Heap_0 = RtlAllocateHeap_0();
      v11 = Heap_0;
      if ( Heap_0 )
      {
        *(_DWORD *)Heap_0 = 0;
        *(_DWORD *)(Heap_0 + 16) = a2;
        if ( a1 )
          *(_QWORD *)(Heap_0 + 8) = *a1;
        *(_DWORD *)(Heap_0 + 20) = v9;
        memmove((void *)(Heap_0 + 24), a3, (unsigned int)v8);
        v7 = ZwSetSystemInformation(210LL, v11, (unsigned int)(v8 + 24));
        if ( v7 >= 0 )
          v7 = 0;
        RtlFreeHeap_0();
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
