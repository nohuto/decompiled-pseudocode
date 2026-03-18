/*
 * XREFs of ?DereferenceKernelStack@@YAXPEAU_ETHREAD@@@Z @ 0x140230780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DereferenceKernelStack(PVOID Object)
{
  PsDereferenceKernelStack();
  ObfDereferenceObject(Object);
}
