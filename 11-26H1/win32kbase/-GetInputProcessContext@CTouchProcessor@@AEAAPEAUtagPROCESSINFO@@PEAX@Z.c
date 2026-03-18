/*
 * XREFs of ?GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z @ 0x14008CA94
 * Callers:
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerInputFrame@@@Z @ 0x14008BFEC (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAUtagMANIPULATION_INPUT_INFO@@IPEBUCPointerI.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAI@Z @ 0x14010DBCC (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 */

struct tagPROCESSINFO *__fastcall CTouchProcessor::GetInputProcessContext(CTouchProcessor *this, __int64 a2)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(this);
  v5 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  LOBYTE(v4) = 19;
  v6 = HMValidateHandleNoSecure(a2, v4);
  v7 = v6;
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 456);
    if ( v8 )
    {
      if ( (*(_DWORD *)(v8 + 368) & 8) != 0 )
      {
        v10 = *(_QWORD *)(v7 + 368);
        if ( v10 )
          return *(struct tagPROCESSINFO **)(v10 + 88);
      }
    }
  }
  return (struct tagPROCESSINFO *)v5;
}
