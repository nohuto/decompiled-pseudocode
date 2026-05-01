/*
 * XREFs of ??R?$default_delete@VSmartCookie@@@std@@QEBAXPEAVSmartCookie@@@Z @ 0x1806C213C
 * Callers:
 *     ?Register@ApplicationViewEventRegistration@details@AppViewEventHelpers@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x180220DB0 (-Register@ApplicationViewEventRegistration@details@AppViewEventHelpers@@UEAAJPEAUIApplicationVie.c)
 *     ??1?$unique_ptr@VSmartCookie@@U?$default_delete@VSmartCookie@@@std@@@std@@QEAA@XZ @ 0x1802C69A0 (--1-$unique_ptr@VSmartCookie@@U-$default_delete@VSmartCookie@@@std@@@std@@QEAA@XZ.c)
 *     ??$?4U?$default_delete@VSmartCookie@@@std@@$0A@@?$unique_ptr@VSmartCookie@@U?$default_delete@VSmartCookie@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1806C1C9C (--$-4U-$default_delete@VSmartCookie@@@std@@$0A@@-$unique_ptr@VSmartCookie@@U-$default_delete@VSm.c)
 * Callees:
 *     ??1SmartCookie@@QEAA@XZ @ 0x1800DB40C (--1SmartCookie@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::default_delete<SmartCookie>::operator()(__int64 a1, SmartCookie *a2)
{
  if ( a2 )
  {
    SmartCookie::~SmartCookie(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x80);
  }
}
