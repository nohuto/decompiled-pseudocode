/*
 * XREFs of ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1401C8E48
 * Callers:
 *     InternalRegisterClassEx @ 0x1400B3B70 (InternalRegisterClassEx.c)
 *     ReferenceClass @ 0x1401A4040 (ReferenceClass.c)
 * Callees:
 *     <none>
 */

void __fastcall ClassFree(PVOID *a1, char *a2)
{
  if ( a1 )
    RtlFreeHeap(a1[17], 0, a2);
  else
    Win32FreePool(a2);
}
