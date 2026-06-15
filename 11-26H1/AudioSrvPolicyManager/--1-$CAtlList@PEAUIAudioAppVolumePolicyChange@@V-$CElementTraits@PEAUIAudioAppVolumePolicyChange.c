/*
 * XREFs of ??1?$CAtlList@PEAUIAudioAppVolumePolicyChange@@V?$CElementTraits@PEAUIAudioAppVolumePolicyChange@@@ATL@@@ATL@@QEAA@XZ @ 0x18003774C
 * Callers:
 *     _CApplication::CApplication_::_1_::dtor$3 @ 0x18004C964 (_CApplication--CApplication_--_1_--dtor$3.c)
 *     _CApplication::CApplication_::_1_::dtor$4 @ 0x18004C97A (_CApplication--CApplication_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>(
        __int64 a1)
{
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(a1);
}
