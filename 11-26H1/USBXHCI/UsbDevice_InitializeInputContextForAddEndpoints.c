/*
 * XREFs of UsbDevice_InitializeInputContextForAddEndpoints @ 0x14001D4A4
 * Callers:
 *     UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x14001CF0C (UsbDevice_InitializeInputContextForAddDropEndpoints.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x140001BD4 (WPP_RECORDER_SF_ddd.c)
 *     UsbDevice_InitializeEndpointContext @ 0x14001D7AC (UsbDevice_InitializeEndpointContext.c)
 *     Endpoint_Disable @ 0x14001DD5C (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x14001F2E0 (Endpoint_Enable.c)
 *     WPP_RECORDER_SF_ddddd @ 0x140033CC8 (WPP_RECORDER_SF_ddddd.c)
 *     WPP_RECORDER_SF_dqq @ 0x140034648 (WPP_RECORDER_SF_dqq.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_InitializeInputContextForAddEndpoints(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  int v5; // r15d
  __int64 v6; // rdx
  unsigned int i; // esi
  unsigned int v8; // eax
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v13; // r12
  __int64 v14; // r13
  int v15; // r8d
  __int64 v16; // rax
  int v17; // [rsp+20h] [rbp-68h]
  __int64 v18; // [rsp+90h] [rbp+8h]
  int v19; // [rsp+90h] [rbp+8h]
  _BYTE *v20; // [rsp+98h] [rbp+10h]

  v4 = 0;
  v20 = (_BYTE *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                   WdfDriverGlobals,
                   *(_QWORD *)(a1 + 448),
                   off_14006AE88);
  v5 = 0;
  v6 = *(_QWORD *)((*(_BYTE *)(a1 + 665) != 0 ? 8 : 0) + a1 + 648);
  if ( v6 )
    v18 = *(_QWORD *)(v6 + 16);
  else
    v18 = 0LL;
  for ( i = 0; ; ++i )
  {
    v8 = *(_DWORD *)(a2 + 24);
    if ( i >= v8 )
    {
      if ( v8 )
      {
        v9 = v18;
        do
        {
          v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                  WdfDriverGlobals,
                  *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL * v4),
                  off_14006AFE8);
          v19 = *(_DWORD *)(v10 + 152);
          v11 = v9
              + ((unsigned int)(v19 - 1) + 2LL)
              * ((*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) + 104LL) & 4) != 0 ? 64LL : 32LL);
          UsbDevice_InitializeEndpointContext(a1, v10, v11);
          *(_DWORD *)(v9 + 4) |= 1 << v19;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_ddddd(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              *(unsigned __int8 *)(v11 + 2),
              12,
              57,
              (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
              *(_BYTE *)(a1 + 143),
              v19,
              (*(_DWORD *)(v11 + 4) >> 3) & 7,
              *(_WORD *)(v11 + 6),
              *(_BYTE *)(v11 + 2));
          ++v4;
        }
        while ( v4 < *(_DWORD *)(a2 + 24) );
      }
      return (unsigned int)v5;
    }
    v13 = 8LL * i;
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            *(_QWORD *)(*(_QWORD *)(a2 + 32) + v13),
            off_14006AFE8);
    v5 = Endpoint_Enable(v14);
    if ( v5 < 0 )
      break;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      0xCu,
      0x37u,
      (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids);
  for ( ; i; --i )
  {
    v13 -= 8LL;
    v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            *(_QWORD *)(*(_QWORD *)(a2 + 32) + v13),
            off_14006AFE8);
    Endpoint_Disable(v16, 0LL);
  }
  if ( *(_DWORD *)(a2 + 40) )
  {
    *v20 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqq(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        *(unsigned __int8 *)(a1 + 143),
        v15,
        56,
        v17,
        *(_BYTE *)(a1 + 143),
        *(_QWORD *)(a1 + 432),
        *(_QWORD *)a1);
  }
  return (unsigned int)v5;
}
