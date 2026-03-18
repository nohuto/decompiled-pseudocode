/*
 * XREFs of ?Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801B4E54
 * Callers:
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@IPEA_N_N@Z @ 0x1800D62A4 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsIndependentFlip@CDirectFlipInfo@@QEBA_NXZ @ 0x1800D595C (-IsIndependentFlip@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800E4048 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PresentNeeded@CDirectFlipInfo@@QEBA_NXZ @ 0x1801B529C (-PresentNeeded@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?UseSyncIntervalAndAllowTearing@CDirectFlipInfo@@QEBA_NPEAVIOverlaySwapChain@@@Z @ 0x1801B52D4 (-UseSyncIntervalAndAllowTearing@CDirectFlipInfo@@QEBA_NPEAVIOverlaySwapChain@@@Z.c)
 *     ?UpdateHDRMetaData@CDirectFlipInfo@@IEAAPEBXXZ @ 0x1801B5310 (-UpdateHDRMetaData@CDirectFlipInfo@@IEAAPEBXXZ.c)
 *     McTemplateU0xxqqqxxqqqq_EventWriteTransfer @ 0x1801B53C8 (McTemplateU0xxqqqxxqqqq_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDirectFlipInfo::Present(
        CDirectFlipInfo *this,
        struct IOverlaySwapChain *a2,
        unsigned int a3,
        __int128 *a4,
        _DWORD *a5)
{
  unsigned int v5; // r15d
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  __int128 v12; // xmm0
  unsigned int v13; // r13d
  unsigned int v14; // r12d
  __int64 v15; // r9
  int v16; // eax
  _QWORD *v17; // rcx
  int v18; // esi
  char v19; // di
  char v20; // al
  int v22; // eax
  unsigned int v23; // [rsp+20h] [rbp-81h]
  _QWORD *v24; // [rsp+70h] [rbp-31h] BYREF
  unsigned int v25; // [rsp+78h] [rbp-29h]
  _DWORD *v26; // [rsp+80h] [rbp-21h]
  __int64 v27[2]; // [rsp+88h] [rbp-19h] BYREF
  __int128 v28; // [rsp+98h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  v26 = a5;
  v5 = 0;
  v25 = a3;
  if ( CDirectFlipInfo::PresentNeeded(this) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2));
    v27[0] = v9;
    v10 = v9;
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v24 = 0LL;
      v28 = 0LL;
      v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD **))v10)(
              v10,
              &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c,
              &v24);
      v5 = v11;
      if ( v11 >= 0 )
      {
        if ( *((_DWORD *)this + 13) == 1 )
        {
          (*(void (__fastcall **)(char *, __int64 *))(*((_QWORD *)a2 + 1) + 24LL))((char *)a2 + 8, v27);
          v12 = *a4;
        }
        else
        {
          (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(v24[1] + 24LL))(v24 + 1, v27);
          v12 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v24 + 128LL))(v24);
        }
        v13 = 0;
        v28 = v12;
        v14 = 1;
        if ( CDirectFlipInfo::UseSyncIntervalAndAllowTearing(this, a2) )
        {
          v14 = (*(__int64 (__fastcall **)(_QWORD *))(*v24 + 192LL))(v24);
          if ( v14 )
          {
            v14 = 1;
          }
          else if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v24 + 208LL))(v24) )
          {
            v13 = 512;
          }
        }
        CDirectFlipInfo::UpdateHDRMetaData(this);
        LOBYTE(v15) = *((_DWORD *)this + 13) == 2;
        v23 = v25;
        v16 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *, _QWORD, _QWORD, __int64))(*(_QWORD *)a2 + 392LL))(
                a2,
                v14,
                v13,
                v15);
        v5 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x236u, 0LL);
        }
        else
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 && *((int *)this + 13) >= 2 )
          {
            if ( !TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty((_DWORD *)(*((_QWORD *)this + 2) + 48LL)) )
            {
              v17[1] = 0LL;
              *v17 = 0LL;
            }
            v26 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 32LL))(*(_QWORD *)this + 8LL);
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            {
              v18 = *((_DWORD *)this + 13);
              v19 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 320LL))(*((_QWORD *)this + 2));
              v20 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 64LL))(*((_QWORD *)this + 2));
              McTemplateU0xxqqqxxqqqq_EventWriteTransfer(
                HIDWORD(*(_QWORD *)v26),
                *((_QWORD *)this + 2),
                *v26,
                v26[2],
                v26[4],
                v26[5],
                v26[6],
                *(_QWORD *)(*((_QWORD *)this + 2) + 40LL),
                v20,
                v19,
                v18,
                v13,
                v14);
            }
          }
          *((_BYTE *)this + 107) = 0;
          *((_BYTE *)this + 105) = 0;
        }
        if ( v24 )
          (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        goto LABEL_18;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x207u, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
    }
    else
    {
      v5 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x253u, 0LL);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v27);
    goto LABEL_18;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this) )
  {
    v5 = -2003304309;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304309, 0x25Bu, 0LL);
  }
LABEL_18:
  if ( (unsigned __int8)CDirectFlipInfo::IsIndependentFlip(this) )
  {
    v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 408LL))(
            *((_QWORD *)this + 2),
            *((_QWORD *)this + 3));
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x261,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\directflipinfo.cpp",
        (const char *)(unsigned int)v22,
        v23);
  }
  if ( v5 == -2003304442 )
    *((_BYTE *)this + 109) = 1;
  return v5;
}
