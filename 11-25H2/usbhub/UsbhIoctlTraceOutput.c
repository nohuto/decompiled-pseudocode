/*
 * XREFs of UsbhIoctlTraceOutput @ 0x140020A70
 * Callers:
 *     UsbhIoctlGetHubCaps @ 0x14001EB4C (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x14001EF24 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x14001FB50 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1400202C0 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlCyclePort @ 0x14004D390 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetHubCapsEx @ 0x14004D6AC (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x14004D974 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x14004DC58 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x14004DEE8 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x14004E304 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x14004E5F8 (UsbhIoctlResetStuckHub.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003EAFC (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF__HEX_ @ 0x14004E8E8 (WPP_RECORDER_SF__HEX_.c)
 *     log_xstr @ 0x14004EA04 (log_xstr.c)
 */

__int64 __fastcall UsbhIoctlTraceOutput(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r9
  __int64 v4; // r8
  unsigned int *v5; // rax
  __int64 v6; // r15
  __int64 v7; // r11
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 result; // rax
  __int64 v13; // r8
  __int64 v14; // r10
  __int64 v15; // rcx
  int v16; // edi
  __int128 *v17; // rax
  __int64 v18; // r10
  __int64 v19; // rcx
  int v20; // edx
  __int128 v21; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v22[16]; // [rsp+50h] [rbp-38h] BYREF

  v2 = a2;
  v3 = 0xFFFFFFFFLL;
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v4 = *(_QWORD *)(a1 + 64);
      if ( v4 )
      {
        a2 = *(_QWORD *)(v4 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v4 + 880)) & *(_DWORD *)(v4 + 884));
        *(_DWORD *)a2 = 1415802729;
        *(_QWORD *)(a2 + 8) = 0LL;
        *(_QWORD *)(a2 + 16) = 0LL;
        *(_QWORD *)(a2 + 24) = v2;
      }
    }
  }
  v5 = *(unsigned int **)(v2 + 184);
  v6 = *(_QWORD *)(v2 + 24);
  v7 = v5[6];
  v8 = v5[2];
  v9 = v5[4];
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        a2 = *(_QWORD *)(v10 + 888)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        *(_DWORD *)a2 = 829714281;
        *(_QWORD *)(a2 + 8) = 0LL;
        *(_QWORD *)(a2 + 16) = v8;
        *(_QWORD *)(a2 + 24) = v9;
      }
    }
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        a2 = *(_QWORD *)(v11 + 888)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)a2 = 846491497;
        *(_QWORD *)(a2 + 8) = 0LL;
        *(_QWORD *)(a2 + 16) = v6;
        *(_QWORD *)(a2 + 24) = v7;
      }
    }
  }
  result = (unsigned int)UsbhLogMask;
  v13 = *(_QWORD *)(v2 + 56);
  v14 = *(int *)(v2 + 48);
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      a2 = *(_QWORD *)(a1 + 64);
      if ( a2 )
      {
        v3 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 880), 0xFFFFFFFF);
        result = 863268713LL;
        v15 = *(_QWORD *)(a2 + 888) + 32LL * ((unsigned int)(v3 - 1) & *(_DWORD *)(a2 + 884));
        *(_DWORD *)v15 = 863268713;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 16) = v14;
        *(_QWORD *)(v15 + 24) = v13;
      }
    }
  }
  v16 = *(_DWORD *)(v2 + 56);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = WPP_RECORDER_SF_d(
                 WPP_GLOBAL_Control->DeviceExtension,
                 0,
                 2,
                 10,
                 (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
                 v7);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_dd(
                   WPP_GLOBAL_Control->DeviceExtension,
                   a2,
                   2,
                   11,
                   (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
                   v9,
                   v8);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        result = WPP_RECORDER_SF_dd(
                   WPP_GLOBAL_Control->DeviceExtension,
                   a2,
                   2,
                   12,
                   (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
                   *(_DWORD *)(v2 + 48),
                   v16);
    }
  }
  if ( (_BYTE)v16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v17 = (__int128 *)log_xstr(v22, (unsigned __int8)v16, v6, v3);
        v19 = *(_QWORD *)(v18 + 64);
        v21 = *v17;
        return WPP_RECORDER_SF__HEX_(
                 v19,
                 v20,
                 2,
                 14,
                 (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
                 (__int64)&v21);
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             0,
             2,
             13,
             (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  }
  return result;
}
