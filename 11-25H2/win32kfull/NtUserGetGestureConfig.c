/*
 * XREFs of NtUserGetGestureConfig @ 0x140249B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14003507C (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     GetGestureConfigSettings @ 0x1401BE040 (GetGestureConfigSettings.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtUserGetGestureConfig(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int *a4,
        volatile void *Address,
        int a6)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagWND *v11; // rsi
  int GestureConfigSettings; // ebx
  struct tagTHREADINFO *v13; // rax
  int v14; // ecx
  __int64 v15; // rax
  size_t v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  void *v19; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned int v24; // [rsp+30h] [rbp-88h] BYREF
  void *v25; // [rsp+38h] [rbp-80h]
  _BYTE v26[16]; // [rsp+58h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter3[4]; // [rsp+68h] [rbp-50h] BYREF
  __int64 v28; // [rsp+88h] [rbp-30h] BYREF

  v25 = 0LL;
  v24 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&v28, 1LL);
  v11 = (struct tagWND *)ValidateHwnd(a1);
  if ( v11 )
  {
    v13 = PtiCurrent(v10, v9);
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, (__int64)v13, (__int64)v11);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v26);
    if ( a6 == 12 )
    {
      if ( (a3 & 0xFFFFFFFE) != 0 )
      {
        UserSetLastError(1004);
        GestureConfigSettings = 0;
LABEL_20:
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v26);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v22);
        goto LABEL_21;
      }
      v15 = *((_QWORD *)v11 + 5);
      if ( *(char *)(v15 + 20) < 0 || *(char *)(v15 + 19) < 0 )
      {
        v14 = 1400;
        goto LABEL_19;
      }
      if ( Address )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (unsigned int *)MmUserProbeAddress;
        v24 = *a4;
        if ( v24 - 1 <= 0xFF )
        {
          v16 = 12 * v24;
          v19 = (void *)Win32AllocPoolWithQuotaZInit(v16, 1667724117LL);
          v25 = v19;
          if ( v19 )
          {
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v18, v17);
            ProbeForWrite(Address, 12LL * v24, CurrentProcessWow64Process != 0 ? 1 : 4);
            memmove(v19, (const void *)Address, v16);
            GestureConfigSettings = GetGestureConfigSettings(v11, v21, a3, &v24, (__int64)v19);
            if ( GestureConfigSettings )
              memmove((void *)Address, v19, v16);
            Win32FreePool(v19);
            goto LABEL_20;
          }
          v14 = 8;
          goto LABEL_19;
        }
      }
    }
    v14 = 87;
LABEL_19:
    GestureConfigSettings = 0;
    UserSetLastError(v14);
    goto LABEL_20;
  }
  GestureConfigSettings = 0;
LABEL_21:
  UserSessionSwitchLeaveCrit(v10);
  return GestureConfigSettings;
}
