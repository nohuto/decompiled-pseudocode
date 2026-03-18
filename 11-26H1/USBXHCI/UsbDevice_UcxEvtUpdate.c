/*
 * XREFs of UsbDevice_UcxEvtUpdate @ 0x14003C210
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     Controller_IsControllerAccessible @ 0x14000B90C (Controller_IsControllerAccessible.c)
 *     Command_SendCommand @ 0x14000D4AC (Command_SendCommand.c)
 *     UsbDevice_UpdateUsbDevice @ 0x14003C83C (UsbDevice_UpdateUsbDevice.c)
 *     Feature_UISCSF__private_ReportDeviceUsage @ 0x140049340 (Feature_UISCSF__private_ReportDeviceUsage.c)
 *     UsbDevice_GetDeviceSpeedEx @ 0x14004E410 (UsbDevice_GetDeviceSpeedEx.c)
 *     UsbDevice_QueueTunnelStateDSM @ 0x14004E5EC (UsbDevice_QueueTunnelStateDSM.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall UsbDevice_UcxEvtUpdate(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int16 v4; // ax
  __int64 v5; // rbp
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // edx
  void *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r14
  __int16 v19; // ax
  __int64 v20; // r14
  int DeviceSpeed; // eax
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  unsigned int v28; // eax
  char v29; // r8
  __int64 *v30; // rax
  __int64 *v31; // rdx
  __int64 *v32; // rcx
  __int64 v33; // rax
  __int64 *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 result; // rax
  int v39; // [rsp+30h] [rbp-58h]
  _OWORD v40[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v41; // [rsp+60h] [rbp-28h]

  v2 = 0;
  memset(v40, 0, sizeof(v40));
  v41 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v40[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v4 = -1;
  }
  else
  {
    v4 = 40;
  }
  LOWORD(v40[0]) = v4;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v40);
  v5 = *((_QWORD *)&v40[0] + 1);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(*((_QWORD *)&v40[0] + 1) + 16LL),
         off_14006B128);
  v7 = *(_DWORD *)(v5 + 24);
  v8 = v6;
  v9 = *(_QWORD **)(v6 + 8);
  v10 = v9[18];
  v11 = v9[11];
  if ( (v7 & 4) != 0 )
  {
    v12 = v8 + 624;
    if ( !*(_BYTE *)(v8 + 665) )
      v12 = v8 + 616;
    v13 = *(_QWORD *)(v12 + 32);
    if ( v13 )
    {
      v14 = *(_DWORD *)(v13 + 44);
      v15 = *(void **)(v13 + 16);
    }
    else
    {
      v14 = 0;
      v15 = 0LL;
    }
    memset(v15, 0, v14);
    v16 = *(_BYTE *)(v8 + 665) != 0 ? 8 : 0;
    v17 = *(_QWORD *)(v16 + v8 + 648);
    if ( v17 )
      v17 = *(_QWORD *)(v17 + 16);
    v18 = -(__int64)((*(_DWORD *)(v11 + 104) & 4) != 0);
    *(_DWORD *)(v17 + 4) |= 1u;
    v19 = *(_WORD *)(v5 + 48);
    v20 = v18 & 0x20;
    *(_DWORD *)(v20 + v17 + 40) &= 0x3FFFFFu;
    *(_WORD *)(v20 + v17 + 36) = v19;
    if ( (*(_QWORD *)(*(_QWORD *)(v8 + 8) + 744LL) & 0x20000000LL) != 0 )
    {
      Feature_UISCSF__private_ReportDeviceUsage(v16);
      DeviceSpeed = UsbDevice_GetDeviceSpeedEx(v8);
      if ( DeviceSpeed )
      {
        v23 = DeviceSpeed - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              v26 = v25 - 1;
              if ( v26 )
              {
                v27 = v26 - 1;
                if ( v27 )
                {
                  if ( v27 != 1 )
                  {
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      v39 = UsbDevice_GetDeviceSpeedEx(v22);
                      WPP_RECORDER_SF_DD(
                        *(_QWORD *)(*(_QWORD *)(v8 + 8) + 72LL),
                        2u,
                        0xCu,
                        0x25u,
                        (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
                        *(unsigned __int8 *)(v8 + 143),
                        v39);
                    }
                    v2 = -1073741811;
                    goto LABEL_54;
                  }
                  v28 = *(_DWORD *)(v20 + v17 + 32) & 0xFF0FFFFF | 0x700000;
                }
                else
                {
                  v28 = *(_DWORD *)(v20 + v17 + 32) & 0xFF0FFFFF | 0x600000;
                }
              }
              else
              {
                v28 = *(_DWORD *)(v20 + v17 + 32) & 0xFF0FFFFF | 0x500000;
              }
            }
            else
            {
              v28 = *(_DWORD *)(v20 + v17 + 32) & 0xFF0FFFFF | 0x400000;
            }
          }
          else
          {
            v28 = *(_DWORD *)(v20 + v17 + 32) & 0xFF0FFFFF | 0x300000;
          }
        }
        else
        {
          v28 = *(_DWORD *)(v20 + v17 + 32) & 0xFF0FFFFF | 0x100000;
        }
      }
      else
      {
        v28 = *(_DWORD *)(v20 + v17 + 32) & 0xFF0FFFFF | 0x200000;
      }
      *(_DWORD *)(v20 + v17 + 32) = v28;
    }
    memset((void *)(v8 + 464), 0, 0x60uLL);
    *(_QWORD *)(v8 + 512) = v8;
    *(_QWORD *)(v8 + 504) = UsbDevice_UpdateCompletion;
    *(_DWORD *)(v8 + 500) = *(_DWORD *)(v8 + 500) & 0xFFFF03FF | 0x3400;
    *(_BYTE *)(v8 + 503) = *(_BYTE *)(v8 + 143);
    v29 = *(_BYTE *)(v8 + 665);
    if ( v29 )
    {
      v30 = (__int64 *)(v8 + 656);
      v31 = (__int64 *)(v8 + 656);
      v32 = (__int64 *)(v8 + 648);
    }
    else
    {
      v30 = (__int64 *)(v8 + 648);
      v32 = (__int64 *)(v8 + 648);
      v31 = (__int64 *)(v8 + 656);
    }
    v33 = *v30;
    if ( v33 )
      v33 = *(_QWORD *)(v33 + 24);
    *(_QWORD *)(v8 + 488) = v33;
    v34 = v32;
    if ( v29 )
      v34 = v31;
    v35 = *v34;
    if ( v35 )
      v35 = *(_QWORD *)(v35 + 16);
    *(_QWORD *)(v8 + 536) = v35;
    if ( v29 )
      v32 = v31;
    v36 = *v32;
    if ( *v32 )
      LODWORD(v36) = *(_DWORD *)(v36 + 44);
    v37 = *(_QWORD *)(v8 + 8);
    *(_DWORD *)(v8 + 544) = v36;
    *(_DWORD *)(v8 + 548) = 1;
    *(_QWORD *)(v8 + 552) = v8;
    if ( Controller_IsControllerAccessible(v37) )
    {
      *(_QWORD *)(v8 + 432) = a2;
      *(_BYTE *)(v8 + 440) = 0;
      return Command_SendCommand(v10, v8 + 464);
    }
    v2 = -1073741810;
    goto LABEL_54;
  }
  if ( (v7 & 0x80u) == 0
    || (v9[93] & 0x10000000LL) == 0
    || (result = UsbDevice_QueueTunnelStateDSM(v8, v5), !(_BYTE)result) )
  {
    UsbDevice_UpdateUsbDevice(v8, v5);
LABEL_54:
    *(_QWORD *)(v8 + 432) = 0LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             a2,
             v2);
  }
  return result;
}
