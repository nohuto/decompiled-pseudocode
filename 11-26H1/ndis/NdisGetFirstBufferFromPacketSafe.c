/*
 * XREFs of NdisGetFirstBufferFromPacketSafe @ 0x1400DB9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NdisGetFirstBufferFromPacketSafe(__int64 a1, struct _MDL **a2, _QWORD *a3, ULONG *a4, int *a5, int a6)
{
  struct _MDL *v6; // rbx
  PVOID MappedSystemVa; // rax
  ULONG ByteCount; // eax
  struct _MDL *Next; // rcx
  int v12; // edx

  v6 = *(struct _MDL **)(a1 + 8);
  *a2 = v6;
  if ( v6 )
  {
    if ( (v6->MdlFlags & 5) != 0 )
      MappedSystemVa = v6->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v6, 0, MmCached, 0LL, 0, a6 | 0x40000000u);
    *a3 = MappedSystemVa;
    ByteCount = v6->ByteCount;
    *a5 = ByteCount;
    *a4 = ByteCount;
    Next = v6->Next;
    if ( v6->Next )
    {
      v12 = *a5;
      do
      {
        v12 += Next->ByteCount;
        *a5 = v12;
        Next = Next->Next;
      }
      while ( Next );
    }
  }
  else
  {
    *a3 = 0LL;
    *a4 = 0;
    *a5 = 0;
  }
}
