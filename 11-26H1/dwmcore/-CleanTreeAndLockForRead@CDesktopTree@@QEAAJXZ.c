/*
 * XREFs of ?CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ @ 0x180092E60
 * Callers:
 *     ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x1801A91B4 (-s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AcquireShared@CTreeLock@@QEAAXXZ @ 0x180094404 (-AcquireShared@CTreeLock@@QEAAXXZ.c)
 *     ?RequestOffThreadCleanTree@CComposition@@QEAAJXZ @ 0x180094C30 (-RequestOffThreadCleanTree@CComposition@@QEAAJXZ.c)
 *     ?ReleaseShared@CTreeLock@@QEAAXXZ @ 0x180094C7C (-ReleaseShared@CTreeLock@@QEAAXXZ.c)
 *     ?wait@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA_NKH@Z @ 0x1801CA2FC (-wait@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@.c)
 */

__int64 __fastcall CDesktopTree::CleanTreeAndLockForRead(CDesktopTree *this)
{
  unsigned int v2; // edi
  __int64 i; // rcx
  __int64 v4; // rax
  int v6; // eax

  v2 = 0;
  for ( i = *((_QWORD *)this + 3); ; i = *((_QWORD *)this + 3) )
  {
    CTreeLock::AcquireShared((CTreeLock *)(i + 5696));
    v4 = *((_QWORD *)this + 9);
    if ( !v4 || !*(_BYTE *)(v4 + 96) )
      break;
    v6 = CComposition::RequestOffThreadCleanTree(*((CComposition **)this + 3));
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x4Bu, 0LL);
      CTreeLock::ReleaseShared((CTreeLock *)(*((_QWORD *)this + 3) + 5696LL));
      return v2;
    }
    CTreeLock::ReleaseShared((CTreeLock *)(*((_QWORD *)this + 3) + 5696LL));
    _wait___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEBA_NKH_Z(*((_QWORD *)this + 3) + 6400LL);
  }
  return v2;
}
