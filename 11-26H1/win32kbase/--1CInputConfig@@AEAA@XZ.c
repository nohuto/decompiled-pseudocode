/*
 * XREFs of ??1CInputConfig@@AEAA@XZ @ 0x140211E78
 * Callers:
 *     UnInitializeInputComponents @ 0x1401B3AFC (UnInitializeInputComponents.c)
 * Callees:
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x14008DACC (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall CInputConfig::~CInputConfig(struct _LIST_ENTRY **this, int a2, int a3)
{
  __int64 UserSessionState; // rdi
  CInputConfig *v5; // rcx

  UserSessionState = W32GetUserSessionState((_DWORD)this, a2, a3);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(UserSessionState + 18688));
  while ( *this != (struct _LIST_ENTRY *)this )
    CInputConfig::_FreeInputSpace(v5, *this);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18688));
}
