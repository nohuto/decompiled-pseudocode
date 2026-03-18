/*
 * XREFs of ?AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140385290
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DMMVIDPNPRESENTPATH@@UEAA@XZ @ 0x14001D658 (--1DMMVIDPNPRESENTPATH@@UEAA@XZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1400468D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x140385C18 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 *     ?_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ @ 0x140385F38 (-_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquirePathInfo(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        unsigned int a3,
        _QWORD *a4)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  __int64 Container; // rax
  __int64 v9; // r8
  __int64 v10; // r10
  _QWORD *v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // r9
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // r14d
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+38h] [rbp-C8h]
  char v29; // [rsp+40h] [rbp-C0h]
  __int64 v30; // [rsp+48h] [rbp-B8h] BYREF
  int v31; // [rsp+54h] [rbp-ACh]
  __int128 v32; // [rsp+58h] [rbp-A8h]
  _QWORD *v33; // [rsp+68h] [rbp-98h]
  __int128 v34; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v35; // [rsp+80h] [rbp-80h]
  _QWORD v36[4]; // [rsp+90h] [rbp-70h] BYREF
  int v37; // [rsp+B0h] [rbp-50h]
  void **v38; // [rsp+B8h] [rbp-48h]
  __int64 v39; // [rsp+C0h] [rbp-40h]
  void **v40; // [rsp+C8h] [rbp-38h]
  int v41; // [rsp+D0h] [rbp-30h]
  void **v42; // [rsp+D8h] [rbp-28h]
  int v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  __int64 v45; // [rsp+F0h] [rbp-10h]
  int v46; // [rsp+F8h] [rbp-8h]
  __int16 v47; // [rsp+FCh] [rbp-4h]
  int v48; // [rsp+100h] [rbp+0h]
  int v49; // [rsp+104h] [rbp+4h]
  int v50; // [rsp+108h] [rbp+8h]
  int v51; // [rsp+10Ch] [rbp+Ch]
  __int64 v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+118h] [rbp+18h]
  __int64 v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+128h] [rbp+28h]
  int v56; // [rsp+130h] [rbp+30h]
  int v57; // [rsp+134h] [rbp+34h]
  int v58; // [rsp+138h] [rbp+38h]
  __int64 v59; // [rsp+13Ch] [rbp+3Ch]
  __int64 v60; // [rsp+148h] [rbp+48h]

  v4 = a3;
  v6 = (unsigned int)a2;
  v27 = -1;
  v28 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v29 = 1;
    v27 = 6021;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 6021);
  if ( a4 )
  {
    *a4 = 0LL;
    if ( this && *((_DWORD *)this + 46) == 1833173002 )
    {
      v30 = 0LL;
      Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
      v9 = 0LL;
      v10 = Container;
      v11 = (_QWORD *)(*(_QWORD *)(Container + 304) + 24LL);
      if ( (_QWORD *)*v11 != v11 )
        v9 = *v11 - 8LL;
      while ( 1 )
      {
        if ( !v9 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 2500;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
          if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
          return 3223192324LL;
        }
        if ( *(_DWORD *)(v9 + 24) == (_DWORD)v6 )
          break;
        v12 = *(_QWORD **)(v9 + 8);
        v9 = (__int64)(v12 - 1);
        if ( v12 == v11 )
          v9 = 0LL;
      }
      v13 = 0LL;
      v14 = (_QWORD *)(*(_QWORD *)(v10 + 312) + 24LL);
      if ( (_QWORD *)*v14 != v14 )
        v13 = *v14 - 8LL;
      while ( 1 )
      {
        if ( !v13 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 2514;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
          if ( v29 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
          }
          return 3223192325LL;
        }
        if ( *(_DWORD *)(v13 + 24) == (_DWORD)v4 )
          break;
        v15 = *(_QWORD **)(v13 + 8);
        v13 = (__int64)(v15 - 1);
        if ( v15 == v14 )
          v13 = 0LL;
      }
      v36[1] = 0LL;
      v36[0] = &DMMVIDPNPRESENTPATH::`vftable'{for `SetElement'};
      v36[3] = &DMMVIDPNPRESENTPATH::`vftable'{for `SignedWithClassSignature<DMMVIDPNPRESENTPATH>'};
      v38 = &DMMVIDPNPRESENTPATH::`vftable'{for `ContainedBy<DMMVIDPNTOPOLOGY>'};
      v40 = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
      v42 = &DMMVIDPNPRESENTPATH::`vftable'{for `NonReferenceCounted'};
      v48 = 254;
      v49 = 254;
      v36[2] = 0LL;
      v37 = 1833173003;
      v57 = 255;
      v46 = 255;
      v47 = -1;
      v51 = 17;
      v39 = 0LL;
      v41 = 0;
      v44 = v9;
      v45 = v13;
      v60 = 0LL;
      v43 = 1;
      v52 = 0LL;
      v53 = 0LL;
      v54 = 0LL;
      v55 = 0LL;
      v56 = 0;
      v50 = 1;
      v58 = 1;
      v59 = 1LL;
      DMMVIDPNPRESENTPATH::_SetIsSupportSetTargetPathProperties((DMMVIDPNPRESENTPATH *)v36);
      DWORD2(v32) = 0;
      *(_QWORD *)&v32 = Set<DMMVIDPNPRESENTPATH>::FindByValue;
      HIDWORD(v32) = v31;
      v43 = 2;
      v33 = v36;
      v35 = v36;
      v34 = v32;
      v20 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
              this,
              &v34,
              &v30,
              0LL);
      v21 = v20;
      if ( v20 == -1071774937 )
      {
        WdLogSingleEntry3(3LL, v6, v4, this);
        WdLogGlobalForLineNumber = 2547;
        if ( v30 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2550;
        }
        DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v36);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
        if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit);
        return 3223192359LL;
      }
      else if ( v20 < 0 )
      {
        WdLogSingleEntry4(7LL, v6, v4, this, v20);
        WdLogGlobalForLineNumber = 2557;
        DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v36);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
        if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit);
        return v21;
      }
      else
      {
        v22 = v30;
        if ( !v30 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2563;
        }
        DMMVIDPNPRESENTPATH::~DMMVIDPNPRESENTPATH((DMMVIDPNPRESENTPATH *)v36);
        *a4 = v22;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
        if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
        return 0LL;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2480;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
      if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit);
      return 3223192320LL;
    }
  }
  else
  {
    WdLogSingleEntry4(2LL, 0LL, v6, v4, this);
    WdLogGlobalForLineNumber = 2463;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
}
