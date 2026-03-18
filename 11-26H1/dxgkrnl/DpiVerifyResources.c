/*
 * XREFs of DpiVerifyResources @ 0x140401138
 * Callers:
 *     DpMapMemory @ 0x14041C3D0 (DpMapMemory.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14005D8A4 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400626DC (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DpiDecodeResourceDescriptorLength @ 0x140423D08 (DpiDecodeResourceDescriptorLength.c)
 */

__int64 __fastcall DpiVerifyResources(__int64 a1, __int64 *a2, __int64 a3, char a4, char a5, _DWORD *a6, __int64 a7)
{
  __int64 v7; // rbp
  unsigned int v8; // edi
  _QWORD *v9; // r12
  unsigned int v11; // ebx
  unsigned int *v12; // rdx
  __int64 v13; // rax
  unsigned int i; // esi
  unsigned int v15; // r12d
  unsigned int *v16; // r13
  unsigned int *v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  signed __int64 v20; // r8
  __int64 *j; // rsi
  signed __int64 v23; // rax
  unsigned __int8 (__fastcall *v24)(_QWORD, __int64, __int64, __int64 *, unsigned int **); // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rax
  unsigned int *v29; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v30; // [rsp+80h] [rbp+18h]
  char v31; // [rsp+88h] [rbp+20h]

  v31 = a4;
  v30 = a3;
  v7 = *(_QWORD *)(a1 + 64);
  v8 = 0;
  v9 = (_QWORD *)a7;
  v11 = a3;
  v29 = 0LL;
  *(_QWORD *)a7 = 0LL;
  v12 = *(unsigned int **)(v7 + 1312);
  v29 = v12;
  if ( v12 )
  {
    v13 = *a2;
    if ( *a2 != 786432 && v13 != 655360 && v13 != 944 && v13 != 960 )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= *v12 )
        {
          v8 = -1073741811;
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 4058;
          return v8;
        }
        v15 = 0;
        v16 = &v12[8 * i + 3 + i];
        while ( v15 < v16[1] )
        {
          v17 = &v16[5 * v15 + 2];
          if ( a4 == 1 )
          {
            if ( *(_BYTE *)v17 != 1 )
              goto LABEL_26;
            v18 = *(_QWORD *)&v16[5 * v15 + 3];
            v19 = v16[5 * v15 + 5];
          }
          else
          {
            if ( a4 || *(_BYTE *)v17 != 3 && *(_BYTE *)v17 != 7 )
              goto LABEL_26;
            v18 = *(_QWORD *)&v16[5 * v15 + 3];
            v19 = DpiDecodeResourceDescriptorLength();
            a4 = v31;
          }
          v23 = v18 + v19;
          if ( *a2 >= v18 )
          {
            v11 = v30;
            if ( *a2 + v30 <= v23 )
            {
              v9 = (_QWORD *)a7;
              goto LABEL_34;
            }
          }
LABEL_26:
          ++v15;
        }
        v12 = v29;
      }
    }
    if ( *(_BYTE *)(v7 + 1155) == 1 )
    {
      if ( v13 != 786432 )
      {
        v24 = *(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, __int64 *, unsigned int **))(v7 + 592);
        if ( v24 )
        {
          v25 = *a2;
          v29 = 0LL;
          LODWORD(a7) = a4 != 0;
          if ( v24(*(_QWORD *)(v7 + 568), v25, a3, &a7, &v29) == 1 )
            *a2 = (__int64)v29;
        }
      }
LABEL_34:
      KeWaitForSingleObject((PVOID)(v7 + 2544), Executive, 0, 0, 0LL);
      for ( j = *(__int64 **)(v7 + 2528); *j != *(_QWORD *)(v7 + 2528); j = (__int64 *)*j )
      {
        v20 = j[4];
        if ( *a2 < v20 + *((unsigned int *)j + 10) && *a2 + v11 > v20 )
        {
          a7 = (unsigned int)Feature_EnableNonCriticalAsserts__private_featureState;
          if ( (Feature_EnableNonCriticalAsserts__private_featureState & 0x10) == 0 )
          {
            LODWORD(a7) = Feature_EnableNonCriticalAsserts__private_featureState | 1;
            wil_details_FeatureReporting_ReportUsageToService(
              (__int64)&Feature_EnableNonCriticalAsserts__private_descriptor,
              a7,
              3LL);
            wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
              a7,
              3,
              (__int64)&Feature_EnableNonCriticalAsserts__private_descriptor);
          }
          v26 = *((unsigned int *)j + 14);
          *a6 = v26;
          if ( j[4] == *a2 && *((_DWORD *)j + 10) == v11 && *((_BYTE *)j + 45) == a5 )
          {
            if ( !a5 || (v27 = j[6], v27 == PsGetCurrentProcess(v26)) )
            {
              v28 = j[8];
              ++*((_DWORD *)j + 6);
              *v9 = v28;
            }
          }
          break;
        }
      }
      KeReleaseMutex((PRKMUTEX)(v7 + 2544), 0);
    }
    else
    {
      v8 = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3986;
    }
  }
  else
  {
    v8 = -1073741811;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 3927;
  }
  return v8;
}
