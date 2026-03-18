/*
 * XREFs of ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x14026EA58
 * Callers:
 *     ?bEndDocInternal@@YAHAEAVXDCOBJ@@K@Z @ 0x14026A7D8 (-bEndDocInternal@@YAHAEAVXDCOBJ@@K@Z.c)
 *     ?GrepStartDoc@@YAHAEAVXDCOBJ@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z @ 0x140327ABC (-GrepStartDoc@@YAHAEAVXDCOBJ@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z.c)
 *     NtGdiEndPage @ 0x140328F50 (NtGdiEndPage.c)
 * Callees:
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1403289E8 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall RESTORESAVEDCATTRS::vDone(XDCOBJ **this)
{
  XDCOBJ *v2; // rcx

  v2 = *this;
  if ( v2 )
    XDCOBJ::vSaveAttributesAlways(v2);
  *this = 0LL;
}
