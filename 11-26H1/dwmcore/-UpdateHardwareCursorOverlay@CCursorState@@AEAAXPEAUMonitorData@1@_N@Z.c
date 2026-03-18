/*
 * XREFs of ?UpdateHardwareCursorOverlay@CCursorState@@AEAAXPEAUMonitorData@1@_N@Z @ 0x18015FA8C
 * Callers:
 *     ?TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@VCMILMatrix@@_N@Z @ 0x18015E0DC (-TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UN.c)
 *     ?SetPositionInternal@CCursorState@@AEAAXMM_N@Z @ 0x18015F974 (-SetPositionInternal@CCursorState@@AEAAXMM_N@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180126C50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z @ 0x18015FEEC (-EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Reset@PaddedBitmap@CCursorState@@QEAAJI_N@Z @ 0x1802174A4 (-Reset@PaddedBitmap@CCursorState@@QEAAJI_N@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCursorState::UpdateHardwareCursorOverlay(
        CCursorState *this,
        struct CCursorState::MonitorData *a2,
        char a3)
{
  float v3; // xmm4_4
  float v5; // xmm3_4
  __int64 v7; // rcx
  float v8; // xmm0_4
  float v9; // xmm7_4
  float v10; // xmm6_4
  char v11; // r15
  int v12; // r13d
  int v13; // r10d
  int v14; // ecx
  bool v15; // sf
  int v16; // ecx
  int v17; // r8d
  unsigned int v18; // ecx
  unsigned int v19; // r12d
  unsigned __int64 v20; // rcx
  unsigned int v21; // r14d
  __int64 v22; // rcx
  unsigned int v23; // edi
  __int128 *v24; // rdx
  __int64 v25; // rax
  __int64 *v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  __int64 *v31; // r15
  std::_Ref_count_base *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // r10
  unsigned int v39; // r9d
  unsigned int *v40; // rax
  unsigned int v41; // edx
  unsigned int v42; // r8d
  bool v43; // cf
  int v44; // [rsp+28h] [rbp-A9h]
  int v45; // [rsp+28h] [rbp-A9h]
  float v47; // [rsp+3Ch] [rbp-95h]
  int v48; // [rsp+3Ch] [rbp-95h]
  __int64 v49; // [rsp+40h] [rbp-91h] BYREF
  __int64 v50; // [rsp+48h] [rbp-89h] BYREF
  int v51; // [rsp+50h] [rbp-81h] BYREF
  __int64 v52; // [rsp+58h] [rbp-79h] BYREF
  __int64 v53; // [rsp+60h] [rbp-71h] BYREF
  __int128 *v54; // [rsp+68h] [rbp-69h]
  __int128 v55; // [rsp+70h] [rbp-61h] BYREF
  __int128 v56; // [rsp+80h] [rbp-51h]
  __int64 v57; // [rsp+90h] [rbp-41h] BYREF
  int v58; // [rsp+98h] [rbp-39h]
  int v59; // [rsp+9Ch] [rbp-35h]
  int v60; // [rsp+A0h] [rbp-31h]
  int v61; // [rsp+A4h] [rbp-2Dh]
  _QWORD v62[2]; // [rsp+A8h] [rbp-29h] BYREF
  _DWORD v63[4]; // [rsp+B8h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  v3 = *((float *)this + 15);
  v5 = *((float *)this + 14);
  v7 = *((_QWORD *)a2 + 12);
  v8 = (float)((float)((float)(v3 * *((float *)a2 + 7)) + (float)(v5 * *((float *)a2 + 3))) + *((float *)a2 + 15))
     + 6291456.25;
  v9 = (float)(((int)(LODWORD(v8) << 10) >> 11) - *(_DWORD *)v7);
  v47 = (float)((float)((float)(v3 * *((float *)a2 + 8)) + (float)(v5 * *((float *)a2 + 4))) + *((float *)a2 + 16))
      + 6291456.25;
  v10 = (float)(((int)(LODWORD(v47) << 10) >> 11) - *(_DWORD *)(v7 + 4));
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 120LL) + 32LL))(
    *(_QWORD *)(v7 + 24) + 120LL,
    &v53);
  v11 = 0;
  v12 = *((_DWORD *)a2 + 20) - (int)v9;
  if ( v12 < 0 )
    v12 = 0;
  v13 = *((_DWORD *)a2 + 21) - (int)v10;
  if ( v13 < 0 )
    v13 = 0;
  v14 = (int)v9 - *((_DWORD *)a2 + 22);
  v15 = (int)v53 + v14 < 0;
  v16 = v53 + v14;
  v48 = v13;
  if ( v15 )
    v16 = 0;
  v17 = HIDWORD(v53) + (int)v10 - *((_DWORD *)a2 + 23);
  if ( v17 < 0 )
    v17 = 0;
  v18 = v12 + v16;
  if ( (unsigned int)v53 < v18 )
    v18 = v53;
  v19 = v53 - v18;
  v20 = (unsigned int)(v13 + v17);
  if ( HIDWORD(v53) < (unsigned int)v20 )
    v20 = HIDWORD(v53);
  v21 = HIDWORD(v53) - v20;
  if ( !v19 || !v21 )
  {
LABEL_48:
    CCursorState::EnsureHardwareOverlayCleared((CCursorState *)v20, a2);
    return;
  }
  v22 = *(_QWORD *)a2;
  v60 = (int)v10;
  v57 = v22;
  v23 = v53;
  if ( (unsigned int)v53 < HIDWORD(v53) )
    v23 = HIDWORD(v53);
  v58 = *((_DWORD *)a2 + 2);
  v24 = 0LL;
  v59 = (int)v9;
  v61 = 1;
  v55 = 0LL;
  v56 = 0LL;
  if ( *((_BYTE *)a2 + 125) && __PAIR64__(v21, v19) != v53 )
    v11 = 1;
  if ( !a3 && *((_BYTE *)a2 + 124) && !v11 )
  {
LABEL_44:
    if ( (int)NtHWCursorUpdatePointer(&v57, v24) >= 0 )
    {
      *((_BYTE *)a2 + 124) = 1;
      return;
    }
    *((_QWORD *)a2 + 12) = 0LL;
    v20 = *((_QWORD *)a2 + 13);
    *((_QWORD *)a2 + 13) = 0LL;
    if ( v20 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v20);
    goto LABEL_48;
  }
  v62[1] = v53;
  v25 = *((_QWORD *)a2 + 12);
  v62[0] = 0LL;
  v54 = &v55;
  v26 = (__int64 *)(*(_QWORD *)(v25 + 24) + 16LL);
  v27 = *v26;
  v50 = 0LL;
  v28 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64, __int64 *))(v27 + 24))(v26, v62, 1LL, &v50);
  if ( v28 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6BA,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v28,
      v44);
  v51 = 0;
  v52 = 0LL;
  LODWORD(v49) = 0;
  v29 = (*(__int64 (__fastcall **)(__int64, int *, __int64 *))(*(_QWORD *)v50 + 48LL))(v50, &v51, &v52);
  if ( v29 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6C0,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v29,
      v44);
  v30 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v50 + 40LL))(v50, &v49);
  if ( v30 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6C1,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v30,
      v44);
  if ( !v11 )
  {
    v38 = v52;
    v39 = v49;
LABEL_41:
    v40 = (unsigned int *)*((_QWORD *)a2 + 12);
    v41 = *v40;
    v42 = v40[1];
    v43 = *((_BYTE *)this + 81) != 0;
    DWORD1(v55) = v23;
    *((_QWORD *)&v55 + 1) = __PAIR64__(v39, v23);
    *(_QWORD *)&v56 = __PAIR64__(v42, v41);
    LODWORD(v55) = v43 + 1;
    *((_QWORD *)&v56 + 1) = v38;
    if ( v50 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
    v24 = v54;
    goto LABEL_44;
  }
  v31 = (__int64 *)((char *)this + 280);
  v23 = v21;
  if ( v19 >= v21 )
    v23 = v19;
  if ( CCursorState::PaddedBitmap::Reset((CCursorState *)((char *)this + 280), v23, *((_BYTE *)this + 81)) >= 0 )
  {
    v33 = *v31;
    v34 = *((unsigned int *)this + 72);
    v35 = (unsigned int)(*((_DWORD *)this + 73) * *((_DWORD *)this + 72));
    v63[2] = v19 + v12;
    v63[3] = v48 + v21;
    v36 = *((_QWORD *)a2 + 12);
    v63[1] = v48;
    v63[0] = v12;
    v45 = v33;
    v37 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v36 + 24) + 120LL)
                                                                         + 64LL))(
            *(_QWORD *)(v36 + 24) + 120LL,
            v63,
            v34,
            v35);
    if ( v37 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6DC,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
        (const char *)(unsigned int)v37,
        v45);
    v38 = *v31;
    v59 += v12;
    v39 = *((_DWORD *)this + 72);
    v60 += v48;
    v52 = v38;
    LODWORD(v49) = v39;
    goto LABEL_41;
  }
  *((_QWORD *)a2 + 12) = 0LL;
  v32 = (std::_Ref_count_base *)*((_QWORD *)a2 + 13);
  *((_QWORD *)a2 + 13) = 0LL;
  if ( v32 )
    std::_Ref_count_base::_Decref(v32);
  CCursorState::EnsureHardwareOverlayCleared(v32, a2);
  if ( v50 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
}
