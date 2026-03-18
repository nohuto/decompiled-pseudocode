/*
 * XREFs of DrvCreatePhysicalMonitorObjects @ 0x140139E70
 * Callers:
 *     NtGdiCreateOPMProtectedOutputs @ 0x140139DE0 (NtGdiCreateOPMProtectedOutputs.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140049CA4 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14007F62C (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     ?GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z @ 0x1400810F0 (-GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z.c)
 *     ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x140082BE8 (-CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH.c)
 *     ??1EnsureMonitorDevices@@QEAA@XZ @ 0x140120630 (--1EnsureMonitorDevices@@QEAA@XZ.c)
 *     ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x140148F60 (-OPMDestroyProtectedOutput@@YAJPEAX@Z.c)
 *     CreatePhysicalMonitorWrap @ 0x14023E2FC (CreatePhysicalMonitorWrap.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
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
  char *v10; // r15
  int DeviceFromNameAndValidateDevice; // eax
  signed int v12; // ebx
  unsigned int v13; // edi
  unsigned int i; // ebx
  unsigned int v15; // eax
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // r12d
  __int64 v19; // r13
  unsigned __int64 v20; // rax
  unsigned int v21; // ecx
  __int64 j; // rdx
  __int64 v24; // rdx
  __int64 SessionState; // rax
  int v26; // eax
  __int64 v27; // rcx
  __int64 (__fastcall *v28)(__int64); // rax
  void **v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 (__fastcall *v34)(__int64); // rax
  int v35; // eax
  void *v36; // r12
  void (__fastcall *v37)(void *); // rax
  int v38; // [rsp+34h] [rbp-A4h] BYREF
  int v39; // [rsp+38h] [rbp-A0h]
  int v40; // [rsp+3Ch] [rbp-9Ch]
  char *v41; // [rsp+40h] [rbp-98h]
  _BYTE v42[8]; // [rsp+48h] [rbp-90h] BYREF
  unsigned int v43; // [rsp+50h] [rbp-88h]
  PVOID P; // [rsp+58h] [rbp-80h]
  struct tagGRAPHICS_DEVICE *v45; // [rsp+60h] [rbp-78h] BYREF
  struct _LUID v46; // [rsp+68h] [rbp-70h] BYREF
  unsigned int v47[4]; // [rsp+70h] [rbp-68h] BYREF
  int v48; // [rsp+80h] [rbp-58h]
  char *v49; // [rsp+88h] [rbp-50h]
  __int128 v50; // [rsp+90h] [rbp-48h] BYREF
  int v51; // [rsp+A0h] [rbp-38h]

  WdLogSingleEntry4(4LL, a1, a3);
  WdLogGlobalForLineNumber = 27601;
  v9 = 0LL;
  v39 = 0;
  v10 = 0LL;
  v41 = 0LL;
  v45 = 0LL;
  DeviceFromNameAndValidateDevice = DrvGetDeviceFromNameAndValidateDevice(a1, a2, &v45);
  v12 = DeviceFromNameAndValidateDevice;
  if ( DeviceFromNameAndValidateDevice < 0 )
  {
    WdLogSingleEntry1(5LL, DeviceFromNameAndValidateDevice);
    WdLogGlobalForLineNumber = 27611;
    return (unsigned int)v12;
  }
  v43 = 0;
  P = 0LL;
  EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice((EnsureMonitorDevices *)v42, v45);
  v13 = 0;
  for ( i = 0; i < v43; ++i )
  {
    v50 = 0LL;
    v51 = 0;
    EnsureMonitorDevices::GetMonitorDevice((EnsureMonitorDevices *)v42, i, (struct tagVIDEO_MONITOR_DEVICE *)&v50);
    v15 = v13 + 1;
    if ( (v50 & 1) == 0 )
      v15 = v13;
    v13 = v15;
  }
  if ( !v13 )
  {
    v12 = -1071774235;
    goto LABEL_43;
  }
  if ( a5 < v13 )
  {
    v12 = -1071774234;
    goto LABEL_43;
  }
  v16 = 8LL * v13;
  v17 = 0xFFFFFFFFLL;
  if ( v16 <= 0xFFFFFFFF )
    v17 = (unsigned int)v16;
  v12 = v16 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v16 <= 0xFFFFFFFF )
  {
    v10 = (char *)PALLOCMEM(v17, 1986291527LL);
    v41 = v10;
    v49 = v10;
    if ( v10 )
    {
      v18 = 0;
      v19 = 0LL;
      while ( 1 )
      {
        if ( v18 >= v43 )
        {
          v20 = 8LL * a5;
          v21 = -1;
          if ( v20 <= 0xFFFFFFFF )
            v21 = 8 * a5;
          v12 = v20 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v20 <= 0xFFFFFFFF )
          {
            ProbeForWrite(Address, v21, 8u);
            ProbeForWrite(a6, 4uLL, 4u);
            if ( (unsigned int)v9 > a5 )
            {
              v12 = -1071774234;
            }
            else
            {
              for ( j = 0LL; ; j = (unsigned int)(j + 1) )
              {
                v40 = j;
                if ( (unsigned int)j >= (unsigned int)v9 )
                  break;
                *((_QWORD *)Address + j) = *(_QWORD *)&v10[8 * j];
              }
              *a6 = v9;
            }
          }
          goto LABEL_23;
        }
        *(_OWORD *)v47 = 0LL;
        v48 = 0;
        EnsureMonitorDevices::GetMonitorDevice((EnsureMonitorDevices *)v42, v18, (struct tagVIDEO_MONITOR_DEVICE *)v47);
        v46 = *(struct _LUID *)&v47[2];
        if ( (v47[0] & 1) != 0 )
        {
          if ( (_DWORD)v9 == v13 )
            goto LABEL_52;
          if ( a3 )
          {
            if ( a3 != 1 )
            {
LABEL_52:
              v12 = -1071774233;
              goto LABEL_43;
            }
            v27 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(1LL, v24) + 24);
            v28 = *(__int64 (__fastcall **)(__int64))(v27 + 1024);
            if ( v28 )
              v12 = v28(v27);
            else
              v12 = -1073741637;
            if ( v12 < 0 )
              goto LABEL_43;
            v12 = CreatePhysicalMonitorWrap(&v46, v47[1], &v10[8 * v19]);
            if ( v12 < 0 )
              goto LABEL_43;
LABEL_34:
            v19 = (unsigned int)(v19 + 1);
            v9 = (unsigned int)(v9 + 1);
            v39 = v9;
            goto LABEL_35;
          }
          v38 = 0;
          SessionState = W32GetSessionState(0LL);
          v26 = COPM::CreateProtectedOutput(
                  *(COPM **)(*(_QWORD *)(SessionState + 88) + 3648LL),
                  a4,
                  &v46,
                  v47[1],
                  (void **)&v10[8 * v19],
                  &v38);
          v12 = 0;
          if ( v26 < 0 )
            v12 = v26;
          if ( v12 < 0 )
            goto LABEL_43;
          if ( !v38 )
            goto LABEL_34;
        }
LABEL_35:
        ++v18;
      }
    }
    v12 = -1073741801;
    goto LABEL_43;
  }
LABEL_23:
  if ( v12 < 0 )
  {
LABEL_43:
    if ( v10 )
    {
      if ( (_DWORD)v9 )
      {
        v29 = (void **)v10;
        do
        {
          OPMDestroyProtectedOutput(*v29);
          if ( a3 )
          {
            if ( a3 == 1 )
            {
              v33 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v31, v30) + 24);
              v34 = *(__int64 (__fastcall **)(__int64))(v33 + 1040);
              v35 = v34 ? v34(v33) : -1073741637;
              if ( v35 >= 0 )
              {
                v36 = *v29;
                v37 = *(void (__fastcall **)(void *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v33, v32) + 24) + 1048LL);
                if ( v37 )
                  v37(v36);
              }
            }
          }
          else
          {
            OPMDestroyProtectedOutput(*v29);
          }
          ++v29;
          --v9;
        }
        while ( v9 );
        v10 = v41;
      }
      GreDeleteFastMutex(v10);
    }
    WdLogSingleEntry1(5LL, v12);
    WdLogGlobalForLineNumber = 27779;
    EnsureMonitorDevices::~EnsureMonitorDevices((EnsureMonitorDevices *)v42);
    return (unsigned int)v12;
  }
  GreDeleteFastMutex(v10);
  WdLogSingleEntry0(5LL);
  WdLogGlobalForLineNumber = 27785;
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
