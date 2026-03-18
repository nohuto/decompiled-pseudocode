/*
 * XREFs of ?pAllocateAndInitializePFT@@YAPEAVPFT@@I@Z @ 0x140231848
 * Callers:
 *     ?bInitPrivatePFT@@YAHXZ @ 0x1402672E0 (-bInitPrivatePFT@@YAHXZ.c)
 *     bInitFontTables @ 0x1403EE0E0 (bInitFontTables.c)
 * Callees:
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 */

struct PFT *__fastcall pAllocateAndInitializePFT(int a1)
{
  struct PFT *result; // rax

  result = (struct PFT *)PALLOCMEM(8 * a1 + 40, 1952870471LL);
  if ( result )
  {
    *((_DWORD *)result + 7) = 0;
    *((_DWORD *)result + 8) = 0;
    *((_DWORD *)result + 6) = a1;
  }
  return result;
}
