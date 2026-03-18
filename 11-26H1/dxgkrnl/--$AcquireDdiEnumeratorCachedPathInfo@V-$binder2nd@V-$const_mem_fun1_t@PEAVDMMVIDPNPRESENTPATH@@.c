/*
 * XREFs of ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x140385C18
 * Callers:
 *     ?AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140265870 (-AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEB.c)
 *     ?AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140385290 (-AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAP.c)
 *     ?AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEBU3@@Z @ 0x1403857C0 (-AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@SAPEAV12@QEBVDMMVIDPNPRESENTPATH@@@Z @ 0x140046DF8 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@-$Set@VDMMVIDPNPRESENTPATH@@@@SAP.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x14006D424 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x140385F00 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4)
{
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 Instance; // rsi
  _DWORD *v14; // rbx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION ContentRotationHw; // eax
  int v16; // ecx
  int MacroVisionTriggerBits; // eax
  __int64 v18; // rax
  __int64 result; // rax
  unsigned __int64 v20; // rdi
  void *v21; // rax
  void *v22; // rbp
  __int128 v23; // [rsp+20h] [rbp-38h]
  __int64 v24; // [rsp+30h] [rbp-28h]

  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1926;
  }
  v8 = *(_BYTE *)(a1 + 192) == 0;
  *a3 = 0LL;
  if ( v8 )
  {
    WdLogSingleEntry1(2LL);
    result = 3223192375LL;
    WdLogGlobalForLineNumber = 1936;
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))a2)(a1 + *(int *)(a2 + 8), *(_QWORD *)(a2 + 16));
    v12 = v9;
    if ( v9 )
    {
      Instance = Set<DMMVIDPNPRESENTPATH>::SetEnumerator<_D3DKMDT_VIDPN_PRESENT_PATH>::CreateInstance(v9);
      if ( Instance )
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
        v14 = (_DWORD *)(Instance + 16);
        *(_DWORD *)(Instance + 28) = *(_DWORD *)(v12 + 112);
        if ( a4 )
          ContentRotationHw = DMMVIDPNPRESENTPATH::GetContentRotationHw((DMMVIDPNPRESENTPATH *)v12);
        else
          ContentRotationHw = *(_DWORD *)(v12 + 116);
        *(_DWORD *)(Instance + 36) = ContentRotationHw;
        *(_DWORD *)(Instance + 24) = *(_DWORD *)(v12 + 104);
        *v14 = *(_DWORD *)(*(_QWORD *)(v12 + 88) + 24LL);
        *(_DWORD *)(Instance + 20) = *(_DWORD *)(*(_QWORD *)(v12 + 96) + 24LL);
        *(_DWORD *)(Instance + 80) = *(_DWORD *)(v12 + 164);
        v16 = *(_DWORD *)(v12 + 172);
        *(_DWORD *)(Instance + 84) = v16;
        *(_DWORD *)(Instance + 348) = *(_DWORD *)(v12 + 168);
        if ( v16 == 2 )
          MacroVisionTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits((DMMVIDPNPRESENTPATH *)v12);
        else
          MacroVisionTriggerBits = 0;
        *(_DWORD *)(Instance + 88) = MacroVisionTriggerBits;
        if ( Instance == -32 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 842;
        }
        *(_DWORD *)(Instance + 32) = *(_DWORD *)(v12 + 120);
        if ( Instance == -40 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 849;
        }
        *(_DWORD *)(Instance + 40) = *(_DWORD *)(v12 + 124);
        v18 = *(_QWORD *)(v12 + 184);
        if ( v18 )
        {
          v23 = *(_OWORD *)(v18 + 16);
          v24 = *(_QWORD *)(v18 + 32);
        }
        else
        {
          v23 = *(_OWORD *)&g_DefaultGammaRamp.Type;
          v24 = 0LL;
        }
        *(_OWORD *)(Instance + 352) = v23;
        *(_QWORD *)(Instance + 368) = v24;
        if ( !*(_QWORD *)(Instance + 368) )
          goto LABEL_17;
        v20 = *(_QWORD *)(Instance + 360);
        v21 = (void *)operator new[](v20, 0x4E506456u, 256LL);
        v22 = v21;
        if ( v21 )
        {
          memmove(v21, *(const void **)(Instance + 368), v20);
          *(_QWORD *)(Instance + 368) = v22;
LABEL_17:
          *a3 = v14;
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
          return 0LL;
        }
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 2029;
      }
      else
      {
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 1972;
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)Instance);
      return 3221225495LL;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10) + 24) = a2;
      result = 3223192359LL;
      WdLogGlobalForLineNumber = 1953;
    }
  }
  return result;
}
