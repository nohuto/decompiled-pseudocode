/*
 * XREFs of ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x1800F4D50
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18006110C (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18006991C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?MarkWorkItemReleased@CConstraintModelResourceManager@@AEAAXPEA_K@Z @ 0x180087BAC (-MarkWorkItemReleased@CConstraintModelResourceManager@@AEAAXPEA_K@Z.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     ?FreeNode@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800F3134 (-FreeNode@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@AEA.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800F317C (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z @ 0x1800F31A0 (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVEndpointInfo@@PEAHPEAK@Z.c)
 *     ?GetNext@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@QEAAAEAV?$CAutoPtr@VReacquireResourceWorkItem@@@2@AEAPEAU__POSITION@@@Z @ 0x1800F3260 (-GetNext@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VReac.c)
 *     WPP_SF_I @ 0x1800F5A48 (WPP_SF_I.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CConstraintModelResourceManager::ReleaseResource(
        CConstraintModelResourceManager *this,
        unsigned __int64 *a2)
{
  unsigned int v4; // r12d
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // rsi
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdi
  int v11; // r13d
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  LPCRITICAL_SECTION v18[2]; // [rsp+20h] [rbp-20h] BYREF
  LPCRITICAL_SECTION v19[2]; // [rsp+30h] [rbp-10h] BYREF
  _QWORD *v20; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v21; // [rsp+88h] [rbp+48h] BYREF
  _QWORD *v22; // [rsp+90h] [rbp+50h] BYREF

  v4 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)v19,
    (struct _RTL_CRITICAL_SECTION *)this + 2);
  CConstraintModelResourceManager::MarkWorkItemReleased(this, a2);
  if ( *a2 )
  {
    v7 = (_QWORD *)((char *)this + 120);
    v8 = (_QWORD *)*((_QWORD *)this + 15);
    v20 = v8;
    while ( v8 )
    {
      v10 = ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v5, (__int64)v8);
      if ( *a2 == *(_QWORD *)v10 )
      {
        v11 = *(_DWORD *)(v10 + 296);
        if ( *(_DWORD *)(v10 + 436) )
        {
          LODWORD(v20) = 0;
          v21 = -1;
          CConstraintModelResourceManager::GetEndpointStatus(
            (struct _RTL_CRITICAL_SECTION *)this,
            (const struct EndpointInfo *)(v10 + 304),
            (int *)&v20,
            &v21);
          ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
            (__int64)v18,
            (struct _RTL_CRITICAL_SECTION *)((char *)this + 192));
          v12 = (_QWORD *)*((_QWORD *)this + 29);
          v22 = v12;
          while ( v12 )
          {
            (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v12[2] + 16LL))(v12[2], v10);
            ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::GetNext(
              v13,
              &v22);
            v12 = v22;
          }
          ATL::CCritSecLock::~CCritSecLock(v18);
          if ( (_DWORD)v20 )
          {
            if ( v21 != *(_DWORD *)(*(_QWORD *)(v10 + 448) + 16LL) )
              (*(void (__fastcall **)(CConstraintModelResourceManager *, _QWORD, __int64))(*(_QWORD *)this + 64LL))(
                this,
                v21,
                v10);
          }
        }
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)(v10 + 448));
        v14 = *v8;
        if ( v8 == (_QWORD *)*v7 )
          *v7 = v14;
        else
          *(_QWORD *)v8[1] = v14;
        v15 = v8[1];
        if ( v8 == *((_QWORD **)this + 16) )
          *((_QWORD *)this + 16) = v15;
        else
          *(_QWORD *)(*v8 + 8LL) = v15;
        ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::FreeNode((__int64)this + 120, v8);
        if ( v11 )
          goto LABEL_25;
        break;
      }
      ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::GetNext(
        v9,
        &v20);
      v8 = v20;
    }
    v16 = RmReleaseResources(*a2);
    v4 = v16;
    if ( v16 >= 0 )
      goto LABEL_25;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Du,
        (__int64)&WPP_7a63d399f94f32cb8d4be129f7d61b2c_Traceguids,
        v16);
    }
  }
  else
  {
LABEL_25:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 2), &WPP_GLOBAL_Control, v6, *a2);
    }
  }
  ATL::CCritSecLock::~CCritSecLock(v19);
  return v4;
}
