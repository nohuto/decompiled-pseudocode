/*
 * XREFs of ??1?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18005228C
 * Callers:
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$5 @ 0x1801D43D0 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$5.c)
 *     _ContextualProcessorBuffer::AddProcessor_::_1_::dtor$0 @ 0x1801D4C62 (_ContextualProcessorBuffer--AddProcessor_--_1_--dtor$0.c)
 *     _ContextualProcessorBuffer::TryAddProcessorAndContact_::_1_::dtor$0 @ 0x1801D4D60 (_ContextualProcessorBuffer--TryAddProcessorAndContact_--_1_--dtor$0.c)
 *     _InputSite::AttachObject_BamoWindowsMessageDeliveryProxy__::_1_::dtor$2 @ 0x1801D63BF (_InputSite--AttachObject_BamoWindowsMessageDeliveryProxy__--_1_--dtor$2.c)
 *     _InputSite::AttachObject_BamoEdgyNotificationSourceClientProxy__::_1_::dtor$2 @ 0x1801D7796 (_InputSite--AttachObject_BamoEdgyNotificationSourceClientProxy__--_1_--dtor$2.c)
 *     _MPCConstantManagerClient::CreateHRPrincipal_::_1_::dtor$0 @ 0x1801DBE5E (_MPCConstantManagerClient--CreateHRPrincipal_--_1_--dtor$0.c)
 *     _MPCConstantManagerClient::CreatePVPrincipal_::_1_::dtor$0 @ 0x1801DBEC4 (_MPCConstantManagerClient--CreatePVPrincipal_--_1_--dtor$0.c)
 *     _MPCConstantManagerClient::CreateStringVectorPrincipal_::_1_::dtor$0 @ 0x1801DBF2A (_MPCConstantManagerClient--CreateStringVectorPrincipal_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::AsyncDeferral<Windows::Internal::CNoResult>::~AsyncDeferral<Windows::Internal::CNoResult>(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    *(_QWORD *)(result + 8) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
