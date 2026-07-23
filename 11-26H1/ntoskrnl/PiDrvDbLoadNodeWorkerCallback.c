/*
 * XREFs of PiDrvDbLoadNodeWorkerCallback @ 0x140B20F30
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PnpDiagnosticTraceObject @ 0x14048D5DC (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1404D9FFC (PnpDiagnosticTraceObjectWithStatus.c)
 *     ZwSetEvent @ 0x140728180 (ZwSetEvent.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwResetEvent @ 0x14072B0C0 (ZwResetEvent.c)
 *     PiDrvDbSetupNodeHive @ 0x1407BAE00 (PiDrvDbSetupNodeHive.c)
 *     _SysCtxRegOpenKey @ 0x140958350 (_SysCtxRegOpenKey.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     _PnpSetObjectProperty @ 0x140A19100 (_PnpSetObjectProperty.c)
 *     PiDrvDbLoadHive @ 0x140B210E0 (PiDrvDbLoadHive.c)
 *     PiDrvDbUnloadHive @ 0x140B211AC (PiDrvDbUnloadHive.c)
 */

NTSTATUS __fastcall PiDrvDbLoadNodeWorkerCallback(__int64 a1)
{
  unsigned __int16 *v1; // rsi
  __int64 v3; // r14
  int v4; // eax
  int v5; // edi
  NTSTATUS result; // eax
  char **v7; // r15
  _DWORD *v8; // rdi
  int v9; // r14d
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // [rsp+A0h] [rbp+38h] BYREF
  int v15; // [rsp+A8h] [rbp+40h] BYREF
  unsigned int v16; // [rsp+B0h] [rbp+48h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+50h] BYREF

  v1 = (unsigned __int16 *)(a1 + 16);
  Handle = 0LL;
  v14 = 1;
  v15 = 0;
  v16 = 0;
  PnpDiagnosticTraceObject(&KMPnPEvt_DriverDatabaseLoad_Start, (unsigned __int16 *)(a1 + 16));
  PnpDiagnosticTraceObject(&KMPnPEvt_DriverDatabaseLoaded_Start, v1);
  v3 = a1 + 32;
  v4 = PiDrvDbLoadHive(a1 + 32, a1 + 48, 0LL, &Handle);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = (char **)(a1 + 72);
    if ( (int)SysCtxRegOpenKey(0LL, (__int64)Handle, (__int64)L"DriverDatabase", 0, 0x2000000u, a1 + 72) < 0 )
    {
      *(_BYTE *)(a1 + 80) = 1;
    }
    else
    {
      if ( *(_QWORD *)(a1 + 480) == 0xFFFFFFFFLL )
      {
        if ( (int)PnpGetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    *(_QWORD *)(a1 + 24),
                    7,
                    *v7,
                    0LL,
                    (__int64)DEVPKEY_DriverDatabase_UnloadTimeout,
                    &v14,
                    (__int64)&v16,
                    4u,
                    (__int64)&v15,
                    0) >= 0
          && v14 == 7
          && v15 == 4 )
        {
          v10 = v16;
        }
        else
        {
          v10 = 120000LL;
          v16 = 120000;
        }
        if ( (_DWORD)v10 != -1 )
          *(_QWORD *)(a1 + 480) = -10000 * v10;
      }
      v8 = (_DWORD *)(a1 + 496);
      if ( *(_DWORD *)(a1 + 496) == 259 )
      {
        if ( (int)PnpGetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    *(_QWORD *)(a1 + 24),
                    7,
                    *v7,
                    0LL,
                    (__int64)DEVPKEY_DriverDatabase_SetupOptions,
                    &v14,
                    a1 + 492,
                    4u,
                    (__int64)&v15,
                    0) < 0
          || v14 != 7
          || v15 != 4 )
        {
          *(_DWORD *)(a1 + 492) = 51;
        }
        if ( (int)PnpGetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    *(_QWORD *)(a1 + 24),
                    7,
                    *v7,
                    0LL,
                    (__int64)DEVPKEY_DriverDatabase_SetupStatus,
                    &v14,
                    a1 + 496,
                    4u,
                    (__int64)&v15,
                    0) < 0
          || v14 != 24
          || v15 != 4 )
        {
          *v8 = 259;
        }
        if ( *v8 == 259 )
        {
          v11 = PiDrvDbSetupNodeHive(a1, *(const WCHAR **)(a1 + 24));
          v12 = *(_QWORD *)(a1 + 72);
          v13 = *(_QWORD *)(a1 + 24);
          *(_DWORD *)(a1 + 496) = v11;
          PnpSetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            v13,
            7,
            v12,
            0LL,
            (__int64)DEVPKEY_DriverDatabase_SetupStatus,
            24,
            a1 + 496,
            4u,
            0);
        }
      }
      v3 = a1 + 32;
      v1 = (unsigned __int16 *)(a1 + 16);
    }
    ZwClose(Handle);
    ZwResetEvent(*(HANDLE *)(a1 + 472), 0LL);
    v9 = PiDrvDbUnloadHive(v3, *(_QWORD *)(a1 + 472));
    if ( v9 == 259 )
    {
      v5 = 0;
    }
    else
    {
      ZwSetEvent(*(HANDLE *)(a1 + 472), 0LL);
      v5 = 0;
      if ( v9 >= 0 )
        v5 = v9;
    }
  }
  else if ( v4 == -1073741772 || v4 == -1073741766 )
  {
    *(_BYTE *)(a1 + 80) = 1;
  }
  if ( v5 == -1073741431 )
    v5 = -1073741077;
  *(_DWORD *)(a1 + 256) = v5;
  KeSetEvent((PRKEVENT)(a1 + 200), 0, 0);
  result = PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseLoad_Stop, v1, v5);
  if ( v5 < 0 )
    return PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseLoaded_Stop, v1, v5);
  return result;
}
