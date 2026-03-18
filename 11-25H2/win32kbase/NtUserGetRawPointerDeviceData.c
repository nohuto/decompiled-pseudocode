/*
 * XREFs of NtUserGetRawPointerDeviceData @ 0x140171150
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1400D2F70 (-GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PRO.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetRawPointerDeviceData(
        int a1,
        unsigned int a2,
        unsigned int a3,
        const void *a4,
        volatile void *Address)
{
  __int64 v6; // r13
  int PointerRawDataInternal; // ebx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r14
  int v12; // ecx
  struct tagTHREADINFO *v13; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 UserSessionState; // rax
  __int64 v18; // rdx
  struct tagTHREADINFO *v20[3]; // [rsp+58h] [rbp-40h] BYREF
  unsigned __int16 v21; // [rsp+A0h] [rbp+8h]

  v21 = a1;
  v6 = a3;
  EnterLeaveCritShared::EnterLeaveCritShared(v20, 1LL);
  PointerRawDataInternal = 0;
  if ( !a1
    || HIWORD(a1)
    || !a2
    || !(_DWORD)v6
    || !a4
    || !Address
    || (v10 = v6 * a2, v10 > 0xFFFFFFFF)
    || (v11 = 28LL * (unsigned int)v6, v11 > 0xFFFFFFFF) )
  {
    v12 = 87;
    goto LABEL_17;
  }
  if ( (unsigned int)v11 >= 0x2710000
    || (v13 = (struct tagTHREADINFO *)Win32AllocPoolWithQuotaZInitImpl(0xFFFFFFFFLL, (unsigned int)v11, 0x78707355u),
        (v20[1] = v13) == 0LL) )
  {
    v12 = 8;
LABEL_17:
    UserSetLastError(v12);
    goto LABEL_18;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
  ProbeForWrite(Address, 4LL * (unsigned int)v10, CurrentProcessWow64Process != 0 ? 1 : 4);
  if ( v11 && ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
    ExRaiseDatatypeMisalignment();
  RtlCopyVolatileMemory(v13, a4, (unsigned int)v11);
  UserSessionState = W32GetUserSessionState(v16, v15);
  PointerRawDataInternal = CTouchProcessor::GetPointerRawDataInternal(
                             *(CTouchProcessor **)(UserSessionState + 3256),
                             v20[0],
                             v21,
                             a2,
                             v6,
                             v13,
                             v10,
                             (int *)Address);
  GreDeleteFastMutex((char *)v13);
LABEL_18:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v18);
  return PointerRawDataInternal;
}
