/*
 * XREFs of ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800CDCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18002D1F8 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002E8B8 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x18002FAE0 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x18002FC24 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180068448 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     WPP_SF_ @ 0x1800CC908 (WPP_SF_.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::CompleteConstruction(CPerEndpointVolumeAudioSession *this)
{
  const unsigned __int16 *Buffer; // rax
  int EndpointCharacteristicsDescriptor; // ebx
  struct _GUID v5; // [rsp+20h] [rbp-38h] BYREF
  EffectPack *v6[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]
  LPVOID pv; // [rsp+60h] [rbp+8h] BYREF

  pv = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x24u, (__int64)&WPP_ee85f21a7da73824226bb42893b0f656_Traceguids);
  }
  *(_OWORD *)v6 = 0LL;
  v7 = 0LL;
  Buffer = CAudioEndpointId::GetBuffer((CPerEndpointVolumeAudioSession *)((char *)this + 584));
  EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                        Buffer,
                                        0,
                                        (struct EndpointCharacteristicsDescriptor *)v6);
  if ( EndpointCharacteristicsDescriptor < 0
    || (v5 = GUID_00000000_0000_0000_0000_000000000000,
        EndpointCharacteristicsDescriptor = EffectPack::GetMixFormat(
                                              v6[1],
                                              eHostProcessConnector,
                                              &v5,
                                              (struct tWAVEFORMATEX **)&pv),
        EndpointCharacteristicsDescriptor < 0)
    || (EndpointCharacteristicsDescriptor = CPerEndpointVolumeAudioSession::GetVolumeStrip(this, 0LL),
        EndpointCharacteristicsDescriptor < 0) )
  {
    AudSrvTraceLoggingErrorHelper(
      "CPerEndpointVolumeAudioSession::CompleteConstruction",
      1743,
      EndpointCharacteristicsDescriptor);
  }
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v6);
  CoTaskMemFree(pv);
  return (unsigned int)EndpointCharacteristicsDescriptor;
}
