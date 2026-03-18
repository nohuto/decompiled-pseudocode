/*
 * XREFs of RtlFreeOemString @ 0x140B3C1D0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 */

void __stdcall RtlFreeOemString(POEM_STRING OemString)
{
  char *Buffer; // rcx

  Buffer = OemString->Buffer;
  if ( Buffer )
    ExFreePool(Buffer);
}
