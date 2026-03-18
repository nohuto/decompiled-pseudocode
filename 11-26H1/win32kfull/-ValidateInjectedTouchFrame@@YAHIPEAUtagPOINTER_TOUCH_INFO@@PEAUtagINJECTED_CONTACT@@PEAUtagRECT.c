/*
 * XREFs of ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x14024B6D0
 * Callers:
 *     xxxInjectTouchInput @ 0x14029E10C (xxxInjectTouchInput.c)
 * Callees:
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall ValidateInjectedTouchFrame(
        unsigned int a1,
        struct tagPOINTER_TOUCH_INFO *a2,
        struct tagINJECTED_CONTACT *a3,
        struct tagRECT *a4,
        unsigned int a5)
{
  __int64 v5; // r10
  struct tagPOINTER_TOUCH_INFO *v7; // r11
  char v9; // di
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  int v12; // r10d
  bool v13; // si
  int v14; // edx
  int v15; // r8d
  __int64 v16; // r9
  __int64 i; // rbx
  __int64 k; // rdx
  bool v19; // si
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  __int64 j; // r8
  __int64 v24; // rdx
  int v25; // ecx
  __int64 v26; // r9
  unsigned int v27; // ecx
  int v28; // ebp
  bool v29; // si
  int v30; // ebx
  __int64 UserSessionState; // rax
  int v32; // r8d
  int v33; // edx
  __int16 v35; // [rsp+30h] [rbp-38h]
  int v36; // [rsp+40h] [rbp-28h]
  int v37; // [rsp+48h] [rbp-20h]

  v5 = 0LL;
  v7 = a2;
  v9 = 1;
  while ( (unsigned int)v5 < a1 )
  {
    v10 = *((_QWORD *)v7 + 18 * v5 + 4);
    if ( !PtInRect(a4, v10) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v9 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v16 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v11) + 69152);
        LOBYTE(v37) = BYTE4(v10);
        LOBYTE(v36) = v10;
        v35 = 10;
LABEL_80:
        LOBYTE(v15) = v13;
        LOBYTE(v14) = v9;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v14,
          v15,
          v16,
          2,
          20,
          v35,
          (__int64)&WPP_0188b97e70b83b293653bee646bd69b6_Traceguids,
          v36,
          v37);
      }
      return 0LL;
    }
    v5 = (unsigned int)(v12 + 1);
  }
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= a5 )
    {
      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
      {
        if ( (unsigned int)j >= a1 )
          return 1LL;
        v24 = 18 * j;
        v25 = *((_DWORD *)v7 + 36 * j + 3);
        if ( (v25 & 0x8000) != 0 && ((v25 - 163840) & 0xFFFDFFFF) != 0 )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
          {
            v9 = 0;
          }
          v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v30 = *((_DWORD *)v7 + 36 * j + 3);
            UserSessionState = W32GetUserSessionState(18 * j, v24);
            LOBYTE(v32) = v29;
            LOBYTE(v33) = v9;
            WPP_RECORDER_AND_TRACE_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v33,
              v32,
              *(_QWORD *)(UserSessionState + 69152),
              2,
              20,
              12,
              (__int64)&WPP_0188b97e70b83b293653bee646bd69b6_Traceguids,
              v30);
          }
          return 0LL;
        }
        v26 = *((unsigned int *)v7 + 36 * j + 1);
        v27 = v25 & 0xFFFF7FFF;
        v28 = *((_DWORD *)a3 + 3 * v26 + 2);
        if ( v27 == 65542 )
          goto LABEL_53;
        if ( v27 != 0x20000 )
          break;
        if ( ((v28 - 131074) & 0xFFFDFFFF) != 0 )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
          {
            v9 = 0;
          }
          v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v37) = *((_DWORD *)a3 + 3 * v26 + 2);
            v36 = *((_DWORD *)v7 + 36 * j + 3);
            v16 = *(_QWORD *)(W32GetUserSessionState(18 * j, v24) + 69152);
            v35 = 15;
            goto LABEL_80;
          }
          return 0LL;
        }
LABEL_56:
        if ( *((_DWORD *)v7 + 36 * j + 8) != *((_DWORD *)a3 + 3 * v26)
          || (v24 = 18 * j, *((_DWORD *)v7 + 36 * j + 9) != *((_DWORD *)a3 + 3 * v26 + 1)) )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
          {
            v9 = 0;
          }
          v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v37 = *((_DWORD *)v7 + 36 * j + 9);
            LOBYTE(v36) = *((_DWORD *)v7 + 36 * j + 8);
            v16 = *(_QWORD *)(W32GetUserSessionState(18 * j, v24) + 69152);
            v35 = 16;
            goto LABEL_80;
          }
          return 0LL;
        }
LABEL_58:
        ;
      }
      if ( v27 == 131074 )
      {
LABEL_53:
        if ( ((v28 - 0x20000) & 0xFFFDFFFD) != 0 )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
          {
            v9 = 0;
          }
          v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v37) = *((_DWORD *)a3 + 3 * v26 + 2);
            v36 = *((_DWORD *)v7 + 36 * j + 3);
            v16 = *(_QWORD *)(W32GetUserSessionState(18 * j, v24) + 69152);
            v35 = 13;
            goto LABEL_80;
          }
          return 0LL;
        }
      }
      else if ( (v27 == 131078 || v27 == 0x40000 || v27 == 262146) && ((v28 - 65542) & 0xFFFEFFFF) != 0 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v9 = 0;
        }
        v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v37) = *((_DWORD *)a3 + 3 * v26 + 2);
          v36 = *((_DWORD *)v7 + 36 * j + 3);
          v16 = *(_QWORD *)(W32GetUserSessionState(18 * j, v24) + 69152);
          v35 = 14;
          goto LABEL_80;
        }
        return 0LL;
      }
      if ( (v27 & 2) != 0 && v27 != 262146 )
        goto LABEL_58;
      goto LABEL_56;
    }
    if ( ((*((_DWORD *)a3 + 3 * i + 2) - 0x20000) & 0xFFFDFFFF) != 0 )
      break;
LABEL_19:
    ;
  }
  for ( k = 0LL; (unsigned int)k < a1; k = (unsigned int)(k + 1) )
  {
    if ( *((_DWORD *)v7 + 36 * k + 1) == (_DWORD)i )
      goto LABEL_19;
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
  {
    v9 = 0;
  }
  v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v20 = W32GetUserSessionState(WPP_GLOBAL_Control, k);
    LOBYTE(v21) = v19;
    LOBYTE(v22) = v9;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v22,
      v21,
      *(_QWORD *)(v20 + 69152),
      2,
      20,
      11,
      (__int64)&WPP_0188b97e70b83b293653bee646bd69b6_Traceguids,
      i);
  }
  return 0LL;
}
