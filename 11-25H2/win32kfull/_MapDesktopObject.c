/*
 * XREFs of _MapDesktopObject @ 0x1401AC150
 * Callers:
 *     NtUserMapDesktopObject @ 0x1401AC110 (NtUserMapDesktopObject.c)
 * Callees:
 *     ??1CDisableILCheckAuto@@QEAA@XZ @ 0x14001BB60 (--1CDisableILCheckAuto@@QEAA@XZ.c)
 *     ??0CDisableILCheckAuto@@QEAA@XZ @ 0x14001BB78 (--0CDisableILCheckAuto@@QEAA@XZ.c)
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 */

__int64 __fastcall MapDesktopObject(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  _QWORD *i; // rbx
  __int64 v13; // rbx
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  CDisableILCheckAuto::CDisableILCheckAuto((CDisableILCheckAuto *)v14);
  LOBYTE(v2) = -1;
  v3 = HMValidateHandleWithDescriptor(a1, v2);
  v4 = v3;
  if ( v3 )
  {
    v6 = _HMPheFromObject(v3);
    if ( (*(_BYTE *)(v6 + 25) & 0x40) == 0 )
    {
      v7 = *(_QWORD *)(v4 + 24);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
      v10 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        v9 = -*(_QWORD *)CurrentProcessWin32Process;
        v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      }
      W32GetUserGdiSessionState(v9);
      for ( i = *(_QWORD **)(v10 + 688); i; i = (_QWORD *)*i )
      {
        if ( i[1] == v7 )
        {
          v13 = *(_QWORD *)v6 + i[2];
          CDisableILCheckAuto::~CDisableILCheckAuto((CDisableILCheckAuto *)v14);
          return v13;
        }
      }
    }
  }
  CDisableILCheckAuto::~CDisableILCheckAuto((CDisableILCheckAuto *)v14);
  return 0LL;
}
