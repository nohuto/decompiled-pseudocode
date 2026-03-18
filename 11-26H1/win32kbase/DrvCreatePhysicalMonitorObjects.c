/*
 * XREFs of DrvCreatePhysicalMonitorObjects @ 0x14000BAA0
 * Callers:
 *     NtGdiCreateOPMProtectedOutputs @ 0x14000A770 (NtGdiCreateOPMProtectedOutputs.c)
 * Callees:
 *     ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x140008CC0 (-OPMDestroyProtectedOutput@@YAJPEAX@Z.c)
 *     ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1400098D0 (-CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH.c)
 *     ?GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z @ 0x14000C714 (-GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14000C7AC (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140029040 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1EnsureMonitorDevices@@QEAA@XZ @ 0x14015DDBC (--1EnsureMonitorDevices@@QEAA@XZ.c)
 *     CreatePhysicalMonitorWrap @ 0x14019FA30 (CreatePhysicalMonitorWrap.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvCreatePhysicalMonitorObjects(
        struct _UNICODE_STRING *a1,
        enum _MODE a2,
        int a3,
        enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS a4,
        unsigned int a5,
        _DWORD *a6,
        volatile void *Address)
{
  __int64 v9; // r14
  _QWORD *v10; // r15
  int DeviceFromNameAndValidateDevice; // eax
  signed int v12; // ebx
  unsigned int v13; // edi
  unsigned int i; // ebx
  unsigned int v15; // eax
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // r12d
  __int64 v20; // r13
  __int64 SessionState; // rax
  int v22; // eax
  unsigned __int64 v23; // rax
  unsigned int v24; // ecx
  __int64 j; // rdx
  __int64 (*v26)(void); // rax
  void **v27; // rdi
  __int64 (*v28)(void); // rax
  int v29; // eax
  void *v30; // r12
  void (__fastcall *v31)(void *); // rax
  struct tagGRAPHICS_DEVICE *v32; // [rsp+30h] [rbp-88h] BYREF
  int v33; // [rsp+38h] [rbp-80h]
  unsigned int v34[4]; // [rsp+40h] [rbp-78h] BYREF
  int v35; // [rsp+50h] [rbp-68h]
  int v36; // [rsp+58h] [rbp-60h]
  int v37; // [rsp+5Ch] [rbp-5Ch]
  _QWORD *v38; // [rsp+60h] [rbp-58h]
  char v39[8]; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v40; // [rsp+70h] [rbp-48h]
  PVOID P; // [rsp+78h] [rbp-40h]
  struct _LUID v42; // [rsp+80h] [rbp-38h] BYREF
  _QWORD *v43; // [rsp+88h] [rbp-30h]

  WdLogSingleEntry4(4LL, a1, a3, a4, a5);
  WdLogGlobalForLineNumber = 26447;
  v9 = 0LL;
  v33 = 0;
  v10 = 0LL;
  v38 = 0LL;
  v32 = 0LL;
  DeviceFromNameAndValidateDevice = DrvGetDeviceFromNameAndValidateDevice(a1, a2, &v32);
  v12 = DeviceFromNameAndValidateDevice;
  if ( DeviceFromNameAndValidateDevice < 0 )
  {
    WdLogSingleEntry1(5LL, DeviceFromNameAndValidateDevice);
    WdLogGlobalForLineNumber = 26457;
    return (unsigned int)v12;
  }
  v40 = 0;
  P = 0LL;
  EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice((EnsureMonitorDevices *)v39, v32);
  v13 = 0;
  for ( i = 0; i < v40; ++i )
  {
    *(_OWORD *)v34 = 0LL;
    v35 = 0;
    EnsureMonitorDevices::GetMonitorDevice((EnsureMonitorDevices *)v39, i, (struct tagVIDEO_MONITOR_DEVICE *)v34);
    v15 = v13 + 1;
    if ( (v34[0] & 1) == 0 )
      v15 = v13;
    v13 = v15;
  }
  v12 = v13 == 0 ? 0xC01E05E5 : 0;
  if ( v13 )
  {
    if ( a5 < v13 )
    {
      v12 = -1071774234;
      goto LABEL_48;
    }
    v17 = 8LL * v13;
    v18 = 0xFFFFFFFFLL;
    if ( v17 <= 0xFFFFFFFF )
      v18 = (unsigned int)v17;
    v12 = v17 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v17 <= 0xFFFFFFFF )
    {
      v10 = (_QWORD *)PALLOCMEM(v18, 1986291527LL);
      v38 = v10;
      v43 = v10;
      if ( !v10 )
      {
        v12 = -1073741801;
        goto LABEL_48;
      }
      v19 = 0;
      v20 = 0LL;
      while ( 1 )
      {
        if ( v19 >= v40 )
        {
          v23 = 8LL * a5;
          v24 = -1;
          if ( v23 <= 0xFFFFFFFF )
            v24 = 8 * a5;
          v12 = v23 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v23 <= 0xFFFFFFFF )
          {
            ProbeForWrite(Address, v24, 8u);
            ProbeForWrite(a6, 4uLL, 4u);
            if ( (unsigned int)v9 > a5 )
            {
              v12 = -1071774234;
              v37 = -1071774234;
            }
            else
            {
              for ( j = 0LL; ; j = (unsigned int)(j + 1) )
              {
                v36 = j;
                if ( (unsigned int)j >= (unsigned int)v9 )
                  break;
                *((_QWORD *)Address + j) = v10[j];
              }
              *a6 = v9;
            }
          }
          break;
        }
        *(_OWORD *)v34 = 0LL;
        v35 = 0;
        EnsureMonitorDevices::GetMonitorDevice((EnsureMonitorDevices *)v39, v19, (struct tagVIDEO_MONITOR_DEVICE *)v34);
        v42 = *(struct _LUID *)&v34[2];
        if ( (v34[0] & 1) != 0 )
        {
          if ( (_DWORD)v9 == v13 )
            goto LABEL_47;
          if ( a3 )
          {
            if ( a3 != 1 )
            {
LABEL_47:
              v12 = -1071774233;
              goto LABEL_48;
            }
            v26 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1024LL);
            if ( v26 )
              v12 = v26();
            else
              v12 = -1073741637;
            if ( v12 < 0 )
              goto LABEL_48;
            v12 = CreatePhysicalMonitorWrap(&v42, v34[1], &v10[v20]);
            if ( v12 < 0 )
              goto LABEL_48;
LABEL_25:
            v20 = (unsigned int)(v20 + 1);
            v9 = (unsigned int)(v9 + 1);
            v33 = v9;
            goto LABEL_26;
          }
          LODWORD(v32) = 0;
          SessionState = W32GetSessionState(0LL);
          v22 = COPM::CreateProtectedOutput(
                  *(COPM **)(*(_QWORD *)(SessionState + 88) + 3728LL),
                  a4,
                  &v42,
                  v34[1],
                  (void **)&v10[v20],
                  (int *)&v32);
          v12 = 0;
          if ( v22 < 0 )
            v12 = v22;
          if ( v12 < 0 )
            goto LABEL_48;
          if ( !(_DWORD)v32 )
            goto LABEL_25;
        }
LABEL_26:
        ++v19;
      }
    }
  }
  if ( v12 < 0 )
  {
LABEL_48:
    if ( v10 )
    {
      if ( (_DWORD)v9 )
      {
        v27 = (void **)v10;
        do
        {
          OPMDestroyProtectedOutput(*v27);
          if ( a3 )
          {
            if ( a3 == 1 )
            {
              v28 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1040LL);
              v29 = v28 ? v28() : -1073741637;
              if ( v29 >= 0 )
              {
                v30 = *v27;
                v31 = *(void (__fastcall **)(void *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1048LL);
                if ( v31 )
                  v31(v30);
              }
            }
          }
          else
          {
            OPMDestroyProtectedOutput(*v27);
          }
          ++v27;
          --v9;
        }
        while ( v9 );
        v10 = v38;
      }
      GreDeleteFastMutex(v10);
    }
    WdLogSingleEntry1(5LL, v12);
    WdLogGlobalForLineNumber = 26625;
    EnsureMonitorDevices::~EnsureMonitorDevices((EnsureMonitorDevices *)v39);
    return (unsigned int)v12;
  }
  GreDeleteFastMutex(v10);
  WdLogSingleEntry0(5LL);
  WdLogGlobalForLineNumber = 26631;
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
