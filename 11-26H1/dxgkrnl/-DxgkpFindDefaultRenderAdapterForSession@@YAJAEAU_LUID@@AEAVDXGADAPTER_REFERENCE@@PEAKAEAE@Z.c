/*
 * XREFs of ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z @ 0x14042C8BC
 * Callers:
 *     DxgkGetAdapter @ 0x1401E0400 (DxgkGetAdapter.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x14029F0F4 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x14004611C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?IsCurrentConsoleSession@@YAEXZ @ 0x14006CC34 (-IsCurrentConsoleSession@@YAEXZ.c)
 *     ?UseHWGPUInRemoteSpecifiedSession@DXGSESSIONMGR@@QEAAJKPEAE@Z @ 0x140204B14 (-UseHWGPUInRemoteSpecifiedSession@DXGSESSIONMGR@@QEAAJKPEAE@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DxgkpFindDefaultRenderAdapterForSession(
        struct _LUID *a1,
        DXGADAPTER **a2,
        unsigned int *a3,
        bool *a4)
{
  unsigned __int8 v4; // di
  DXGSESSIONMGR *v9; // rcx
  LONG *p_HighPart; // rdi
  struct DXGGLOBAL *v11; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v13; // rdx
  __int64 v15; // [rsp+20h] [rbp-40h]
  _QWORD v16[2]; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int8 v17; // [rsp+98h] [rbp+38h] BYREF

  v4 = 1;
  v17 = 1;
  if ( a3 )
  {
    v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 123);
    if ( v9 )
    {
      if ( (int)DXGSESSIONMGR::UseHWGPUInRemoteSpecifiedSession(v9, *a3, &v17) < 0 )
      {
        WdLogSingleEntry1(2LL);
        v15 = *a3;
        WdLogGlobalForLineNumber = 4720;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to get remote GPU preference for session %u, default to hw GPU",
          v15,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v4 = v17;
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 4725;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to find session manager",
        4725LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( *a2 )
    DXGADAPTER::ReleaseReference(*a2);
  *a2 = 0LL;
  *a4 = v4 == 0;
  if ( !v4 )
    goto LABEL_15;
  if ( (p_HighPart = &a1->HighPart, v16[0] = a1, v16[1] = a2, !a1->LowPart) && !*p_HighPart
    || (v11 = DXGGLOBAL::GetGlobal(),
        DXGGLOBAL::IterateAdaptersWithCallback(
          (__int64)v11,
          (__int64 (__fastcall *)(_QWORD *, __int64))FindHWRenderAdapterByLuid,
          (__int64)v16,
          2),
        !*a2) )
  {
    WdLogSingleEntry2(4LL, *p_HighPart, a1->LowPart);
    WdLogGlobalForLineNumber = 4748;
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)Global,
      (__int64 (__fastcall *)(_QWORD *, __int64))FindFirstHWRenderAdapter,
      (__int64)v16,
      2);
    if ( !*a2 )
    {
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 4757;
      if ( !*a2 )
      {
LABEL_15:
        DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v16);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
        if ( IsCurrentConsoleSession() )
          v13 = (struct DXGADAPTER *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 126);
        else
          v13 = (struct DXGADAPTER *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 124);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)a2, v13);
        if ( !*a2 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4779;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"DxgkGetAdapter(): BRD WARP is not available, returning 0x%I64x.",
            -1073741275LL,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v16);
          return 3221226021LL;
        }
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v16);
      }
    }
  }
  return 0LL;
}
