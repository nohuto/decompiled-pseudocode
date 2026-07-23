/*
 * XREFs of PspSchedulerSharedDataRegionCreate @ 0x140988354
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByPointerWithTag @ 0x140436600 (ObReferenceObjectByPointerWithTag.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14052F77C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140534EB0 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     MiMapViewInSystemSpace @ 0x140988260 (MiMapViewInSystemSpace.c)
 *     MmCreateSection @ 0x140989F80 (MmCreateSection.c)
 *     MmMapViewOfSection @ 0x140992F30 (MmMapViewOfSection.c)
 */

__int64 __fastcall PspSchedulerSharedDataRegionCreate(_KPROCESS *Object, _QWORD *a2)
{
  char PreviousMode; // bl
  int v5; // eax
  _QWORD *v6; // rbx
  int Section; // edi
  __int64 v8; // rcx
  char *v9; // rdx
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 Tag; // [rsp+20h] [rbp-40h]
  PVOID Objecta; // [rsp+50h] [rbp-10h] BYREF
  __int64 v17; // [rsp+58h] [rbp-8h] BYREF
  unsigned __int64 v18; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+58h] BYREF

  v17 = 0LL;
  v19 = 0LL;
  Objecta = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v18 = (unsigned int)Feature_UserModeAutoBoost__private_featureState;
  if ( (Feature_UserModeAutoBoost__private_featureState & 0x10) == 0 )
  {
    LODWORD(v18) = Feature_UserModeAutoBoost__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_UserModeAutoBoost__private_descriptor,
      Feature_UserModeAutoBoost__private_featureState | 1,
      3);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v18,
      3,
      (__int64)&Feature_UserModeAutoBoost__private_descriptor);
  }
  if ( Object != KeGetCurrentThread()->ApcState.Process )
    return (unsigned int)-1073741637;
  v5 = ObCreateObjectEx(PreviousMode, PspSchedulerSharedDataType, 0LL, PreviousMode, Tag, 248, 0, 0, &Objecta, 0LL);
  v6 = Objecta;
  Section = v5;
  if ( v5 >= 0 )
  {
    memset_0(Objecta, 0, 0xF8uLL);
    v6[25] = 0LL;
    v6[27] = (char *)v6 + 228;
    *((_DWORD *)v6 + 52) = 128;
    *((_DWORD *)v6 + 56) = 0;
    Section = ObReferenceObjectByPointerWithTag(Object, 0x200u, (POBJECT_TYPE)PsProcessType, 0, 0x61537350u);
    if ( Section >= 0 )
    {
      v6[20] = Object;
      v18 = 0x2000LL;
      Section = MmCreateSection((int)v6 + 168, 6, 0, (unsigned int)&v18, 4, 0x4000000, 0LL, 0LL);
      if ( Section >= 0 )
      {
        v8 = v6[21];
        v18 = 0x2000LL;
        Objecta = 0LL;
        Section = MiMapViewInSystemSpace(v8, v6 + 22, &v18, (__int64 *)&Objecta, 0LL);
        if ( Section >= 0 )
        {
          v9 = (char *)(v6 + 1);
          v10 = 2LL;
          v11 = 0LL;
          do
          {
            v12 = v6[22];
            *((_QWORD *)v9 + 1) = 0LL;
            v13 = v11 + v12;
            *((_QWORD *)v9 - 1) = v13;
            *(_QWORD *)v9 = 0LL;
            *((_QWORD *)v9 + 2) = 0LL;
            v11 += 4096LL;
            *((_WORD *)v9 + 13) = 0;
            *((_WORD *)v9 + 12) = 8 * (((unsigned __int16)((v13 & 0xFFF) + 0x1FFF) >> 12) + 6);
            *((_DWORD *)v9 + 14) = 4096;
            v9 += 80;
            *((_QWORD *)v9 - 4) = v13 & 0xFFFFFFFFFFFFF000uLL;
            *((_DWORD *)v9 - 5) = v13 & 0xFFF;
            --v10;
          }
          while ( v10 );
          Section = MmMapViewOfSection(
                      v6[21],
                      (_DWORD)Object,
                      (int)v6 + 184,
                      0,
                      0LL,
                      (__int64)&v17,
                      (__int64)&v18,
                      1,
                      0x400000,
                      4);
          if ( Section >= 0 )
          {
            Section = ObInsertObjectEx((char *)v6, 0LL, 1, 0, 0, 0LL, &v19);
            if ( Section < 0 )
              return (unsigned int)Section;
            v6 = 0LL;
            *a2 = v19;
            Section = 0;
            v19 = 0LL;
          }
        }
      }
    }
  }
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)Section;
}
