/*
 * XREFs of NtUserGetRawPointerDeviceData @ 0x1401E4D40
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14003D7B0 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x14004F870 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x14015CD20 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     RtlCopyVolatileMemory @ 0x14024BC90 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetRawPointerDeviceData(
        int a1,
        unsigned int a2,
        unsigned int a3,
        volatile void *a4,
        volatile void *Address)
{
  __int64 v6; // r15
  int v9; // ebx
  unsigned __int64 v10; // rsi
  SIZE_T v11; // r14
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *v15; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  CTouchProcessor *v23; // r14
  unsigned __int64 ThreadPointerData; // rdx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD v33[3]; // [rsp+58h] [rbp-40h] BYREF

  v6 = a3;
  EnterLeaveCritShared::EnterLeaveCritShared(v33);
  v9 = 0;
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
    || (v15 = (void *)Win32AllocPoolWithQuotaZInitImpl(-1, (unsigned int)v11, 0x78707355u), (v33[1] = v15) == 0LL) )
  {
    v12 = 8;
LABEL_17:
    UserSetLastError(v12);
    goto LABEL_18;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v14, v13);
  ProbeForWrite(Address, 4LL * (unsigned int)v10, CurrentProcessWow64Process != 0 ? 1 : 4);
  v19 = PsGetCurrentProcessWow64Process(v18, v17);
  ProbeForRead(a4, v11, v19 != 0 ? 1 : 4);
  RtlCopyVolatileMemory(v15, (const void *)a4, (unsigned int)v11);
  v23 = *(CTouchProcessor **)(W32GetUserSessionState(v21, v20, v22) + 3256);
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        v23,
                        (struct _LIST_ENTRY *)(v33[0] + 1208LL),
                        a1,
                        0LL,
                        0LL,
                        0LL);
  if ( ThreadPointerData )
    LOBYTE(v9) = (unsigned int)CTouchProcessor::GetPointerRawDataWithHistory(
                                 (PERESOURCE *)v23,
                                 ThreadPointerData,
                                 a2,
                                 v6,
                                 (const struct tagPOINTER_DEVICE_PROPERTY *)v15,
                                 (unsigned int)v6 * a2,
                                 (int *)Address) != 0;
  else
    UserSetLastError(87);
  GreDeleteFastMutex((char *)v15, v25, v26, v27);
LABEL_18:
  UserSessionSwitchLeaveCritWithNonPaged(v29, v28, v30, v31);
  return v9;
}
