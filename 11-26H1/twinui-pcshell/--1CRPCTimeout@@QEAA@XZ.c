/*
 * XREFs of ??1CRPCTimeout@@QEAA@XZ @ 0x180190B78
 * Callers:
 *     _CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition_::_1_::dtor$3 @ 0x1806D8728 (_CApplicationManager--_HandleViewCreation_SynchronizeInitialPosition_--_1_--dtor$3.c)
 *     _CImmersiveApp::QueryService_::_1_::dtor$0 @ 0x1806E119C (_CImmersiveApp--QueryService_--_1_--dtor$0.c)
 *     __lambda_8b16b784198cc2ffe8f5be0ce118e36a_::operator()_::_1_::dtor$6 @ 0x1806EB315 (__lambda_8b16b784198cc2ffe8f5be0ce118e36a_--operator()_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CRPCTimeout::~CRPCTimeout(CRPCTimeout *this)
{
  CBaseRPCTimeout::Disarm(this);
}
