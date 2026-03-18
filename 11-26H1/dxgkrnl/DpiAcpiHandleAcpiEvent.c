/*
 * XREFs of DpiAcpiHandleAcpiEvent @ 0x140411414
 * Callers:
 *     DpiAcpiHandleAcpiEventWork @ 0x1404112E0 (DpiAcpiHandleAcpiEventWork.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1400321CC (DpiCheckForOutstandingD3Requests.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline @ 0x14008592C (Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DpiPollAllDisplayChildren @ 0x14023A5C8 (DpiPollAllDisplayChildren.c)
 *     DpiAcpiProcessEventRequests @ 0x14025374C (DpiAcpiProcessEventRequests.c)
 *     DxgkAcquireAdapterCoreSync @ 0x14030D100 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x14030E1AC (DxgkReleaseAdapterCoreSync.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 *     DxgkReleaseAdapterDdiSync @ 0x140319D70 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x140319DFC (DxgkAcquireAdapterDdiSync.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiDxgkDdiNotifyAcpiEvent @ 0x1403FA058 (DpiDxgkDdiNotifyAcpiEvent.c)
 */

void __fastcall DpiAcpiHandleAcpiEvent(unsigned int *P)
{
  unsigned int v1; // r9d
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v3; // r12
  int v4; // ebx
  bool v5; // zf
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned int v9; // eax
  int v10; // edx
  int v11; // r15d
  __int64 v12; // rax
  unsigned int v13; // r14d
  char v14; // dl
  int v15; // eax
  unsigned int v16; // [rsp+38h] [rbp-49h] BYREF
  __int64 v17; // [rsp+40h] [rbp-41h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v18[2]; // [rsp+48h] [rbp-39h] BYREF
  _OWORD v19[5]; // [rsp+58h] [rbp-29h] BYREF

  v1 = P[6];
  v16 = 0;
  LOBYTE(v18[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v18, 0LL, 4u, v1);
  v3 = v18[1];
  AcquireMiniportListMutex();
  v4 = P[6];
  if ( v4 == 1 && (_BYTE)word_140168DDD && HIBYTE(word_140168DDD) && qword_140168DF0 == *((_QWORD *)P + 2) )
  {
    P[6] = 4;
    v4 = 4;
    *((_QWORD *)P + 2) = qword_140168DE8;
  }
  memset(v19, 0, 0x48uLL);
  v19[0] = 0x4000000006uLL;
  v5 = *((_QWORD *)P + 4) == 0LL;
  DWORD2(v19[3]) = P[7];
  HIDWORD(v19[3]) = !v5;
  memset(&v19[1], 0, 28);
  LODWORD(v19[3]) = 25;
  DWORD1(v19[3]) = v4;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v19, 0x200000000LL);
  if ( P[6] == 2 && P[7] == 4 && *((_QWORD *)P + 4) )
    _InterlockedCompareExchange(&dword_140169460, 0, 1);
  if ( (unsigned int)Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline()
    && P[7] == 1
    && *((_QWORD *)P + 4)
    && byte_140168DDA )
  {
    DpiPollAllDisplayChildren(v6, (__int64)v3);
  }
  while ( 1 )
  {
    v7 = qword_140168E08;
    if ( *(_QWORD *)v7 != v7 )
    {
      while ( 1 )
      {
        KeWaitForSingleObject((PVOID)(v7 + 72), Executive, 0, 0, 0LL);
        v8 = *(_QWORD *)(v7 + 56);
        if ( *(_QWORD *)v8 != v8 )
          break;
LABEL_54:
        KeReleaseMutex((PRKMUTEX)(v7 + 72), 0);
        v7 = *(_QWORD *)v7;
        if ( *(_QWORD *)v7 == qword_140168E08 )
          goto LABEL_55;
      }
      while ( 1 )
      {
        if ( *(_DWORD *)(v8 + 16) == 1953656900 && *(_DWORD *)(v8 + 20) == 2 )
        {
          v9 = P[6];
          if ( v9 != 1 && v9 != 4 )
            break;
          if ( *((_QWORD *)P + 2) == *(_QWORD *)(v8 + 24) )
            break;
        }
LABEL_53:
        v8 = *(_QWORD *)v8;
        if ( *(_QWORD *)v8 == *(_QWORD *)(v7 + 56) )
          goto LABEL_54;
      }
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v8 + 484) )
        DpiCheckForOutstandingD3Requests(v8);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v8 + 168), 1u);
      if ( *(_BYTE *)(v8 + 1157) != 1 || !*(_QWORD *)(v7 + 232) || *(_DWORD *)(v8 + 236) != 2 )
      {
LABEL_50:
        if ( *(_BYTE *)(v8 + 484) )
          DpiEnableD3Requests(*(_QWORD *)(v8 + 24));
        ExReleaseResourceLite(*(PERESOURCE *)(v8 + 168));
        KeLeaveCriticalRegion();
        goto LABEL_53;
      }
      v16 = 0;
      if ( *(_DWORD *)(v8 + 4120) == 1 || *(_DWORD *)(v8 + 284) != 1 )
      {
        v10 = 2;
      }
      else
      {
        DxgkAcquireAdapterCoreSync(*(_QWORD *)(v8 + 4032), 2);
        v10 = 1;
      }
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 4032), v10);
      v11 = DpiDxgkDdiNotifyAcpiEvent(v7, *(_QWORD *)(v8 + 48), P[6], P[7], *((_QWORD *)P + 4), &v16);
      if ( *(_DWORD *)(v8 + 4120) == 1 || *(_DWORD *)(v8 + 284) != 1 )
      {
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 4032));
      }
      else
      {
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 4032));
        DxgkReleaseAdapterCoreSync(*(_QWORD *)(v8 + 4032), 2u);
      }
      v12 = *(_QWORD *)(v8 + 4032);
      v13 = 0;
      if ( v12 )
      {
        v17 = *(_QWORD *)(v12 + 412);
        v13 = v17;
      }
      memset(v19, 0, 0x48uLL);
      *(_QWORD *)&v19[4] = *(_QWORD *)(v8 + 2696);
      v19[0] = 0x480000001EuLL;
      memset(&v19[1], 0, 28);
      LODWORD(v19[3]) = 42;
      *(_QWORD *)((char *)&v19[3] + 4) = __PAIR64__(v16, v13);
      HIDWORD(v19[3]) = v11;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v19, 0x200000000LL);
      if ( v11 >= 0 )
      {
        v14 = v16;
        if ( P[6] == 4 && ((-((v16 & 8) != 0) - 8) & v16) != 0 )
        {
          WdLogSingleEntry1(2LL);
          v14 = 0;
          v16 = 0;
          WdLogGlobalForLineNumber = 1849;
        }
        if ( (*(_BYTE *)(v8 + 4040) & 1) != 0 || (v14 & 7) == 0 )
          goto LABEL_46;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1861;
      }
      else
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 1839;
      }
      v16 = 0;
LABEL_46:
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 1868;
      if ( *(_DWORD *)(v8 + 4120) != 1 && *(_DWORD *)(v8 + 284) == 1 && (v16 & 7) != 0 )
        DpiAcpiProcessEventRequests(*(_QWORD *)(v8 + 24), v16, (__int64)P, v3);
      goto LABEL_50;
    }
LABEL_55:
    v15 = P[6];
    if ( v15 != 4 )
      break;
    v15 = 4;
    if ( (v16 & 8) == 0 )
      break;
    P[6] = 1;
    *((_QWORD *)P + 2) = qword_140168DF0;
  }
  if ( v15 == 2 && P[7] == 4 && !*((_QWORD *)P + 4) )
    _InterlockedCompareExchange(&dword_140169460, 1, 0);
  ReleaseMiniportListMutex();
  ExFreePoolWithTag(P, 0);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v18);
}
