/*
 * XREFs of ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x14027A7CC
 * Callers:
 *     xxxInjectTouchInput @ 0x14023D0FC (xxxInjectTouchInput.c)
 * Callees:
 *     PtInRect @ 0x140044D50 (PtInRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall ValidateInjectedTouchFrame(
        unsigned int a1,
        __int64 k,
        struct tagINJECTED_CONTACT *a3,
        struct tagRECT *a4,
        unsigned int a5)
{
  __int64 v5; // r10
  struct tagPOINTER_TOUCH_INFO *v7; // r11
  char v9; // di
  unsigned __int64 v10; // rbx
  int v11; // r10d
  bool v12; // si
  int v13; // edx
  int v14; // r8d
  __int64 v15; // r9
  __int64 i; // rbx
  bool v17; // si
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  __int64 j; // r8
  int v22; // ebx
  __int64 v23; // r9
  unsigned int v24; // ebx
  int v25; // ebp
  bool v26; // si
  __int64 UserSessionState; // rax
  int v28; // r8d
  int v29; // edx
  __int16 v31; // [rsp+30h] [rbp-38h]
  int v32; // [rsp+40h] [rbp-28h]
  int v33; // [rsp+48h] [rbp-20h]

  v5 = 0LL;
  v7 = (struct tagPOINTER_TOUCH_INFO *)k;
  v9 = 1;
  while ( (unsigned int)v5 < a1 )
  {
    v10 = *((_QWORD *)v7 + 18 * v5 + 4);
    if ( !PtInRect(a4, v10) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v9 = 0;
      }
      v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v15 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, k) + 69160);
        LOBYTE(v33) = BYTE4(v10);
        LOBYTE(v32) = v10;
        v31 = 10;
LABEL_80:
        LOBYTE(v14) = v12;
        LOBYTE(v13) = v9;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v13,
          v14,
          v15,
          2,
          20,
          v31,
          (__int64)&WPP_0188b97e70b83b293653bee646bd69b6_Traceguids,
          v32,
          v33);
      }
      return 0LL;
    }
    v5 = (unsigned int)(v11 + 1);
  }
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= a5 )
    {
      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
      {
        if ( (unsigned int)j >= a1 )
          return 1LL;
        v22 = *((_DWORD *)v7 + 36 * j + 3);
        if ( (v22 & 0x8000) != 0 && ((v22 - 163840) & 0xFFFDFFFF) != 0 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
            || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
          {
            v9 = 0;
          }
          v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, k);
            LOBYTE(v28) = v26;
            LOBYTE(v29) = v9;
            WPP_RECORDER_AND_TRACE_SF_d(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v29,
              v28,
              *(_QWORD *)(UserSessionState + 69160),
              2,
              20,
              12,
              (__int64)&WPP_0188b97e70b83b293653bee646bd69b6_Traceguids,
              v22);
          }
          return 0LL;
        }
        v23 = *((unsigned int *)v7 + 36 * j + 1);
        v24 = v22 & 0xFFFF7FFF;
        k = 3 * v23;
        v25 = *((_DWORD *)a3 + 3 * v23 + 2);
        if ( v24 == 65542 )
          goto LABEL_53;
        if ( v24 != 0x20000 )
          break;
        if ( ((v25 - 131074) & 0xFFFDFFFF) != 0 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
            || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
          {
            v9 = 0;
          }
          v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v33) = *((_DWORD *)a3 + 3 * v23 + 2);
            v32 = *((_DWORD *)v7 + 36 * j + 3);
            v15 = *(_QWORD *)(W32GetUserSessionState(18 * j, k) + 69160);
            v31 = 15;
            goto LABEL_80;
          }
          return 0LL;
        }
LABEL_56:
        if ( *((_DWORD *)v7 + 36 * j + 8) != *((_DWORD *)a3 + 3 * v23)
          || (k = 18 * j, *((_DWORD *)v7 + 36 * j + 9) != *((_DWORD *)a3 + 3 * v23 + 1)) )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
            || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
          {
            v9 = 0;
          }
          v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v33 = *((_DWORD *)v7 + 36 * j + 9);
            LOBYTE(v32) = *((_DWORD *)v7 + 36 * j + 8);
            v15 = *(_QWORD *)(W32GetUserSessionState(18 * j, k) + 69160);
            v31 = 16;
            goto LABEL_80;
          }
          return 0LL;
        }
LABEL_58:
        ;
      }
      if ( v24 == 131074 )
      {
LABEL_53:
        if ( ((v25 - 0x20000) & 0xFFFDFFFD) != 0 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
            || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
          {
            v9 = 0;
          }
          v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v33) = *((_DWORD *)a3 + 3 * v23 + 2);
            v32 = *((_DWORD *)v7 + 36 * j + 3);
            v15 = *(_QWORD *)(W32GetUserSessionState(18 * j, k) + 69160);
            v31 = 13;
            goto LABEL_80;
          }
          return 0LL;
        }
      }
      else if ( (v24 == 131078 || v24 == 0x40000 || v24 == 262146) && ((v25 - 65542) & 0xFFFEFFFF) != 0 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
        {
          v9 = 0;
        }
        v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v33) = *((_DWORD *)a3 + 3 * v23 + 2);
          v32 = *((_DWORD *)v7 + 36 * j + 3);
          v15 = *(_QWORD *)(W32GetUserSessionState(18 * j, k) + 69160);
          v31 = 14;
          goto LABEL_80;
        }
        return 0LL;
      }
      if ( (v24 & 2) != 0 && v24 != 262146 )
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
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
  {
    v9 = 0;
  }
  v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v18 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, k);
    LOBYTE(v19) = v17;
    LOBYTE(v20) = v9;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v20,
      v19,
      *(_QWORD *)(v18 + 69160),
      2,
      20,
      11,
      (__int64)&WPP_0188b97e70b83b293653bee646bd69b6_Traceguids,
      i);
  }
  return 0LL;
}
