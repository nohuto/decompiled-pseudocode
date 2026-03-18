/*
 * XREFs of ??$AcquireDdiEnumeratorCachedModeInfo@V?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$mem_fun_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x14039488C
 * Callers:
 *     ?AcquireFirstModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x14018C110 (-AcquireFirstModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMO.c)
 *     ?AcquireFirstModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x14018C3A0 (-AcquireFirstModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODE.c)
 *     ?AcquirePinnedModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1403945C0 (-AcquirePinnedModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEM.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_SOURCE_MODE@@@?$Set@VDMMVIDPNSOURCEMODE@@@@SAPEAV12@QEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1400462B4 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_SOURCE_MODE@@@-$Set@VDMMVIDPNSOURCEMODE@@@@SAPEA.c)
 *     ?GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ @ 0x140096638 (-GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::mem_fun_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 Instance; // rsi
  int v12; // r8d
  int v13; // eax
  __int64 result; // rax

  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 490;
  }
  v6 = *(_BYTE *)(a1 + 136) == 0;
  *a3 = 0LL;
  if ( v6 )
  {
    WdLogSingleEntry1(2LL);
    result = 3223192352LL;
    WdLogGlobalForLineNumber = 500;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(__int64))a2)(a1 + *(int *)(a2 + 8));
    v10 = v7;
    if ( v7 )
    {
      Instance = Set<DMMVIDPNSOURCEMODE>::SetEnumerator<_D3DKMDT_VIDPN_SOURCE_MODE>::CreateInstance(v7);
      if ( Instance )
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
        *(_DWORD *)(Instance + 16) = *(_DWORD *)(v10 + 24);
        v12 = *(_DWORD *)(v10 + 72);
        *(_DWORD *)(Instance + 20) = v12;
        if ( v12 != 1 )
        {
          if ( v12 == 2 )
          {
            *(enum _D3DKMDT_TEXT_RENDERING_FORMAT *)(Instance + 24) = *DMMVIDPNSOURCEMODE::GetTextInfo((DMMVIDPNSOURCEMODE *)v10);
LABEL_9:
            *a3 = Instance + 16;
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
            return 0LL;
          }
          if ( (unsigned int)(v12 - 3) >= 2 )
          {
            if ( (unsigned int)(v12 - 1) <= 3 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 579;
            }
            goto LABEL_9;
          }
        }
        v13 = *(_DWORD *)(v10 + 72);
        if ( v13 != 1 && (unsigned int)(v13 - 3) > 1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 167;
        }
        *(_OWORD *)(Instance + 24) = *(_OWORD *)(v10 + 76);
        *(_OWORD *)(Instance + 40) = *(_OWORD *)(v10 + 92);
        goto LABEL_9;
      }
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 538;
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
      return 3221225495LL;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8) + 24) = a2;
      result = 3223192394LL;
      WdLogGlobalForLineNumber = 519;
    }
  }
  return result;
}
