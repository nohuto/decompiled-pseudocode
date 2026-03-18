/*
 * XREFs of ?JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x14018D7E0
 * Callers:
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1402CFFFC (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x14018D958 (-SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 */

__int64 __fastcall JobCalloutAddProcessWorker(struct tagW32JOB *a1, struct tagPROCESSINFO *a2)
{
  bool v4; // si
  bool v5; // bp
  int v6; // ecx
  __int64 result; // rax
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx

  v4 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v9) = v5;
    LOBYTE(v10) = v4;
    WPP_RECORDER_AND_TRACE_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      8,
      22,
      (__int64)&WPP_64932e88034c3eb3b6e0199d1cf0a73c_Traceguids,
      (char)a1,
      (char)a2);
  }
  *((_QWORD *)a2 + 101) |= 0x4000000uLL;
  *((_QWORD *)a2 + 94) = a1;
  v6 = *((_DWORD *)a1 + 10);
  if ( *((_DWORD *)a1 + 9) != v6 )
    goto LABEL_10;
  if ( v6 )
    result = UserReAllocPool(
               *((_QWORD *)a1 + 6),
               8LL * *((unsigned int *)a1 + 10),
               8LL * (unsigned int)(v6 + 4),
               2020242261LL);
  else
    result = Win32AllocPoolZInit(32LL, 2020242261LL);
  if ( result )
  {
    *((_DWORD *)a1 + 10) += 4;
    *((_QWORD *)a1 + 6) = result;
LABEL_10:
    *(_QWORD *)(*((_QWORD *)a1 + 6) + 8LL * (unsigned int)(*((_DWORD *)a1 + 9))++) = a2;
    SetProcessFlags(a1, a2);
    return 1LL;
  }
  return result;
}
