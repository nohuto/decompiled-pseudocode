/*
 * XREFs of ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x140040720
 * Callers:
 *     GrepDeleteDC @ 0x14003ECB0 (GrepDeleteDC.c)
 *     ?SaveAttributesHelper@DCOBJ@@AEAAHXZ @ 0x140040510 (-SaveAttributesHelper@DCOBJ@@AEAAHXZ.c)
 *     ?SaveAttributes@DCOBJ@@AEAAHXZ @ 0x140040610 (-SaveAttributes@DCOBJ@@AEAAHXZ.c)
 *     ?vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1400407D4 (-vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?FreeDCAttributes@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z @ 0x140186EB4 (-FreeDCAttributes@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z.c)
 * Callees:
 *     ?GreProbeAndReadFromUntrustedVa@@YAXPEAX_KPEBX11@Z @ 0x140040790 (-GreProbeAndReadFromUntrustedVa@@YAXPEAX_KPEBX11@Z.c)
 */

__int64 __fastcall DC::SaveAttributes(DC *this, struct _DC_ATTR *a2)
{
  char *v2; // rcx
  void *v3; // rax

  v2 = (char *)this + 544;
  v3 = v2 + 144;
  if ( !v2 )
    v3 = 0LL;
  GreProbeAndReadFromUntrustedVa(v3, 0xD0uLL, (char *)a2 + 144, 0xD0uLL, 1uLL);
  return 1LL;
}
