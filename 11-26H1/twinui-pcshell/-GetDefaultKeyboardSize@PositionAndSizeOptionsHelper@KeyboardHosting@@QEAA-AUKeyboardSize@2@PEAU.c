/*
 * XREFs of ?GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@_NNPEAN@Z @ 0x1800BCA90
 * Callers:
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x180250A00 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 * Callees:
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800CF550 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ??$_Try_emplace@AEBQEAUHMONITOR__@@$$V@?$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBQEAUHMONITOR__@@@Z @ 0x18012894C (--$_Try_emplace@AEBQEAUHMONITOR__@@$$V@-$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHMONITOR__@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHMONITOR__@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180128A74 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAUHMONITOR__@@@1@V-$tuple@$$V@1@@-$_Tree_temp_.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1801C4230 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _o_ceilf_0 @ 0x1802C9E24 (_o_ceilf_0.c)
 *     sqrt @ 0x1802C9E6C (sqrt.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1803151E4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
        RTL_SRWLOCK *a1,
        _DWORD *a2,
        HMONITOR a3,
        __int64 a4,
        int a5,
        char a6,
        double a7,
        double *a8)
{
  RTL_SRWLOCK *v11; // rbx
  __m128i v12; // xmm8
  int v13; // r15d
  int v14; // edi
  int v15; // ebx
  double v16; // xmm6_8
  double v17; // xmm7_8
  bool v18; // cc
  double v19; // xmm0_8
  int v20; // eax
  char v21; // dl
  __int64 v22; // r9
  PVOID Ptr; // r8
  __int64 v24; // rcx
  bool v25; // zf
  __int64 inserted; // rdx
  __int64 *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  double v30; // xmm1_8
  double v31; // xmm2_8
  float v32; // xmm4_4
  float v33; // xmm7_4
  float v34; // xmm3_4
  int v35; // ecx
  int v36; // ebx
  int v37; // eax
  float v38; // xmm3_4
  float v39; // xmm0_4
  float v40; // xmm3_4
  int v41; // ecx
  unsigned int v42; // eax
  double v43; // xmm1_8
  double v45; // xmm2_8
  float v46; // xmm2_4
  const struct _tlgProvider_t *v47; // rax
  int v48; // r8d
  int v49; // r9d
  __int64 *v50; // rax
  float v51; // xmm1_4
  HMONITOR hMonitor; // [rsp+40h] [rbp-C0h] BYREF
  int v53; // [rsp+48h] [rbp-B8h] BYREF
  HMONITOR *p_hMonitor; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v55; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v56; // [rsp+70h] [rbp-90h] BYREF
  PSRWLOCK SRWLock; // [rsp+80h] [rbp-80h]
  char v58[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v59; // [rsp+90h] [rbp-70h]
  struct tagMONITORINFO mi; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v61[24]; // [rsp+C0h] [rbp-40h] BYREF
  int v62; // [rsp+D8h] [rbp-28h]
  int v63; // [rsp+DCh] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  hMonitor = a3;
  v11 = a1 + 2;
  SRWLock = a1 + 2;
  AcquireSRWLockExclusive(a1 + 2);
  *(_QWORD *)&v56 = v11;
  v12.m128i_i64[0] = 0LL;
  v13 = 96;
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  memset_0(v61, 0, 0x60uLL);
  if ( GetMonitorInfoW(hMonitor, &mi) && (unsigned int)GetCurrentDpiInfo(hMonitor, v61) )
  {
    v14 = mi.rcMonitor.left - mi.rcMonitor.right;
    if ( mi.rcMonitor.left - mi.rcMonitor.right < 0 )
      v14 = mi.rcMonitor.right - mi.rcMonitor.left;
    v15 = mi.rcMonitor.top - mi.rcMonitor.bottom;
    if ( mi.rcMonitor.top - mi.rcMonitor.bottom < 0 )
      v15 = mi.rcMonitor.bottom - mi.rcMonitor.top;
    if ( v14 > 0 && v15 > 0 && v62 > 0 && v63 > 0 )
    {
      v16 = (double)(100 * v62) / 2540.0;
      v17 = (double)(100 * v63) / 2540.0;
      v18 = v14 < v15;
      if ( v14 > v15 )
      {
        if ( v17 > v16 )
        {
LABEL_99:
          v16 = (double)(100 * v63) / 2540.0;
          v17 = (double)(100 * v62) / 2540.0;
LABEL_15:
          v19 = sqrt(v17 * v17 + v16 * v16);
          *(double *)v12.m128i_i64 = v19;
          v20 = (int)((double)v15 / v17);
          v13 = v20;
          v21 = 1;
          v22 = (unsigned int)(int)((double)v14 / v16);
          goto LABEL_16;
        }
        v18 = v14 < v15;
      }
      if ( !v18 || v16 <= v17 )
        goto LABEL_15;
      goto LABEL_99;
    }
  }
  v21 = 0;
  v20 = 96;
  v22 = 96LL;
  v19 = 0.0;
LABEL_16:
  Ptr = a1->Ptr;
  v24 = *((_QWORD *)a1->Ptr + 1);
  v25 = v21 == 0;
  inserted = (__int64)a1->Ptr;
  if ( v25 )
  {
    mi.rcMonitor.right = 0;
    if ( !*(_BYTE *)(v24 + 25) )
    {
      do
      {
        if ( *(_QWORD *)(v24 + 32) < (unsigned __int64)hMonitor )
        {
          LOBYTE(v22) = 1;
        }
        else
        {
          v22 = 0LL;
          inserted = v24;
        }
        v50 = (__int64 *)(v24 + 16);
        if ( !(_BYTE)v22 )
          v50 = (__int64 *)v24;
        v24 = *v50;
      }
      while ( !*(_BYTE *)(*v50 + 25) );
    }
    if ( !*(_BYTE *)(inserted + 25)
      && (unsigned __int64)hMonitor >= *(_QWORD *)(inserted + 32)
      && (PVOID)inserted != Ptr )
    {
      v12 = *(__m128i *)(*(_QWORD *)std::map<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi>::_Try_emplace<HMONITOR__ * const &,>(
                                      a1,
                                      v58,
                                      &hMonitor,
                                      v22)
                       + 40LL);
      v13 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 12));
    }
  }
  else
  {
    *(double *)&v55 = v19;
    *((_QWORD *)&v55 + 1) = __PAIR64__(v20, v22);
    *(_QWORD *)&mi.cbSize = v24;
    *(_QWORD *)&mi.rcMonitor.top = 0LL;
    while ( !*(_BYTE *)(v24 + 25) )
    {
      *(_QWORD *)&mi.cbSize = v24;
      if ( *(_QWORD *)(v24 + 32) < (unsigned __int64)hMonitor )
      {
        LOBYTE(v22) = 1;
        mi.rcMonitor.top = 0;
      }
      else
      {
        LODWORD(v22) = 0;
        mi.rcMonitor.top = 1;
        inserted = v24;
      }
      v27 = (__int64 *)(v24 + 16);
      if ( !(_BYTE)v22 )
        v27 = (__int64 *)v24;
      v24 = *v27;
    }
    if ( *(_BYTE *)(inserted + 25) || (unsigned __int64)hMonitor < *(_QWORD *)(inserted + 32) )
    {
      if ( a1[1].Ptr == (PVOID)0x492492492492492LL )
        std::_Throw_tree_length_error();
      p_hMonitor = &hMonitor;
      v28 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *>>>(
              (unsigned int)v58,
              (_DWORD)a1,
              (_DWORD)Ptr,
              v22,
              (__int64)&p_hMonitor);
      v29 = *(_QWORD *)(v28 + 8);
      *(_QWORD *)(v28 + 8) = 0LL;
      if ( v59 )
        std::_Deallocate<16>(v59, 56LL);
      v56 = *(_OWORD *)&mi.cbSize;
      inserted = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                   a1,
                   &v56,
                   v29);
    }
    *(_OWORD *)(inserted + 40) = v55;
  }
  if ( *(double *)v12.m128i_i64 == 0.0 || *(float *)(a4 + 8) <= 0.0 || *(float *)(a4 + 12) <= 0.0 )
  {
    v47 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v47 > 5u )
    {
      v53 = *(_DWORD *)(a4 + 12);
      LODWORD(p_hMonitor) = *(_DWORD *)(a4 + 8);
      *(_QWORD *)&v55 = v12.m128i_i64[0];
      *(_QWORD *)&v56 = "PositionAndSizeOptionsHelper::GetDefaultKeyboardSize: Monitor information is incorrect";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (_DWORD)v47,
        (unsigned int)&unk_180810E6F,
        v48,
        v49,
        (__int64)&v56,
        (__int64)&v55,
        (__int64)&p_hMonitor,
        (__int64)&v53);
    }
  }
  if ( !a6 )
  {
    v30 = *(double *)v12.m128i_i64;
LABEL_36:
    v31 = DOUBLE_1_0;
    goto LABEL_37;
  }
  v30 = a7;
  if ( *(double *)v12.m128i_i64 == 0.0 )
    goto LABEL_36;
  v31 = *(double *)v12.m128i_i64 / a7;
LABEL_37:
  if ( v31 <= 0.0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3C,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      (const char *)retaddr);
  *a8 = v31;
  if ( a6 )
    v32 = *(float *)(a4 + 8) * v31;
  else
    v32 = *(float *)(a4 + 8);
  if ( v32 <= 0.0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3F,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      (const char *)retaddr);
  v33 = *(float *)(a4 + 12);
  if ( a6 )
    v34 = v33 * v31;
  else
    v34 = *(float *)(a4 + 12);
  if ( v34 <= 0.0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x41,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      (const char *)retaddr);
  if ( a6 )
    v35 = (int)((double)v13 * v31);
  else
    v35 = v13;
  if ( !v35 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x43,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      (const char *)retaddr);
  if ( v30 != 0.0 && v30 >= 8.0 )
    v32 = v32 * 0.89999998;
  v36 = (int)v32;
  *a2 = (int)v32;
  if ( v30 == 0.0 || v30 < 8.0 )
  {
    v40 = v34 * 0.5;
  }
  else
  {
    if ( v30 >= 23.5 )
    {
      v45 = (double)v35;
      if ( v30 >= 55.0 )
      {
        v51 = (float)(int)(v45 * 6.299212598425197);
        if ( a5 )
          v51 = (float)(v51 * 100.0) / (float)a5;
        v39 = v51;
      }
      else
      {
        v46 = (float)(int)((v30 * 260.0 + 1700.0) / 2540.0 * v45);
        if ( a5 )
          v46 = (float)(v46 * 100.0) / (float)a5;
        v39 = v46;
      }
    }
    else
    {
      v37 = 1600;
      if ( v30 >= 19.5 )
        v37 = 1900;
      v38 = (double)v37 / 2540.0 * 4.0 * (double)v35
          + (double)v35 * 0.07874015748031496
          + (double)v35 * ((double)v37 / 2540.0);
      if ( a5 )
        v38 = (float)(v38 * 100.0) / (float)a5;
      v39 = v38;
    }
    v40 = o_ceilf_0(v39);
  }
  v41 = (int)v40;
  a2[1] = (int)v40;
  if ( (float)v36 > *(float *)(a4 + 8) )
    *a2 = (int)*(float *)(a4 + 8);
  v42 = (int)(float)(v33 * 0.5);
  if ( v41 > v42 )
  {
    a2[1] = v42;
    v41 = (int)(float)(v33 * 0.5);
  }
  if ( *(double *)v12.m128i_i64 > 8.0 && *(double *)v12.m128i_i64 < 23.5 )
  {
    v43 = v33 * 0.43;
    if ( (double)v41 > v43 )
      a2[1] = (int)v43;
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return a2;
}
