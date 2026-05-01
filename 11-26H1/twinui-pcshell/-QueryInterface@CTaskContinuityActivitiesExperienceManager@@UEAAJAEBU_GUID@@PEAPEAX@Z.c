/*
 * XREFs of ?QueryInterface@CTaskContinuityActivitiesExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18037AD60
 * Callers:
 *     ?QueryInterface@CTaskContinuityActivitiesExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18037AD70 (-QueryInterface@CTaskContinuityActivitiesExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskContinuityActivitiesExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIActiveZBandNotificationForMonitor@@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18037AD80 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskConti.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskContinuityActivitiesExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIActiveZBandNotificationForMonitor@@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18037AD90 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18037AD90.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CTaskContinuityActivitiesExperienceManager::QueryInterface(
        __int64 this,
        const struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>>(
           this,
           a2,
           a3);
}
