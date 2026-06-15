/*
 * XREFs of ?GetCurrentLoopbackEndpointIdInternal@@YAJPEAGPEAPEAGPEA_N@Z @ 0x1800FD648
 * Callers:
 *     ?GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z @ 0x1800FD540 (-GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z.c)
 *     ?IsLooseMatch@@YA_NQEAG0@Z @ 0x1800FE640 (-IsLooseMatch@@YA_NQEAG0@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180013A08 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800402CC (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18005E4A0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800F9324 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@V-$basic.c)
 *     ?GetActiveRenderEndpointWithFallbackToDefault@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEAPEAGPEA_N@Z @ 0x1800FD25C (-GetActiveRenderEndpointWithFallbackToDefault@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002.c)
 *     ?IsValidAECLoopbackSelectionMode@@YA_NPEBG@Z @ 0x1800FE740 (-IsValidAECLoopbackSelectionMode@@YA_NPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetCurrentLoopbackEndpointIdInternal(unsigned __int16 *a1, unsigned __int16 **a2, bool *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // ebx
  int v10; // ebx
  int ActiveRenderEndpointWithFallbackToDefault; // ebx
  __int64 v12; // rdx
  _BYTE v14[16]; // [rsp+20h] [rbp-58h] BYREF
  void *v15[4]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *a2 = 0LL;
  *a3 = 0;
  if ( IsValidAECLoopbackSelectionMode(a1) )
  {
    std::wstring::wstring((char **)v15, a1);
    v9 = *(_DWORD *)(*(_QWORD *)std::map<std::wstring,enum AEC_LOOPBACK_SELECTION_MODE>::_Try_emplace<std::wstring,>(
                                  v8,
                                  (__int64)v14,
                                  (__int64)v15)
                   + 64LL);
    std::wstring::~wstring(v15);
    v10 = v9 - 2;
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        ActiveRenderEndpointWithFallbackToDefault = GetActiveRenderEndpointWithFallbackToDefault(0, a2, a3);
        if ( ActiveRenderEndpointWithFallbackToDefault < 0 )
        {
          v12 = 1748LL;
LABEL_8:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v12,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)ActiveRenderEndpointWithFallbackToDefault);
          return (unsigned int)ActiveRenderEndpointWithFallbackToDefault;
        }
      }
    }
    else
    {
      ActiveRenderEndpointWithFallbackToDefault = GetActiveRenderEndpointWithFallbackToDefault(2u, a2, a3);
      if ( ActiveRenderEndpointWithFallbackToDefault < 0 )
      {
        v12 = 1743LL;
        goto LABEL_8;
      }
    }
  }
  else if ( a1 )
  {
    ActiveRenderEndpointWithFallbackToDefault = _AllocString<CTCoAllocPolicy>(v7, v6, a1, a2);
    if ( ActiveRenderEndpointWithFallbackToDefault < 0 )
    {
      v12 = 1758LL;
      goto LABEL_8;
    }
    *a3 = 1;
  }
  return 0LL;
}
