/*
 * XREFs of ?GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@_NNPEAN@Z @ 0x1800372A8
 * Callers:
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x180035E80 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180038344 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1800F848C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ??$_Try_emplace@AEBQEAUHMONITOR__@@$$V@?$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBQEAUHMONITOR__@@@Z @ 0x18012EFC4 (--$_Try_emplace@AEBQEAUHMONITOR__@@$$V@-$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHMONITOR__@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHMONITOR__@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18012F0DC (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAUHMONITOR__@@@1@V-$tuple@$$V@1@@-$_Tree_temp_.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1801CCAB8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _o_ceilf_0 @ 0x1802D2F54 (_o_ceilf_0.c)
 *     sqrt @ 0x1802D2F9C (sqrt.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180318F84 (-_Throw_tree_length_error@std@@YAXXZ.c)
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
  int v13; // r12d
  int v14; // edi
  int v15; // ebx
  double v16; // xmm6_8
  double v17; // xmm7_8
  bool v18; // cc
  int v19; // r9d
  PVOID Ptr; // r8
  __int64 v21; // rax
  __int64 inserted; // rcx
  __int64 v23; // rax
  __int64 v24; // rbx
  double v25; // xmm1_8
  double v26; // xmm3_8
  float v27; // xmm4_4
  float v28; // xmm2_4
  int v29; // ecx
  int v30; // ebx
  int v31; // eax
  float v32; // xmm3_4
  float v33; // xmm0_4
  float v34; // xmm2_4
  int v35; // ecx
  unsigned int v36; // eax
  double v37; // xmm1_8
  double v39; // xmm2_8
  int v40; // eax
  float v41; // xmm1_4
  _QWORD *v42; // rax
  _BYTE *v43; // rcx
  const struct _tlgProvider_t *v44; // rax
  int v45; // r8d
  int v46; // r9d
  HMONITOR hMonitor; // [rsp+40h] [rbp-C0h] BYREF
  int v48; // [rsp+48h] [rbp-B8h] BYREF
  HMONITOR *p_hMonitor; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v50; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v51; // [rsp+70h] [rbp-90h] BYREF
  PSRWLOCK SRWLock; // [rsp+80h] [rbp-80h]
  char v53[8]; // [rsp+88h] [rbp-78h] BYREF
  void *v54; // [rsp+90h] [rbp-70h]
  struct tagMONITORINFO mi; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v56[24]; // [rsp+C0h] [rbp-40h] BYREF
  int v57; // [rsp+D8h] [rbp-28h]
  int v58; // [rsp+DCh] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  hMonitor = a3;
  v11 = a1 + 2;
  SRWLock = a1 + 2;
  AcquireSRWLockExclusive(a1 + 2);
  *(_QWORD *)&v51 = v11;
  v12.m128i_i64[0] = 0LL;
  v13 = 96;
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  memset_0(v56, 0, 0x60uLL);
  if ( GetMonitorInfoW(hMonitor, &mi) && (unsigned int)GetCurrentDpiInfo(hMonitor, v56) )
  {
    v14 = mi.rcMonitor.left - mi.rcMonitor.right;
    if ( mi.rcMonitor.left - mi.rcMonitor.right < 0 )
      v14 = mi.rcMonitor.right - mi.rcMonitor.left;
    v15 = mi.rcMonitor.top - mi.rcMonitor.bottom;
    if ( mi.rcMonitor.top - mi.rcMonitor.bottom < 0 )
      v15 = mi.rcMonitor.bottom - mi.rcMonitor.top;
    if ( v14 > 0 && v15 > 0 && v57 > 0 && v58 > 0 )
    {
      v16 = (double)(100 * v57) / 2540.0;
      v17 = (double)(100 * v58) / 2540.0;
      v18 = v14 < v15;
      if ( v14 > v15 )
      {
        if ( v17 > v16 )
        {
LABEL_90:
          v16 = (double)(100 * v58) / 2540.0;
          v17 = (double)(100 * v57) / 2540.0;
LABEL_15:
          v12.m128i_i64[0] = sqrt(v17 * v17 + v16 * v16);
          v13 = (int)((double)v15 / v17);
          *(_QWORD *)&v50 = v12.m128i_i64[0];
          DWORD2(v50) = (int)((double)v14 / v16);
          HIDWORD(v50) = v13;
          Ptr = a1->Ptr;
          v21 = *((_QWORD *)a1->Ptr + 1);
          *(_QWORD *)&mi.cbSize = v21;
          mi.rcMonitor.top = 0;
          mi.rcMonitor.right = 0;
          inserted = (__int64)Ptr;
          while ( !*(_BYTE *)(v21 + 25) )
          {
            *(_QWORD *)&mi.cbSize = v21;
            if ( *(_QWORD *)(v21 + 32) < (unsigned __int64)hMonitor )
            {
              mi.rcMonitor.top = 0;
              v21 = *(_QWORD *)(v21 + 16);
            }
            else
            {
              mi.rcMonitor.top = 1;
              inserted = v21;
              v21 = *(_QWORD *)v21;
            }
          }
          if ( *(_BYTE *)(inserted + 25) || (unsigned __int64)hMonitor < *(_QWORD *)(inserted + 32) )
          {
            if ( a1[1].Ptr == (PVOID)0x492492492492492LL )
              std::_Throw_tree_length_error();
            p_hMonitor = &hMonitor;
            v23 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *>>>(
                    (unsigned int)v53,
                    (_DWORD)a1,
                    (_DWORD)Ptr,
                    v19,
                    (__int64)&p_hMonitor);
            v24 = *(_QWORD *)(v23 + 8);
            *(_QWORD *)(v23 + 8) = 0LL;
            if ( v54 )
              std::_Deallocate<16,0>(v54, (const struct std::nothrow_t *)0x38);
            v51 = *(_OWORD *)&mi.cbSize;
            inserted = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                         a1,
                         &v51,
                         v24);
          }
          *(_OWORD *)(inserted + 40) = v50;
LABEL_27:
          if ( *(double *)v12.m128i_i64 != 0.0 && *(float *)(a4 + 8) > 0.0 && *(float *)(a4 + 12) > 0.0 )
            goto LABEL_30;
          goto LABEL_79;
        }
        v18 = v14 < v15;
      }
      if ( !v18 || v16 <= v17 )
        goto LABEL_15;
      goto LABEL_90;
    }
  }
  v42 = (_QWORD *)*((_QWORD *)a1->Ptr + 1);
  v43 = a1->Ptr;
  while ( !*((_BYTE *)v42 + 25) )
  {
    if ( v42[4] < (unsigned __int64)hMonitor )
    {
      v42 = (_QWORD *)v42[2];
    }
    else
    {
      v43 = v42;
      v42 = (_QWORD *)*v42;
    }
  }
  if ( !v43[25] && (unsigned __int64)hMonitor >= *((_QWORD *)v43 + 4) && v43 != a1->Ptr )
  {
    v12 = *(__m128i *)(*(_QWORD *)std::map<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi>::_Try_emplace<HMONITOR__ * const &,>(
                                    a1,
                                    v53,
                                    &hMonitor)
                     + 40LL);
    v13 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 12));
    goto LABEL_27;
  }
LABEL_79:
  v44 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v44 > 5u )
  {
    v48 = *(_DWORD *)(a4 + 12);
    LODWORD(p_hMonitor) = *(_DWORD *)(a4 + 8);
    *(_QWORD *)&v50 = v12.m128i_i64[0];
    *(_QWORD *)&v51 = "PositionAndSizeOptionsHelper::GetDefaultKeyboardSize: Monitor information is incorrect";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (_DWORD)v44,
      (unsigned int)&unk_1807DA000,
      v45,
      v46,
      (__int64)&v51,
      (__int64)&v50,
      (__int64)&p_hMonitor,
      (__int64)&v48);
  }
LABEL_30:
  if ( !a6 )
  {
    v25 = *(double *)v12.m128i_i64;
LABEL_32:
    v26 = DOUBLE_1_0;
    goto LABEL_33;
  }
  v25 = a7;
  if ( *(double *)v12.m128i_i64 == 0.0 )
    goto LABEL_32;
  v26 = *(double *)v12.m128i_i64 / a7;
LABEL_33:
  if ( v26 <= 0.0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3C,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      (const char *)retaddr);
  *a8 = v26;
  v27 = *(float *)(a4 + 8);
  if ( a6 )
    v27 = v27 * v26;
  if ( v27 <= 0.0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3F,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      (const char *)retaddr);
  v28 = *(float *)(a4 + 12);
  if ( a6 )
    v28 = v28 * v26;
  if ( v28 <= 0.0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x41,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      (const char *)retaddr);
  if ( a6 )
    v29 = (int)((double)v13 * v26);
  else
    v29 = v13;
  if ( !v29 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x43,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      (const char *)retaddr);
  if ( v25 != 0.0 && v25 >= 8.0 )
    v27 = v27 * 0.89999998;
  v30 = (int)v27;
  *a2 = (int)v27;
  if ( v25 == 0.0 || v25 < 8.0 )
  {
    v34 = v28 * 0.5;
  }
  else
  {
    if ( v25 >= 23.5 )
    {
      v39 = (double)v29;
      if ( v25 >= 55.0 )
        v40 = (int)(v39 * 6.299212598425197);
      else
        v40 = (int)((v25 * 260.0 + 1700.0) / 2540.0 * v39);
      v41 = (float)v40;
      if ( a5 )
        v41 = (float)(v41 * 100.0) / (float)a5;
      v33 = v41;
    }
    else
    {
      v31 = 1600;
      if ( v25 >= 19.5 )
        v31 = 1900;
      v32 = (double)v31 / 2540.0 * 4.0 * (double)v29
          + (double)v29 * 0.07874015748031496
          + (double)v29 * ((double)v31 / 2540.0);
      if ( a5 )
        v32 = (float)(v32 * 100.0) / (float)a5;
      v33 = v32;
    }
    v34 = o_ceilf_0(v33);
  }
  v35 = (int)v34;
  a2[1] = (int)v34;
  if ( (float)v30 > *(float *)(a4 + 8) )
    *a2 = (int)*(float *)(a4 + 8);
  v36 = (int)(float)(*(float *)(a4 + 12) * 0.5);
  if ( v35 > v36 )
  {
    a2[1] = v36;
    v35 = v36;
  }
  if ( *(double *)v12.m128i_i64 > 8.0 && *(double *)v12.m128i_i64 < 23.5 )
  {
    v37 = *(float *)(a4 + 12) * 0.43;
    if ( (double)v35 > v37 )
      a2[1] = (int)v37;
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return a2;
}
