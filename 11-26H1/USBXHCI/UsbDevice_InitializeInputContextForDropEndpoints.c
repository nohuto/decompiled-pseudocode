/*
 * XREFs of UsbDevice_InitializeInputContextForDropEndpoints @ 0x14001D1C4
 * Callers:
 *     UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x14001CF0C (UsbDevice_InitializeInputContextForAddDropEndpoints.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_dddddd @ 0x14001CD9C (WPP_RECORDER_SF_dddddd.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1400242C4 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_InitializeInputContextForDropEndpoints(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // r8
  __int64 v6; // rax
  _DWORD *v7; // r14
  __int64 i; // rsi
  int v9; // r11d
  __int64 v10; // r15
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 DeviceContextBufferVA; // rax
  __int64 v14; // r9
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-58h]
  __int64 v18; // [rsp+28h] [rbp-50h]
  __int64 v19; // [rsp+30h] [rbp-48h]

  v2 = a1 + 616;
  v4 = a1 + 624;
  if ( !*(_BYTE *)(a1 + 665) )
    v4 = a1 + 616;
  v6 = *(_QWORD *)(v4 + 32);
  if ( v6 )
    v7 = *(_DWORD **)(v6 + 16);
  else
    v7 = 0LL;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 40); i = (unsigned int)(i + 1) )
  {
    v9 = *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                       WdfDriverGlobals,
                       *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * i),
                       off_14006AFE8)
                   + 152);
    *v7 |= 1 << v9;
    if ( *(_BYTE *)(a1 + 665) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v19) = v9;
        LODWORD(v18) = *(unsigned __int8 *)(a1 + 143);
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          0xCu,
          0x3Au,
          (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
          v18,
          v19);
      }
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 8);
      if ( (*(_DWORD *)(*(_QWORD *)(v10 + 88) + 104LL) & 4) != 0 )
      {
        DeviceContextBufferVA = XilCoreUsbDevice_GetDeviceContextBufferVA(v2);
        v11 = (v16 + 1) << 6;
      }
      else
      {
        v11 = XilCoreUsbDevice_GetDeviceContextBufferVA(v2);
        DeviceContextBufferVA = 32 * (v12 + 1);
      }
      v14 = DeviceContextBufferVA + v11;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dddddd(
          *(_QWORD *)(v10 + 72),
          *(unsigned __int8 *)(v14 + 2),
          *(unsigned __int16 *)(v14 + 6),
          (*(_DWORD *)(v14 + 4) >> 3) & 7,
          v17);
    }
  }
  return 0LL;
}
