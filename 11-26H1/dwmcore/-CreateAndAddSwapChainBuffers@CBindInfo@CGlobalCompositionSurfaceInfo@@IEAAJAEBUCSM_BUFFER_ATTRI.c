/*
 * XREFs of ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@I@Z @ 0x18012976C
 * Callers:
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18012B7D8 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009B620 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800F8600 (McTemplateU0x_EventWriteTransfer.c)
 *     ?EnsureHDRMetaData@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x180127A40 (-EnsureHDRMetaData@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?EnsureDecodeBitmap@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x1801290B4 (-EnsureDecodeBitmap@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x180129AD8 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 *     ?AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAVISwapChainRealization@@@Z @ 0x18012A278 (-AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAVISwapChainRealization@@@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UCSM_REALIZATION_INFO@@V?$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18012A470 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UCSM_REALIZATION_INFO@@V-$allocator@UCSM_R.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        unsigned int a3)
{
  unsigned int v3; // r13d
  unsigned int v5; // edi
  __int64 **v6; // rax
  __int64 v7; // r14
  __int64 *v8; // r15
  __int64 *v9; // r12
  __int64 v10; // rcx
  __int64 v11; // r9
  int v12; // eax
  _BOOL8 v13; // r8
  int v14; // eax
  unsigned __int64 v15; // r12
  struct ISwapChainRealization *v16; // rbx
  int v17; // eax
  struct ISwapChainRealization *v18; // rbx
  __int64 v19; // rdx
  bool v20; // zf
  unsigned int i; // ebx
  void *v22; // rcx
  __int64 v24; // rax
  struct ISwapChainRealization *v25; // rcx
  __int64 v26; // r8
  __int64 *v27; // [rsp+30h] [rbp-39h]
  unsigned __int64 v28; // [rsp+38h] [rbp-31h]
  struct ISwapChainRealization *v29; // [rsp+40h] [rbp-29h] BYREF
  __int128 v30; // [rsp+48h] [rbp-21h] BYREF
  __int64 v31; // [rsp+58h] [rbp-11h]
  __int128 v32; // [rsp+60h] [rbp-9h] BYREF
  bool v33; // [rsp+D0h] [rbp+67h]
  unsigned int v35; // [rsp+E0h] [rbp+77h] BYREF
  struct ISwapChainRealization *v36; // [rsp+E8h] [rbp+7Fh] BYREF

  v35 = a3;
  v3 = 0;
  v33 = 1;
  v31 = 0LL;
  v5 = 0;
  v30 = 0LL;
  if ( a3 )
    std::vector<CSM_REALIZATION_INFO>::_Resize_reallocate<std::_Value_init_tag>(&v30, a3);
  v6 = (__int64 **)((char *)this + 72);
  v7 = 0LL;
  v32 = 0LL;
  if ( &v32 == (__int128 *)((char *)this + 72) )
  {
    v9 = (__int64 *)*((_QWORD *)&v32 + 1);
    v8 = (__int64 *)v32;
  }
  else
  {
    v8 = *v6;
    *v6 = 0LL;
    v9 = (__int64 *)*((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = 0LL;
    v7 = *((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = 0LL;
  }
  v10 = *(_QWORD *)this;
  v11 = v30;
  *((_BYTE *)this + 183) = 0;
  v27 = v9;
  v28 = 0LL;
  v12 = NtOpenCompositionSurfaceRealizationInfo(*(_QWORD *)(v10 + 32), (char *)this + 24, &v35, v11);
  if ( v12 < 0 )
  {
    v5 = v12 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F5650, 4u, v12 | 0x10000000, 0x643u, 0LL);
  }
  else
  {
    if ( v35 <= 1 && *((_DWORD *)this + 8) != 3 )
    {
      LOBYTE(v13) = 0;
      v33 = 0;
      goto LABEL_18;
    }
    v14 = CGlobalCompositionSurfaceInfo::CBindInfo::EnsureDecodeBitmap((volatile signed __int32 **)this);
    v5 = v14;
    if ( v14 >= 0 )
    {
      while ( 1 )
      {
        LOBYTE(v13) = v33;
LABEL_18:
        if ( v3 >= v35 )
          break;
        v19 = 5LL * v3;
        v16 = (struct ISwapChainRealization *)(v30 + 40LL * v3);
        v20 = *((_QWORD *)v16 + 3) == 0LL;
        v36 = v16;
        if ( v20 )
        {
LABEL_12:
          v36 = 0LL;
          v17 = CGlobalCompositionSurfaceInfo::CBindInfo::CreateNewRealization(this, a2, v16, v13, &v36);
          v5 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F5650, 4u, v17, 0x680u, 0LL);
            if ( v36 )
              (*(void (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v36 + 16LL))(v36);
            goto LABEL_23;
          }
          *((_QWORD *)v16 + 1) = 0LL;
          v18 = v36;
        }
        else
        {
          v15 = v9 - v8;
          while ( 1 )
          {
            if ( v28 >= v15 )
            {
              v16 = v36;
              LOBYTE(v13) = v33;
              goto LABEL_12;
            }
            v18 = (struct ISwapChainRealization *)v8[v28];
            v8[v28] = 0LL;
            v29 = v18;
            ++v28;
            v24 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *, __int64, _BOOL8))(*(_QWORD *)v18 + 248LL))(
                    v18,
                    v19,
                    v13);
            v25 = v36;
            v26 = *((_QWORD *)v36 + 3);
            if ( v24 == v26 )
              break;
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v29);
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000000) != 0 )
          {
            McTemplateU0x_EventWriteTransfer((__int64)v36, &CompSurfInfo_ReuseRealization, v26);
            v25 = v36;
          }
          (*(void (__fastcall **)(struct ISwapChainRealization *, struct ISwapChainRealization *))(*(_QWORD *)v18 + 96LL))(
            v18,
            v25);
        }
        CGlobalCompositionSurfaceInfo::CBindInfo::AddRealization(this, v18);
        if ( v18 )
          (*(void (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v18 + 16LL))(v18);
        v9 = v27;
        ++v3;
      }
      if ( v35 > 1 )
        CGlobalCompositionSurfaceInfo::CBindInfo::EnsureHDRMetaData(this);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F5650, 4u, v14, 0x64Au, 0LL);
    }
LABEL_23:
    for ( i = 0; i < v35; ++i )
    {
      v22 = *(void **)(v30 + 40LL * i + 8);
      if ( v22 )
        CloseHandle(v22);
    }
  }
  if ( v8 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>(v8, v27);
    std::_Deallocate<16>(v8, (v7 - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  if ( (_QWORD)v30 )
    std::_Deallocate<16>((void *)v30, 8 * ((v31 - (__int64)v30) >> 3));
  return v5;
}
