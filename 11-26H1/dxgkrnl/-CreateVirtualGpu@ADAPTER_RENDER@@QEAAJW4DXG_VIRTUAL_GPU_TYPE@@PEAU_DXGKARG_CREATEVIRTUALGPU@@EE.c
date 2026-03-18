/*
 * XREFs of ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x140213900
 * Callers:
 *     DxgkDdiCreateVirtualGpu @ 0x140216B38 (DxgkDdiCreateVirtualGpu.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@34444@Z @ 0x140003684 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapBuffer@U_UNICODE_STR.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x140013EF0 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140055B10 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14005D8A4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400626DC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DxgpEnableIommuFromReference @ 0x1401A7254 (DxgpEnableIommuFromReference.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1402145A8 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1403AF638 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 *     ?GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z @ 0x1403F36A0 (-GetVirtualGpuManager@ADAPTER_RENDER@@QEAAPEAVDXGVIRTUALGPUMANAGER@@W4DXG_VIRTUAL_GPU_TYPE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateVirtualGpu(
        __int64 a1,
        int a2,
        _DWORD *a3,
        unsigned __int8 a4,
        char a5,
        char a6,
        __int64 a7)
{
  __int64 v7; // r12
  __int64 v9; // rsi
  int v10; // r13d
  __int64 *v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  _DWORD *v16; // rbx
  unsigned __int8 v17; // dl
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rbx
  struct DXGPROCESS *v26; // rcx
  struct _EPROCESS *v27; // [rsp+28h] [rbp-91h]
  __int64 v28; // [rsp+30h] [rbp-89h]
  __int64 v29; // [rsp+38h] [rbp-81h]
  __int64 v30; // [rsp+40h] [rbp-79h]
  __int64 v31; // [rsp+80h] [rbp-39h] BYREF
  int v32; // [rsp+88h] [rbp-31h] BYREF
  int v33; // [rsp+8Ch] [rbp-2Dh] BYREF
  int v34; // [rsp+90h] [rbp-29h] BYREF
  int v35; // [rsp+94h] [rbp-25h] BYREF
  int v36; // [rsp+98h] [rbp-21h] BYREF
  __int64 VirtualGpuManager; // [rsp+A0h] [rbp-19h] BYREF
  struct DXGPROCESS *v38; // [rsp+A8h] [rbp-11h] BYREF
  char v39; // [rsp+B0h] [rbp-9h]
  __int64 v40; // [rsp+B8h] [rbp-1h] BYREF
  unsigned __int16 *v41; // [rsp+C0h] [rbp+7h] BYREF

  LOBYTE(v7) = a4;
  v9 = a2;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
    McTemplateK0pqtqq_EtwWriteTransfer(a1, &CreateVirtualGpuStart, (__int64)a3, *(_QWORD *)(a1 + 16), *a3, a4, 0, 0);
  v10 = 0;
  v11 = (__int64 *)(a1 + 16);
  LODWORD(v15) = ADAPTER_RENDER::EnsureVirtualGpuProcess((ADAPTER_RENDER *)a1);
  if ( (int)v15 < 0 )
  {
    v10 = 8;
LABEL_6:
    v16 = a3;
    goto LABEL_23;
  }
  if ( (**(_DWORD **)(*v11 + 3048) & 0x200) != 0 && (_BYTE)v7 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1962;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CreateVirtualGpu failed due to blocklist disallowing paravirtualization for a high security scenario",
      1962LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v15) = -1073741823;
    v10 = 1;
    goto LABEL_6;
  }
  v17 = 1;
  if ( !g_ForceSecureVirtualMachine )
    v17 = v7;
  v7 = v17;
  VirtualGpuManager = ADAPTER_RENDER::GetVirtualGpuManager(a1, (unsigned int)v9, v13, v14);
  if ( !VirtualGpuManager )
  {
    v10 = 2;
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1976;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Creating a paravirtualzed GPU without setting partition count",
      1976LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v15) = -1073741811;
    goto LABEL_6;
  }
  if ( !DXGPROCESS::GetCurrent() )
  {
    LODWORD(v15) = DXGPROCESS::CreateDxgProcess(&v38, 0LL, 0LL, 0, 0LL);
    if ( (int)v15 < 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1992;
      v10 = 3;
      goto LABEL_6;
    }
  }
  if ( (_DWORD)v9 != 1 )
  {
    if ( (_DWORD)v9 )
      goto LABEL_21;
    v31 = (unsigned int)Feature_IoMmuIsolationForGPUP__private_featureState;
    if ( (Feature_IoMmuIsolationForGPUP__private_featureState & 0x10) == 0 )
    {
      LODWORD(v31) = Feature_IoMmuIsolationForGPUP__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_IoMmuIsolationForGPUP__private_descriptor,
        v31,
        3LL);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v31,
        3,
        (__int64)&Feature_IoMmuIsolationForGPUP__private_descriptor);
    }
    goto LABEL_37;
  }
  if ( (_BYTE)v7 )
  {
    if ( *(int *)(*v11 + 2776) <= 9216 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2008;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"The driver model does not support secure virtual GPU",
        2008LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v15) = -1073741637;
      v10 = 4;
      goto LABEL_6;
    }
    if ( *(_DWORD *)(*v11 + 420) != 1297040209 )
    {
LABEL_37:
      v23 = *v11;
      if ( (*(_DWORD *)(*v11 + 2508) & 0x800) != 0 )
      {
        v25 = *(_QWORD *)(v23 + 224);
        DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
          (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v38,
          (struct DXGPUSHLOCKFAST *)(a1 + 1840));
        v15 = (int)DxgpEnableIommuFromReference(v25, 4LL, (__int64 *)(a1 + 1824));
        if ( v39 )
        {
          v26 = v38;
          *((_QWORD *)v38 + 1) = 0LL;
          ExReleasePushLockExclusiveEx(v26, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( (int)v15 < 0 )
        {
          WdLogSingleEntry3(2LL, v9, v7, v15);
          WdLogGlobalForLineNumber = 2059;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to enable IoMmu for virtual GPU. VirtualGpuType=%u, Secure=%u. Status=0x%.8x",
            v9,
            v7,
            v15,
            0LL,
            0LL);
          LODWORD(v9) = a2;
          v10 = 6;
          goto LABEL_6;
        }
      }
      else if ( (*(_DWORD *)(v23 + 3100) & 8) == 0 )
      {
        v24 = *(_DWORD *)(v23 + 444);
        if ( (v24 & 8) == 0 && (v24 & 4) == 0 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 2046;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"The driver does not support IOMMU isolation and does not bypass this requirement for secure mode",
            2046LL,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v15) = -1073741637;
          v10 = 5;
          goto LABEL_6;
        }
      }
    }
  }
LABEL_21:
  LOBYTE(v18) = v7;
  v16 = a3;
  LOBYTE(v19) = a5;
  LOBYTE(v27) = a6;
  LODWORD(v15) = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64, _DWORD, __int64))(*(_QWORD *)VirtualGpuManager
                                                                                                 + 16LL))(
                   VirtualGpuManager,
                   a3,
                   v18,
                   v19,
                   (_DWORD)v27,
                   a7);
  if ( (int)v15 < 0 )
    v10 = 7;
LABEL_23:
  if ( (unsigned int)dword_140166660 > 5 && tlgKeywordOn((__int64)&dword_140166660, 0x400000008000LL) )
  {
    v21 = *v11;
    v36 = v15;
    LODWORD(VirtualGpuManager) = v10;
    LODWORD(v31) = v9;
    v32 = *(_DWORD *)(v21 + 432);
    v33 = *(_DWORD *)(v21 + 428);
    v34 = *(_DWORD *)(v21 + 424);
    v35 = *(_DWORD *)(v21 + 420);
    v40 = *(_QWORD *)(v21 + 412);
    v41 = *(unsigned __int16 **)(v21 + 1968);
    v38 = (struct DXGPROCESS *)0x2000000;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v21,
      (__int64)&unk_140143ECF,
      v13,
      v20,
      (__int64)&v38,
      (__int64)&v31,
      (__int64)&VirtualGpuManager,
      (__int64)&v36,
      &v41,
      (__int64)&v40,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32);
  }
  if ( bTracingEnabled )
  {
    if ( (int)v15 < 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
    {
      LODWORD(v30) = v10;
      LODWORD(v29) = v15;
      LODWORD(v28) = (unsigned __int8)v7;
      LODWORD(v27) = *v16;
      McTemplateK0pqtqq_EtwWriteTransfer(v12, &CreateVirtualGpuFailed, v13, *v11, v27, v28, v29, v30);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
    {
      LODWORD(v30) = v10;
      LODWORD(v29) = v15;
      LODWORD(v28) = (unsigned __int8)v7;
      LODWORD(v27) = *v16;
      McTemplateK0pqtqq_EtwWriteTransfer(v12, &CreateVirtualGpuEnd, v13, *v11, v27, v28, v29, v30);
    }
  }
  return (unsigned int)v15;
}
