/*
 * XREFs of ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x1400431B8
 * Callers:
 *     ?PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ @ 0x140042E94 (-PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ.c)
 * Callees:
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14004326C (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?PostParentToD0@FxChildList@@QEAAXXZ @ 0x14004345C (-PostParentToD0@FxChildList@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxPkgPnp::PowerPolicyPostParentToD0ToChildren(FxPkgPnp *this)
{
  FxEnumerationInfo *m_EnumInfo; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxWaitLockTransactionedList_vtbl *v4; // rax
  FxWaitLockTransactionedList_vtbl *v5; // rax
  __int64 v6; // r8
  _LIST_ENTRY *p_m_ListHead; // rbx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo )
  {
    m_Globals = this->m_Globals;
    v4 = m_EnumInfo->m_ChildListList.__vftable;
    v8 = 0;
    v4->AcquireLock(&m_EnumInfo->m_ChildListList, m_Globals, (unsigned __int8 *)&v8);
    v5 = m_EnumInfo->m_ChildListList.__vftable;
    LOBYTE(v6) = v8;
    ++m_EnumInfo->m_ChildListList.m_ListLockedRecursionCount;
    v5->ReleaseLock(&m_EnumInfo->m_ChildListList, m_Globals, v6);
    p_m_ListHead = 0LL;
LABEL_3:
    if ( !p_m_ListHead )
      p_m_ListHead = &this->m_EnumInfo->m_ChildListList.m_ListHead;
    while ( 1 )
    {
      p_m_ListHead = p_m_ListHead->Flink;
      if ( p_m_ListHead == &this->m_EnumInfo->m_ChildListList.m_ListHead )
        break;
      if ( LODWORD(p_m_ListHead[2].Flink) == 1 )
      {
        if ( !p_m_ListHead )
          break;
        FxChildList::PostParentToD0((FxChildList *)p_m_ListHead[2].Blink);
        goto LABEL_3;
      }
    }
    FxTransactionedList::UnlockFromEnum(&this->m_EnumInfo->m_ChildListList, this->m_Globals);
  }
}
