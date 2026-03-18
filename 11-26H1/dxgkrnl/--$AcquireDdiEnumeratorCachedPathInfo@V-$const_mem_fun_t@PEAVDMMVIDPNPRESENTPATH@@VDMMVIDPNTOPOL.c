/*
 * XREFs of ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x140386924
 * Callers:
 *     ?AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140386640 (-AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEA.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@SAPEAV12@QEBVDMMVIDPNPRESENTPATH@@@Z @ 0x140046DF8 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@-$Set@VDMMVIDPNPRESENTPATH@@@@SAP.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x14006D424 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::const_mem_fun_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 Instance; // rbp
  _DWORD *v12; // rbx
  int v13; // edx
  int v14; // ecx
  int MacroVisionTriggerBits; // eax
  __int64 v16; // rax
  __int64 result; // rax
  unsigned __int64 v18; // rdi
  void *v19; // rax
  void *v20; // rsi
  __int128 v21; // [rsp+20h] [rbp-28h]
  __int64 v22; // [rsp+30h] [rbp-18h]

  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1926;
  }
  v6 = *(_BYTE *)(a1 + 192) == 0;
  *a3 = 0LL;
  if ( v6 )
  {
    WdLogSingleEntry1(2LL);
    result = 3223192375LL;
    WdLogGlobalForLineNumber = 1936;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(__int64))a2)(a1 + *(int *)(a2 + 8));
    v10 = v7;
    if ( v7 )
    {
      Instance = Set<DMMVIDPNPRESENTPATH>::SetEnumerator<_D3DKMDT_VIDPN_PRESENT_PATH>::CreateInstance(v7);
      if ( Instance )
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
        v12 = (_DWORD *)(Instance + 16);
        *(_DWORD *)(Instance + 28) = *(_DWORD *)(v10 + 112);
        v13 = *(_DWORD *)(v10 + 116);
        if ( v13 != 254 && v13 && v13 != 255 && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 96) + 96LL) + 407LL) )
          v13 = 1;
        *(_DWORD *)(Instance + 36) = v13;
        *(_DWORD *)(Instance + 24) = *(_DWORD *)(v10 + 104);
        *v12 = *(_DWORD *)(*(_QWORD *)(v10 + 88) + 24LL);
        *(_DWORD *)(Instance + 20) = *(_DWORD *)(*(_QWORD *)(v10 + 96) + 24LL);
        *(_DWORD *)(Instance + 80) = *(_DWORD *)(v10 + 164);
        v14 = *(_DWORD *)(v10 + 172);
        *(_DWORD *)(Instance + 84) = v14;
        *(_DWORD *)(Instance + 348) = *(_DWORD *)(v10 + 168);
        if ( v14 == 2 )
          MacroVisionTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits((DMMVIDPNPRESENTPATH *)v10);
        else
          MacroVisionTriggerBits = 0;
        *(_DWORD *)(Instance + 88) = MacroVisionTriggerBits;
        if ( Instance == -32 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 842;
        }
        *(_DWORD *)(Instance + 32) = *(_DWORD *)(v10 + 120);
        if ( Instance == -40 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 849;
        }
        *(_DWORD *)(Instance + 40) = *(_DWORD *)(v10 + 124);
        v16 = *(_QWORD *)(v10 + 184);
        if ( v16 )
        {
          v21 = *(_OWORD *)(v16 + 16);
          v22 = *(_QWORD *)(v16 + 32);
        }
        else
        {
          v21 = *(_OWORD *)&g_DefaultGammaRamp.Type;
          v22 = 0LL;
        }
        *(_OWORD *)(Instance + 352) = v21;
        *(_QWORD *)(Instance + 368) = v22;
        if ( !*(_QWORD *)(Instance + 368) )
          goto LABEL_16;
        v18 = *(_QWORD *)(Instance + 360);
        v19 = (void *)operator new[](v18, 0x4E506456u, 256LL);
        v20 = v19;
        if ( v19 )
        {
          memmove(v19, *(const void **)(Instance + 368), v18);
          *(_QWORD *)(Instance + 368) = v20;
LABEL_16:
          *a3 = v12;
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
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8) + 24) = a2;
      result = 3223192359LL;
      WdLogGlobalForLineNumber = 1953;
    }
  }
  return result;
}
