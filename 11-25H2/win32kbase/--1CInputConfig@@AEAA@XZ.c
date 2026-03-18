/*
 * XREFs of ??1CInputConfig@@AEAA@XZ @ 0x1401F7468
 * Callers:
 *     ?UnInitialize@CInputConfig@@SAXXZ @ 0x1400CF0EC (-UnInitialize@CInputConfig@@SAXXZ.c)
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400BB1E0 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ??0CEResourceLockExclusive@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F7410 (--0CEResourceLockExclusive@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1401F84D4 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall CInputConfig::~CInputConfig(struct _LIST_ENTRY **this, __int64 a2)
{
  __int64 UserSessionState; // rax
  CInputConfig *v4; // rcx
  tagDomLock *v5; // [rsp+30h] [rbp+8h] BYREF

  UserSessionState = W32GetUserSessionState(this, a2);
  CEResourceLockExclusive::CEResourceLockExclusive(
    (CEResourceLockExclusive *)&v5,
    (PERESOURCE *)(UserSessionState + 18640));
  while ( *this != (struct _LIST_ENTRY *)this )
    CInputConfig::_FreeInputSpace(v4, *this);
  tagDomLock::UnLockExclusive((PERESOURCE *)v5);
}
