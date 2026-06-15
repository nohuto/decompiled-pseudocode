/*
 * XREFs of ??1?$CAutoPtr@USaDeviceParams@@@ATL@@QEAA@XZ @ 0x1800811B8
 * Callers:
 *     _CloneSaDeviceParams_::_1_::dtor$0 @ 0x18016300C (_CloneSaDeviceParams_--_1_--dtor$0.c)
 *     _DeriveSaDeviceParametersForStream_::_1_::dtor$0 @ 0x1801643DC (_DeriveSaDeviceParametersForStream_--_1_--dtor$0.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$7 @ 0x180164EBD (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$7.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$1 @ 0x180165F57 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$1.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$2 @ 0x180167FCA (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$2.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$1 @ 0x180168195 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$1.c)
 * Callees:
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x180014990 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 */

SaDeviceParams *__fastcall ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>(SaDeviceParams **a1)
{
  SaDeviceParams *v2; // rcx
  SaDeviceParams *result; // rax

  v2 = *a1;
  if ( v2 )
    result = SaDeviceParams::`scalar deleting destructor'(v2);
  *a1 = 0LL;
  return result;
}
