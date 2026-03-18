/*
 * XREFs of HUBFDO_IoctlValidateParameters @ 0x14007FE00
 * Callers:
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x14000E4F0 (HUBFDO_IoctlGetNodeConnectionInfo.c)
 *     HUBFDO_IoctlCyclePort @ 0x14007CB88 (HUBFDO_IoctlCyclePort.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x14007D044 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBFDO_IoctlGetHubCaps @ 0x14007D60C (HUBFDO_IoctlGetHubCaps.c)
 *     HUBFDO_IoctlGetHubCapsEx @ 0x14007D7E4 (HUBFDO_IoctlGetHubCapsEx.c)
 *     HUBFDO_IoctlGetHubInformationEx @ 0x14007DA20 (HUBFDO_IoctlGetHubInformationEx.c)
 *     HUBFDO_IoctlGetNodeConnectionAttributes @ 0x14007DCD4 (HUBFDO_IoctlGetNodeConnectionAttributes.c)
 *     HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x14007DF08 (HUBFDO_IoctlGetNodeConnectionDriverKeyName.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x14007E274 (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x14007E6C0 (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetNodeConnectionSuperSpeedPlusInformation @ 0x14007EAC8 (HUBFDO_IoctlGetNodeConnectionSuperSpeedPlusInformation.c)
 *     HUBFDO_IoctlGetNodeInformation @ 0x14007EFC0 (HUBFDO_IoctlGetNodeInformation.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x14007F1A8 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     HUBFDO_IoctlGetPortStatus @ 0x14007F570 (HUBFDO_IoctlGetPortStatus.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall HUBFDO_IoctlValidateParameters(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _DWORD *a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  unsigned int v6; // r10d
  int v7; // r9d

  v6 = 0;
  if ( (*(_DWORD *)(a1 + 40) & 0x40) == 0 )
    return (unsigned int)-1073741823;
  if ( a3 < a2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 58;
LABEL_15:
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2536), a2, 3, v7, (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids);
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741811;
  }
  if ( a6 >= a5 )
  {
    if ( a2 >= 4 )
    {
      LODWORD(a2) = *a4;
      if ( !*a4 || (unsigned int)a2 > *(unsigned __int16 *)(a1 + 48) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v7 = 60;
          goto LABEL_15;
        }
        return (unsigned int)-1073741811;
      }
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2536), a2, 3, 59, (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids);
    }
    return (unsigned int)-1073741789;
  }
  return v6;
}
