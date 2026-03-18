/*
 * XREFs of DrvGetMonitorPhysicalDimensions @ 0x1401F7CE0
 * Callers:
 *     RIMGetMonitorPhysicalSize @ 0x140205BA0 (RIMGetMonitorPhysicalSize.c)
 * Callees:
 *     ?GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z @ 0x14000C714 (-GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z.c)
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140029040 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ??1EnsureMonitorDevices@@QEAA@XZ @ 0x14015DDBC (--1EnsureMonitorDevices@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall DrvGetMonitorPhysicalDimensions(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        _DWORD *a4,
        _QWORD *a5)
{
  unsigned int v7; // edi
  __int64 v8; // rax
  struct tagGRAPHICS_DEVICE *v9; // rax
  struct tagGRAPHICS_DEVICE *v10; // rdx
  int v11; // r14d
  unsigned int i; // esi
  __int64 v13; // rbx
  int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v18; // r8d
  __int128 v20; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+40h] [rbp-C0h]
  unsigned int *v22; // [rsp+48h] [rbp-B8h]
  unsigned int *v23; // [rsp+50h] [rbp-B0h]
  char v24[8]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v25; // [rsp+60h] [rbp-A0h]
  __int64 v26; // [rsp+68h] [rbp-98h]
  _DWORD v27[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v28; // [rsp+78h] [rbp-88h]
  unsigned int v29; // [rsp+80h] [rbp-80h]
  _DWORD v30[231]; // [rsp+84h] [rbp-7Ch] BYREF

  v23 = a3;
  v22 = a2;
  v7 = 0;
  v8 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( !a1 )
    return 3221225473LL;
  v9 = *(struct tagGRAPHICS_DEVICE **)(v8 + 1184);
  v10 = *(struct tagGRAPHICS_DEVICE **)(a1 + 2568);
  if ( !v9 || v9 != v10 )
    return 3221225486LL;
  v25 = 0;
  v26 = 0LL;
  EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice((EnsureMonitorDevices *)v24, v10);
  v11 = 0;
  for ( i = 0; i < v25; ++i )
  {
    v21 = 0;
    v20 = 0LL;
    EnsureMonitorDevices::GetMonitorDevice((EnsureMonitorDevices *)v24, i, (struct tagVIDEO_MONITOR_DEVICE *)&v20);
    if ( (v20 & 2) != 0 && (v20 & 1) != 0 )
    {
      memset(v30, 0, sizeof(v30));
      v13 = *((_QWORD *)&v20 + 1);
      v14 = DWORD1(v20);
      v28 = *((_QWORD *)&v20 + 1);
      v27[0] = -7;
      v29 = DWORD1(v20);
      v27[1] = 944;
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v16, v15);
      if ( (*(int (__fastcall **)(__int64, _QWORD, _DWORD *, _QWORD, _QWORD))(DxgkWin32kInterface + 264))(
             v28,
             v29,
             v27,
             0LL,
             0LL) >= 0 )
      {
        v11 = 1;
        if ( v30[226] )
        {
          v18 = v30[227];
          if ( v30[227] )
          {
            *v22 = (v30[226] + 9) / 0xAu;
            *v23 = (v18 + 9) / 0xAu;
            if ( a4 )
              *a4 = v14;
            if ( a5 )
              *a5 = v13;
            goto LABEL_18;
          }
        }
      }
    }
  }
  v7 = -1073741810;
  if ( v11 )
    v7 = -1073741823;
LABEL_18:
  EnsureMonitorDevices::~EnsureMonitorDevices((EnsureMonitorDevices *)v24);
  return v7;
}
