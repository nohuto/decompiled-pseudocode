/*
 * XREFs of ?SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1401F7CB4
 * Callers:
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x14025388C (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1401F7F88 (-SnapSizeRect@@YAXPEAUMOVESIZEDATA@@PEAUCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 */

__int64 __fastcall SizeRect(struct MOVESIZEDATA *a1, __int64 a2, struct tagMONITOR *a3, unsigned int *a4)
{
  int v4; // esi
  unsigned int v6; // edi
  struct CHECKPOINT *Prop; // rbp
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  struct tagMONITOR *v14; // r8
  char v16; // di
  char v17; // bl
  __int64 v18; // r10
  int v19; // ecx
  int v20; // edx
  int v21; // r9d
  int v22; // r8d
  int v23; // edx
  int v24; // eax
  __int64 v25; // r11
  unsigned int v26; // r8d
  int v27; // edx
  int v28; // r10d
  int v29; // r9d
  int v30; // ecx
  __int64 UserSessionState; // rax
  int v32; // r8d
  int v33; // edx
  unsigned __int64 v34; // [rsp+70h] [rbp+18h]

  v4 = (__int16)a2;
  v6 = WORD1(a2);
  Prop = 0LL;
  if ( (*((_DWORD *)a1 + 50) & 0x100) != 0 )
  {
    v9 = (__int16)a2 - *((_DWORD *)a1 + 42);
    v10 = (unsigned int)(SWORD1(a2) - *((_DWORD *)a1 + 43));
    v34 = __PAIR64__(v10, v9);
    if ( v9 == *((_DWORD *)a1 + 63) && (_DWORD)v10 == *((_DWORD *)a1 + 64) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v16 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v16 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v17 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v17 = 0;
      }
      if ( v16 || v17 )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
        LOBYTE(v32) = v17;
        LOBYTE(v33) = v16;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v33,
          v32,
          *(_QWORD *)(UserSessionState + 69160),
          5,
          1,
          43,
          (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
      }
      return 0LL;
    }
    v11 = W32GetUserSessionState(v10, a2);
    Prop = (struct CHECKPOINT *)GetProp(*((_QWORD *)a1 + 2), *(unsigned __int16 *)(v11 + 41334), 1u);
    if ( !Prop )
      return 0LL;
    *(_QWORD *)((char *)a1 + 252) = v34;
  }
  v12 = dword_14035C7F0[*((int *)a1 + 44)];
  if ( (int)v12 >= 0 )
  {
    *((_DWORD *)a1 + v12 + 10) = v4;
    v18 = v12;
    v19 = *((_DWORD *)a1 + 26);
    v20 = v12 ^ 2;
    v21 = *((_DWORD *)a1 + v20 + 10);
    v22 = v21 - v4;
    v23 = v20 & 2;
    if ( !v23 )
      v22 = v4 - v21;
    if ( v22 < v19 )
      goto LABEL_25;
    v19 = *((_DWORD *)a1 + 28);
    if ( v22 > v19 )
      goto LABEL_25;
    if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 31LL) & 0x40) != 0 )
    {
      v19 = v21 - *((_DWORD *)a1 + v18 + 22);
      if ( v19 < 0 )
        v19 = *((_DWORD *)a1 + v18 + 22) - v21;
      if ( v22 > v19 )
      {
LABEL_25:
        v24 = -v19;
        if ( !v23 )
          v24 = v19;
        *((_DWORD *)a1 + v18 + 10) = v21 + v24;
      }
    }
  }
  v13 = *((int *)a1 + 44);
  v14 = (struct tagMONITOR *)dword_14035C7C0[v13];
  if ( (int)v14 >= 0 )
  {
    v25 = dword_14035C7C0[v13];
    *((_DWORD *)a1 + (_QWORD)v14 + 10) = (__int16)v6;
    v26 = (unsigned int)v14 ^ 2;
    v27 = *((_DWORD *)a1 + 27);
    v28 = *((_DWORD *)a1 + (int)v26 + 10);
    v29 = v28 - (__int16)v6;
    v14 = (struct tagMONITOR *)(v26 & 2);
    if ( !(_DWORD)v14 )
      v29 = (__int16)v6 - v28;
    if ( v29 < v27 )
      goto LABEL_36;
    v27 = *((_DWORD *)a1 + 29);
    if ( v29 > v27 )
      goto LABEL_36;
    if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 31LL) & 0x40) != 0 )
    {
      v27 = v28 - *((_DWORD *)a1 + v25 + 22);
      if ( v27 < 0 )
        v27 = *((_DWORD *)a1 + v25 + 22) - v28;
      if ( v29 > v27 )
      {
LABEL_36:
        v30 = -v27;
        if ( !(_DWORD)v14 )
          v30 = v27;
        *((_DWORD *)a1 + v25 + 10) = v28 + v30;
      }
    }
  }
  if ( (*((_DWORD *)a1 + 50) & 0x100) != 0 )
    SnapSizeRect(a1, Prop, v14, a4);
  return 1LL;
}
