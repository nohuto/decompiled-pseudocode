/*
 * XREFs of ?_StartMonitoringThreadOfWindow@CCrashDetector@@AEAAJPEAUHWND__@@PEAVCHandler@1@@Z @ 0x1804239EC
 * Callers:
 *     _lambda_b1ccbe0050df59b1c7585372b6aa23ae_::operator() @ 0x180422B54 (_lambda_b1ccbe0050df59b1c7585372b6aa23ae_--operator().c)
 *     _lambda_8b16b784198cc2ffe8f5be0ce118e36a_::operator() @ 0x180427E84 (_lambda_8b16b784198cc2ffe8f5be0ce118e36a_--operator().c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18003F62C (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_TakeOwnershipOfHandleAndStartMonitoring@CCrashDetector@@AEAAJPEAXPEAVCHandler@1@@Z @ 0x1801B6A2C (-_TakeOwnershipOfHandleAndStartMonitoring@CCrashDetector@@AEAAJPEAXPEAVCHandler@1@@Z.c)
 *     ??1?$unique_ptr@VISearchAppActivator@@U?$default_delete@VISearchAppActivator@@@wistd@@@wistd@@QEAA@XZ @ 0x180208688 (--1-$unique_ptr@VISearchAppActivator@@U-$default_delete@VISearchAppActivator@@@wistd@@@wistd@@QE.c)
 */

__int64 __fastcall CCrashDetector::_StartMonitoringThreadOfWindow(
        char *pv,
        HWND hWnd,
        struct CCrashDetector::CHandler *a3)
{
  bool v3; // zf
  signed int Error; // ebx
  DWORD WindowThreadProcessId; // edi
  char *v8; // rax
  signed int started; // eax
  DWORD dwProcessId; // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, __int64); // [rsp+50h] [rbp+18h] BYREF

  v3 = *((_QWORD *)pv + 2) == 0LL;
  v12 = (__int64 (__fastcall ***)(_QWORD, __int64))a3;
  if ( v3 )
  {
    dwProcessId = 0;
    WindowThreadProcessId = GetWindowThreadProcessId(hWnd, &dwProcessId);
    if ( WindowThreadProcessId || (Error = ResultFromKnownLastError(), Error >= 0) )
    {
      v8 = (char *)OpenThread(0x100000u, 0, WindowThreadProcessId);
      if ( v8 )
      {
        v12 = 0LL;
        started = CCrashDetector::_TakeOwnershipOfHandleAndStartMonitoring(pv, v8, a3);
      }
      else
      {
        started = ResultFromKnownLastError();
      }
      Error = started;
    }
  }
  else
  {
    Error = -2147418113;
  }
  wistd::unique_ptr<ISearchAppActivator,wistd::default_delete<ISearchAppActivator>>::~unique_ptr<ISearchAppActivator,wistd::default_delete<ISearchAppActivator>>(&v12);
  return (unsigned int)Error;
}
