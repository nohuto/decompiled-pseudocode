/*
 * XREFs of PipDmgInitializeIommuExtension @ 0x140B21C1C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PiIommuAllocateExtension @ 0x140B21D08 (PiIommuAllocateExtension.c)
 */

__int64 __fastcall PipDmgInitializeIommuExtension(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  ULONG_PTR *v2; // rsi
  unsigned __int16 *v4; // rdi
  __int64 v5; // rax

  v2 = (ULONG_PTR *)(BugCheckParameter2 + 720);
  if ( *(_QWORD *)(BugCheckParameter2 + 720) )
  {
    if ( BugCheckParameter2 )
    {
      v4 = (unsigned __int16 *)(BugCheckParameter2 + 40);
      IoAddTriageDumpDataBlock(BugCheckParameter2, (PVOID)0x388);
      if ( *v4 )
      {
        IoAddTriageDumpDataBlock((ULONG)v4, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v4 + 1), (PVOID)*v4);
      }
      if ( *(_WORD *)(BugCheckParameter2 + 56) )
      {
        IoAddTriageDumpDataBlock(BugCheckParameter2 + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(BugCheckParameter2 + 64),
          (PVOID)*(unsigned __int16 *)(BugCheckParameter2 + 56));
      }
      v5 = *(_QWORD *)(BugCheckParameter2 + 16);
      if ( v5 )
      {
        if ( *(_WORD *)(v5 + 56) )
        {
          IoAddTriageDumpDataBlock(v5 + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 16) + 56LL));
        }
      }
    }
    KeBugCheckEx(0xCAu, 0x11uLL, BugCheckParameter2, *v2, *(unsigned int *)(BugCheckParameter2 + 704));
  }
  return PiIommuAllocateExtension(BugCheckParameter2, a2, BugCheckParameter2 + 720);
}
