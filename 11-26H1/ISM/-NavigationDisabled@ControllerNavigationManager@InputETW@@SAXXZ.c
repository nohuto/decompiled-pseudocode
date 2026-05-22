/*
 * XREFs of ?NavigationDisabled@ControllerNavigationManager@InputETW@@SAXXZ @ 0x180064C54
 * Callers:
 *     ?DisableNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x180064BF0 (-DisableNavigation@ControllerNavigationManager@@AEAAXXZ.c)
 * Callees:
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800114D8 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x1800137D0 (-Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void InputETW::ControllerNavigationManager::NavigationDisabled(void)
{
  const struct _tlgProvider_t *v0; // rax

  if ( InputETW::IsEnabled() )
  {
    v0 = InputETW::Provider();
    if ( *(_DWORD *)v0 > 5u && (*((_BYTE *)v0 + 16) & 1) != 0 && (*((_QWORD *)v0 + 3) & 1LL) == *((_QWORD *)v0 + 3) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v0,
        &unk_180226768,
        0LL,
        0LL);
  }
}
