/*
 * XREFs of ?zzzConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1401F8AC8
 * Callers:
 *     NtConfigureInputSpace @ 0x1401B9DA0 (NtConfigureInputSpace.c)
 * Callees:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1401F7CFC (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1401F84D4 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1401F88D8 (-_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 */

__int64 __fastcall CInputConfig::zzzConfigureInputSpace(CInputConfig *this, struct CInputSpace *a2)
{
  __int64 UserSessionState; // rbx
  CInputConfig *v5; // rcx
  int v6; // eax
  struct _ERESOURCE *v7; // rcx
  unsigned int v8; // esi
  __int64 v10; // rdx

  UserSessionState = W32GetUserSessionState(this, a2);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(UserSessionState + 18640));
  if ( *((_BYTE *)this + 1504) )
  {
    *((_BYTE *)this + 1504) = 0;
    while ( *(CInputConfig **)this != this )
      CInputConfig::_FreeInputSpace(v5, *(struct _LIST_ENTRY **)this);
  }
  *((_BYTE *)this + 1505) = 1;
  v6 = CInputConfig::_ConfigureInputSpace(this, a2);
  v7 = *(struct _ERESOURCE **)(UserSessionState + 18640);
  v8 = v6;
  if ( v6 >= 0 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v7);
    CInputConfig::_zzzNotifyExternalComponents(this, v10);
    return 0LL;
  }
  else
  {
    ExReleaseResourceAndLeaveCriticalRegion(v7);
    return v8;
  }
}
