/*
 * XREFs of ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1402CFFFC
 * Callers:
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x14018EC0C (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 *     UserJobCallout @ 0x1402D00F0 (UserJobCallout.c)
 * Callees:
 *     ?JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x14018D7E0 (-JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 */

__int64 __fastcall JobCalloutAddProcess(struct tagW32JOB *a1, struct tagPROCESSINFO *a2)
{
  char v2; // di
  char v3; // bp
  char v4; // bl
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx

  v2 = (char)a2;
  v3 = (char)a1;
  if ( !*(_QWORD *)a2 )
    return 0LL;
  v4 = 1;
  if ( *((_BYTE *)a2 + 1200) != 1 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v4 = 0;
    }
    v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(a1, WPP_GLOBAL_Control);
      LOBYTE(v7) = v5;
      LOBYTE(v8) = v4;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v7,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        8,
        23,
        (__int64)&WPP_64932e88034c3eb3b6e0199d1cf0a73c_Traceguids,
        v3,
        v2);
    }
    return 0LL;
  }
  return JobCalloutAddProcessWorker(a1, a2);
}
