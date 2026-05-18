/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x18000BA88
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000B93C (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 * Callees:
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x18000A474 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     wil_details_FeatureReporting_IncrementOpportunityInCache @ 0x18000E894 (wil_details_FeatureReporting_IncrementOpportunityInCache.c)
 *     wil_details_FeatureReporting_IncrementUsageInCache @ 0x18000E988 (wil_details_FeatureReporting_IncrementUsageInCache.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  int v9; // r12d
  unsigned int v12; // esi
  unsigned int v13; // r8d
  unsigned __int32 v14; // eax
  BOOL v15; // edi
  unsigned __int32 v16; // ett
  int v17; // ecx
  signed __int32 i; // edx
  signed __int32 v19; // r8d
  signed __int32 v20; // eax
  __int64 v21; // r8
  void (__fastcall *v22)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  void (__fastcall *v23)(__int64 *, void (*)(), __int64); // rax
  void (__fastcall *v24)(_QWORD, __int64, _QWORD, _QWORD); // rax
  __int64 v25; // rdx
  __int128 v27; // [rsp+30h] [rbp-20h] BYREF
  _BOOL8 v28; // [rsp+40h] [rbp-10h]

  v28 = 0LL;
  v9 = a3;
  v12 = 1;
  v27 = 0LL;
  switch ( a5 )
  {
    case 0u:
      goto LABEL_37;
    case 1u:
LABEL_36:
      wil_details_FeatureReporting_IncrementOpportunityInCache(a1, a5, a3, &v27);
LABEL_38:
      v15 = v28;
      goto LABEL_39;
    case 2u:
    case 3u:
      goto LABEL_19;
    case 4u:
LABEL_37:
      wil_details_FeatureReporting_IncrementUsageInCache(a1, a5, a3, &v27);
      goto LABEL_38;
    case 5u:
      goto LABEL_36;
  }
  if ( a5 - 6 >= 2 )
  {
    v13 = a5 - 320;
    if ( (int)(a5 - 320) >= 64 )
    {
      v15 = v28;
    }
    else
    {
      v14 = *((_DWORD *)a1 + 1);
      do
      {
        v15 = (v14 & 0x10) != 0 && ((v14 >> 5) & 0x3F) == v13;
        v16 = v14;
        v14 = _InterlockedCompareExchange(
                a1 + 1,
                v14 ^ ((unsigned __int16)v14 ^ (unsigned __int16)(32 * v13)) & 0x7E0 | 0x10,
                v14);
      }
      while ( v16 != v14 );
      if ( v15 )
        goto LABEL_39;
    }
    DWORD2(v27) = a5;
    DWORD1(v27) = 1;
    goto LABEL_39;
  }
LABEL_19:
  v17 = 0;
  switch ( a5 )
  {
    case 2u:
      v17 = 2;
      break;
    case 3u:
      v17 = 8;
      break;
    case 6u:
      v17 = 4;
      break;
    case 7u:
      v17 = 16;
      break;
  }
  for ( i = *a1; ; i = v20 )
  {
    v15 = (i | v17) == i;
    v19 = i | v17 | 1;
    if ( (i | v17) == i )
      v19 = i | v17;
    v20 = _InterlockedCompareExchange(a1, v19, i);
    if ( i == v20 )
      break;
  }
  LODWORD(v27) = (v19 & 1) != 0 && (i & 1) == 0;
LABEL_39:
  if ( g_wil_details_RecordSRUMFeatureUsage && (!a5 || a5 - 100 <= 0x31) )
    g_wil_details_RecordSRUMFeatureUsage(a2, a5, 1LL);
  if ( (_DWORD)v27 )
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      a2,
      (struct wil_details_FeatureReportingCache *)a1);
  v21 = DWORD1(v27);
  if ( DWORD1(v27) )
  {
    v22 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage
      || (v22 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))g_wil_details_apiRecordFeatureUsage) != 0LL )
    {
      v22(a2, DWORD2(v27), DWORD1(v27), 0LL);
    }
  }
  if ( !v15 && wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&SRWLock);
    if ( !qword_18001A3C0 )
    {
      v23 = (void (__fastcall *)(__int64 *, void (*)(), __int64))g_wil_details_internalSubscribeFeatureStateChangeNotification;
      qword_18001A3C0 = 0LL;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
        || (v23 = (void (__fastcall *)(__int64 *, void (*)(), __int64))g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
      {
        v23(
          &qword_18001A3C0,
          `wil::details::RecordFeatureUsageCallback'::`17'::_lambda_1_::_lambda_invoker_cdecl_,
          -1LL);
      }
    }
    ReleaseSRWLockExclusive(&SRWLock);
  }
  if ( v9 )
  {
    v24 = (void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))g_wil_details_internalRecordFeatureUsage;
    v25 = a5;
    LODWORD(v25) = a5 | 0x80000000;
    if ( !a4 )
      v25 = a5;
    if ( g_wil_details_internalRecordFeatureUsage
      || (v24 = (void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))g_wil_details_apiRecordFeatureUsage) != 0LL )
    {
      v24(a2, v25, 0LL, 0LL);
    }
  }
  if ( v15 )
  {
    return 0;
  }
  else if ( g_wil_details_realtimeFeatureUsageHook )
  {
    LOBYTE(v21) = a8;
    g_wil_details_realtimeFeatureUsageHook(a2, a5, v21);
  }
  return v12;
}
