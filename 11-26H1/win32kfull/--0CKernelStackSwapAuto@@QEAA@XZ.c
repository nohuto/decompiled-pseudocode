/*
 * XREFs of ??0CKernelStackSwapAuto@@QEAA@XZ @ 0x1401ADE18
 * Callers:
 *     xxxInterSendMsgEx @ 0x140051EE4 (xxxInterSendMsgEx.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

CKernelStackSwapAuto *__fastcall CKernelStackSwapAuto::CKernelStackSwapAuto(CKernelStackSwapAuto *this)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // rax

  *(_BYTE *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(this);
  if ( CurrentThreadWin32Thread )
    v3 = *CurrentThreadWin32Thread;
  else
    v3 = 0LL;
  *((_QWORD *)this + 1) = v3;
  if ( *(int *)(v3 + 1704) < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 808LL);
  if ( !*(_DWORD *)(*((_QWORD *)this + 1) + 1704LL) )
  {
    *(_QWORD *)(*((_QWORD *)this + 1) + 1360LL) |= 0x40000000uLL;
    *(_BYTE *)this = KeSetKernelStackSwapEnable(0);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 1) + 1704LL));
  return this;
}
