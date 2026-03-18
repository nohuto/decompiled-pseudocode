/*
 * XREFs of DpiPdoGetDeviceDescriptor @ 0x140429A24
 * Callers:
 *     DpiPdoAddPdo @ 0x140442608 (DpiPdoAddPdo.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x140054320 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x140067340 (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     DpiIsValidEdid @ 0x14006D9AC (DpiIsValidEdid.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DpiFdoGetMonitorDescriptorFromDriver @ 0x140241C14 (DpiFdoGetMonitorDescriptorFromDriver.c)
 *     DpiPdoPollChild @ 0x140256998 (DpiPdoPollChild.c)
 *     DxgkReleaseAdapterDdiSync @ 0x140319D70 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x140319DFC (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1403DF030 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1403EA9FC (DxgkAcquireAdapterOpmI2CSync.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x14040E670 (DpiDxgkDdiQueryDeviceDescriptor.c)
 */

__int64 __fastcall DpiPdoGetDeviceDescriptor(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        char a5,
        char a6,
        int a7,
        _OWORD *a8)
{
  __int64 v8; // r14
  __int64 v12; // r15
  __int64 DeviceDescriptor; // rdi
  __int64 v14; // rcx
  size_t v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  void *v18; // rax
  __int64 v19; // rcx
  int v20; // edx
  void *Pool2; // rax
  _WORD *v22; // rax
  size_t Size[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v25; // [rsp+40h] [rbp-10h] BYREF

  v8 = *(_QWORD *)(a1 + 64);
  *(_OWORD *)Size = 0LL;
  v12 = *(_QWORD *)(v8 + 40);
  if ( *(_QWORD *)(a2 + 112) )
  {
    HIDWORD(Size[0]) = 256;
    Size[1] = ExAllocatePool2(256LL, 256LL, 1953656900LL);
    if ( !Size[1] )
    {
      LODWORD(DeviceDescriptor) = -1073741801;
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 2726;
LABEL_45:
      KeWaitForSingleObject((PVOID)(v8 + 3544), Executive, 0, 0, 0LL);
      *(_DWORD *)(a2 + 60) = 0;
      KeReleaseMutex((PRKMUTEX)(v8 + 3544), 0);
      goto LABEL_46;
    }
    v14 = *(unsigned __int16 *)(a2 + 94);
    if ( (unsigned int)v14 >= HIDWORD(Size[0]) )
    {
      v15 = HIDWORD(Size[0]);
    }
    else
    {
      memset((void *)(Size[1] + v14), 0, (unsigned int)(HIDWORD(Size[0]) - v14));
      v15 = *(unsigned __int16 *)(a2 + 94);
    }
    memmove((void *)Size[1], *(const void **)(a2 + 112), v15);
    LODWORD(DeviceDescriptor) = 0;
    goto LABEL_43;
  }
  if ( *(_DWORD *)a2 != 1 )
  {
    if ( ((*(_DWORD *)a2 - 2) & 0xFFFFFFFD) != 0 )
    {
      LODWORD(DeviceDescriptor) = -1073741823;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3051;
      goto LABEL_45;
    }
    HIDWORD(Size[0]) = 408;
    Pool2 = (void *)ExAllocatePool2(256LL, 408LL, 1953656900LL);
    Size[1] = (size_t)Pool2;
    if ( !Pool2 )
    {
      LODWORD(DeviceDescriptor) = -1073741801;
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 3005;
      goto LABEL_45;
    }
    memset(Pool2, 0, HIDWORD(Size[0]));
    KeWaitForSingleObject(*(PVOID *)(a2 + 72), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 4032), 1);
    DeviceDescriptor = (int)DpiDxgkDdiQueryDeviceDescriptor(
                              v8,
                              v12,
                              *(_QWORD *)(v8 + 48),
                              *(_DWORD *)(a2 + 24),
                              (unsigned int *)Size);
    DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 4032));
    KeReleaseMutex(*(PRKMUTEX *)(a2 + 72), 0);
    if ( (int)DeviceDescriptor < 0 )
    {
      WdLogSingleEntry2(2LL, *(_QWORD *)(v12 + 216), DeviceDescriptor);
      WdLogGlobalForLineNumber = 3029;
      goto LABEL_45;
    }
    v22 = (_WORD *)Size[1];
    *(_WORD *)(Size[1] + 100) = 0;
    v22[101] = 0;
    v22[152] = 0;
    v22[203] = 0;
    goto LABEL_43;
  }
  if ( (unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline()
    && *(_QWORD *)(v8 + 6432) )
  {
    v16 = *(_QWORD *)(v8 + 4032);
    v25 = 0LL;
    LODWORD(v25) = 1;
    DxgkAcquireAdapterOpmI2CSync(v16);
    KeWaitForSingleObject(*(PVOID *)(a2 + 72), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 4032), 1);
    LODWORD(DeviceDescriptor) = DpiFdoGetMonitorDescriptorFromDriver(v8, *(_DWORD *)(a2 + 24), &v25);
    DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 4032));
    KeReleaseMutex(*(PRKMUTEX *)(a2 + 72), 0);
    DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(v8 + 4032));
    if ( (int)DeviceDescriptor >= 0 )
    {
      HIDWORD(Size[0]) = DWORD1(v25);
      Size[1] = *((_QWORD *)&v25 + 1);
      if ( !*((_QWORD *)&v25 + 1) )
      {
        LODWORD(DeviceDescriptor) = -1071841279;
LABEL_14:
        if ( IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a2 + 4)) )
        {
          WdLogSingleEntry2(2LL, DpiDxgkDdiQueryDeviceDescriptor, v17);
          WdLogGlobalForLineNumber = 2879;
        }
        else
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 2885;
        }
        goto LABEL_44;
      }
LABEL_30:
      if ( !DpiIsValidEdid((const __m128i *)Size[1]) )
      {
        if ( IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a2 + 4)) )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 2965;
        }
        else
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 2971;
        }
        LODWORD(DeviceDescriptor) = -1073741823;
        goto LABEL_45;
      }
LABEL_43:
      *a8 = *(_OWORD *)Size;
      goto LABEL_44;
    }
  }
  else
  {
    HIDWORD(Size[0]) = 256;
    v18 = (void *)ExAllocatePool2(256LL, 256LL, 1953656900LL);
    Size[1] = (size_t)v18;
    if ( !v18 )
    {
      LODWORD(DeviceDescriptor) = -1073741801;
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 2784;
      goto LABEL_45;
    }
    memset(v18, 0, HIDWORD(Size[0]));
    KeWaitForSingleObject(*(PVOID *)(a2 + 72), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 4032), 1);
    LODWORD(DeviceDescriptor) = DpiDxgkDdiQueryDeviceDescriptor(
                                  v8,
                                  v12,
                                  *(_QWORD *)(v8 + 48),
                                  *(_DWORD *)(a2 + 24),
                                  (unsigned int *)Size);
    DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 4032));
    KeReleaseMutex(*(PRKMUTEX *)(a2 + 72), 0);
    if ( (_DWORD)DeviceDescriptor == -1071841272 )
    {
      Size[0] = 0x8000000000LL;
      memset((void *)Size[1], 0, 0x100uLL);
      KeWaitForSingleObject(*(PVOID *)(a2 + 72), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 4032), 1);
      LODWORD(DeviceDescriptor) = DpiDxgkDdiQueryDeviceDescriptor(
                                    v8,
                                    v12,
                                    *(_QWORD *)(v8 + 48),
                                    *(_DWORD *)(a2 + 24),
                                    (unsigned int *)Size);
      DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 4032));
      KeReleaseMutex(*(PRKMUTEX *)(a2 + 72), 0);
    }
  }
  if ( (_DWORD)DeviceDescriptor == -1071774719 || (_DWORD)DeviceDescriptor == -1071841279 )
    goto LABEL_14;
  if ( (int)DeviceDescriptor >= 0 )
    goto LABEL_30;
  WdLogSingleEntry1(3LL);
  WdLogGlobalForLineNumber = 2900;
  if ( a6 != 1 || *(_DWORD *)(a2 + 60) >= 3u )
    goto LABEL_45;
  KeWaitForSingleObject((PVOID)(v8 + 3544), Executive, 0, 0, 0LL);
  ++*(_DWORD *)(a2 + 60);
  if ( !*(_BYTE *)(a2 + 64) )
  {
    v19 = *(_QWORD *)(a1 + 64);
    *(_BYTE *)(a2 + 64) = 1;
    v20 = *(_DWORD *)(v19 + 3824);
    *(_DWORD *)(v19 + 3824) = v20 + 1;
    if ( !v20 )
      KeClearEvent((PRKEVENT)(v19 + 3832));
  }
  KeReleaseMutex((PRKMUTEX)(v8 + 3544), 0);
  LODWORD(DeviceDescriptor) = DpiPdoPollChild(a1, *(_DWORD *)(a2 + 24), a3, a4, a5);
  if ( (int)DeviceDescriptor >= 0 )
    LODWORD(DeviceDescriptor) = 259;
LABEL_44:
  if ( (_DWORD)DeviceDescriptor != 259 )
    goto LABEL_45;
LABEL_46:
  if ( (int)DeviceDescriptor < 0 || (_DWORD)DeviceDescriptor == 259 )
  {
    if ( Size[1] )
      ExFreePoolWithTag((PVOID)Size[1], 0);
  }
  return (unsigned int)DeviceDescriptor;
}
