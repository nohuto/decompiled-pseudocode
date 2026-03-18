/*
 * XREFs of ?pAllocateAndInitializePFT@@YAPEAVPFT@@I@Z @ 0x140296068
 * Callers:
 *     ?bInitPrivatePFT@@YAHXZ @ 0x140289030 (-bInitPrivatePFT@@YAHXZ.c)
 *     bInitFontTables @ 0x1403FC394 (bInitFontTables.c)
 * Callees:
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 */

struct PFT *__fastcall pAllocateAndInitializePFT(int a1)
{
  struct PFT *result; // rax

  result = (struct PFT *)PALLOCMEM(8 * a1 + 40, 1952870471LL);
  if ( result )
  {
    *((_DWORD *)result + 6) = a1;
    *(_QWORD *)((char *)result + 28) = 0LL;
  }
  return result;
}
