/*
 * XREFs of Feature_Servicing_WinLogonRpcRaceConditionBSOD__private_IsEnabledDeviceUsageNoInline @ 0x1401B6B5C
 * Callers:
 *     CleanupLogonProcess @ 0x14016BCA0 (CleanupLogonProcess.c)
 *     PostWinlogonMessage @ 0x14016BE20 (PostWinlogonMessage.c)
 *     _RegisterLogonProcess @ 0x14016BF30 (_RegisterLogonProcess.c)
 *     xxxSendWinlogonPowerMessage @ 0x14016C260 (xxxSendWinlogonPowerMessage.c)
 * Callees:
 *     Feature_Servicing_WinLogonRpcRaceConditionBSOD__private_IsEnabledFallback @ 0x1401B6B94 (Feature_Servicing_WinLogonRpcRaceConditionBSOD__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_WinLogonRpcRaceConditionBSOD__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_WinLogonRpcRaceConditionBSOD__private_featureState & 0x10) != 0 )
    return Feature_Servicing_WinLogonRpcRaceConditionBSOD__private_featureState & 1;
  else
    return Feature_Servicing_WinLogonRpcRaceConditionBSOD__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_WinLogonRpcRaceConditionBSOD__private_featureState,
             3LL);
}
