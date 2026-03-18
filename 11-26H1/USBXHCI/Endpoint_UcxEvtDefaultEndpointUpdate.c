/*
 * XREFs of Endpoint_UcxEvtDefaultEndpointUpdate @ 0x14003A690
 * Callers:
 *     <none>
 * Callees:
 *     XilEndpoint_ReleaseBuffer @ 0x140001B5C (XilEndpoint_ReleaseBuffer.c)
 *     WPP_RECORDER_SF_ddd @ 0x140001BD4 (WPP_RECORDER_SF_ddd.c)
 *     XilEndpoint_AcquireBuffer @ 0x140004BCC (XilEndpoint_AcquireBuffer.c)
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     Command_SendCommand @ 0x14000D4AC (Command_SendCommand.c)
 *     Endpoint_InitializeTransferRing @ 0x14001E72C (Endpoint_InitializeTransferRing.c)
 *     Endpoint_GetDequeuePointer @ 0x14001E7D4 (Endpoint_GetDequeuePointer.c)
 *     Feature_UISCSF__private_ReportDeviceUsage @ 0x140049340 (Feature_UISCSF__private_ReportDeviceUsage.c)
 *     UsbDevice_GetDeviceSpeedEx @ 0x14004E410 (UsbDevice_GetDeviceSpeedEx.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall Endpoint_UcxEvtDefaultEndpointUpdate(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int16 v4; // ax
  __int64 v5; // rbx
  __int64 v6; // rdi
  _DWORD *v7; // rsi
  _DWORD *v8; // rbx
  _QWORD *v9; // r14
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v14; // r12
  unsigned int *v15; // rbx
  __int64 v16; // rsi
  int DeviceSpeed; // eax
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  unsigned int v25; // eax
  __int16 v26; // ax
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // [rsp+28h] [rbp-90h]
  __int64 v31; // [rsp+30h] [rbp-88h]
  __int64 v32; // [rsp+40h] [rbp-78h]
  _OWORD v33[2]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v34; // [rsp+78h] [rbp-40h]

  v2 = 0;
  memset(v33, 0, sizeof(v33));
  v34 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v33[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v4 = -1;
  }
  else
  {
    v4 = 40;
  }
  LOWORD(v33[0]) = v4;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v33);
  v5 = *((_QWORD *)&v33[0] + 1);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(*((_QWORD *)&v33[0] + 1) + 24LL),
         off_14006AFE8);
  v7 = (_DWORD *)(v5 + 32);
  v8 = (_DWORD *)(v6 + 152);
  v9 = (_QWORD *)(v6 + 16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)v6 + 72LL),
      4u,
      0xDu,
      0x20u,
      (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
      *(unsigned __int8 *)(*v9 + 143LL),
      *v8,
      *v7);
  v10 = *(_QWORD *)(*(_QWORD *)v6 + 88LL);
  v32 = *(_QWORD *)(*(_QWORD *)v6 + 144LL);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
          WdfDriverGlobals,
          a2,
          off_14006AE88);
  memset((void *)(v11 + 8), 0, 0x70uLL);
  *(_QWORD *)v11 = v6;
  *(_DWORD *)(v11 + 16) = *v7;
  v12 = XilEndpoint_AcquireBuffer((_BYTE *)v6, (*(_DWORD *)(v10 + 104) & 4) != 0 ? 2112 : 1056, v6, 0x31747045u);
  *(_QWORD *)(v11 + 8) = v12;
  if ( !v12 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v31) = *v8;
      LODWORD(v30) = *(unsigned __int8 *)(*v9 + 143LL);
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(*(_QWORD *)v6 + 72LL),
        2u,
        0xDu,
        0x21u,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        v30,
        v31);
    }
    if ( *(_QWORD *)(v11 + 8) )
    {
      XilEndpoint_ReleaseBuffer(v6);
      *(_QWORD *)(v11 + 8) = 0LL;
    }
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             a2,
             3221225626LL);
  }
  v14 = *(_QWORD *)(v12 + 16);
  v15 = (unsigned int *)(v14 + ((*(_DWORD *)(v10 + 104) & 4) != 0 ? 64LL : 32LL));
  v16 = v14 + ((*(_DWORD *)(v10 + 104) & 4) != 0 ? 128LL : 64LL);
  if ( (*(_QWORD *)(*(_QWORD *)v6 + 744LL) & 0x20000000LL) != 0 )
  {
    Feature_UISCSF__private_ReportDeviceUsage(-(*(_DWORD *)(v10 + 104) & 4));
    DeviceSpeed = UsbDevice_GetDeviceSpeedEx(*v9);
    if ( DeviceSpeed )
    {
      v19 = DeviceSpeed - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( v22 )
            {
              v23 = v22 - 1;
              if ( v23 )
              {
                if ( v23 != 1 )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LODWORD(v31) = UsbDevice_GetDeviceSpeedEx(v18);
                    LODWORD(v30) = *(unsigned __int8 *)(v24 + 143);
                    WPP_RECORDER_SF_DD(
                      *(_QWORD *)(*(_QWORD *)v6 + 72LL),
                      2u,
                      0xCu,
                      0x22u,
                      (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
                      v30,
                      v31);
                  }
                  goto LABEL_33;
                }
                v25 = *v15 & 0xFF0FFFFF | 0x700000;
              }
              else
              {
                v25 = *v15 & 0xFF0FFFFF | 0x600000;
              }
            }
            else
            {
              v25 = *v15 & 0xFF0FFFFF | 0x500000;
            }
          }
          else
          {
            v25 = *v15 & 0xFF0FFFFF | 0x400000;
          }
        }
        else
        {
          v25 = *v15 & 0xFF0FFFFF | 0x300000;
        }
      }
      else
      {
        v25 = *v15 & 0xFF0FFFFF | 0x100000;
      }
    }
    else
    {
      v25 = *v15 & 0xFF0FFFFF | 0x200000;
    }
    *v15 = v25;
  }
LABEL_33:
  *(_DWORD *)(v14 + 4) |= 2u;
  *(_DWORD *)(v16 + 4) ^= ((unsigned __int8)*(_DWORD *)(v16 + 4) ^ (unsigned __int8)(8 * *(_DWORD *)(v6 + 128))) & 0x38;
  v26 = *(_WORD *)(v11 + 16);
  *(_BYTE *)(v16 + 2) = 0;
  *(_DWORD *)v16 &= 0xFFFF80FF;
  *(_WORD *)(v16 + 6) = v26;
  *(_BYTE *)(v16 + 5) = 0;
  v27 = *(_BYTE *)(v6 + 99) & 3;
  if ( v27 != 1 )
  {
    if ( (*(_QWORD *)(*(_QWORD *)v6 + 736LL) & 0x10000000000000LL) == 0
      || v27 != 3
      || *(char *)(v6 + 98) >= 0
      || (v28 = *(_QWORD *)(v6 + 16), *(_WORD *)(v28 + 132) != 1529)
      || *(_WORD *)(v28 + 134) != 4353
      || *(_DWORD *)(v28 + 36) <= 1u )
    {
      v2 = 6;
    }
  }
  *(_DWORD *)(v16 + 4) = v2 & 0xFFFFFFFE | *(_DWORD *)(v16 + 4) & 0xFFFFFFF8;
  *(_QWORD *)(v16 + 8) = Endpoint_GetDequeuePointer(v6, 0);
  *(_DWORD *)(v6 + 160) = *(unsigned __int16 *)(v16 + 6);
  Endpoint_InitializeTransferRing(v6, 0);
  memset((void *)(v11 + 24), 0, 0x60uLL);
  *(_QWORD *)(v11 + 64) = Endpoint_EvaluateContextCompletion;
  v29 = *(_DWORD *)(v11 + 60);
  *(_QWORD *)(v11 + 72) = v11;
  *(_DWORD *)(v11 + 60) = v29 & 0xFFFF03FF | 0x3400;
  *(_BYTE *)(v11 + 63) = *(_BYTE *)(*(_QWORD *)(v6 + 16) + 143LL);
  *(_QWORD *)(v11 + 48) = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 24LL);
  *(_QWORD *)(v11 + 96) = v14;
  *(_DWORD *)(v11 + 104) = *(_DWORD *)(*(_QWORD *)(v11 + 8) + 44LL);
  *(_DWORD *)(v11 + 108) = 2;
  *(_QWORD *)(v11 + 112) = v6;
  return Command_SendCommand(v32, v11 + 24);
}
