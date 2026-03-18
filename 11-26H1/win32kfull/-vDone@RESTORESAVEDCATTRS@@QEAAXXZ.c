/*
 * XREFs of ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1402965CC
 * Callers:
 *     ?GrepStartDoc@@YAHAEAVAPIDCOBJ@@PEAU_DOCINFOW@@PEAHH@Z @ 0x140310CA8 (-GrepStartDoc@@YAHAEAVAPIDCOBJ@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     ?bEndDocInternal@@YAHAEAVAPIDCOBJ@@K@Z @ 0x140310FE0 (-bEndDocInternal@@YAHAEAVAPIDCOBJ@@K@Z.c)
 *     NtGdiEndPage @ 0x140312400 (NtGdiEndPage.c)
 *     NtGdiStartPage @ 0x140312610 (NtGdiStartPage.c)
 * Callees:
 *     ?vSaveAttributesAlways@DCOBJ@@AEAAXXZ @ 0x140311EA0 (-vSaveAttributesAlways@DCOBJ@@AEAAXXZ.c)
 */

void __fastcall RESTORESAVEDCATTRS::vDone(DCOBJ **this)
{
  DCOBJ *v2; // rcx

  v2 = *this;
  if ( v2 )
    DCOBJ::vSaveAttributesAlways(v2);
  *this = 0LL;
}
