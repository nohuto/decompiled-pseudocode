/*
 * XREFs of ?CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@_K@Z @ 0x14009AE2C
 * Callers:
 *     ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x140022FC0 (-PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ.c)
 *     ?PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x14007A928 (-PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?NotifyPrePrepareHardware@FxCompanionTarget@@QEAAJPEAUWDFCMRESLIST__@@0@Z @ 0x14008F9AC (-NotifyPrePrepareHardware@FxCompanionTarget@@QEAAJPEAUWDFCMRESLIST__@@0@Z.c)
 * Callees:
 *     <none>
 */

_CM_RESOURCE_LIST *__fastcall FxCmResList::CreateWdmList(FxCmResList *this, unsigned __int64 PoolFlags)
{
  FxCollectionInternal *v2; // rbx
  _DWORD *v3; // r8
  unsigned int m_Count; // eax
  _DWORD *Pool2; // rax
  _LIST_ENTRY *v7; // rax
  _LIST_ENTRY *i; // rdx
  _LIST_ENTRY *v9; // rcx
  _LIST_ENTRY **p_Blink; // rdx

  v2 = &this->FxCollectionInternal;
  v3 = 0LL;
  m_Count = this->m_Count;
  if ( m_Count )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(PoolFlags, 20 * (m_Count + 1), this->m_Globals->Tag);
    v3 = Pool2;
    if ( Pool2 )
    {
      Pool2[3] = 65537;
      *Pool2 = 1;
      Pool2[4] = v2->m_Count;
      v7 = (_LIST_ENTRY *)(Pool2 + 5);
      for ( i = this->m_ListHead.Flink; ; i = p_Blink[1] )
      {
        p_Blink = &i[-1].Blink;
        if ( p_Blink == (_LIST_ENTRY **)v2 )
          break;
        v9 = *p_Blink;
        *v7 = *(_LIST_ENTRY *)((char *)*p_Blink + 104);
        LODWORD(v7[1].Flink) = v9[7].Blink;
        v7 = (_LIST_ENTRY *)((char *)v7 + 20);
      }
    }
  }
  return (_CM_RESOURCE_LIST *)v3;
}
