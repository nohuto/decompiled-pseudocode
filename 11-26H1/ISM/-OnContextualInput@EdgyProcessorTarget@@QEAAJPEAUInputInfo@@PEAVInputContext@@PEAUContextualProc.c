/*
 * XREFs of ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801AFF80
 * Callers:
 *     ?OnInput@EdgyLegacyProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801AD400 (-OnInput@EdgyLegacyProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespo.c)
 * Callees:
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002A9EC (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Configure@InteractionContext@EdgyProcessorTarget@@QEAAXXZ @ 0x1801AF8E0 (-Configure@InteractionContext@EdgyProcessorTarget@@QEAAXXZ.c)
 *     ?QualifyEdgyInputReport@EdgyProcessorTarget@@IEAA_NPEBUPointerInputInfo@@PEAUEdgyPointerInfo@@@Z @ 0x1801B09A8 (-QualifyEdgyInputReport@EdgyProcessorTarget@@IEAA_NPEBUPointerInputInfo@@PEAUEdgyPointerInfo@@@Z.c)
 *     ?EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x1801B0FC4 (-EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z.c)
 *     ?GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z @ 0x1801B1134 (-GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z.c)
 *     ?HasCandidates@EdgyImpl@@QEAA_NXZ @ 0x1801B124C (-HasCandidates@EdgyImpl@@QEAA_NXZ.c)
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x1801B1360 (-Reset@EdgyImpl@@QEAAXXZ.c)
 *     ?EndCurrentSession@SessionBasedPointerDeviceArbitration@@QEAAJK@Z @ 0x1801CB440 (-EndCurrentSession@SessionBasedPointerDeviceArbitration@@QEAAJK@Z.c)
 *     ?OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z @ 0x1801CB4C4 (-OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnContextualInput(
        SessionBasedPointerDeviceArbitration **this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 v8; // rdx
  int v9; // ebx
  _DWORD *v11; // r14
  __int128 v12; // xmm0
  SessionBasedPointerDeviceArbitration *v13; // rcx
  __int128 v14; // xmm1
  int v15; // eax
  const char *v16; // r9
  unsigned int v17; // edi
  _DWORD *v18; // r12
  SessionBasedPointerDeviceArbitration *v19; // rcx
  EdgyImpl *v20; // rcx
  SessionBasedPointerDeviceArbitration *v21; // rcx
  const char *v22; // r9
  SessionBasedPointerDeviceArbitration *v23; // rdx
  __m256i v24; // [rsp+28h] [rbp-39h] BYREF
  __int16 v25; // [rsp+48h] [rbp-19h] BYREF
  __int64 v26; // [rsp+50h] [rbp-11h]
  __int64 v27; // [rsp+58h] [rbp-9h]
  __int64 v28; // [rsp+60h] [rbp-1h]
  __int128 v29; // [rsp+68h] [rbp+7h]
  __int128 v30; // [rsp+78h] [rbp+17h]
  __int64 v31; // [rsp+88h] [rbp+27h]
  __int64 v32; // [rsp+90h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v24.m256i_i32[0] = -1;
  *(_OWORD *)((char *)v24.m256i_i64 + 4) = 0uLL;
  v24.m256i_i64[3] = 0LL;
  if ( !a2 )
  {
    v8 = 226LL;
LABEL_3:
    v9 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  if ( !a4 )
  {
    v8 = 227LL;
    goto LABEL_3;
  }
  if ( *((_DWORD *)a3 + 26) == 2 )
  {
    if ( *((_QWORD *)this[15] + 14) )
    {
      *((_DWORD *)a4 + 2) = 2;
      v23 = this[15];
      if ( *((_DWORD *)v23 + 24) != 1 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x148,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyimpl.cpp",
          (const char *)a4);
      Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)a4 + 10, (_QWORD *)v23 + 14);
      return 0LL;
    }
    goto LABEL_48;
  }
  if ( *((_DWORD *)a3 + 26) == 3 )
  {
LABEL_48:
    *((_DWORD *)a4 + 2) = 3;
    return 0LL;
  }
  if ( EdgyProcessorTarget::QualifyEdgyInputReport((EdgyProcessorTarget *)this, a2, (struct EdgyPointerInfo *)&v24) )
  {
    v12 = *(_OWORD *)v24.m256i_i8;
    v13 = this[17];
    v14 = *(_OWORD *)&v24.m256i_u64[2];
    *((_DWORD *)this + 9) = *((_DWORD *)a3 + 26);
    *((_OWORD *)this + 3) = v12;
    *((_OWORD *)this + 4) = v14;
    v15 = SessionBasedPointerDeviceArbitration::OnInputReport(v13, a2);
    v17 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x116,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
        (const char *)(unsigned int)v15);
      return v17;
    }
    v18 = this + 4;
    if ( *((_DWORD *)this + 8) != 1 )
    {
      v19 = this[22];
      if ( v19 )
      {
        if ( *((_DWORD *)a2 + 79) != 1 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x37E,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
            v16);
        if ( (int)ProcessPointerFramesInteractionContext(v19, 1LL, 1LL, (char *)a2 + 320) < 0 )
          EdgyProcessorTarget::InteractionContext::Configure((EdgyProcessorTarget::InteractionContext *)(this + 21));
      }
    }
    v11 = this + 4;
    if ( *v18 != 1 && *((_DWORD *)a2 + 2) >= *((_DWORD *)this + 10) && !*v18 )
    {
      v20 = (SessionBasedPointerDeviceArbitration *)((char *)this[15] + 80);
      *v18 = 1;
      EdgyImpl::Reset(v20);
    }
  }
  else
  {
    v11 = this + 4;
    *((_DWORD *)this + 8) = 1;
  }
  if ( *v11 == 3 )
  {
    v21 = this[15];
    v25 = 0;
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    v31 = 0LL;
    v30 = 0LL;
    v32 = 0LL;
    if ( EdgyImpl::GetCandidateEdgyDetectedInfo(
           (SessionBasedPointerDeviceArbitration *)((char *)v21 + 80),
           (struct CandidateEdgyDetectedInfo *)&v25) )
    {
      if ( !v26 )
        *v11 = 2;
    }
    else
    {
      *v11 = 1;
      *((_DWORD *)this + 20) = -1;
      *(SessionBasedPointerDeviceArbitration **)((char *)this + 84) = 0LL;
      *(SessionBasedPointerDeviceArbitration **)((char *)this + 92) = 0LL;
      this[13] = 0LL;
      EdgyImpl::Reset((SessionBasedPointerDeviceArbitration *)((char *)this[15] + 80));
    }
  }
  if ( *v11 == 2 )
  {
    if ( EdgyImpl::EnsureInputTargeting((SessionBasedPointerDeviceArbitration *)((char *)this[15] + 80), a4) < 0 )
      *((_DWORD *)a4 + 2) = 0;
    if ( *((_DWORD *)a4 + 2) == 1 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x157,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
        v22);
    v9 = SessionBasedPointerDeviceArbitration::EndCurrentSession(this[17], *((_DWORD *)a2 + 1));
    if ( v9 < 0 )
    {
      v8 = 357LL;
      goto LABEL_4;
    }
  }
  else if ( !*v11 || *v11 == 3 )
  {
    if ( EdgyImpl::HasCandidates((SessionBasedPointerDeviceArbitration *)((char *)this[15] + 80))
      && (*((_BYTE *)a2 + 332) & 4) != 0 )
    {
      *((_DWORD *)a4 + 2) = 1;
    }
    else
    {
      *((_DWORD *)a4 + 2) = 0;
      v9 = SessionBasedPointerDeviceArbitration::EndCurrentSession(this[17], *((_DWORD *)a2 + 1));
      if ( v9 < 0 )
      {
        v8 = 383LL;
        goto LABEL_4;
      }
    }
  }
  else
  {
    *((_DWORD *)a4 + 2) = 0;
    v9 = SessionBasedPointerDeviceArbitration::EndCurrentSession(this[17], *((_DWORD *)a2 + 1));
    if ( v9 < 0 )
    {
      v8 = 406LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
