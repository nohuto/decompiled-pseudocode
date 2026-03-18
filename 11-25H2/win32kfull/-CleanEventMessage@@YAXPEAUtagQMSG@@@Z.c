/*
 * XREFs of ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x140067260
 * Callers:
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x14006667C (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1400677E0 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     FreeMessageList @ 0x140068600 (FreeMessageList.c)
 *     DestroyThreadsMessages @ 0x1401AC220 (DestroyThreadsMessages.c)
 *     SuspendThreadQueue @ 0x1401AD580 (SuspendThreadQueue.c)
 *     ?_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x140225308 (-_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 *     xxxProcessEventMessage @ 0x14024572C (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400229F8 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     FreePointerMessageParams @ 0x140069664 (FreePointerMessageParams.c)
 *     DestroyNotify @ 0x1400CA3C0 (DestroyNotify.c)
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1400CA54C (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursive@.c)
 *     ?FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402C1A88 (-FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall CleanEventMessage(struct tagQMSG *a1)
{
  CMonitorTopology **v2; // rcx
  CMonitorTopology **v3; // rbx
  tagDomLock *v4; // [rsp+20h] [rbp-48h] BYREF
  char v5; // [rsp+28h] [rbp-40h]
  char v6; // [rsp+48h] [rbp-20h]

  switch ( *((_DWORD *)a1 + 24) )
  {
    case 3:
    case 4:
      goto LABEL_10;
    case 9:
      if ( (unsigned int)(*((_DWORD *)a1 + 6) - 26) <= 1 )
        UserDeleteAtom(*((unsigned __int16 *)a1 + 20));
      break;
    case 0xC:
      DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_WINEVENT>::ObjectLockRecursive<>::ObjectLockRecursive<>(&v4);
      DestroyNotify(*((_QWORD *)a1 + 5));
      if ( v6 && v4 )
      {
        if ( v5 )
          tagDomLock::UnLockExclusive(v4);
        else
          tagDomLock::UnLockShared(v4);
      }
      break;
    case 0x14:
      FreePointerMessageParams(a1);
      return;
    case 0x1B:
      ShellWindowPos::FreePositionEvent(a1, (struct tagQMSG *)(unsigned int)(*((_DWORD *)a1 + 24) - 27));
      return;
    case 0x1C:
      v3 = (CMonitorTopology **)*((_QWORD *)a1 + 5);
      CMonitorTopology::Release(v3[19]);
      v2 = v3;
      goto LABEL_11;
    case 0x1F:
      CMonitorTopology::Release(*((CMonitorTopology **)a1 + 4));
      v2 = (CMonitorTopology **)*((_QWORD *)a1 + 5);
      goto LABEL_11;
    case 0x20:
LABEL_10:
      v2 = (CMonitorTopology **)*((_QWORD *)a1 + 4);
LABEL_11:
      Win32FreePool(v2);
      return;
    default:
      return;
  }
}
