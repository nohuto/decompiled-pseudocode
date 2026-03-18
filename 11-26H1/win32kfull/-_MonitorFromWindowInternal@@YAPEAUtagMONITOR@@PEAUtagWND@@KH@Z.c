/*
 * XREFs of ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1400103E0
 * Callers:
 *     IsSmallerThanScreen @ 0x14000FB4C (IsSmallerThanScreen.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1400102EC (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     CalcWindowFullScreen @ 0x140010674 (CalcWindowFullScreen.c)
 *     SelectWindowRgn @ 0x140018490 (SelectWindowRgn.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14003144C (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetNewMonitor @ 0x14004B044 (GetNewMonitor.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x140175A04 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     SkipWindowOnMonitor @ 0x1401A0B80 (SkipWindowOnMonitor.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     NtUserSetWindowShowState @ 0x1402BE910 (NtUserSetWindowShowState.c)
 * Callees:
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     ?Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z @ 0x14003139C (-Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

struct tagMONITOR *__fastcall _MonitorFromWindowInternal(struct tagWND *a1, unsigned int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // r8
  __int128 *v10; // rcx
  __int64 v11; // r8
  struct CHECKPOINT *v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // rax
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF

  if ( **(_DWORD **)((__int64 (*)(void))GetDispInfo)() == 1 && a2 )
    return *(struct tagMONITOR **)(GetDispInfo(v7, v6) + 96);
  if ( a1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
      goto LABEL_6;
    v15 = 0LL;
    v12 = CHECKPOINT::Get(a1);
    if ( v12 )
    {
      v10 = &v15;
      v13 = *(_OWORD *)((char *)v12 + 20);
      v14 = *((_QWORD *)a1 + 5);
      v15 = v13;
      v11 = *(unsigned int *)(v14 + 288);
      if ( !a3 )
        return (struct tagMONITOR *)MonitorFromRect(v10, a2, v11);
      goto LABEL_8;
    }
    v7 = *(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL);
    if ( (*(_WORD *)(v7 + 42) & 0x2FFF) != 0x29D )
    {
LABEL_6:
      v9 = *((_QWORD *)a1 + 5);
      v10 = (__int128 *)(v9 + 88);
      if ( !a3 )
      {
        v11 = *(unsigned int *)(v9 + 288);
        return (struct tagMONITOR *)MonitorFromRect(v10, a2, v11);
      }
      v15 = *v10;
      v11 = *(unsigned int *)(v9 + 288);
LABEL_8:
      ((void (__fastcall *)(__int128 *, __int128 *, __int64, _QWORD))LogicalToPhysicalDPIRect)(&v15, &v15, v11, 0LL);
      v11 = 18LL;
      v10 = &v15;
      return (struct tagMONITOR *)MonitorFromRect(v10, a2, v11);
    }
    return *(struct tagMONITOR **)(GetDispInfo(v7, v6) + 96);
  }
  if ( a2 - 1 <= 1 )
    return *(struct tagMONITOR **)(GetDispInfo(v7, v6) + 96);
  return 0LL;
}
