/*
 * XREFs of ?ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800F4CC0
 * Callers:
 *     ?Shutdown@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800F5594 (-Shutdown@CConstraintModelResourceManager@@AEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18006110C (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18006991C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800F317C (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@QEAAAEAV?$CAutoPtr@VReacquireResourceWorkItem@@@2@AEAPEAU__POSITION@@@Z @ 0x1800F3260 (-GetNext@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VReac.c)
 *     ?RemoveAll@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x1800F4F64 (-RemoveAll@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QE.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CConstraintModelResourceManager::ReleaseAllResources(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  __int64 v2; // rcx
  _QWORD *p_Type; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  LPCRITICAL_SECTION v6[3]; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = this + 3;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)v6,
    this + 2);
  p_Type = &v1->DebugInfo->Type;
  v7 = &v1->DebugInfo->Type;
  while ( p_Type )
  {
    v4 = (_QWORD *)ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v2, (__int64)p_Type);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(v4 + 56);
    RmReleaseResources(*v4);
    *v4 = 0LL;
    ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::GetNext(
      v5,
      &v7);
    p_Type = v7;
  }
  ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::RemoveAll(v1);
  ATL::CCritSecLock::~CCritSecLock(v6);
}
