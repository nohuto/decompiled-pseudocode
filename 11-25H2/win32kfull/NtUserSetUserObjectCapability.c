/*
 * XREFs of NtUserSetUserObjectCapability @ 0x140204D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall NtUserSetUserObjectCapability(void *a1, unsigned int a2, void *a3, int a4)
{
  int v8; // edi
  KPROCESSOR_MODE PreviousMode; // al
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v17; // r8
  __int16 v18; // ax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v22; // rax
  void *v23; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v24[48]; // [rsp+28h] [rbp-30h] BYREF

  v8 = 0;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v24);
  v23 = 0LL;
  PreviousMode = ExGetPreviousMode();
  if ( (int)UserCaptureSid(a3, PreviousMode, &v23) >= 0 )
  {
    LOBYTE(v10) = -1;
    v11 = HMValidateHandleNoSecure((__int64)a1, v10);
    v12 = v11;
    if ( !v11 )
    {
LABEL_9:
      Win32FreePool(v23);
      goto LABEL_10;
    }
    v13 = _HMPheFromObject(v11);
    v14 = _HMPkheFromObject(v12);
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v15);
    v17 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
    {
      v18 = gahti[12 * *(unsigned __int8 *)(v13 + 24) + 6];
      if ( (v18 & 2) != 0 )
      {
        v19 = *(_QWORD **)(v14 + 8);
      }
      else
      {
        if ( (v18 & 1) == 0 )
          goto LABEL_11;
        v22 = *(_QWORD *)(v14 + 8);
        if ( !v22 )
          goto LABEL_11;
        v19 = *(_QWORD **)(v22 + 464);
      }
      if ( v19 == v17 )
      {
        v8 = UserSetUserObjectCapability(a1, a2, v23, a4);
        goto LABEL_9;
      }
    }
LABEL_11:
    UserSetLastError(5);
  }
LABEL_10:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v24);
  UserSessionSwitchLeaveCrit(v20);
  return v8;
}
