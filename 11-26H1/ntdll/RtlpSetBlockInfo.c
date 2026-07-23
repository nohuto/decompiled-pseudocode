/*
 * XREFs of RtlpSetBlockInfo @ 0x1800C25AC
 * Callers:
 *     RtlpLeakCallbackRoutine @ 0x1800C1E30 (RtlpLeakCallbackRoutine.c)
 *     RtlpPushPageDescriptor @ 0x1800C1FB4 (RtlpPushPageDescriptor.c)
 *     RtlpSetBlockInfo @ 0x1800C25AC (RtlpSetBlockInfo.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpSetBlockInfo @ 0x1800C25AC (RtlpSetBlockInfo.c)
 *     RtlpInitializeMap @ 0x1800C2794 (RtlpInitializeMap.c)
 */

int __fastcall RtlpSetBlockInfo(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r9
  _QWORD *v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r15
  PVOID Heap_0; // rax

  v6 = a1[1];
  v7 = a2 + a3 - 1;
  if ( v7 >= v6 && a2 <= a1[2] )
  {
    if ( a2 <= v6 )
      v10 = 0LL;
    else
      v10 = (a2 - v6) / *a1;
    v11 = a2 + a3 - v6;
    v12 = &a1[v10 + 7];
    v13 = (v11 - 1) % *a1;
    v14 = (v11 - 1) / *a1;
    LODWORD(v7) = 255;
    if ( v14 > 0xFF )
      v14 = 255LL;
    while ( v10 <= v14 )
    {
      if ( *a1 == 4096LL )
      {
        if ( a4 )
        {
          if ( *v12 )
          {
            if ( *v12 != a4 )
              LODWORD(v7) = DbgPrint("Error\n", v13);
          }
          *v12 = a4;
        }
        else
        {
          v13 = v10 >> 3;
          LODWORD(v7) = v10 & 7;
          *((_BYTE *)a1 + (v10 >> 3) + 24) |= 1 << v7;
        }
      }
      else
      {
        if ( !*v12 )
        {
          Heap_0 = RtlAllocateHeap_0(RtlpLeakHeap, 0, 0x840uLL);
          *v12 = Heap_0;
          if ( !Heap_0 )
          {
            LODWORD(v7) = DbgPrint("Not enough memory to complete\n");
            return v7;
          }
          RtlpInitializeMap(Heap_0, a1);
          *(_QWORD *)(*v12 + 8LL) = a1[1] + *a1 * v10;
          *(_QWORD *)(*v12 + 16LL) = a1[1] - 1LL + *a1 * (v10 + 1);
        }
        LODWORD(v7) = RtlpSetBlockInfo(*v12, a2, a3, a4);
      }
      ++v10;
      ++v12;
    }
  }
  return v7;
}
