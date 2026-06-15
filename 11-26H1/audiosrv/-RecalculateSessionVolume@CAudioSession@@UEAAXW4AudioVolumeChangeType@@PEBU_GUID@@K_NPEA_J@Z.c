/*
 * XREFs of ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180065F70
 * Callers:
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x180037310 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     _lambda_bcf9c58b74ebdaae84df57cea6a1304a_::_lambda_bcf9c58b74ebdaae84df57cea6a1304a_ @ 0x1800C3E08 (_lambda_bcf9c58b74ebdaae84df57cea6a1304a_--_lambda_bcf9c58b74ebdaae84df57cea6a1304a_.c)
 *     _lambda_bcf9c58b74ebdaae84df57cea6a1304a_::operator() @ 0x1800CD640 (_lambda_bcf9c58b74ebdaae84df57cea6a1304a_--operator().c)
 */

__int64 __fastcall CAudioSession::RecalculateSessionVolume(int a1, int a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+78h] [rbp+10h] BYREF
  __int64 v9; // [rsp+80h] [rbp+18h] BYREF
  int v10; // [rsp+88h] [rbp+20h] BYREF

  v10 = a4;
  v9 = a3;
  v8 = a2;
  v5 = lambda_bcf9c58b74ebdaae84df57cea6a1304a_::_lambda_bcf9c58b74ebdaae84df57cea6a1304a_(
         (unsigned int)&v7,
         a1 - 8,
         (unsigned int)&v9,
         (unsigned int)&a5,
         (__int64)&v8,
         (__int64)&v10);
  return lambda_bcf9c58b74ebdaae84df57cea6a1304a_::operator()(v5);
}
