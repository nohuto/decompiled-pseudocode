/*
 * XREFs of ?ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z @ 0x180025D40
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A5F4 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?empty@?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QEBA_NXZ @ 0x1800186A0 (-empty@-$vector_facade@PEAVCVisual@@V-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@QE.c)
 *     ?last@?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ @ 0x180018840 (-last@-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18001F360 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x180020E7C (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@@Z @ 0x180025C10 (-RemoveChild@CVisual@@IEAAXPEAV1@@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800264A4 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?reserve_region@?$vector_facade@PEAVCVisual@@V?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@detail@@IEAAPEAPEAVCVisual@@_K0@Z @ 0x18002655C (-reserve_region@-$vector_facade@PEAVCVisual@@V-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@@d.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180026744 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetSharedChildChannelNoRef@CVisual@@QEAAXPEAVCChannelContext@@@Z @ 0x18010B7D4 (-SetSharedChildChannelNoRef@CVisual@@QEAAXPEAVCChannelContext@@@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x180163170 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::ProcessInsertChild(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_INSERTCHILD *a3)
{
  unsigned int v3; // eax
  unsigned int *v6; // rbp
  _DWORD *v7; // r14
  char *v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rax
  char *v11; // r12
  char *v12; // r13
  char *v13; // rax
  CVisual **v14; // rsi
  __int64 v15; // rcx
  struct CChannelContext *v16; // r13
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // r14
  __int64 v21; // r14
  __int64 v22; // rcx
  char v23; // r15
  unsigned __int64 v24; // r12
  unsigned __int64 i; // rbx
  const char *v26; // r9
  _QWORD *v27; // rbp
  unsigned __int64 v28; // rax
  CVisual *v29; // rcx
  int v30; // edx
  int v31; // r8d
  unsigned int v32; // ebx
  __int64 *v34; // rcx
  unsigned __int64 v35; // rax
  CVisual *v36; // rcx
  CVisual **v37; // rax
  unsigned int v38; // edx
  CComposition *v39; // rcx
  int AttachedChannel; // eax
  struct CChannelContext *v41; // rbx
  unsigned int v42; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v44; // [rsp+78h] [rbp+10h]
  struct CChannelContext *v45; // [rsp+80h] [rbp+18h] BYREF

  v45 = a3;
  v3 = *((_DWORD *)a3 + 2);
  if ( v3
    && (v6 = (unsigned int *)((char *)a2 + 28), v3 < *((_DWORD *)a2 + 7))
    && (v7 = (_DWORD *)((char *)a2 + 24),
        v8 = (char *)a2 + 40,
        v9 = *((_DWORD *)a2 + 6) * v3,
        v10 = *((_QWORD *)a2 + 5),
        v44 = v10,
        *(_DWORD *)(v9 + v10)) )
  {
    v15 = *(_QWORD *)(v9 + v10 + 8);
    v11 = (char *)a2 + 28;
    v12 = (char *)a2 + 24;
    v13 = (char *)a2 + 40;
    if ( v15 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 64LL))(v15, 156LL) )
      {
        v14 = *(CVisual ***)(v9 + v44 + 8);
        goto LABEL_9;
      }
      v13 = v8;
    }
  }
  else
  {
    v11 = (char *)a2 + 28;
    v12 = (char *)a2 + 24;
    v13 = (char *)a2 + 40;
  }
  v14 = 0LL;
  v6 = (unsigned int *)v11;
  v7 = v12;
  v8 = v13;
LABEL_9:
  v16 = v45;
  v17 = *((_DWORD *)v45 + 3);
  if ( v17
    && v17 < *v6
    && (v18 = *v7 * v17, v19 = *(_QWORD *)v8, v20 = (unsigned int)v18, *(_DWORD *)(v18 + *(_QWORD *)v8))
    && (v22 = *(_QWORD *)(v18 + v19 + 8)) != 0
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 64LL))(v22, 156LL) )
  {
    v21 = *(_QWORD *)(v20 + v19 + 8);
  }
  else
  {
    v21 = 0LL;
  }
  if ( !v14 )
  {
    v32 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xB91u, 0LL);
    return v32;
  }
  if ( (*((_BYTE *)this + 40) & 2) != 0 )
  {
    if ( !detail::vector_facade<CVisual *,detail::pointer_buffer_impl<CVisual *,0>>::empty((_QWORD *)this + 10) )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0xB98,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visual.cpp",
        (const char *)0x8007029CLL,
        v42);
    v38 = *((_DWORD *)a2 + 12);
    v39 = (CComposition *)*((_QWORD *)this + 3);
    v45 = 0LL;
    AttachedChannel = CComposition::GetAttachedChannel(v39, v38, &v45);
    v32 = AttachedChannel;
    if ( AttachedChannel < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, AttachedChannel, 0xB9Bu, 0LL);
      wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>(&v45);
      return v32;
    }
    v41 = v45;
    CVisual::SetSharedChildChannelNoRef(this, v45);
    if ( v41 )
      CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release((volatile signed __int32 *)v41);
  }
  v23 = *((_BYTE *)v16 + 16);
  if ( v14[11] == this )
    goto LABEL_40;
  if ( v21 )
  {
    if ( *(CVisual **)(v21 + 88) == this )
    {
      v24 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)this + 10);
      for ( i = detail::pointer_buffer_impl<CVisual *,0>::last((__int64 *)this + 10);
            i != v24 && *(_QWORD *)(i - 8) != v21;
            i -= 8LL )
      {
        ;
      }
      if ( i == detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)this + 10) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x261,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visual.cpp",
          v26);
      if ( !v23 )
        i -= 8LL;
      v27 = (_QWORD *)((char *)this + 80);
      goto LABEL_29;
    }
LABEL_40:
    v32 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24A,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visual.cpp",
      (const char *)0x80070057LL,
      v42);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xB9Fu, 0LL);
    return v32;
  }
  v27 = (_QWORD *)((char *)this + 80);
  v34 = (__int64 *)((char *)this + 80);
  if ( v23 )
    v35 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v34);
  else
    v35 = detail::pointer_buffer_impl<CVisual *,0>::last(v34);
  i = v35;
LABEL_29:
  v28 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v27);
  *(_QWORD *)detail::vector_facade<CVisual *,detail::pointer_buffer_impl<CVisual *,0>>::reserve_region(
               v27,
               (__int64)(i - v28) >> 3) = v14;
  detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v27);
  (*((void (__fastcall **)(CVisual **))*v14 + 1))(v14);
  v29 = v14[11];
  if ( v29 )
    CVisual::RemoveChild(v29, (struct CVisual *)v14);
  v14[11] = this;
  CVisual::OnOuterTransformChanged((CVisual *)v14);
  CVisual::OnClipChanged((CVisual *)v14);
  if ( (*((_BYTE *)v14 + 102) & 0x20) != 0 )
  {
    CVisual::DirtyForVisibleChild(this, (struct CVisual *)v14);
    v30 = *((_DWORD *)v14 + 65) + 1;
    if ( (*((_BYTE *)v14 + 103) & 2) == 0 )
      v30 = *((_DWORD *)v14 + 65);
    v31 = *((_DWORD *)v14 + 64) + 1;
    if ( *((char *)v14 + 102) >= 0 )
      v31 = *((_DWORD *)v14 + 64);
    if ( v31 || v30 )
    {
      v36 = this;
      do
      {
        *((_DWORD *)this + 64) += v31;
        *((_DWORD *)this + 65) += v30;
        if ( (*((_BYTE *)this + 102) & 0x20) == 0 )
          break;
        this = (CVisual *)*((_QWORD *)this + 11);
        if ( v36 )
        {
          v37 = (CVisual **)*((_QWORD *)v36 + 11);
          v36 = (CVisual *)v37;
          if ( v37 )
            v36 = v37[11];
        }
      }
      while ( this != v36 );
    }
  }
  return 0;
}
