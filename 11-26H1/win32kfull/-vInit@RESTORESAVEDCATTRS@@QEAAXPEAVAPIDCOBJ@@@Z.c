/*
 * XREFs of ?vInit@RESTORESAVEDCATTRS@@QEAAXPEAVAPIDCOBJ@@@Z @ 0x140296918
 * Callers:
 *     ?GrepStartDoc@@YAHAEAVAPIDCOBJ@@PEAU_DOCINFOW@@PEAHH@Z @ 0x140310CA8 (-GrepStartDoc@@YAHAEAVAPIDCOBJ@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     ?bEndDocInternal@@YAHAEAVAPIDCOBJ@@K@Z @ 0x140310FE0 (-bEndDocInternal@@YAHAEAVAPIDCOBJ@@K@Z.c)
 *     NtGdiEndPage @ 0x140312400 (NtGdiEndPage.c)
 *     NtGdiStartPage @ 0x140312610 (NtGdiStartPage.c)
 * Callees:
 *     ?RestoreAttributesHelper@DCOBJ@@AEAAXXZ @ 0x1401594A0 (-RestoreAttributesHelper@DCOBJ@@AEAAXXZ.c)
 */

void __fastcall RESTORESAVEDCATTRS::vInit(RESTORESAVEDCATTRS *this, struct APIDCOBJ *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 44LL) & 2) != 0 )
    {
      DCOBJ::RestoreAttributesHelper(a2);
      *(_DWORD *)(*(_QWORD *)a2 + 44LL) &= ~2u;
    }
  }
}
