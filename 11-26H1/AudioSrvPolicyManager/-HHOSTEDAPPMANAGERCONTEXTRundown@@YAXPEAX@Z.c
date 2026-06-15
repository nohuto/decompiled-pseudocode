/*
 * XREFs of ?HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z @ 0x18002CBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x180041108 (--_GCPickerHostContext@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800411F0 (-RemoveAt@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@AT.c)
 *     ?RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ @ 0x180041254 (-RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall HHOSTEDAPPMANAGERCONTEXTRundown(CPickerHostContext *a1)
{
  __int64 i; // rdx
  unsigned int v3; // edx

  EnterCriticalSection(&PickerHostContextManager::s_csPickerHostContextList);
  for ( i = PickerHostContextManager::s_PickerHostContextList; i; i = *(_QWORD *)i )
  {
    if ( *(CPickerHostContext **)(i + 16) == a1 )
    {
      ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAt();
      CPickerHostContext::RevokeInteractivityFromApps(a1);
      if ( a1 )
        CPickerHostContext::`scalar deleting destructor'(a1, v3);
      break;
    }
  }
  LeaveCriticalSection(&PickerHostContextManager::s_csPickerHostContextList);
}
