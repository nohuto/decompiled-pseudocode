/*
 * XREFs of NdisGetFirstBufferFromPacket @ 0x1400DB920
 * Callers:
 *     ?ndisMIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400B4510 (-ndisMIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NdisGetFirstBufferFromPacket(__int64 a1, struct _MDL **a2, _QWORD *a3, ULONG *a4, int *a5)
{
  struct _MDL *v5; // rbx
  PVOID MappedSystemVa; // rax
  ULONG ByteCount; // eax
  struct _MDL *Next; // rcx
  int v11; // edx

  v5 = *(struct _MDL **)(a1 + 8);
  *a2 = v5;
  if ( v5 )
  {
    if ( (v5->MdlFlags & 5) != 0 )
      MappedSystemVa = v5->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPages(v5, 0);
    *a3 = MappedSystemVa;
    ByteCount = v5->ByteCount;
    *a5 = ByteCount;
    *a4 = ByteCount;
    Next = v5->Next;
    if ( v5->Next )
    {
      v11 = *a5;
      do
      {
        v11 += Next->ByteCount;
        *a5 = v11;
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
