/*
 * XREFs of EtwTiLogProtectExecVm @ 0x140A81C70
 * Callers:
 *     NtProtectVirtualMemory @ 0x140A03A40 (NtProtectVirtualMemory.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     EtwProviderEnabled @ 0x140257D70 (EtwProviderEnabled.c)
 *     EtwpTiFillProcessIdentity @ 0x140259590 (EtwpTiFillProcessIdentity.c)
 *     EtwpTiFillZeroVad @ 0x14048BC90 (EtwpTiFillZeroVad.c)
 *     EtwpTiFillVad @ 0x14048BCF8 (EtwpTiFillVad.c)
 *     EtwpTiFillThreadIdentity @ 0x14049BCE8 (EtwpTiFillThreadIdentity.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x140728420 (ZwQueryVirtualMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void EtwTiLogProtectExecVm(_KPROCESS *BugCheckParameter1, char a2, __int64 a3, __int64 a4, ...)
{
  int v6; // r12d
  int v7; // r15d
  __int64 v8; // rcx
  _KPROCESS *Process; // rsi
  _KPROCESS *v10; // r13
  __int64 v11; // rax
  const EVENT_DESCRIPTOR *v12; // r14
  ULONGLONG v13; // r8
  BOOLEAN v14; // bl
  PVOID v15; // rbx
  void *Pool2; // rax
  int v17; // eax
  int v18; // eax
  int v19; // r9d
  int v20; // eax
  int v21; // r9d
  int v22; // eax
  int v23; // r10d
  unsigned int v24; // r11d
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // r11d
  int v30; // eax
  int v31; // r11d
  unsigned int v32; // r9d
  __int64 v33; // rax
  __int64 v34; // rax
  REGHANDLE v35; // rcx
  BOOLEAN v36; // [rsp+30h] [rbp-D0h]
  NTSTATUS VirtualMemory; // [rsp+40h] [rbp-C0h] BYREF
  char MemoryInformation[48]; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  _OWORD v40[3]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v41; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v43; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[33]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v45; // [rsp+340h] [rbp+240h] BYREF
  __int64 v46; // [rsp+348h] [rbp+248h] BYREF
  PVOID BaseAddress; // [rsp+350h] [rbp+250h] BYREF
  va_list BaseAddressa; // [rsp+350h] [rbp+250h]
  __int64 v49; // [rsp+358h] [rbp+258h] BYREF
  va_list va1; // [rsp+358h] [rbp+258h]
  __int64 v51; // [rsp+360h] [rbp+260h] BYREF
  va_list va2; // [rsp+360h] [rbp+260h]
  va_list va3; // [rsp+368h] [rbp+268h] BYREF

  va_start(va3, a4);
  va_start(va2, a4);
  va_start(va1, a4);
  va_start(BaseAddressa, a4);
  BaseAddress = va_arg(va1, PVOID);
  va_copy(va2, va1);
  v49 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v51 = va_arg(va3, _QWORD);
  v46 = a4;
  v45 = a3;
  memset_0(&VirtualMemory, 0, 0x40uLL);
  v6 = 0;
  v7 = 0;
  if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0xF0uLL) )
  {
    v8 = 0LL;
    Process = KeGetCurrentThread()->ApcState.Process;
    v10 = KeGetCurrentThread()->Process;
    if ( Process == BugCheckParameter1 )
      v8 = 1LL;
    v11 = 2LL;
    if ( a2 )
      v11 = 0LL;
    v12 = (const EVENT_DESCRIPTOR *)off_140004618[v11 + v8];
    if ( Process == BugCheckParameter1 )
    {
      v13 = 0x800000000LL;
      if ( a2 )
        v13 = 0x400000000LL;
    }
    else if ( a2 )
    {
      v13 = 0x1000000000LL;
    }
    else
    {
      v13 = 0x2000000000LL;
    }
    v14 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, v13);
    v36 = v14;
    if ( EtwEventEnabled(EtwThreatIntProvRegHandle, v12) )
    {
      if ( v14 )
      {
        v15 = BaseAddress;
        memset(v40, 0, sizeof(v40));
        if ( BugCheckParameter1 != KeGetCurrentThread()->ApcState.Process )
        {
          KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v40);
          v6 = 1;
        }
        VirtualMemory = ZwQueryVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          v15,
                          MemoryRegionInformation,
                          MemoryInformation,
                          0x30uLL,
                          0LL);
        if ( VirtualMemory >= 0 )
        {
          v7 = 1;
          Pool2 = (void *)ExAllocatePool2(0x100uLL);
          P = Pool2;
          if ( Pool2 )
          {
            if ( ZwQueryVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   v15,
                   MemoryMappedFilenameInformation,
                   Pool2,
                   0x200uLL,
                   0LL) < 0 )
            {
              ExFreePoolWithTag(P, 0);
              P = 0LL;
            }
          }
        }
        if ( v6 )
          KiUnstackDetachProcess((__int64)v40, 0);
        v14 = v36;
      }
      v17 = EtwpTiFillProcessIdentity(UserData, (__int64)Process, &v41);
      v18 = EtwpTiFillThreadIdentity(&UserData[v17].Ptr, (__int64)KeGetCurrentThread());
      v20 = EtwpTiFillProcessIdentity(&UserData[v18 + v19].Ptr, (__int64)BugCheckParameter1, &v42);
      v22 = EtwpTiFillProcessIdentity(&UserData[v20 + v21].Ptr, (__int64)v10, &v43);
      v24 = v22 + v23 + 1;
      v25 = (unsigned int)(v22 + v23);
      UserData[v25].Ptr = (ULONGLONG)BaseAddressa;
      *(_QWORD *)&UserData[v25].Size = 8LL;
      v26 = v24;
      UserData[v26].Ptr = (ULONGLONG)&v46;
      *(_QWORD *)&UserData[v26].Size = 8LL;
      v27 = v24 + 1;
      UserData[v27].Ptr = (ULONGLONG)va2;
      *(_QWORD *)&UserData[v27].Size = 4LL;
      v28 = v24 + 2;
      v29 = v24 + 3;
      v28 *= 2LL;
      *(&UserData[0].Ptr + v28) = (ULONGLONG)va3;
      *((_QWORD *)&UserData[0].Size + v28) = 4LL;
      if ( v14 && v7 )
        v30 = EtwpTiFillVad((__int64)&UserData[v29], (__int64)&VirtualMemory);
      else
        v30 = EtwpTiFillZeroVad(&UserData[v29].Ptr);
      v32 = v30 + v31 + 1;
      v33 = (unsigned int)(v30 + v31);
      UserData[v33].Ptr = (ULONGLONG)&v45;
      *(_QWORD *)&UserData[v33].Size = 8LL;
      v34 = v32;
      UserData[v34].Ptr = (ULONGLONG)va1;
      v35 = EtwThreatIntProvRegHandle;
      *(_QWORD *)&UserData[v34].Size = 8LL;
      EtwWrite(v35, v12, 0LL, v32 + 1, UserData);
      if ( v7 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
    }
  }
}
