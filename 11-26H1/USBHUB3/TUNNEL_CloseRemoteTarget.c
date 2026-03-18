/*
 * XREFs of TUNNEL_CloseRemoteTarget @ 0x140091E04
 * Callers:
 *     TUNNEL_CloseAllUsb4RemoteTargets @ 0x140091CA8 (TUNNEL_CloseAllUsb4RemoteTargets.c)
 *     TUNNEL_EvtIoTargetRemoveComplete @ 0x1400927A0 (TUNNEL_EvtIoTargetRemoveComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qqq @ 0x140042BEC (WPP_RECORDER_SF_qqq.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

void __fastcall TUNNEL_CloseRemoteTarget(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v5; // rdi
  char v6; // bp
  int v7; // eax
  bool v8; // zf
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+28h] [rbp-20h]

  v3 = a1[1];
  if ( v3 )
  {
    v5 = (_QWORD *)(v3 + 32);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = *(_QWORD *)(v3 + 8);
      WPP_RECORDER_SF_qqq(*(_QWORD *)(*a1 + 2536LL), a2, a3, 0x21u, v10);
    }
    v6 = 0;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(v3 + 16),
      0LL);
    if ( *(_BYTE *)(v3 + 44) == 1 )
    {
      v7 = PoFxRemoveComponentRelation(*(_QWORD *)(*a1 + 2624LL), 0LL, *v5, &GUID_NULL);
      if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v11) = v7;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*a1 + 2536LL),
          2u,
          3u,
          0x22u,
          (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
          v11);
      }
      *(_BYTE *)(v3 + 44) = 0;
    }
    v8 = *(_DWORD *)(v3 + 24) == 3;
    *v5 = 0LL;
    if ( !v8 )
    {
      v6 = 1;
      *(_DWORD *)(v3 + 24) = 3;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      *(_QWORD *)(v3 + 16));
    if ( v6 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1360))(
        WdfDriverGlobals,
        *(_QWORD *)(v3 + 8));
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        *(_QWORD *)(v3 + 16),
        0LL);
      v9 = *(_QWORD *)(v3 + 16);
      *(_DWORD *)(v3 + 24) = 4;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, v9);
    }
  }
}
