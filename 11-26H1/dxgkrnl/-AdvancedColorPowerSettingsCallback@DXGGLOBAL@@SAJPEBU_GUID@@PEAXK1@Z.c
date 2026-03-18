/*
 * XREFs of ?AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z @ 0x1403B4880
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x14007B94C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x14007BBE4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BE04 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     memcmp @ 0x1400A6320 (memcmp.c)
 *     ?HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ @ 0x1401DD818 (-HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z @ 0x1403B54E0 (-DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z.c)
 *     ?FindDisplayModeResetNeededDueToHdrPowerPolicy@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403B5500 (-FindDisplayModeResetNeededDueToHdrPowerPolicy@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 */

__int64 __fastcall DXGGLOBAL::AdvancedColorPowerSettingsCallback(
        LPCGUID SettingGuid,
        _DWORD *Value,
        ULONG ValueLength,
        PVOID Context)
{
  char v6; // bl
  struct DXGGLOBAL *Global; // r14
  int DisplayModeResetNeededDueToHdrPowerPolicy; // esi
  DXGGLOBAL *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGSESSIONDATA *SessionData; // rbp
  _QWORD **v14; // r14
  _QWORD *v15; // rdi
  _QWORD *v16; // rax
  bool v17; // zf
  _QWORD *v18; // rbx
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  DXGGLOBAL *v21; // rcx
  DXGADAPTERLISTLOCK *v23[2]; // [rsp+50h] [rbp-28h] BYREF
  char v24; // [rsp+90h] [rbp+18h] BYREF

  if ( ValueLength < 4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7432;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ValueLength >= sizeof(DWORD)", 7432LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *Value >= 2u )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7433;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(*(DWORD*)pValue == 0) || (*(DWORD*)pValue == 1)",
      7433LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !memcmp(SettingGuid, &GUID_ADVANCED_COLOR_QUALITY_BIAS, 0x10uLL) )
  {
    v6 = *Value != 0;
    if ( v6 != *((_BYTE *)DXGGLOBAL::GetGlobal() + 305220) )
    {
      *((_BYTE *)DXGGLOBAL::GetGlobal() + 305220) = v6;
      v24 = 0;
      Global = DXGGLOBAL::GetGlobal();
      DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK(
        (DXGAUTOADAPTERLISTLOCK *)v23,
        (struct DXGGLOBAL *)((char *)Global + 680));
      DisplayModeResetNeededDueToHdrPowerPolicy = 0;
      if ( (PEPROCESS)PsGetCurrentProcess(PsInitialSystemProcess) == PsInitialSystemProcess )
      {
        SessionData = 0LL;
      }
      else
      {
        v9 = DXGGLOBAL::GetGlobal();
        SessionData = DXGGLOBAL::GetSessionData(v9, v10, v11, v12);
      }
      DXGAUTOADAPTERLISTLOCK::AcquireShared(v23);
      v14 = (_QWORD **)((char *)Global + 808);
      v15 = *v14;
      while ( 1 )
      {
LABEL_11:
        v16 = 0LL;
        if ( v15 != v14 )
          v16 = v15;
        if ( !v16 || DisplayModeResetNeededDueToHdrPowerPolicy )
          break;
        v17 = v15 == v14;
        v18 = v15;
        v15 = (_QWORD *)*v15;
        if ( v17 )
          v18 = 0LL;
        _m_prefetchw(v18 + 3);
        v19 = v18[3];
        while ( v19 )
        {
          v20 = v19;
          v19 = _InterlockedCompareExchange64(v18 + 3, v19 + 1, v19);
          if ( v20 == v19 )
          {
            if ( v18[395] )
            {
              if ( DxgkpCanEnumerateAdapter(SessionData, (struct DXGADAPTER *)v18) )
                DisplayModeResetNeededDueToHdrPowerPolicy = FindDisplayModeResetNeededDueToHdrPowerPolicy(
                                                              (struct DXGADAPTER *)v18,
                                                              &v24);
            }
            DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
            goto LABEL_11;
          }
        }
      }
      DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v23);
      if ( DisplayModeResetNeededDueToHdrPowerPolicy == -2147483622 && v24 )
      {
        DXGGLOBAL::GetGlobal();
        DXGGLOBAL::HdrPowerPolicyChangeCallout(v21);
      }
    }
  }
  return 0LL;
}
