/*
 * XREFs of ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z @ 0x1800F31A0
 * Callers:
 *     ?DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800F26C4 (-DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4AUDIO_DIRECTION@@HK@Z @ 0x1800F3A78 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4A.c)
 *     ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x1800F4D50 (-ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z.c)
 * Callees:
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18006110C (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18006991C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ??8EndpointInfo@@QEBA_NAEBV0@@Z @ 0x1800F0F9C (--8EndpointInfo@@QEBA_NAEBV0@@Z.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800F317C (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@QEAAAEAV?$CAutoPtr@VReacquireResourceWorkItem@@@2@AEAPEAU__POSITION@@@Z @ 0x1800F3260 (-GetNext@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VReac.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CConstraintModelResourceManager::GetEndpointStatus(
        struct _RTL_CRITICAL_SECTION *this,
        const struct EndpointInfo *a2,
        int *a3,
        unsigned int *a4)
{
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 DebugInfo; // rax
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  LPCRITICAL_SECTION v15[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)v15,
    this + 2);
  v9 = -1;
  DebugInfo = (__int64)this[3].DebugInfo;
  v16 = DebugInfo;
  v11 = 0;
  while ( DebugInfo )
  {
    v12 = ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v8, DebugInfo);
    v14 = v12;
    if ( !*(_DWORD *)(v12 + 292)
      && EndpointInfo::operator==((__int64 *)a2, (__int64 *)(v12 + 304))
      && *(_DWORD *)(v14 + 432) < v9 )
    {
      v9 = *(_DWORD *)(v14 + 432);
    }
    ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::GetNext(
      v13,
      &v16);
    DebugInfo = v16;
  }
  LOBYTE(v11) = v9 != -1;
  *a3 = v11;
  *a4 = v9;
  ATL::CCritSecLock::~CCritSecLock(v15);
}
