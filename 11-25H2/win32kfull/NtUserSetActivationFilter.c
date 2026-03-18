/*
 * XREFs of NtUserSetActivationFilter @ 0x14015C1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsIAMThread @ 0x140151CF0 (IsIAMThread.c)
 *     IAMThreadAccessGranted @ 0x14015C7E0 (IAMThreadAccessGranted.c)
 *     _SetActivationFilter @ 0x1401B3A4C (_SetActivationFilter.c)
 */

__int64 __fastcall NtUserSetActivationFilter(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rax
  int v7; // ebx
  int v8; // ecx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v13);
  v6 = PtiCurrent(v5, v4);
  v7 = 0;
  if ( (unsigned int)IAMThreadAccessGranted(v6) )
  {
    v11 = ValidateHwnd(a1);
    if ( v11 && IsIAMThread(*(_QWORD *)(v11 + 16)) )
    {
      v7 = SetActivationFilter(v12, a2);
      goto LABEL_4;
    }
    v8 = 87;
  }
  else
  {
    v8 = 5;
  }
  UserSetLastError(v8);
LABEL_4:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v13);
  UserSessionSwitchLeaveCrit(v9);
  return v7;
}
