/*
 * XREFs of ?Get@CContentRects@@AEAA_NIPEAUtagRECT@@PEAI@Z @ 0x1401AC3A0
 * Callers:
 *     ?GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z @ 0x1401AC540 (-GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

char __fastcall CContentRects::Get(CContentRects *this, __int64 a2, struct tagRECT *a3, unsigned int *a4)
{
  char v5; // si
  unsigned int v6; // r14d
  bool v8; // bl
  bool v9; // di
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  bool v14; // si
  bool v15; // bp
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx

  *a4 = *((_DWORD *)this + 20);
  v5 = a2;
  v6 = *((_DWORD *)this + 20);
  if ( (unsigned int)a2 >= v6 )
  {
    v14 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v14;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v17,
        *(_QWORD *)(UserSessionState + 69144),
        4,
        2,
        12,
        (__int64)&WPP_4d552ac7fe0e36d399e48fd58d7f07e5_Traceguids,
        v6);
    }
    memmove(a3, (char *)this + 16, 16LL * *((unsigned int *)this + 20));
    return 1;
  }
  else
  {
    v8 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(v10 + 69144),
        2,
        2,
        11,
        (__int64)&WPP_4d552ac7fe0e36d399e48fd58d7f07e5_Traceguids,
        v5,
        v6);
    }
    return 0;
  }
}
