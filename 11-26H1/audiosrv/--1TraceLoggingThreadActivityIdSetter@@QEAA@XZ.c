/*
 * XREFs of ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x180077E98
 * Callers:
 *     _AudioServerInitialize_Internal_::_1_::dtor$0 @ 0x180163842 (_AudioServerInitialize_Internal_--_1_--dtor$0.c)
 *     _AudioEffectsWatcher::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180164A5F (_AudioEffectsWatcher--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _CSharedStreamGroupProxy::UpdateAuxiliaryStreamState_::_1_::dtor$2 @ 0x180165B99 (_CSharedStreamGroupProxy--UpdateAuxiliaryStreamState_--_1_--dtor$2.c)
 *     _AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_1_::dtor$4 @ 0x1801678C5 (_AudioEffectsWatcher--RebuildAndPublishFullEffectsListFromApos_--_1_--dtor$4.c)
 *     _CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup_::_1_::dtor$0 @ 0x180167B9D (_CAudioResourceManager--ConfigureAuxiliaryInputStreamForStreamGroup_--_1_--dtor$0.c)
 *     _CVADServer::GetAudioEffectsChangedWnfStateName_::_1_::dtor$0 @ 0x18016A90D (_CVADServer--GetAudioEffectsChangedWnfStateName_--_1_--dtor$0.c)
 *     _CVADServer::SetAudioEffect_::_1_::dtor$0 @ 0x18016A9C2 (_CVADServer--SetAudioEffect_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter(
        TraceLoggingThreadActivityIdSetter *this)
{
  EtwEventActivityIdControl(4LL, (char *)this + 16);
}
