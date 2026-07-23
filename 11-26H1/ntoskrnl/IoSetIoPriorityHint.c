/*
 * XREFs of IoSetIoPriorityHint @ 0x14045CF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoSetIoPriorityHint(PIRP Irp, IO_PRIORITY_HINT PriorityHint)
{
  if ( (unsigned int)PriorityHint >= MaxIoPriorityTypes )
    return -1073741811;
  Irp->Flags = ((PriorityHint + 1) << 17) | Irp->Flags & 0xFFF1FFFF;
  return 0;
}
