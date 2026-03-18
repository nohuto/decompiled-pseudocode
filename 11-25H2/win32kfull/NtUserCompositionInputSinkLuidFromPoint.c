/*
 * XREFs of NtUserCompositionInputSinkLuidFromPoint @ 0x1401CA6D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x14019D61C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     RequestInputSinkInfoFromPoint @ 0x1401CD604 (RequestInputSinkInfoFromPoint.c)
 *     LeaveDitCompositionInputSinkQueryCrit_ @ 0x1401FE6A4 (LeaveDitCompositionInputSinkQueryCrit_.c)
 *     EnterDitCompositionInputSinkQueryCrit_ @ 0x1402015E0 (EnterDitCompositionInputSinkQueryCrit_.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall NtUserCompositionInputSinkLuidFromPoint(
        int a1,
        void *a2,
        volatile void *a3,
        _QWORD *a4,
        _OWORD *Address)
{
  void *v9; // rsi
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // ebx
  ULONG64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  char v20; // al
  _QWORD v22[7]; // [rsp+38h] [rbp-130h] BYREF
  _OWORD v23[4]; // [rsp+70h] [rbp-F8h] BYREF
  int v24; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+B4h] [rbp-B4h]
  int v26; // [rsp+BCh] [rbp-ACh]
  _BYTE Src[12]; // [rsp+C4h] [rbp-A4h] BYREF
  __int64 v28; // [rsp+D0h] [rbp-98h]
  _BYTE v29[72]; // [rsp+D8h] [rbp-90h] BYREF

  v9 = Address;
  EnterDitCompositionInputSinkQueryCrit_();
  EnterCrit(0LL, 0LL);
  memset_0(&v24, 0, 0x70uLL);
  if ( a1 != 6 && a1 )
  {
    v11 = 87;
LABEL_4:
    v12 = 0;
    UserSetLastError(v11);
    goto LABEL_22;
  }
  if ( (unsigned int)IsCurrentProcessDwm(v10) )
  {
    v11 = 5;
    goto LABEL_4;
  }
  v22[0] = 0LL;
  RtlCopyFromUser(v22, a2, 8uLL);
  v25 = v22[0];
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v15, v14);
  ProbeForWrite(a3, 8uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
  v24 |= 1u;
  if ( a4 )
  {
    ProbeForWrite(a4, 8uLL, 8u);
    v24 |= 2u;
    *a4 = 0LL;
  }
  if ( Address )
  {
    v19 = PsGetCurrentProcessWow64Process(v18, v17);
    ProbeForWrite(Address, 0x40uLL, v19 != 0 ? 1 : 4);
    v24 |= 4u;
    memset_0(v23, 0, sizeof(v23));
    *Address = v23[0];
    Address[1] = v23[1];
    Address[2] = v23[2];
    Address[3] = v23[3];
  }
  v26 = a1;
  v12 = RequestInputSinkInfoFromPoint(&v24);
  if ( v12 )
  {
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (volatile void *)MmUserProbeAddress;
    RtlCopyVolatileMemory((void *)a3, Src, 8uLL);
    v20 = v24;
    v13 = MmUserProbeAddress;
    if ( (v24 & 2) != 0 )
    {
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_QWORD *)MmUserProbeAddress;
      *a4 = v28;
      v20 = v24;
    }
    if ( (v20 & 4) != 0 )
    {
      if ( (unsigned __int64)Address >= MmUserProbeAddress )
        v9 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v9, v29, 0x40uLL);
    }
  }
LABEL_22:
  UserSessionSwitchLeaveCrit(v13);
  LeaveDitCompositionInputSinkQueryCrit_();
  return v12;
}
