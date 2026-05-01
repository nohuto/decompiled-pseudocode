/*
 * XREFs of ?_TakeOwnershipOfHandleAndStartMonitoring@CCrashDetector@@AEAAJPEAXPEAVCHandler@1@@Z @ 0x1801B6A2C
 * Callers:
 *     CCrashDetector::TakeOwnershipOfHandleAndStartMonitoring__lambda_27283753ed325f6243441eb816a28818___ @ 0x1801EBE18 (CCrashDetector--TakeOwnershipOfHandleAndStartMonitoring__lambda_27283753ed325f6243441eb816a28818.c)
 *     ?_StartMonitoringThreadOfWindow@CCrashDetector@@AEAAJPEAUHWND__@@PEAVCHandler@1@@Z @ 0x1804239EC (-_StartMonitoringThreadOfWindow@CCrashDetector@@AEAAJPEAUHWND__@@PEAVCHandler@1@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18003F62C (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1801B6B38 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VISearchAppActivator@@U?$default_delete@VISearchAppActivator@@@wistd@@@wistd@@QEAA@XZ @ 0x180208688 (--1-$unique_ptr@VISearchAppActivator@@U-$default_delete@VISearchAppActivator@@@wistd@@@wistd@@QE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCrashDetector::_TakeOwnershipOfHandleAndStartMonitoring(
        char *pv,
        char *a2,
        struct CCrashDetector::CHandler *a3)
{
  char *v6; // rbx
  HANDLE *v7; // r15
  signed int Error; // esi
  PTP_WAIT ThreadpoolWait; // rax

  v6 = a2;
  if ( a3 )
  {
    if ( *((_QWORD *)pv + 2) )
    {
      Error = -2147418113;
      goto LABEL_5;
    }
    v7 = (HANDLE *)(pv + 8);
    v6 = 0LL;
    CAutoHandle<void *>::~CAutoHandle<void *>(pv + 8);
    *v7 = a2;
    if ( !a2 )
    {
      Error = -2147024809;
LABEL_5:
      (**(void (__fastcall ***)(struct CCrashDetector::CHandler *, __int64))a3)(a3, 1LL);
      goto LABEL_6;
    }
    ThreadpoolWait = CreateThreadpoolWait(CCrashDetector::s_ObjectSignaledHandler, pv, 0LL);
    *((_QWORD *)pv + 2) = ThreadpoolWait;
    if ( ThreadpoolWait )
    {
      Error = 0;
    }
    else
    {
      Error = ResultFromKnownLastError();
      if ( Error < 0 )
        goto LABEL_5;
    }
    wistd::unique_ptr<ISearchAppActivator,wistd::default_delete<ISearchAppActivator>>::~unique_ptr<ISearchAppActivator,wistd::default_delete<ISearchAppActivator>>(pv);
    *(_QWORD *)pv = a3;
    SetThreadpoolWait(*((PTP_WAIT *)pv + 2), *v7, 0LL);
    return (unsigned int)Error;
  }
  Error = -2147024809;
LABEL_6:
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  return (unsigned int)Error;
}
