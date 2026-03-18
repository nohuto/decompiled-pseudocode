/*
 * XREFs of ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1401A8180
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14004A6D4 (xxxInitSendValidateMinMaxInfoEx.c)
 *     SelectWindowRgn @ 0x14005B5EC (SelectWindowRgn.c)
 *     GetNewMonitor @ 0x14006568C (GetNewMonitor.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1401A73E0 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     SkipWindowOnMonitor @ 0x1401A7B50 (SkipWindowOnMonitor.c)
 *     IsSmallerThanScreen @ 0x1401A8004 (IsSmallerThanScreen.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1401A808C (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     CalcWindowFullScreen @ 0x1401F3F0C (CalcWindowFullScreen.c)
 *     NtUserSetWindowShowState @ 0x1402A0BF0 (NtUserSetWindowShowState.c)
 * Callees:
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     ?Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z @ 0x1401A86E0 (-Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

struct tagMONITOR *__fastcall _MonitorFromWindowInternal(struct tagWND *a1, unsigned int a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  INT *v8; // rcx
  struct CHECKPOINT *v10; // rax
  __int128 v11; // xmm0
  __int64 v12; // rax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF

  if ( **(_DWORD **)GetDispInfo(a1) == 1 && a2 )
    return *(struct tagMONITOR **)(GetDispInfo(v6) + 104);
  if ( a1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
      goto LABEL_5;
    v13 = 0LL;
    v10 = CHECKPOINT::Get(a1);
    if ( v10 )
    {
      v8 = (INT *)&v13;
      v11 = *(_OWORD *)((char *)v10 + 20);
      v12 = *((_QWORD *)a1 + 5);
      v13 = v11;
      v7 = *(unsigned int *)(v12 + 288);
      if ( !a3 )
        return (struct tagMONITOR *)MonitorFromRect(v8, a2, v7);
      goto LABEL_7;
    }
    v6 = *(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL);
    if ( (*(_WORD *)(v6 + 42) & 0x2FFF) != 0x29D )
    {
LABEL_5:
      v7 = *((_QWORD *)a1 + 5);
      v8 = (INT *)(v7 + 88);
      if ( !a3 )
      {
        LODWORD(v7) = *(_DWORD *)(v7 + 288);
        return (struct tagMONITOR *)MonitorFromRect(v8, a2, v7);
      }
      v13 = *(_OWORD *)v8;
      v7 = *(unsigned int *)(v7 + 288);
LABEL_7:
      LogicalToPhysicalDPIRect(&v13, &v13, v7, 0LL);
      LODWORD(v7) = 18;
      v8 = (INT *)&v13;
      return (struct tagMONITOR *)MonitorFromRect(v8, a2, v7);
    }
    return *(struct tagMONITOR **)(GetDispInfo(v6) + 104);
  }
  if ( a2 - 1 <= 1 )
    return *(struct tagMONITOR **)(GetDispInfo(v6) + 104);
  return 0LL;
}
