/*
 * XREFs of ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x140296EA8
 * Callers:
 *     ?GrepStartDoc@@YAHAEAVAPIDCOBJ@@PEAU_DOCINFOW@@PEAHH@Z @ 0x140310CA8 (-GrepStartDoc@@YAHAEAVAPIDCOBJ@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     ?bEndDocInternal@@YAHAEAVAPIDCOBJ@@K@Z @ 0x140310FE0 (-bEndDocInternal@@YAHAEAVAPIDCOBJ@@K@Z.c)
 *     NtGdiEndPage @ 0x140312400 (NtGdiEndPage.c)
 *     NtGdiStartPage @ 0x140312610 (NtGdiStartPage.c)
 * Callees:
 *     ?vSaveAttributesAlways@DCOBJ@@AEAAXXZ @ 0x140311EA0 (-vSaveAttributesAlways@DCOBJ@@AEAAXXZ.c)
 */

void __fastcall RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS(DCOBJ **this)
{
  DCOBJ *v1; // rcx

  v1 = *this;
  if ( v1 )
    DCOBJ::vSaveAttributesAlways(v1);
}
