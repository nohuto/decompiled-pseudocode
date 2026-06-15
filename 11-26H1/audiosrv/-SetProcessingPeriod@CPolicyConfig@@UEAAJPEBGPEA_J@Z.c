/*
 * XREFs of ?SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z @ 0x18010CBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18002D1F8 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180068448 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ?SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z @ 0x1800866D8 (-SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z.c)
 */

__int64 __fastcall CPolicyConfig::SetProcessingPeriod(CPolicyConfig *this, const unsigned __int16 *a2, BYTE *a3)
{
  int EndpointCharacteristicsDescriptor; // ebx
  CEndpointCharacteristics *v6[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v6, 0, 24);
  EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                        a2,
                                        0,
                                        (struct EndpointCharacteristicsDescriptor *)v6);
  if ( EndpointCharacteristicsDescriptor < 0
    || (EndpointCharacteristicsDescriptor = CEndpointCharacteristics::SetProcessingPeriod(v6[0], a3),
        EndpointCharacteristicsDescriptor < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetProcessingPeriod", 1210, EndpointCharacteristicsDescriptor);
  }
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v6);
  return (unsigned int)EndpointCharacteristicsDescriptor;
}
