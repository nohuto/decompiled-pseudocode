/*
 * XREFs of NtUserSetDisplayMapping @ 0x14029EF10
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     _SetDisplayMapping @ 0x14028DEC8 (_SetDisplayMapping.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserSetDisplayMapping(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rax
  const struct tagUIPI_INFO *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  struct tagTHREADINFO *v11; // rax
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rsi
  _BYTE v19[16]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v20[4]; // [rsp+30h] [rbp-28h] BYREF

  v20[1] = -1;
  v20[0] = 0x2000;
  v20[2] = 0;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v19);
  v6 = PtiCurrent(v5, v4);
  v10 = 0;
  if ( !UIPrivilegeIsolation::CheckAccess(
          (UIPrivilegeIsolation *)(*((_QWORD *)v6 + 58) + 864LL),
          (const struct tagUIPI_INFO *)v20,
          v7) )
  {
    v11 = PtiCurrent(v9, v8);
    EtwTraceUIPISystemError(*((_QWORD *)v11 + 58), 0LL, 10LL);
LABEL_3:
    v12 = 5;
LABEL_4:
    UserSetLastError(v12);
    goto LABEL_5;
  }
  LOBYTE(v8) = 19;
  v15 = HMValidateHandleWithDescriptor(a1, v8);
  v16 = v15;
  if ( !v15 || (*(_DWORD *)(v15 + 184) & 0x80u) == 0 )
  {
    UserSetLastError(6);
    v12 = 6;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v15 + 168) & 0x2000) != 0 )
  {
    UserSetLastError(5);
    goto LABEL_3;
  }
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v15 + 456) + 24LL) - 6) <= 1 )
    goto LABEL_3;
  v18 = ValidateHmonitor(a2);
  if ( v18 )
  {
    v10 = 1;
    if ( ValidateHmonitorNoRip(*(_QWORD *)(v16 + 1344), v17) != v18 )
      v10 = SetDisplayMapping(*(_QWORD *)(v16 + 456), v18);
    *(_DWORD *)(v16 + 1352) = 1;
  }
LABEL_5:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v19);
  UserSessionSwitchLeaveCrit(v13);
  return v10;
}
