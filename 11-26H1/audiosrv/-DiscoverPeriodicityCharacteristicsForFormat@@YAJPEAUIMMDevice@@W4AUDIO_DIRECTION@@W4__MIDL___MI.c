/*
 * XREFs of ?DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@W4DPCF_OPTIONS@@_JPEAI8888@Z @ 0x180033C30
 * Callers:
 *     ?GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x180031F7C (-GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__.c)
 *     _lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator() @ 0x1800333A0 (_lambda_5789e60fd85b99cd3c89d9f341e01d71_--operator().c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x18013DEF8 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SHARED_CREATE_PARAMS_FOR_KS_ENDPOINTS@@I_JPEAI@Z @ 0x180034310 (-CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SH.c)
 *     ?GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z @ 0x180083A64 (-GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     ?HnsToBlocksRU@@YAJ_KKKPEAK@Z @ 0x180162148 (-HnsToBlocksRU@@YAJ_KKKPEAK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 DiscoverPeriodicityCharacteristicsForFormat(__int64 a1, unsigned int a2, int a3, struct _GUID *a4, ...)
{
  unsigned __int64 v6; // rsi
  unsigned __int16 *v7; // r15
  double v8; // xmm1_8
  unsigned int *v9; // r14
  int v10; // r13d
  int v11; // eax
  unsigned int v12; // ebx
  struct PacketSizeConstraints *v13; // r14
  unsigned int v14; // edi
  _DWORD *v15; // rax
  _DWORD *v16; // rbx
  int v17; // eax
  unsigned int v18; // esi
  int PacketSizesFromConstraints; // eax
  unsigned int v21; // ebx
  unsigned int v22; // eax
  unsigned int *v23; // rsi
  unsigned int *v24; // rdx
  unsigned int *v25; // r8
  unsigned int *v26; // rcx
  unsigned int v27; // eax
  unsigned int *v28; // rdx
  unsigned int *v29; // r8
  unsigned int *v30; // rcx
  unsigned int v31; // eax
  int v32; // eax
  unsigned int v33; // edi
  unsigned int v34; // eax
  int v35; // eax
  unsigned int v36; // r14d
  int v37; // eax
  unsigned int v38; // r14d
  int v39; // eax
  unsigned int *v40; // r9
  int v41; // eax
  bool v42; // sf
  unsigned int *v43; // rdx
  int v44; // eax
  unsigned int *v45; // rcx
  unsigned int v46; // eax
  unsigned __int64 v47; // [rsp+28h] [rbp-69h]
  unsigned __int64 v48; // [rsp+30h] [rbp-61h]
  unsigned int v49; // [rsp+60h] [rbp-31h] BYREF
  unsigned int v50[2]; // [rsp+68h] [rbp-29h] BYREF
  LPVOID pv[2]; // [rsp+70h] [rbp-21h] BYREF
  struct _GUID v52; // [rsp+80h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+47h]
  unsigned int v54; // [rsp+E0h] [rbp+4Fh] BYREF
  unsigned int v55; // [rsp+E8h] [rbp+57h]
  int v56; // [rsp+F0h] [rbp+5Fh]
  struct _GUID *v57; // [rsp+F8h] [rbp+67h]
  void *Src; // [rsp+100h] [rbp+6Fh] BYREF
  va_list Srca; // [rsp+100h] [rbp+6Fh]
  struct PacketSizeConstraints *v60; // [rsp+108h] [rbp+77h]
  __int64 v61; // [rsp+110h] [rbp+7Fh]
  unsigned __int64 v62; // [rsp+118h] [rbp+87h]
  unsigned int *v63; // [rsp+120h] [rbp+8Fh]
  unsigned int *v64; // [rsp+128h] [rbp+97h]
  unsigned int *v65; // [rsp+130h] [rbp+9Fh] BYREF
  va_list va1; // [rsp+130h] [rbp+9Fh]
  unsigned int *v67; // [rsp+138h] [rbp+A7h] BYREF
  va_list va2; // [rsp+138h] [rbp+A7h]
  unsigned int *v69; // [rsp+140h] [rbp+AFh]
  va_list va3; // [rsp+148h] [rbp+B7h] BYREF

  va_start(va3, a4);
  va_start(va2, a4);
  va_start(va1, a4);
  va_start(Srca, a4);
  Src = va_arg(va1, void *);
  v60 = va_arg(va1, struct PacketSizeConstraints *);
  v61 = va_arg(va1, _QWORD);
  v62 = va_arg(va1, _QWORD);
  v63 = va_arg(va1, unsigned int *);
  v64 = va_arg(va1, unsigned int *);
  va_copy(va2, va1);
  v65 = va_arg(va2, unsigned int *);
  va_copy(va3, va2);
  v67 = va_arg(va3, unsigned int *);
  v69 = va_arg(va3, unsigned int *);
  v57 = a4;
  v56 = a3;
  v55 = a2;
  v6 = 100000LL;
  if ( v62 )
    v6 = v62;
  v7 = (unsigned __int16 *)Src;
  v8 = (double)(int)v6 * (double)*((int *)Src + 1) / 10000000.0 + 0.5;
  *v67 = (int)v8;
  *v65 = (int)v8;
  *v64 = (int)v8;
  v9 = v63;
  *v63 = (int)v8;
  v10 = 0;
  pv[0] = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a1 + 40LL))(a1, pv);
  v12 = v11;
  if ( v11 >= 0 )
  {
    if ( (unsigned int)GetClassFromEndpointId(pv[0]) )
    {
      v23 = v67;
      goto LABEL_22;
    }
    v13 = v60;
    if ( v60 && (v61 & 2) != 0 )
    {
      LODWORD(Src) = 0;
      v54 = 0;
      v49 = 0;
      v50[0] = 0;
      v52 = *v57;
      PacketSizesFromConstraints = GetPacketSizesFromConstraints(
                                     v60,
                                     *((_DWORD *)v7 + 2),
                                     v7[6],
                                     &v52,
                                     v6,
                                     v47,
                                     v48,
                                     (unsigned int *)Srca,
                                     &v54,
                                     &v49,
                                     v50);
      v21 = PacketSizesFromConstraints;
      if ( PacketSizesFromConstraints < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x23C,
          (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
          (const char *)(unsigned int)PacketSizesFromConstraints);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(pv);
        return v21;
      }
      v27 = (unsigned int)Src;
      v23 = v67;
      *v67 = (unsigned int)Src;
      v28 = v65;
      *v65 = v27;
      v29 = v64;
      *v64 = v27;
      v30 = v63;
      *v63 = v27;
      if ( !a3 && !v62 )
      {
        *v29 = v54;
        *v28 = v49;
        if ( v55 != 1 || (v31 = v50[0], !*(_BYTE *)v13) )
          v31 = *v30;
        *v23 = v31;
      }
      v9 = v30;
      goto LABEL_22;
    }
    v14 = v7[8] + 64;
    v15 = CoTaskMemAlloc(v14);
    v16 = v15;
    *(_QWORD *)v50 = v15;
    if ( !v15 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25A,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
        (const char *)0x8007000ELL);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(pv);
      return 2147942414LL;
    }
    *v15 = v7[8] + 64;
    v15[1] = GetSessionIdFromEndpointId(pv[0]);
    v16[2] = v56;
    *(struct _GUID *)(v16 + 3) = *v57;
    memcpy_0(v16 + 11, v7, v7[8] + 18LL);
    LODWORD(Src) = 0;
    v17 = CheckConnectorSupportForPeriodicity(a1, v55, v16, v14, v6);
    v18 = v17;
    if ( v17 < 0 )
    {
      if ( v17 == -2005139404 )
      {
        CoTaskMemFree(v16);
        if ( pv[0] )
          CoTaskMemFree(pv[0]);
        return 2289827892LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x267,
          (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
          (const char *)(unsigned int)v17);
        CoTaskMemFree(v16);
        if ( pv[0] )
          CoTaskMemFree(pv[0]);
        return v18;
      }
    }
    v22 = (unsigned int)Src;
    v23 = v67;
    *v67 = (unsigned int)Src;
    v24 = v65;
    *v65 = v22;
    v25 = v64;
    *v64 = v22;
    v26 = v63;
    *v63 = v22;
    if ( !v56 && !v62 )
    {
      if ( v13 )
      {
        LODWORD(v65) = 0;
        v52 = *v57;
        v32 = GetPacketSizesFromConstraints(
                v13,
                *((_DWORD *)v7 + 2),
                v7[6],
                &v52,
                0x186A0uLL,
                (unsigned __int64)Srca,
                v48,
                v26,
                v25,
                v24,
                (unsigned int *)va1);
        v33 = v32;
        if ( v32 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x282,
            (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
            (const char *)(unsigned int)v32);
          CoTaskMemFree(v16);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(pv);
          return v33;
        }
        if ( v55 == 1 && *(_BYTE *)v13 )
        {
          v34 = (unsigned int)v65;
          v9 = v63;
        }
        else
        {
          v9 = v63;
          v34 = *v63;
        }
        *v23 = v34;
        goto LABEL_21;
      }
      if ( (v61 & 1) != 0 )
      {
        LODWORD(v67) = 0;
        v35 = HnsToBlocksRU(0x61A8uLL, *((_DWORD *)v7 + 2), v7[6], (unsigned int *)va2);
        v36 = v35;
        if ( v35 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x293,
            (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
            (const char *)(unsigned int)v35);
          CoTaskMemFree(v16);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(pv);
          return v36;
        }
        v37 = ((_DWORD)v67 - 1) & 0xFFFFFFE0;
        v38 = v55;
        while ( 1 )
        {
          v39 = v37 + 32;
          v54 = v39;
          LODWORD(v62) = v39;
          LODWORD(v67) = v39;
          v40 = v63;
          if ( v39 >= *v63 )
            break;
          v41 = CheckConnectorSupportForPeriodicity(
                  a1,
                  v38,
                  v16,
                  v14,
                  (unsigned int)(int)((double)v39 * 10000000.0 / (double)*((int *)v7 + 1) + 0.5));
          v42 = v41 < 0;
          if ( v41 >= 0 )
          {
            if ( (_DWORD)v67 == (_DWORD)Src )
            {
              v43 = v65;
              *v65 = (unsigned int)Src;
              v40 = v63;
              goto LABEL_59;
            }
            v42 = v41 < 0;
          }
          v37 = v54;
          if ( v42 )
            v37 = v62;
        }
        v43 = v65;
LABEL_59:
        if ( *v43 < *v40 )
        {
          while ( v10 < 3 )
          {
            LODWORD(v62) = 32 * (1 << v10);
            v44 = v62 * ((*v43 - 1) / (unsigned int)v62 + 1);
            LODWORD(v67) = v44;
            if ( v44 < *v40 )
            {
              if ( (int)CheckConnectorSupportForPeriodicity(
                          a1,
                          v38,
                          v16,
                          v14,
                          (unsigned int)(int)((double)v44 * 10000000.0 / (double)*((int *)v7 + 1) + 0.5)) >= 0
                && (_DWORD)Src == (_DWORD)v67 )
              {
                v45 = v64;
                *v64 = v62;
                v40 = v63;
                v43 = v65;
                goto LABEL_69;
              }
              v40 = v63;
            }
            ++v10;
            v43 = v65;
          }
          v45 = v64;
LABEL_69:
          v46 = *v40;
          v9 = v63;
          if ( *v45 == *v40 )
          {
            *v45 = v46;
            *v43 = v46;
          }
        }
        else
        {
          v9 = v63;
        }
        goto LABEL_21;
      }
    }
    v9 = v26;
LABEL_21:
    CoTaskMemFree(v16);
LABEL_22:
    *v69 = *v23;
    if ( *v23 > *v9 )
      *v23 = *v9;
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x227,
    (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
    (const char *)(unsigned int)v11);
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return v12;
}
