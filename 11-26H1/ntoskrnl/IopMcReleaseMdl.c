/*
 * XREFs of IopMcReleaseMdl @ 0x1404114C8
 * Callers:
 *     IopIoRingCompleteIrp @ 0x1404113E8 (IopIoRingCompleteIrp.c)
 *     IopIoRingDispatchWrite @ 0x1407987BC (IopIoRingDispatchWrite.c)
 *     IopIoRingDispatchRead @ 0x140B00E10 (IopIoRingDispatchRead.c)
 * Callees:
 *     IoFreeMdl @ 0x14039F190 (IoFreeMdl.c)
 *     IopMcDereferenceBufferEntry @ 0x140411A80 (IopMcDereferenceBufferEntry.c)
 *     IopMcDereferenceMdl @ 0x140411AC8 (IopMcDereferenceMdl.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall IopMcReleaseMdl(struct _MDL *BugCheckParameter4)
{
  struct _MDL **v1; // r8
  ULONG_PTR *v2; // rbx

  v1 = &BugCheckParameter4[1].Next
     + ((BugCheckParameter4->ByteCount + 4095LL + (unsigned __int64)(BugCheckParameter4->ByteOffset & 0xFFF)) >> 12);
  if ( *(_DWORD *)v1 != 1051651 )
    KeBugCheckEx(0x1F4u, 3uLL, (ULONG_PTR)v1, *(unsigned int *)v1, (ULONG_PTR)BugCheckParameter4);
  v2 = (ULONG_PTR *)v1[1];
  if ( *(_WORD *)v2 != 3074 )
    KeBugCheckEx(
      0x1F4u,
      4uLL,
      (ULONG_PTR)v2,
      *v2,
      (ULONG_PTR)&BugCheckParameter4[1]
    + 8 * ((BugCheckParameter4->ByteCount + 4095LL + (unsigned __int64)(BugCheckParameter4->ByteOffset & 0xFFF)) >> 12));
  IoFreeMdl(BugCheckParameter4);
  IopMcDereferenceMdl((ULONG_PTR)v2);
  return IopMcDereferenceBufferEntry((ULONG_PTR)v2);
}
