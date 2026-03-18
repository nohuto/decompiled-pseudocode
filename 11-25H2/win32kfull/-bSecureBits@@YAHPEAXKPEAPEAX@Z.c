/*
 * XREFs of ?bSecureBits@@YAHPEAXKPEAPEAX@Z @ 0x14033AC10
 * Callers:
 *     NtGdiEngCreatePalette @ 0x1401F0EE0 (NtGdiEngCreatePalette.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSecureBits(void *a1, unsigned int a2, void **a3)
{
  unsigned int v4; // ebx
  HANDLE v5; // rax

  v4 = 1;
  *a3 = 0LL;
  if ( a1 )
  {
    v5 = MmSecureVirtualMemory(a1, a2, 2u);
    *a3 = v5;
    return v5 != 0LL;
  }
  return v4;
}
