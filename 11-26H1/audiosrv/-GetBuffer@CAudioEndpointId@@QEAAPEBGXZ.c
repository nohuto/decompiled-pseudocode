/*
 * XREFs of ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x18002FAE0
 * Callers:
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x18002F810 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x18002FC24 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800CDCA0 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 * Callees:
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x18002FBF8 (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 */

const unsigned __int16 *__fastcall CAudioEndpointId::GetBuffer(CAudioEndpointId *this)
{
  const unsigned __int16 *result; // rax
  ATL::CAtlException *v2; // [rsp+20h] [rbp-18h] BYREF

  try
  {
    result = (const unsigned __int16 *)ATL::CSimpleStringT<unsigned short,0>::GetBuffer();
  }
  catch ( ATL::CAtlException *v2 )
  {
    if ( *(_DWORD *)v2 == -1073741571 )
      _o__resetstkoflw();
    return 0LL;
  }
  return result;
}
