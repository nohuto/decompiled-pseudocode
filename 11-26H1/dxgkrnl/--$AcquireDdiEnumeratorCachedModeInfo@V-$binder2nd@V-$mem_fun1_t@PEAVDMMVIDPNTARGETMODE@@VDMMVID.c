/*
 * XREFs of ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1402E1E54
 * Callers:
 *     ?AcquireNextModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x1402E1650 (-AcquireNextModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODES.c)
 *     ?AcquireNextModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x1402E1A70 (-AcquireNextModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMOD.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1400468D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@?$Set@VDMMVIDPNTARGETMODE@@@@SAPEAV12@QEBVDMMVIDPNTARGETMODE@@@Z @ 0x14004A2E8 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@-$Set@VDMMVIDPNTARGETMODE@@@@SAPEA.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x1402E269C (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET,DMMVIDPNTARGETMODE const *>>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 Instance; // rbx
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdi
  int v16; // eax

  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
  }
  v6 = *(_BYTE *)(a1 + 136) == 0;
  *a3 = 0LL;
  if ( v6 )
  {
    WdLogSingleEntry1(2LL);
    result = 3223192352LL;
    WdLogGlobalForLineNumber = 638;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))a2)(a1 + *(int *)(a2 + 8), *(_QWORD *)(a2 + 16));
    v10 = v7;
    if ( v7 )
    {
      Instance = Set<DMMVIDPNTARGETMODE>::SetEnumerator<_D3DKMDT_VIDPN_TARGET_MODE>::CreateInstance(v7);
      if ( Instance )
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
        v13 = Instance + 16;
        *(_DWORD *)v13 = *(_DWORD *)(v10 + 24);
        *(_OWORD *)(v13 + 8) = *(_OWORD *)(v10 + 72);
        *(_OWORD *)(v13 + 24) = *(_OWORD *)(v10 + 88);
        *(_OWORD *)(v13 + 40) = *(_OWORD *)(v10 + 104);
        *(_QWORD *)(v13 + 56) = *(_QWORD *)(v10 + 120);
        *(_DWORD *)(v13 + 64) = *(_DWORD *)(v10 + 128);
        if ( DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)v10) )
        {
          *(_QWORD *)(v13 + 68) = *(_QWORD *)(v10 + 144);
        }
        else
        {
          v14 = *(_QWORD *)(a1 + 112);
          if ( !*(_QWORD *)(v14 + 40) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 68;
          }
          v15 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v14 + 40) + 64LL) + 48);
          if ( !*(_QWORD *)(v15 + 8) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 68;
          }
          if ( (*(_DWORD *)(*(_QWORD *)(v15 + 8) + 24LL) & 0x20) != 0 )
            v16 = -2;
          else
            v16 = -1;
          *(_DWORD *)(v13 + 72) = v16;
          *(_DWORD *)(v13 + 68) = v16;
        }
        *a3 = v13;
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
        return 0LL;
      }
      else
      {
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 676;
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
        return 3221225495LL;
      }
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8) + 24) = a2;
      result = 3223192394LL;
      WdLogGlobalForLineNumber = 657;
    }
  }
  return result;
}
