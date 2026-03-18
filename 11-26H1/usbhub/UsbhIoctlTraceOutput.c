/*
 * XREFs of UsbhIoctlTraceOutput @ 0x140025F40
 * Callers:
 *     UsbhIoctlGetHubCaps @ 0x1400246CC (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x140024AB8 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x140025250 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1400258B0 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlCyclePort @ 0x14004CF64 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetHubCapsEx @ 0x14004D280 (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x14004D550 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x14004D834 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x14004DAC4 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x14004DEE0 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x14004E1D8 (UsbhIoctlResetStuckHub.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003E5C0 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF__HEX_ @ 0x14004E4C8 (WPP_RECORDER_SF__HEX_.c)
 *     log_xstr @ 0x14004E5EC (log_xstr.c)
 */

__int64 __fastcall UsbhIoctlTraceOutput(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r9
  __int64 v4; // r8
  unsigned int *v5; // rax
  __int64 v6; // r14
  __int64 v7; // r11
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 result; // rax
  __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // rcx
  int v18; // edi
  __int128 *v19; // rax
  __int64 v20; // r10
  __int64 v21; // rcx
  int v22; // edx
  __int128 v23; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v24[16]; // [rsp+50h] [rbp-38h] BYREF

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
        a2 = 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        v11 = a2 + *(_QWORD *)(v10 + 888);
        *(_DWORD *)v11 = 829714281;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = v8;
        *(_QWORD *)(v11 + 24) = v9;
      }
    }
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        a2 = 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        v13 = a2 + *(_QWORD *)(v12 + 888);
        *(_DWORD *)v13 = 846491497;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = v6;
        *(_QWORD *)(v13 + 24) = v7;
      }
    }
  }
  result = (unsigned int)UsbhLogMask;
  v15 = *(_QWORD *)(v2 + 56);
  v16 = *(int *)(v2 + 48);
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      a2 = *(_QWORD *)(a1 + 64);
      if ( a2 )
      {
        v3 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 880), 0xFFFFFFFF);
        result = 863268713LL;
        v17 = *(_QWORD *)(a2 + 888) + 32LL * ((unsigned int)(v3 - 1) & *(_DWORD *)(a2 + 884));
        *(_DWORD *)v17 = 863268713;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 16) = v16;
        *(_QWORD *)(v17 + 24) = v15;
      }
    }
  }
  v18 = *(_DWORD *)(v2 + 56);
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
                   v18);
    }
  }
  if ( (_BYTE)v18 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v19 = (__int128 *)log_xstr(v24, (unsigned __int8)v18, v6, v3);
        v21 = *(_QWORD *)(v20 + 64);
        v23 = *v19;
        return WPP_RECORDER_SF__HEX_(
                 v21,
                 v22,
                 2,
                 14,
                 (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
                 (__int64)&v23);
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
