/*
 * XREFs of ??1?$ListProxyCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UTouchInjectionContact@Input@Internal@UI@Windows@@@Bamo@Microsoft@@UEAA@XZ @ 0x1801A0D54
 * Callers:
 *     ??_E?$ListProxy@UTouchInjectionContact@Input@Internal@UI@Windows@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAPEAXI@Z @ 0x1801A0DB0 (--_E-$ListProxy@UTouchInjectionContact@Input@Internal@UI@Windows@@@ISMBamos_AutoBamos@Lib@Bamo@M.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxyCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy,Windows::UI::Internal::Input::TouchInjectionContact>::~ListProxyCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy,Windows::UI::Internal::Input::TouchInjectionContact>(
        __int64 *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[6];
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (struct std::nothrow_t *)((a1[8] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL));
    a1[6] = 0LL;
    a1[7] = 0LL;
    a1[8] = 0LL;
  }
  return wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(a1 + 4);
}
