/*
 * XREFs of SshpCacheDatabaseAllocate @ 0x140ADCF00
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall SshpCacheDatabaseAllocate(_RTL_AVL_TABLE *a1)
{
  return ExAllocatePool2(0x100uLL);
}
