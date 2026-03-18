/*
 * XREFs of ?GetPhysicalFrameBounds@WindowMargins@@YA?AUtagRECT@@PEAUtagWND@@@Z @ 0x140258DC0
 * Callers:
 *     NtUserGetWindowCompositionAttribute @ 0x140298E30 (NtUserGetWindowCompositionAttribute.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z @ 0x140037B64 (-GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14026BB14 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 */

struct tagRECT *__fastcall WindowMargins::GetPhysicalFrameBounds(
        WindowMargins *this,
        struct tagRECT *__return_ptr retstr,
        struct tagWND *a3)
{
  char v5; // si
  char v6; // bp
  char v7; // di
  __int64 v8; // rbx
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  char v15; // r12
  char v16; // bp
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  struct WindowMargins::CWindowMarginProp *v20; // rax
  __int64 v21; // rdx
  char v22; // di
  char v23; // bl
  __int16 v24; // r12
  __int16 v25; // r13
  __int16 v26; // bp
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // eax
  INT ScaledLogPixels; // ebx
  __int64 v36; // rax
  int v37; // ecx
  __int64 v38; // rax
  INT v39; // edi
  __int64 v40; // rcx
  bool v41; // di
  char v42; // bl
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  int v46; // ecx
  char v47; // bp
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  __int16 v52; // [rsp+B0h] [rbp+8h]
  __int64 v53; // [rsp+B8h] [rbp+10h]
  __int64 v54; // [rsp+C0h] [rbp+18h] BYREF

  v5 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100000) == 0
    || (v6 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v6 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v7 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v7 = 0;
  }
  if ( v6 || v7 )
  {
    v8 = *(_QWORD *)&retstr->left;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, retstr);
    LOBYTE(v10) = v7;
    LOBYTE(v11) = v6;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      21,
      31,
      (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
      v8);
  }
  *(_OWORD *)this = *(_OWORD *)(*(_QWORD *)&retstr[2].right + 88LL);
  v12 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)&retstr[2].right + 256LL));
  v13 = *(_QWORD *)&retstr[2].right;
  v54 = v12;
  LogicalToPhysicalDPIRect(this, this, *(unsigned int *)(v13 + 288), &v54);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100000) == 0
    || (v15 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v15 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v16 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v16 = 0;
  }
  if ( v15 || v16 )
  {
    v17 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
    LOBYTE(v18) = v16;
    LOBYTE(v19) = v15;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v19,
      v18,
      *(_QWORD *)(v17 + 69160),
      5,
      21,
      32,
      (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
      *(_DWORD *)this,
      *((_DWORD *)this + 1),
      *((_DWORD *)this + 2),
      *((_DWORD *)this + 3),
      *(_DWORD *)this - *((_DWORD *)this + 2),
      *((_BYTE *)this + 12) - *((_DWORD *)this + 1));
  }
  v20 = WindowMargins::CWindowMarginProp::GetOrCreate((struct tagWND *)retstr, v14);
  if ( v20 )
  {
    v53 = *(_QWORD *)((char *)v20 + 44);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100000) == 0
      || (v22 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v22 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v23 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v23 = 0;
    }
    v24 = WORD2(*(_QWORD *)((char *)v20 + 44));
    v25 = WORD1(*(_QWORD *)((char *)v20 + 44));
    v26 = *(_QWORD *)((char *)v20 + 44);
    v52 = HIWORD(*(_QWORD *)((char *)v20 + 44));
    if ( v22 || v23 )
    {
      v27 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v21);
      LOBYTE(v28) = v23;
      LOBYTE(v29) = v22;
      WPP_RECORDER_AND_TRACE_SF_dddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v29,
        v28,
        *(_QWORD *)(v27 + 69160),
        5,
        21,
        33,
        (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
        v53,
        SBYTE4(v53),
        SBYTE2(v53),
        SBYTE6(v53));
    }
    v30 = *(unsigned int *)(*(_QWORD *)&retstr[2].right + 288LL);
    LOBYTE(v30) = v30 & 0xF;
    if ( (_BYTE)v30 != 2 )
    {
      if ( PtiCurrent(v30, v21)
        && *((_QWORD *)PtiCurrent(v31, v21) + 62)
        && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v32, v21) + 62) + 8LL) + 64LL) & 1) != 0
        && (v33 = *(_QWORD *)&retstr[2].right, v34 = *(_DWORD *)(v33 + 288), (v34 & 0xF) == 0)
        && (v34 & 0x40000000) != 0 )
      {
        ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels(*(unsigned __int16 *)(v33 + 284));
      }
      else
      {
        v36 = *(_QWORD *)&retstr[2].right;
        v37 = *(_DWORD *)(v36 + 288) & 0xF;
        if ( v37 == 3 )
        {
          ScaledLogPixels = (*(_DWORD *)(v36 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v36 + 232) & 0x400) != 0 )
        {
          ScaledLogPixels = GetWindowDpiLastNotify((__int64)retstr);
        }
        else if ( !v37
               && (v38 = *(_QWORD *)(*(_QWORD *)&retstr[1].left + 496LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v38 + 8) + 64LL) & 1) != 0 )
        {
          ScaledLogPixels = 96;
        }
        else
        {
          ScaledLogPixels = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&retstr[1].left + 464LL) + 272LL);
        }
      }
      v39 = *(unsigned __int16 *)(*(_QWORD *)(v54 + 40) + 60LL);
      if ( v39 != ScaledLogPixels )
      {
        v26 = EngMulDiv((__int16)v53, v39, ScaledLogPixels);
        v24 = EngMulDiv(SWORD2(v53), v39, ScaledLogPixels);
        v25 = EngMulDiv(SWORD1(v53), v39, ScaledLogPixels);
        v52 = EngMulDiv(SHIWORD(v53), v39, ScaledLogPixels);
        v21 = *(_QWORD *)&WPP_GLOBAL_Control;
        v41 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100000) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v42 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v42 = 0;
        }
        if ( v41 || v42 )
        {
          v43 = W32GetUserSessionState(v40, *(_QWORD *)&WPP_GLOBAL_Control);
          LOBYTE(v44) = v42;
          LOBYTE(v45) = v41;
          WPP_RECORDER_AND_TRACE_SF_dddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v45,
            v44,
            *(_QWORD *)(v43 + 69160),
            5,
            21,
            34,
            (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
            v26,
            v24,
            v25,
            v52);
        }
      }
    }
    v46 = *((_DWORD *)this + 2);
    *(_DWORD *)this += v26;
    *((_DWORD *)this + 1) += v24;
    *((_DWORD *)this + 3) -= v52;
    *((_DWORD *)this + 2) = v46 - v25;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100000) == 0
    || (v47 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v47 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v5 = 0;
  }
  if ( v47 || v5 )
  {
    v48 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v21);
    LOBYTE(v49) = v5;
    LOBYTE(v50) = v47;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v50,
      v49,
      *(_QWORD *)(v48 + 69160),
      5,
      21,
      35,
      (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
      *(_DWORD *)this,
      *((_DWORD *)this + 1),
      *((_DWORD *)this + 2),
      *((_DWORD *)this + 3),
      *(_DWORD *)this - *((_DWORD *)this + 2),
      *((_BYTE *)this + 12) - *((_DWORD *)this + 1));
  }
  return (struct tagRECT *)this;
}
