/*
 * XREFs of TUNNEL_CloseAllUsb4RemoteTargets @ 0x140091CA8
 * Callers:
 *     HUBFDO_EvtDeviceCleanupCallback @ 0x14000D210 (HUBFDO_EvtDeviceCleanupCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     TUNNEL_CloseRemoteTarget @ 0x140091E04 (TUNNEL_CloseRemoteTarget.c)
 */

void __fastcall TUNNEL_CloseAllUsb4RemoteTargets(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rax
  struct _DEVICE_OBJECT *v7; // rax

  if ( (*(_DWORD *)(a1 + 44) & 0x20) != 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 2760),
      0LL);
    v2 = 0;
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 112))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 2752));
    if ( v3 )
    {
      do
      {
        v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 144))(
               WdfDriverGlobals,
               *(_QWORD *)(a1 + 2752),
               v2);
        if ( !v4 )
          break;
        v5 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                           WdfDriverGlobals,
                           v4,
                           0LL)
                       + 8);
        if ( v5 )
        {
          v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                 WdfDriverGlobals,
                 v5,
                 off_14006D180);
          TUNNEL_CloseRemoteTarget(v6);
        }
        ++v2;
      }
      while ( v2 < v3 );
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 2760));
  }
  v7 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 264))(
                                  WdfDriverGlobals,
                                  *(_QWORD *)(a1 + 16));
  IoInvalidateDeviceRelations(v7, PowerRelations);
}
