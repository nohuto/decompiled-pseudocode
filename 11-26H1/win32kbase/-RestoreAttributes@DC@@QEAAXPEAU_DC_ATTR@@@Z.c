/*
 * XREFs of ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x14003DB50
 * Callers:
 *     ?RestoreAttributesHelper@DCOBJ@@AEAAXXZ @ 0x14003DE00 (-RestoreAttributesHelper@DCOBJ@@AEAAXXZ.c)
 *     ?SetupDCAttributes@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@PEAU_DC_ATTR@@@Z @ 0x140102DC4 (-SetupDCAttributes@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@PEAU_DC_ATTR@@@Z.c)
 * Callees:
 *     ?GreProbeAndWriteToUntrustedVa@@YAXPEAX_KPEBX11@Z @ 0x14003DBE0 (-GreProbeAndWriteToUntrustedVa@@YAXPEAX_KPEBX11@Z.c)
 */

void __fastcall DC::RestoreAttributes(DC *this, struct _DC_ATTR *a2)
{
  char *v3; // rdi
  const void *v4; // r8

  v3 = (char *)this + 544;
  GreProbeAndWriteToUntrustedVa(a2, 0x90uLL, (char *)this + 544, 0x90uLL, 1uLL);
  v4 = v3 + 144;
  if ( !v3 )
    v4 = 0LL;
  GreProbeAndWriteToUntrustedVa((char *)a2 + 144, 0xD0uLL, v4, 0xD0uLL, 1uLL);
}
