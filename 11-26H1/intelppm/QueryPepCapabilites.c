/*
 * XREFs of QueryPepCapabilites @ 0x14003DA60
 * Callers:
 *     ProcLibDeviceStart @ 0x140032614 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     PepNotifyProcessorLpiStates @ 0x14003A20C (PepNotifyProcessorLpiStates.c)
 *     PepQueryVetoList @ 0x14003AB54 (PepQueryVetoList.c)
 *     PepNotifyQueryCapabilities @ 0x14003D744 (PepNotifyQueryCapabilities.c)
 *     ProcLibTraceQueryCapabilities @ 0x140045EA8 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1400469C4 (ProcLibTraceGetPlatformIdleStates.c)
 */

__int64 __fastcall QueryPepCapabilites(__int64 a1)
{
  __int64 v2; // rdx
  int VetoList; // r14d
  void (__fastcall *v4)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  const signed __int64 *v5; // rsi
  __int64 v6; // rcx
  _QWORD *v7; // r12
  _DWORD *v8; // rdi
  int v9; // edx
  int v10; // ecx
  int v12; // [rsp+30h] [rbp-10h] BYREF
  _DWORD v13[3]; // [rsp+34h] [rbp-Ch] BYREF
  char v14; // [rsp+80h] [rbp+40h] BYREF
  char v15; // [rsp+88h] [rbp+48h] BYREF
  char v16; // [rsp+90h] [rbp+50h] BYREF
  int v17; // [rsp+98h] [rbp+58h] BYREF

  v2 = *(_QWORD *)(a1 + 208);
  VetoList = 0;
  v12 = 0;
  v4 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  v14 = 0;
  v15 = 0;
  v13[0] = 0;
  v16 = 0;
  v4(WdfDriverGlobals, v2, 0LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1400191A8,
    0LL);
  v5 = (const signed __int64 *)(a1 + 280);
  if ( !PepPlatformStatesQueried )
  {
    if ( (*v5 & 0x200000200LL) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 1120);
      v17 = 0;
      if ( (int)PoFxProcessorNotification(v6, 16LL, &v17) >= 0 )
        dword_140019854 = v17;
      ProcLibTraceGetPlatformIdleStates(0LL);
    }
    PepPlatformStatesQueried = 1;
    VetoList = PepQueryVetoList(a1);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1400191A8);
  if ( VetoList >= 0 )
  {
    v7 = (_QWORD *)(a1 + 280);
    if ( _bittest64(v5, 0x2Cu) )
    {
      PepNotifyProcessorLpiStates(a1);
      v7 = (_QWORD *)(a1 + 280);
    }
    VetoList = PepNotifyQueryCapabilities(a1, v13, &v16, &v12, &v15, &v14);
    if ( VetoList >= 0 )
    {
      v8 = (_DWORD *)(a1 + 1128);
      *(_BYTE *)(a1 + 1138) = v14;
      *(_BYTE *)(a1 + 1137) = v15;
      *(_DWORD *)(a1 + 1128) = v12;
      *(_DWORD *)(a1 + 1132) = v13[0];
      *(_BYTE *)(a1 + 1136) = v16;
      ProcLibTraceQueryCapabilities(a1, 0LL);
      v10 = *(_DWORD *)(a1 + 1132);
      if ( (*v5 & 0x100000000000LL) != 0 )
      {
        if ( v10 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = 2;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v9,
              1,
              16,
              (__int64)&WPP_997e76c6ae9131171cbd6c73bc5000b7_Traceguids);
            v8 = (_DWORD *)(a1 + 1128);
          }
          *(_DWORD *)(a1 + 1132) = 0;
        }
      }
      else if ( !v10 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 4;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v9,
            2,
            17,
            (__int64)&WPP_997e76c6ae9131171cbd6c73bc5000b7_Traceguids);
        }
        *v7 &= 0xFFFFFFFDFFFFFDFFuLL;
      }
      if ( !*(_BYTE *)(a1 + 1137) && !*v8 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 4;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v9,
            2,
            18,
            (__int64)&WPP_997e76c6ae9131171cbd6c73bc5000b7_Traceguids);
        }
        *(_QWORD *)(a1 + 280) &= ~0x1000000000uLL;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xFu,
      (__int64)&WPP_997e76c6ae9131171cbd6c73bc5000b7_Traceguids,
      VetoList);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)VetoList;
}
