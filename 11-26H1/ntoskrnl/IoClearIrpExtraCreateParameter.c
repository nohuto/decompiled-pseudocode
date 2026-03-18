/*
 * XREFs of IoClearIrpExtraCreateParameter @ 0x1405CAE10
 * Callers:
 *     IopSymlinkAllocateAndAddECP @ 0x140903CB0 (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     <none>
 */

void __stdcall IoClearIrpExtraCreateParameter(PIRP Irp)
{
  if ( (Irp->Flags & 0x80u) != 0 )
    Irp->UserBuffer = 0LL;
}
