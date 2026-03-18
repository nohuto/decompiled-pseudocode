/*
 * XREFs of NtUserQuerySendMessage @ 0x14029BCD0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     Feature_Servicing_NtUserQuerySendMessageTelemetry__private_IsEnabledDeviceUsageNoInline @ 0x1402944A4 (Feature_Servicing_NtUserQuerySendMessageTelemetry__private_IsEnabledDeviceUsageNoInline.c)
 *     _QuerySendMessage @ 0x1402B31DC (_QuerySendMessage.c)
 */

__int64 __fastcall NtUserQuerySendMessage(_OWORD *a1)
{
  ULONG64 v2; // rcx
  int v3; // ebx
  __int128 v5; // [rsp+28h] [rbp-40h] BYREF
  __int128 v6; // [rsp+38h] [rbp-30h]
  __int128 v7; // [rsp+48h] [rbp-20h]
  ULONG64 v8; // [rsp+78h] [rbp+10h] BYREF

  if ( (unsigned int)Feature_Servicing_NtUserQuerySendMessageTelemetry__private_IsEnabledDeviceUsageNoInline() )
  {
    LODWORD(v8) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 9785);
  }
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v8, 1LL);
  v2 = v8;
  if ( *(_QWORD *)(v8 + 552) )
  {
    v3 = QuerySendMessage(v8, &v5);
    if ( v3 && a1 )
    {
      *((_QWORD *)&v6 + 1) &= -(__int64)(*((_QWORD *)&v6 + 1) < (unsigned __int64)MmSystemRangeStart);
      HIDWORD(v5) = 0;
      HIDWORD(v7) = 0;
      v2 = MmUserProbeAddress;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (_OWORD *)MmUserProbeAddress;
      *a1 = v5;
      a1[1] = v6;
      a1[2] = v7;
    }
  }
  else
  {
    v3 = 0;
  }
  UserSessionSwitchLeaveCrit(v2);
  return v3;
}
