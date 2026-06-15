/*
 * XREFs of ?RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z @ 0x1800F5180
 * Callers:
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800F1D7C (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 *     ?DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800F26C4 (-DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800F4378 (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 * Callees:
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18006110C (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18006991C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     ??8EndpointInfo@@QEBA_NAEBV0@@Z @ 0x1800F0F9C (--8EndpointInfo@@QEBA_NAEBV0@@Z.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800F317C (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@QEAAAEAV?$CAutoPtr@VReacquireResourceWorkItem@@@2@AEAPEAU__POSITION@@@Z @ 0x1800F3260 (-GetNext@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VReac.c)
 *     ?GetPrintableId@EndpointInfo@@QEBAPEBGXZ @ 0x1800F3290 (-GetPrintableId@EndpointInfo@@QEBAPEBGXZ.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800F4378 (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     WPP_SF_SSd @ 0x1800F5BBC (WPP_SF_SSd.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CConstraintModelResourceManager::RevokeEndpointResourcesInGroup(
        struct _RTL_CRITICAL_SECTION *this,
        struct EndpointInfo *a2,
        int a3)
{
  int v6; // edi
  unsigned int PrintableId; // eax
  __int64 v8; // r10
  __int64 v9; // r8
  char v10; // r9
  __int64 v11; // rcx
  _QWORD *p_Type; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  LPCRITICAL_SECTION v16[5]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v17; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    PrintableId = (unsigned int)EndpointInfo::GetPrintableId(a2);
    WPP_SF_SSd(*(_QWORD *)(v8 + 16), 14, v9, PrintableId, v9, v10);
  }
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)v16,
    this + 2);
  p_Type = &this[3].DebugInfo->Type;
  v17 = p_Type;
  while ( p_Type )
  {
    v13 = ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v11, (__int64)p_Type);
    if ( EndpointInfo::operator==((__int64 *)a2, (__int64 *)(v13 + 304)) && *(_DWORD *)(v13 + 436) )
    {
      ++v6;
      *(_DWORD *)(v13 + 292) = 1;
    }
    ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::GetNext(
      v14,
      &v17);
    p_Type = v17;
  }
  ATL::CCritSecLock::~CCritSecLock(v16);
  if ( a3 )
    CConstraintModelResourceManager::ProcessRevokedResources(this);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, (__int64)&WPP_7a63d399f94f32cb8d4be129f7d61b2c_Traceguids, v6);
  }
  return 0LL;
}
