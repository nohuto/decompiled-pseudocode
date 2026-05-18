/*
 * XREFs of sub_18001C574 @ 0x18001C574
 * Callers:
 *     sub_18001C534 @ 0x18001C534 (sub_18001C534.c)
 *     sub_180025A84 @ 0x180025A84 (sub_180025A84.c)
 *     sub_180026E5C @ 0x180026E5C (sub_180026E5C.c)
 *     sub_1800391E4 @ 0x1800391E4 (sub_1800391E4.c)
 *     sub_18003A8C8 @ 0x18003A8C8 (sub_18003A8C8.c)
 *     sub_1800BD870 @ 0x1800BD870 (sub_1800BD870.c)
 *     sub_1800CDB60 @ 0x1800CDB60 (sub_1800CDB60.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18001C574(LPVOID lpMem)
{
  HANDLE ProcessHeap; // rax

  if ( lpMem )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
}
