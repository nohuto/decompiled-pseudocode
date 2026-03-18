/*
 * XREFs of ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x140256508
 * Callers:
 *     UserJobCallout @ 0x1400D8250 (UserJobCallout.c)
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1400D9AB8 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400D897C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1402009E0 (-JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
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
  if ( *((_BYTE *)a2 + 1176) != 1 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v4 = 0;
    }
    v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(a1, *(_QWORD *)&WPP_GLOBAL_Control);
      LOBYTE(v7) = v5;
      LOBYTE(v8) = v4;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v8,
        v7,
        *(_QWORD *)(UserSessionState + 69160),
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
