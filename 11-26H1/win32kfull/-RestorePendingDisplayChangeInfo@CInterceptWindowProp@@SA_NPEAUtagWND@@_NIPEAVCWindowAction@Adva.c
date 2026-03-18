/*
 * XREFs of ?RestorePendingDisplayChangeInfo@CInterceptWindowProp@@SA_NPEAUtagWND@@_NIPEAVCWindowAction@AdvancedWindowPos@@PEAW4ApplyWindowActionError@4@@Z @ 0x1402E3454
 * Callers:
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402E474C (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z @ 0x140289258 (-GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z.c)
 */

char __fastcall CInterceptWindowProp::RestorePendingDisplayChangeInfo(
        struct tagWND *a1,
        char a2,
        int a3,
        struct AdvancedWindowPos::CWindowAction *a4,
        enum AdvancedWindowPos::ApplyWindowActionError *a5)
{
  struct CInterceptWindowProp *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct CInterceptWindowProp *v12; // rdi
  __int64 v14; // rax
  char v15; // cl
  int v16; // esi
  _DWORD *v17; // rdx
  __int64 UserSessionState; // rax
  bool v19; // bl
  bool v20; // di
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  _DWORD *v24; // rdx
  __int128 *v25; // rcx
  _DWORD *v26; // r8
  __int128 v27; // xmm0
  int v28; // eax

  v9 = CInterceptWindowProp::GetOrCreate(a1);
  v12 = v9;
  if ( !v9 )
  {
    *(_DWORD *)a5 = 9;
    return 0;
  }
  if ( !a2 )
  {
    if ( (*((_DWORD *)a1 + 95) & 0x10) == 0 )
    {
      *(_DWORD *)a5 = 36;
      return 0;
    }
    UserSessionState = W32GetUserSessionState(v11, v10);
    v17 = (_DWORD *)((char *)a4 + 4);
    v16 = *(_DWORD *)(*(_QWORD *)(UserSessionState + 19904) + 7500LL);
    *(_DWORD *)a4 |= 0x200u;
LABEL_12:
    *v17 |= 0x10000u;
    goto LABEL_13;
  }
  v14 = *((_QWORD *)v9 + 8);
  v15 = *((_BYTE *)v12 + 57);
  if ( !v14 )
  {
    *(_DWORD *)a5 = 10;
    return 0;
  }
  v16 = *(_DWORD *)(v14 + 12);
  v17 = (_DWORD *)((char *)a4 + 4);
  *(_DWORD *)a4 |= 0x200u;
  *((_QWORD *)a4 + 21) = v14;
  if ( v15 )
    goto LABEL_12;
LABEL_13:
  if ( a3 != v16 )
  {
    v19 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v19 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v21 = W32GetUserSessionState(WPP_GLOBAL_Control, v17);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v19;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v23,
        v22,
        *(_QWORD *)(v21 + 69152),
        3,
        4,
        19,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
        a3,
        v16);
    }
    *(_DWORD *)a5 = 11;
    return 0;
  }
  if ( *((_BYTE *)v12 + 56) )
    *v17 |= 0x1000u;
  if ( !IsRectEmptyInl((const struct tagRECT *)((char *)v12 + 72)) )
  {
    v27 = *v25;
    *v24 |= 0x4000u;
    v24 = v26;
    *(_OWORD *)((char *)a4 + 76) = v27;
  }
  v28 = *((_DWORD *)v12 + 22);
  if ( v28 )
  {
    *v24 |= 0x8000u;
    *((_DWORD *)a4 + 23) = v28;
  }
  return 1;
}
