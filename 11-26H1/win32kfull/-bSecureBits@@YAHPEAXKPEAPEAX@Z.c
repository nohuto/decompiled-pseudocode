/*
 * XREFs of ?bSecureBits@@YAHPEAXKPEAPEAX@Z @ 0x14032C4CC
 * Callers:
 *     NtGdiEngCreatePalette @ 0x14021FF70 (NtGdiEngCreatePalette.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSecureBits(void *a1, unsigned int a2, void **a3)
{
  unsigned int v5; // edi
  void *v7; // rax

  v5 = 1;
  *a3 = 0LL;
  if ( a1 )
  {
    GreProbeForReadFromUntrustedVa(a1, a2, 1uLL);
    v7 = GrepSecureVirtualMemory(a1, a2, 2u);
    *a3 = v7;
    return v7 != 0LL;
  }
  return v5;
}
