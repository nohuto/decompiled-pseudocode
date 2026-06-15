/*
 * XREFs of ?GetInternalModePriorityList@@YAPEBUModeList@@W4SYSTEM_AUDIO_STREAM_TYPE@@KPEAVCEndpointCharacteristics@@H@Z @ 0x1801120FC
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18002D270 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 * Callees:
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x18003D7C0 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 */

__int64 __fastcall GetInternalModePriorityList(int a1, int a2, struct IPropertyStore **a3, int a4)
{
  int VirtualSurroundEffectMode; // eax
  unsigned __int64 v5; // rcx
  bool v6; // cf

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      if ( a2 == 18 )
      {
        v5 = (unsigned __int64)&unk_18017BC90;
      }
      else
      {
        if ( a2 != 3 )
          return 0LL;
        v5 = (unsigned __int64)&unk_18017BC80;
      }
      v6 = a4 != 0;
      return v5 & -(__int64)v6;
    }
  }
  else if ( dword_18018CD90[a2] )
  {
    VirtualSurroundEffectMode = CEndpointCharacteristics::GetVirtualSurroundEffectMode(a3);
    v5 = (unsigned __int64)&unk_18017BCA0;
    v6 = VirtualSurroundEffectMode != 0;
    return v5 & -(__int64)v6;
  }
  return 0LL;
}
