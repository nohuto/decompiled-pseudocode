/*
 * XREFs of ?GetPhysicalFrameBounds@WindowMargins@@YA?AUtagRECT@@PEAUtagWND@@@Z @ 0x1401E0F08
 * Callers:
 *     NtUserGetWindowCompositionAttribute @ 0x1401E07E0 (NtUserGetWindowCompositionAttribute.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     ?GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z @ 0x14004ED4C (-GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140160DC8 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14025F6A4 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 */

struct tagRECT *__fastcall WindowMargins::GetPhysicalFrameBounds(
        WindowMargins *this,
        struct tagRECT *__return_ptr retstr,
        struct tagWND *a3)
{
  char v5; // si
  char v6; // bp
  char v7; // di
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  char v11; // r12
  char v12; // bp
  struct WindowMargins::CWindowMarginProp *v13; // rax
  struct MOVESIZEDATA *v14; // rdx
  char v15; // di
  char v16; // bl
  __int16 v17; // r12
  __int16 v18; // r13
  __int16 v19; // bp
  __int64 v20; // rcx
  int v21; // ecx
  char v22; // bp
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // ecx
  INT ScaledLogPixels; // ebx
  INT v30; // edi
  __int64 v31; // rcx
  bool v32; // di
  char v33; // bl
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 UserSessionState; // rax
  int v40; // r8d
  int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  __int64 v46; // rax
  __int64 v47; // [rsp+40h] [rbp-68h]
  __int64 v48; // [rsp+48h] [rbp-60h]
  __int64 v49; // [rsp+50h] [rbp-58h]
  __int64 v50; // [rsp+58h] [rbp-50h]
  __int64 v51; // [rsp+60h] [rbp-48h]
  __int64 v52; // [rsp+68h] [rbp-40h]
  __int16 v53; // [rsp+B0h] [rbp+8h]
  __int64 v54; // [rsp+B8h] [rbp+10h]
  __int64 v55; // [rsp+C0h] [rbp+18h] BYREF

  v5 = 1;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100000) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v6 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v7 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v7 = 0;
  }
  if ( v6 || v7 )
  {
    v38 = *(_QWORD *)&retstr->left;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, retstr);
    LOBYTE(v40) = v7;
    LOBYTE(v41) = v6;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v41,
      v40,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      21,
      31,
      (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
      v38);
  }
  *(_OWORD *)this = *(_OWORD *)(*(_QWORD *)&retstr[2].right + 88LL);
  v8 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)&retstr[2].right + 256LL));
  v9 = *(_QWORD *)&retstr[2].right;
  v55 = v8;
  LogicalToPhysicalDPIRect(this, this, *(unsigned int *)(v9 + 288), &v55);
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100000) == 0
    || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v11 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v12 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v12 = 0;
  }
  if ( v11 || v12 )
  {
    v42 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
    LODWORD(v47) = *(_DWORD *)this;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v12,
      *(_QWORD *)(v42 + 69152),
      5u,
      0x15u,
      0x20u,
      (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
      v47,
      *((_DWORD *)this + 1),
      *((_DWORD *)this + 2),
      *((_DWORD *)this + 3),
      *(_DWORD *)this - *((_DWORD *)this + 2),
      *((_DWORD *)this + 3) - *((_DWORD *)this + 1));
  }
  v13 = WindowMargins::CWindowMarginProp::GetOrCreate((struct tagWND *)retstr, v10);
  if ( v13 )
  {
    v54 = *(_QWORD *)((char *)v13 + 44);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100000) == 0
      || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v15 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v16 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v16 = 0;
    }
    v17 = WORD2(*(_QWORD *)((char *)v13 + 44));
    v18 = WORD1(*(_QWORD *)((char *)v13 + 44));
    v19 = *(_QWORD *)((char *)v13 + 44);
    v53 = HIWORD(*(_QWORD *)((char *)v13 + 44));
    if ( v15 || v16 )
    {
      v43 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
      LOBYTE(v44) = v16;
      LOBYTE(v45) = v15;
      WPP_RECORDER_AND_TRACE_SF_dddd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v45,
        v44,
        *(_QWORD *)(v43 + 69152),
        5,
        21,
        33,
        (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
        v54,
        SBYTE4(v54),
        SBYTE2(v54),
        SBYTE6(v54));
    }
    v20 = *(unsigned int *)(*(_QWORD *)&retstr[2].right + 288LL);
    LOBYTE(v20) = v20 & 0xF;
    if ( (_BYTE)v20 != 2 )
    {
      if ( PtiCurrent(v20)
        && *((_QWORD *)PtiCurrent(v24) + 61)
        && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v25) + 61) + 8LL) + 64LL) & 1) != 0
        && (v26 = *(_QWORD *)&retstr[2].right, (*(_DWORD *)(v26 + 288) & 0x4000000F) == 0x40000000) )
      {
        ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels(*(unsigned __int16 *)(v26 + 284));
      }
      else
      {
        v27 = *(_QWORD *)&retstr[2].right;
        v28 = *(_DWORD *)(v27 + 288) & 0xF;
        if ( v28 == 3 )
        {
          ScaledLogPixels = (*(_DWORD *)(v27 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v27 + 232) & 0x400) != 0 )
        {
          ScaledLogPixels = GetWindowDpiLastNotify((__int64)retstr);
        }
        else if ( !v28
               && (v37 = *(_QWORD *)(*(_QWORD *)&retstr[1].left + 488LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v37 + 8) + 64LL) & 1) != 0 )
        {
          ScaledLogPixels = 96;
        }
        else
        {
          ScaledLogPixels = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&retstr[1].left + 456LL) + 272LL);
        }
      }
      v30 = *(unsigned __int16 *)(*(_QWORD *)(v55 + 40) + 60LL);
      if ( v30 != ScaledLogPixels )
      {
        v19 = EngMulDiv((__int16)v54, v30, ScaledLogPixels);
        v17 = EngMulDiv(SWORD2(v54), v30, ScaledLogPixels);
        v18 = EngMulDiv(SWORD1(v54), v30, ScaledLogPixels);
        v53 = EngMulDiv(SHIWORD(v54), v30, ScaledLogPixels);
        v14 = WPP_GLOBAL_Control;
        v32 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100000) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v33 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v33 = 0;
        }
        if ( v32 || v33 )
        {
          v34 = W32GetUserSessionState(v31, WPP_GLOBAL_Control);
          LOBYTE(v35) = v33;
          LOBYTE(v36) = v32;
          WPP_RECORDER_AND_TRACE_SF_dddd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v36,
            v35,
            *(_QWORD *)(v34 + 69152),
            5,
            21,
            34,
            (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
            v19,
            v17,
            v18,
            v53);
        }
      }
    }
    v21 = *((_DWORD *)this + 2);
    *(_DWORD *)this += v19;
    *((_DWORD *)this + 1) += v17;
    *((_DWORD *)this + 3) -= v53;
    *((_DWORD *)this + 2) = v21 - v18;
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100000) == 0
    || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v22 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v5 = 0;
  if ( v22 || v5 )
  {
    v46 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
    LODWORD(v52) = *((_DWORD *)this + 3) - *((_DWORD *)this + 1);
    LODWORD(v51) = *(_DWORD *)this - *((_DWORD *)this + 2);
    LODWORD(v50) = *((_DWORD *)this + 3);
    LODWORD(v49) = *((_DWORD *)this + 2);
    LODWORD(v48) = *((_DWORD *)this + 1);
    LODWORD(v47) = *(_DWORD *)this;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v22,
      v5,
      *(_QWORD *)(v46 + 69152),
      5u,
      0x15u,
      0x23u,
      (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  return (struct tagRECT *)this;
}
