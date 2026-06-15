/*
 * XREFs of WPP_SF_Sg @ 0x1800CFAD0
 * Callers:
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z @ 0x180040430 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x180040640 (-SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?GetVolume@CAudioSession@@UEAAJPEAM@Z @ 0x180062F80 (-GetVolume@CAudioSession@@UEAAJPEAM@Z.c)
 *     _lambda_bcf9c58b74ebdaae84df57cea6a1304a_::operator() @ 0x1800CD640 (_lambda_bcf9c58b74ebdaae84df57cea6a1304a_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_Sg(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_ee85f21a7da73824226bb42893b0f656_Traceguids, a2, a4);
}
