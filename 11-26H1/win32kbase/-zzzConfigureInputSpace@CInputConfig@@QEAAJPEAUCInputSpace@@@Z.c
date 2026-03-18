/*
 * XREFs of ?zzzConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x140212358
 * Callers:
 *     NtConfigureInputSpace @ 0x1401E04B0 (NtConfigureInputSpace.c)
 * Callees:
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x14008DACC (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x14008DB84 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x14008E334 (-_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 */

__int64 __fastcall CInputConfig::zzzConfigureInputSpace(CInputConfig *this, struct CInputSpace *a2, int a3)
{
  __int64 UserSessionState; // rsi
  CInputConfig *v6; // rcx
  int v7; // eax
  struct _ERESOURCE *v8; // rcx
  unsigned int v9; // edi

  UserSessionState = W32GetUserSessionState((_DWORD)this, (_DWORD)a2, a3);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(UserSessionState + 18688));
  if ( *((_BYTE *)this + 1504) )
  {
    *((_BYTE *)this + 1504) = 0;
    while ( *(CInputConfig **)this != this )
      CInputConfig::_FreeInputSpace(v6, *(struct _LIST_ENTRY **)this);
  }
  *((_BYTE *)this + 1505) = 1;
  v7 = CInputConfig::_ConfigureInputSpace(this, a2);
  v8 = *(struct _ERESOURCE **)(UserSessionState + 18688);
  v9 = v7;
  if ( v7 >= 0 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v8);
    CInputConfig::_zzzNotifyExternalComponents(this);
    return 0LL;
  }
  else
  {
    ExReleaseResourceAndLeaveCriticalRegion(v8);
    return v9;
  }
}
