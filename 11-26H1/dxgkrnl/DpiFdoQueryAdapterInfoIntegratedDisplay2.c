/*
 * XREFs of DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x140245390
 * Callers:
 *     DpiQueryIntegratedDescriptorWrapper @ 0x14006611C (DpiQueryIntegratedDescriptorWrapper.c)
 * Callees:
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x140067340 (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline @ 0x140076F6C (Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Acquire@AUTO_ADAPTER_LOCK@@QEAAJXZ @ 0x140085DCC (-Acquire@AUTO_ADAPTER_LOCK@@QEAAJXZ.c)
 *     DpiDxgkDdiQueryMonitorDescriptor @ 0x140094528 (DpiDxgkDdiQueryMonitorDescriptor.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1402C00F8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x14030BF64 (DxgkIsAdapterCoreSyncAcquired.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 *     DxgkReleaseAdapterDdiSync @ 0x140319D70 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x140319DFC (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1403DF030 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1403EA9FC (DxgkAcquireAdapterOpmI2CSync.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x14040E670 (DpiDxgkDdiQueryDeviceDescriptor.c)
 */

__int64 __fastcall DpiFdoQueryAdapterInfoIntegratedDisplay2(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // r15
  __int64 v5; // r13
  char v6; // di
  char v7; // r12
  __int64 v8; // rdx
  int DeviceDescriptor; // ebx
  __int64 v10; // rdx
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  char v15; // cl
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  char v18; // di
  char v19; // r12
  __int64 v20; // rdx
  unsigned int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  char v25; // r12
  char v26; // r13
  __int64 v27; // rdx
  unsigned int v28; // edx
  __int64 v29; // rdx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v31; // rdx
  int v32; // ecx
  __int64 v33; // rcx
  char v34; // si
  char v35; // r12
  __int64 v36; // rdx
  __int64 v38; // [rsp+30h] [rbp-59h] BYREF
  __int16 v39; // [rsp+38h] [rbp-51h]
  int v40; // [rsp+40h] [rbp-49h] BYREF
  int v41; // [rsp+44h] [rbp-45h]
  __int64 v42; // [rsp+48h] [rbp-41h]
  struct _DXGKARG_QUERYADAPTERINFO v43; // [rsp+50h] [rbp-39h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v44; // [rsp+80h] [rbp-9h] BYREF
  int v45; // [rsp+F0h] [rbp+67h] BYREF
  int v46; // [rsp+F8h] [rbp+6Fh] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v4 = a1;
  v45 = *(_DWORD *)(a2 + 24);
  v5 = a1;
  v38 = a1;
  v39 = 0;
  v6 = 0;
  v7 = 0;
  if ( !(unsigned __int8)DxgkIsAdapterCoreSyncAcquired(*(_QWORD *)(v2 + 4032), 1LL) )
  {
    DeviceDescriptor = AUTO_ADAPTER_LOCK::Acquire((AUTO_ADAPTER_LOCK *)&v38, v8);
    if ( DeviceDescriptor < 0 )
    {
      WdLogSingleEntry1(2LL);
      v11 = HIBYTE(v39) == 0;
      WdLogGlobalForLineNumber = 967;
      goto LABEL_4;
    }
    v7 = HIBYTE(v39);
    v5 = v38;
    v6 = v39;
  }
  *((_DWORD *)&v44.Type + 1) = 0;
  v44.pInputData = &v45;
  memset(&v44.InputDataSize, 0, 32);
  v44.Type = DXGKQAITYPE_INTEGRATED_DISPLAY_DESCRIPTOR2;
  v44.OutputDataSize = 128;
  v44.pOutputData = *(void **)(a2 + 104);
  v44.InputDataSize = 4;
  DeviceDescriptor = DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v2 + 4032), &v44);
  if ( DeviceDescriptor < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 985;
    if ( !v7 )
      return (unsigned int)DeviceDescriptor;
    v12 = v5;
    goto LABEL_6;
  }
  if ( v7 )
  {
    LOBYTE(v13) = v6;
    DpiReleaseCoreSyncAccessSafe(v5, v13);
  }
  v14 = *(_QWORD *)(a2 + 104);
  v15 = *(_BYTE *)(v14 + 123);
  if ( v15 == 1 )
  {
    v16 = *(_WORD *)(a2 + 92);
    *(_WORD *)(a2 + 94) = v16;
    *(_QWORD *)(a2 + 120) = 0LL;
    *(_WORD *)(a2 + 96) = 0;
    if ( v16 < 0x80u )
    {
      DeviceDescriptor = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1007;
      return (unsigned int)DeviceDescriptor;
    }
    if ( (unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline()
      && *(_QWORD *)(v2 + 6432) )
    {
      v17 = *(_QWORD *)(v2 + 4032);
      v38 = v4;
      v18 = 0;
      v39 = 0;
      v19 = 0;
      if ( !(unsigned __int8)DxgkIsAdapterCoreSyncAcquired(v17, 1LL) )
      {
        DeviceDescriptor = AUTO_ADAPTER_LOCK::Acquire((AUTO_ADAPTER_LOCK *)&v38, v20);
        if ( DeviceDescriptor < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1056;
LABEL_21:
          v11 = HIBYTE(v39) == 0;
          goto LABEL_4;
        }
        v19 = HIBYTE(v39);
        v18 = v39;
        v4 = v38;
      }
      DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(v2 + 4032));
      KeWaitForSingleObject(*(PVOID *)(a2 + 72), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v2 + 4032), 1LL);
      v21 = *(_DWORD *)(a2 + 24);
      v41 = *(unsigned __int16 *)(a2 + 94);
      v42 = *(_QWORD *)(a2 + 112);
      v40 = 1;
      DeviceDescriptor = DpiDxgkDdiQueryMonitorDescriptor(v2, v21, &v40);
      DxgkReleaseAdapterDdiSync(*(_QWORD *)(v2 + 4032));
      KeReleaseMutex(*(PRKMUTEX *)(a2 + 72), 0);
      DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(v2 + 4032));
      if ( v19 )
      {
        LOBYTE(v22) = v18;
        DpiReleaseCoreSyncAccessSafe(v4, v22);
      }
    }
    else
    {
      v23 = *(_QWORD *)(v2 + 4032);
      v41 = *(unsigned __int16 *)(a2 + 94);
      v42 = *(_QWORD *)(a2 + 112);
      v40 = 0;
      DxgkAcquireAdapterDdiSync(v23, 1LL);
      DeviceDescriptor = DpiDxgkDdiQueryDeviceDescriptor(
                           v2,
                           *(_QWORD *)(v2 + 40),
                           *(_QWORD *)(v2 + 48),
                           *(_DWORD *)(a2 + 24),
                           (__int64)&v40);
      DxgkReleaseAdapterDdiSync(*(_QWORD *)(v2 + 4032));
    }
    if ( DeviceDescriptor < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1091;
    }
    return (unsigned int)DeviceDescriptor;
  }
  if ( v15 != 2 )
  {
    WdLogSingleEntry2(2LL, *(unsigned __int8 *)(v14 + 123), *(unsigned int *)(a2 + 24));
    WdLogGlobalForLineNumber = 1225;
    return (unsigned int)-1073741811;
  }
  *(_WORD *)(a2 + 96) = *(_WORD *)(a2 + 92);
  *(_WORD *)(a2 + 94) = 0;
  *(_QWORD *)(a2 + 112) = 0LL;
  if ( (unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline()
    && *(_QWORD *)(v2 + 6432) )
  {
    v24 = *(_QWORD *)(v2 + 4032);
    v38 = v4;
    v25 = 0;
    v39 = 0;
    v26 = 0;
    if ( !(unsigned __int8)DxgkIsAdapterCoreSyncAcquired(v24, 1LL) )
    {
      DeviceDescriptor = AUTO_ADAPTER_LOCK::Acquire((AUTO_ADAPTER_LOCK *)&v38, v27);
      if ( DeviceDescriptor < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1180;
        goto LABEL_21;
      }
      v26 = HIBYTE(v39);
      v25 = v39;
      v4 = v38;
    }
    DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(v2 + 4032));
    KeWaitForSingleObject(*(PVOID *)(a2 + 72), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(v2 + 4032), 1LL);
    v28 = *(_DWORD *)(a2 + 24);
    v41 = *(unsigned __int16 *)(a2 + 96);
    v42 = *(_QWORD *)(a2 + 120);
    v40 = 2;
    DeviceDescriptor = DpiDxgkDdiQueryMonitorDescriptor(v2, v28, &v40);
    DxgkReleaseAdapterDdiSync(*(_QWORD *)(v2 + 4032));
    KeReleaseMutex(*(PRKMUTEX *)(a2 + 72), 0);
    DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(v2 + 4032));
    if ( !v26 )
    {
LABEL_48:
      if ( DeviceDescriptor < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1217;
      }
      return (unsigned int)DeviceDescriptor;
    }
    LOBYTE(v29) = v25;
LABEL_47:
    DpiReleaseCoreSyncAccessSafe(v4, v29);
    goto LABEL_48;
  }
  IsEnabledDeviceUsageNoInline = Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline();
  v31 = *(_QWORD *)(a2 + 120);
  v32 = *(_DWORD *)(a2 + 24);
  v40 = *(unsigned __int16 *)(a2 + 96);
  v42 = v31;
  v46 = v32;
  *(_QWORD *)&v43.Type = 20LL;
  *(_QWORD *)&v43.InputDataSize = 4LL;
  *(_QWORD *)&v43.Flags.0 = 0LL;
  HIDWORD(v43.hKmdProcessHandle) = 0;
  v43.OutputDataSize = 16;
  if ( !IsEnabledDeviceUsageNoInline )
  {
    v41 = 0;
    v43.pInputData = &v46;
    v43.pOutputData = &v40;
    DeviceDescriptor = DpiAcquireCoreSyncAccessSafe(v4, 0LL);
    if ( DeviceDescriptor < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1153;
      return (unsigned int)DeviceDescriptor;
    }
    DeviceDescriptor = DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v2 + 4032), &v43);
    v29 = 0LL;
    goto LABEL_47;
  }
  v33 = *(_QWORD *)(v2 + 4032);
  v41 = 0;
  v38 = v4;
  v43.pInputData = &v46;
  v34 = 0;
  v39 = 0;
  v43.pOutputData = &v40;
  v35 = 0;
  if ( (unsigned __int8)DxgkIsAdapterCoreSyncAcquired(v33, 1LL) )
  {
LABEL_42:
    DeviceDescriptor = DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v2 + 4032), &v43);
    if ( !v35 )
      goto LABEL_48;
    LOBYTE(v29) = v34;
    goto LABEL_47;
  }
  DeviceDescriptor = AUTO_ADAPTER_LOCK::Acquire((AUTO_ADAPTER_LOCK *)&v38, v36);
  if ( DeviceDescriptor >= 0 )
  {
    v35 = HIBYTE(v39);
    v34 = v39;
    v4 = v38;
    goto LABEL_42;
  }
  WdLogSingleEntry1(2LL);
  v11 = HIBYTE(v39) == 0;
  WdLogGlobalForLineNumber = 1126;
LABEL_4:
  if ( !v11 )
  {
    v12 = v38;
LABEL_6:
    LOBYTE(v10) = v39;
    DpiReleaseCoreSyncAccessSafe(v12, v10);
  }
  return (unsigned int)DeviceDescriptor;
}
