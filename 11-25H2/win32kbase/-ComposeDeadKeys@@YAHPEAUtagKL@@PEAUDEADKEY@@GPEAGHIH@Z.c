/*
 * XREFs of ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x14009FAF0
 * Callers:
 *     xxxInternalToUnicode @ 0x1400A04D0 (xxxInternalToUnicode.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_hDhD @ 0x14009F9B0 (WPP_RECORDER_AND_TRACE_SF_hDhD.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_hD @ 0x1400A02A4 (WPP_RECORDER_AND_TRACE_SF_hD.c)
 */

__int64 __fastcall ComposeDeadKeys(
        struct tagKL *a1,
        struct DEADKEY *a2,
        unsigned __int16 a3,
        unsigned __int16 *a4,
        int a5,
        char a6,
        int a7)
{
  char v10; // di
  char v11; // bp
  char v12; // r15
  __int64 UserSessionState; // rax
  char v14; // bl
  bool v15; // r12
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  int v19; // ebx
  char v20; // bp
  __int64 v21; // rax
  unsigned __int16 v23; // bp
  char v24; // bl
  bool v25; // si
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  char v29; // bp
  bool v30; // r14
  char v31; // si
  bool v32; // bp
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  bool v36; // bl
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  bool v40; // si
  __int16 v41; // bx
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  int v48; // [rsp+20h] [rbp-68h]
  int v49; // [rsp+28h] [rbp-60h]
  int v50; // [rsp+38h] [rbp-50h]

  v10 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v11 = 0;
  }
  v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, &WPP_RECORDER_INITIALIZED);
    WPP_RECORDER_AND_TRACE_SF_hDhD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v12,
      *(_QWORD *)(UserSessionState + 69144),
      v48,
      v49,
      0xAu,
      v50);
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v14 = 0;
  }
  v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v17) = v15;
    LOBYTE(v18) = v14;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v18,
      v17,
      *(_QWORD *)(v16 + 69144),
      4,
      7,
      11,
      (__int64)&WPP_5fbfae4165f0392cbd36d51c18a80319_Traceguids,
      a5,
      a7);
  }
  if ( a5 < 1 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v10 = 0;
    }
    v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v37 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v38) = v36;
      LOBYTE(v39) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v39,
        v38,
        *(_QWORD *)(v37 + 69144),
        4,
        7,
        12,
        (__int64)&WPP_5fbfae4165f0392cbd36d51c18a80319_Traceguids);
    }
    return 0LL;
  }
  else
  {
    v19 = a3 | (*((unsigned __int16 *)a1 + 37) << 16);
    if ( a2 )
    {
      if ( !a7 && (a6 & 4) == 0 )
        *((_WORD *)a1 + 37) = 0;
      while ( *(_DWORD *)a2 )
      {
        if ( *(_DWORD *)a2 == v19 )
        {
          if ( (*((_BYTE *)a2 + 6) & 1) == 0 )
          {
            v23 = *((_WORD *)a2 + 2);
            *a4 = v23;
            if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
              || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v24 = 0;
            }
            v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v26 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
              LOBYTE(v27) = v25;
              LOBYTE(v28) = v24;
              WPP_RECORDER_AND_TRACE_SF_hD(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v28,
                v27,
                *(_QWORD *)(v26 + 69144),
                v48,
                v49,
                14,
                v50,
                v23,
                v23);
            }
            return 1LL;
          }
          if ( !a7 && (a6 & 4) == 0 )
            *((_WORD *)a1 + 37) = *((_WORD *)a2 + 2);
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
          {
            v10 = 0;
          }
          v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v41 = *((_WORD *)a1 + 37);
            v42 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
            LOBYTE(v43) = v40;
            LOBYTE(v44) = v10;
            WPP_RECORDER_AND_TRACE_SF_hD(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v44,
              v43,
              *(_QWORD *)(v42 + 69144),
              v48,
              v49,
              13,
              v50,
              v41,
              v41);
          }
          return 0xFFFFFFFFLL;
        }
        a2 = (struct DEADKEY *)((char *)a2 + 8);
      }
    }
    *a4 = HIWORD(v19);
    if ( a5 <= 1 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v29 = 0;
      }
      v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v45 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        LOBYTE(v46) = v30;
        LOBYTE(v47) = v29;
        WPP_RECORDER_AND_TRACE_SF_hD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v47,
          v46,
          *(_QWORD *)(v45 + 69144),
          v48,
          v49,
          16,
          v50,
          SBYTE2(v19),
          SBYTE2(v19));
      }
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v31 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v31 = 0;
      }
      v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v33 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        LOBYTE(v34) = v32;
        LOBYTE(v35) = v31;
        WPP_RECORDER_AND_TRACE_SF_hD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v35,
          v34,
          *(_QWORD *)(v33 + 69144),
          v48,
          v49,
          17,
          v50,
          v19,
          v19);
      }
      return 1LL;
    }
    else
    {
      a4[1] = v19;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v10 = 0;
      }
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        WPP_RECORDER_AND_TRACE_SF_hDhD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v10,
          v20,
          *(_QWORD *)(v21 + 69144),
          v48,
          v49,
          0xFu,
          v50);
      }
      return 2LL;
    }
  }
}
