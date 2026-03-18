/*
 * XREFs of ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIGH@Z @ 0x1400E6EB4
 * Callers:
 *     xxxInternalToUnicode @ 0x1400E7610 (xxxInternalToUnicode.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_hDhD @ 0x1400E7394 (WPP_RECORDER_AND_TRACE_SF_hDhD.c)
 *     WPP_RECORDER_AND_TRACE_SF_hD @ 0x1400E869C (WPP_RECORDER_AND_TRACE_SF_hD.c)
 */

__int64 __fastcall ComposeDeadKeys(
        struct tagKL *a1,
        struct DEADKEY *a2,
        unsigned __int16 a3,
        unsigned __int16 *a4,
        int a5,
        char a6,
        unsigned __int16 a7,
        int a8)
{
  int v9; // r13d
  char v11; // bl
  char v12; // si
  bool v13; // bp
  __int64 UserSessionState; // rax
  int v15; // edx
  int v16; // r8d
  char v17; // si
  bool v18; // bp
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  bool v22; // di
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  int v27; // esi
  bool v28; // di
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  unsigned __int16 v32; // si
  char v33; // di
  bool v34; // bp
  __int64 v35; // rax
  int v36; // edx
  int v37; // r8d
  bool v38; // si
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  char v42; // bp
  bool v43; // r14
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  int v47; // [rsp+20h] [rbp-68h]
  int v48; // [rsp+28h] [rbp-60h]
  __int16 v49; // [rsp+30h] [rbp-58h]
  int v50; // [rsp+38h] [rbp-50h]
  char v51; // [rsp+40h] [rbp-48h]
  char v52; // [rsp+48h] [rbp-40h]

  v9 = a3;
  v11 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v12 = 0;
  }
  v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)a1, (unsigned int)&WPP_RECORDER_INITIALIZED, 0);
    v15 = a7;
    LOBYTE(v16) = v13;
    LOBYTE(v15) = v12;
    WPP_RECORDER_AND_TRACE_SF_hDhD(*((_QWORD *)WPP_GLOBAL_Control + 3), v15, v16, *(_QWORD *)(UserSessionState + 69136));
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v17 = 0;
  }
  v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, 0);
    LOBYTE(v20) = v18;
    LOBYTE(v21) = v17;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v21,
      v20,
      *(_QWORD *)(v19 + 69136),
      4,
      7,
      11,
      (__int64)&WPP_412b550d638d31fe2003a5feccdb05d1_Traceguids,
      a5,
      a8);
  }
  if ( a5 >= 1 )
  {
    v27 = v9 | (a7 << 16);
    if ( a2 )
    {
      if ( !a8 && (a6 & 4) == 0 )
        *((_WORD *)a1 + 37) = 0;
      while ( *(_DWORD *)a2 )
      {
        if ( *(_DWORD *)a2 == v27 )
        {
          if ( (*((_BYTE *)a2 + 6) & 1) != 0 )
          {
            if ( !a8 && (a6 & 4) == 0 )
              *((_WORD *)a1 + 37) = *((_WORD *)a2 + 2);
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
            {
              v11 = 0;
            }
            v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v29 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, 0);
              LOBYTE(v30) = v28;
              LOBYTE(v31) = v11;
              WPP_RECORDER_AND_TRACE_SF_hD(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v31,
                v30,
                *(_QWORD *)(v29 + 69136),
                v47,
                v48,
                13,
                v50,
                a7,
                a7);
            }
            return 0xFFFFFFFFLL;
          }
          v32 = *((_WORD *)a2 + 2);
          *a4 = v32;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
            || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v33 = 0;
          }
          v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v35 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, 0);
            v52 = v32;
            v51 = v32;
            v49 = 14;
            goto LABEL_73;
          }
          return 1LL;
        }
        a2 = (struct DEADKEY *)((char *)a2 + 8);
      }
    }
    *a4 = HIWORD(v27);
    if ( a5 <= 1 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v42 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v42 = 0;
      }
      v43 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v44 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, 0);
        LOBYTE(v45) = v43;
        LOBYTE(v46) = v42;
        WPP_RECORDER_AND_TRACE_SF_hD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v46,
          v45,
          *(_QWORD *)(v44 + 69136),
          v47,
          v48,
          16,
          v50,
          SBYTE2(v27),
          SBYTE2(v27));
      }
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v33 = 0;
      }
      v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v35 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, 0);
        v52 = v9;
        v51 = v9;
        v49 = 17;
LABEL_73:
        LOBYTE(v37) = v34;
        LOBYTE(v36) = v33;
        WPP_RECORDER_AND_TRACE_SF_hD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v36,
          v37,
          *(_QWORD *)(v35 + 69136),
          v47,
          v48,
          v49,
          v50,
          v51,
          v52);
      }
      return 1LL;
    }
    else
    {
      a4[1] = v9;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v11 = 0;
      }
      v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v39 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, 0);
        LOBYTE(v40) = v38;
        LOBYTE(v41) = v11;
        WPP_RECORDER_AND_TRACE_SF_hDhD(*((_QWORD *)WPP_GLOBAL_Control + 3), v41, v40, *(_QWORD *)(v39 + 69136));
      }
      return 2LL;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v11 = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, 0);
      LOBYTE(v24) = v22;
      LOBYTE(v25) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v24,
        *(_QWORD *)(v23 + 69136),
        4,
        7,
        12,
        (__int64)&WPP_412b550d638d31fe2003a5feccdb05d1_Traceguids);
    }
    return 0LL;
  }
}
