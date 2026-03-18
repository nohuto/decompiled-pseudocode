/*
 * XREFs of ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x140096A20
 * Callers:
 *     DestroyThreadsMessages @ 0x140093F10 (DestroyThreadsMessages.c)
 *     FreeMessageList @ 0x140094860 (FreeMessageList.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1400951E4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x140096DC8 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 *     ?_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x14025E4B0 (-_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     SuspendThreadQueue @ 0x1402A7460 (SuspendThreadQueue.c)
 * Callees:
 *     DestroyNotify @ 0x14013BFF0 (DestroyNotify.c)
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x14015FDB4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1401C431C (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursive@.c)
 *     FreePointerMessageParams @ 0x1401E8E78 (FreePointerMessageParams.c)
 *     ?FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402DB348 (-FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall CleanEventMessage(struct tagQMSG *this, struct tagQMSG *a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  CMonitorTopology **v12; // rcx
  CMonitorTopology **v13; // rbx
  tagDomLock *v14; // [rsp+20h] [rbp-48h] BYREF
  char v15; // [rsp+28h] [rbp-40h]
  char v16; // [rsp+48h] [rbp-20h]

  v3 = *((_DWORD *)this + 24) - 3;
  if ( !v3 || (v4 = v3 - 1) == 0 )
  {
LABEL_24:
    v12 = (CMonitorTopology **)*((_QWORD *)this + 4);
    goto LABEL_25;
  }
  v5 = v4 - 5;
  if ( v5 )
  {
    v6 = v5 - 3;
    if ( v6 )
    {
      v7 = v6 - 8;
      if ( !v7 )
      {
        FreePointerMessageParams(this);
        return;
      }
      v8 = v7 - 7;
      if ( !v8 )
      {
        ShellWindowPos::FreePositionEvent(this, a2);
        return;
      }
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 3;
        if ( v10 )
        {
          if ( v10 != 1 )
            return;
          goto LABEL_24;
        }
        CMonitorTopology::Release(*((CMonitorTopology **)this + 4));
        v12 = (CMonitorTopology **)*((_QWORD *)this + 5);
      }
      else
      {
        v13 = (CMonitorTopology **)*((_QWORD *)this + 5);
        CMonitorTopology::Release(v13[21]);
        v12 = v13;
      }
LABEL_25:
      Win32FreePool(v12);
      return;
    }
    DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_WINEVENT>::ObjectLockRecursive<>::ObjectLockRecursive<>(&v14);
    DestroyNotify(*((_QWORD *)this + 5));
    if ( v16 && v14 )
    {
      if ( v15 )
        tagDomLock::UnLockExclusive(v14);
      else
        tagDomLock::UnLockShared(v14);
    }
  }
  else
  {
    v11 = *((_DWORD *)this + 6);
    if ( v11 == 26 || v11 == 27 )
      UserDeleteAtom(*((unsigned __int16 *)this + 20));
  }
}
