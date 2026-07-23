/*
 * XREFs of CmGetSystemDriverList @ 0x140D0A9F0
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140D0A758 (IopInitializeSystemDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwOpenDirectoryObject @ 0x140728AC0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x14072A9A0 (ZwQueryDirectoryObject.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140CEF738 (CmpAcquireSystemDriverHiveContext.c)
 *     CmpFreeDriverList @ 0x140CF0DE4 (CmpFreeDriverList.c)
 *     CmpFindDrivers @ 0x140CF5190 (CmpFindDrivers.c)
 *     CmpSortDriverList @ 0x140CF65C4 (CmpSortDriverList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140D0AFAC (CmpOpenSystemDriverHiveContext.c)
 *     CmpCloseSystemDriverHiveContext @ 0x140D0B14C (CmpCloseSystemDriverHiveContext.c)
 */

ULONG_PTR __fastcall CmGetSystemDriverList(__int64 a1)
{
  char v1; // r13
  ULONG_PTR Pool2; // r14
  UNICODE_STRING *Pool; // rsi
  char v4; // r15
  BOOLEAN v5; // r12
  struct _KTHREAD *CurrentThread; // rcx
  _KAFFINITY_EX *UserAffinity; // rax
  int v8; // eax
  BOOLEAN RestartScan; // cl
  NTSTATUS v10; // eax
  const UNICODE_STRING *i; // rdi
  _DWORD *v12; // rax
  _DWORD *v13; // rbx
  PVOID *v14; // rax
  PVOID *j; // rbx
  __int64 v16; // rax
  wchar_t *Buffer; // rcx
  unsigned int v18; // ebx
  __int64 *v19; // rax
  int k; // edx
  __int64 v21; // rdi
  NTSTATUS v22; // eax
  unsigned int v23; // ecx
  PVOID **v24; // rdi
  PVOID *v25; // rbx
  UNICODE_STRING *v26; // rcx
  UNICODE_STRING *v27; // rbx
  ULONG_PTR result; // rax
  unsigned int Context; // [rsp+30h] [rbp-D8h]
  PULONG ReturnLength; // [rsp+38h] [rbp-D0h]
  int v31; // [rsp+40h] [rbp-C8h]
  __int64 v32; // [rsp+50h] [rbp-B8h]
  __int64 v33; // [rsp+60h] [rbp-A8h]
  __int64 v34[2]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  PVOID *p_P; // [rsp+80h] [rbp-88h]
  UNICODE_STRING v37; // [rsp+88h] [rbp-80h] BYREF
  ULONG v38; // [rsp+98h] [rbp-70h] BYREF
  ULONG v39; // [rsp+9Ch] [rbp-6Ch] BYREF
  HANDLE DirectoryHandle; // [rsp+A0h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v42[24]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v43; // [rsp+F0h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v45[48]; // [rsp+108h] [rbp+0h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+138h] [rbp+30h]
  unsigned int v47; // [rsp+140h] [rbp+38h]
  _BYTE v48[32]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v49; // [rsp+168h] [rbp+60h]
  __int64 v50; // [rsp+178h] [rbp+70h]
  unsigned int v51; // [rsp+180h] [rbp+78h]
  struct _KAPC_STATE ApcState; // [rsp+188h] [rbp+80h] BYREF

  v43 = a1;
  *(_OWORD *)&v42[8] = 0LL;
  v39 = 0;
  v38 = 0;
  DestinationString = 0LL;
  v1 = 0;
  memset(&ObjectAttributes, 0, 44);
  memset(&ApcState, 0, sizeof(ApcState));
  memset_0(v45, 0, 0x40uLL);
  v47 = -1;
  memset_0(v48, 0, 0x40uLL);
  DirectoryHandle = 0LL;
  p_P = &P;
  Pool2 = 0LL;
  v51 = -1;
  P = &P;
  Pool = 0LL;
  v4 = 0;
  v37.Buffer = (wchar_t *)&v37;
  v5 = 0;
  *(_QWORD *)&v37.Length = &v37;
  CurrentThread = KeGetCurrentThread();
  UserAffinity = CurrentThread[1].UserAffinity;
  if ( UserAffinity )
  {
    *(_OWORD *)v42 = *(_OWORD *)&UserAffinity->Count;
    *(_QWORD *)&v42[16] = UserAffinity->StaticBitmap[1];
  }
  else
  {
    *(_OWORD *)&v42[8] = 0LL;
  }
  *(_QWORD *)v42 = UserAffinity;
  CurrentThread[1].UserAffinity = (_KAFFINITY_EX *)v42;
  v34[1] = (__int64)v34;
  v34[0] = (__int64)v34;
  if ( (int)CmpOpenSystemDriverHiveContext(&CmpSystemHiveNameString) >= 0 )
  {
    if ( !HIDWORD(WheapPfaLock.KernelStack)
      || (v8 = CmpOpenSystemDriverHiveContext(&CmpDevicesHiveNameString), (int)(v8 + 0x80000000) < 0)
      || v8 == -1073741772 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\DriverStore\\Nodes");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes) >= 0 )
      {
        Pool = (UNICODE_STRING *)CmpAllocatePool(0x100uLL);
        if ( Pool )
        {
          for ( RestartScan = 1; ; RestartScan = 0 )
          {
            v10 = ZwQueryDirectoryObject(DirectoryHandle, Pool, 0x400u, 1u, RestartScan, &v39, &v38);
            if ( v10 == -2147483622 )
              break;
            if ( v10 < 0 )
              goto LABEL_47;
            for ( i = Pool; i->Length; i += 2 )
            {
              if ( !RtlEqualUnicodeString(i, (PCUNICODE_STRING)&KiSystemServiceTraceCallbackLock.ApcStateFill[32], 1u) )
              {
                v12 = (_DWORD *)CmpAllocatePool(0x100uLL);
                v13 = v12;
                if ( !v12 )
                  goto LABEL_47;
                memset_0(v12, 0, 0x40uLL);
                v13[14] = -1;
                if ( (int)CmpOpenSystemDriverHiveContext(i) >= 0 )
                {
                  v14 = p_P;
                  if ( *p_P != &P )
                    goto LABEL_34;
                  *((_QWORD *)v13 + 1) = p_P;
                  *(_QWORD *)v13 = &P;
                  *v14 = v13;
                  p_P = (PVOID *)v13;
                }
                else
                {
                  ExFreePoolWithTag(v13, 0);
                }
              }
            }
          }
          v5 = CmpAcquireShutdownRundown();
          if ( v5 )
          {
            CmpAttachToRegistryProcess(&ApcState);
            v1 = 1;
            CmpLockRegistryExclusive();
            v4 = 1;
            if ( (int)CmpAcquireSystemDriverHiveContext((__int64)v45) >= 0
              && (!v49 || (int)CmpAcquireSystemDriverHiveContext((__int64)v48) >= 0) )
            {
              for ( j = (PVOID *)P; j != &P; j = (PVOID *)*j )
              {
                if ( (int)CmpAcquireSystemDriverHiveContext((__int64)j) >= 0 )
                {
                  v16 = CmpAllocatePool(0x100uLL);
                  if ( !v16 )
                    goto LABEL_47;
                  *(_OWORD *)(v16 + 16) = *((_OWORD *)j + 1);
                  *(_QWORD *)(v16 + 32) = j[6];
                  *(_DWORD *)(v16 + 40) = *((_DWORD *)j + 14);
                  Buffer = v37.Buffer;
                  if ( *(UNICODE_STRING **)v37.Buffer != &v37 )
LABEL_34:
                    __fastfail(3u);
                  *(_QWORD *)(v16 + 8) = v37.Buffer;
                  *(_QWORD *)v16 = &v37;
                  *(_QWORD *)Buffer = v16;
                  v37.Buffer = (wchar_t *)v16;
                }
              }
              v18 = 0;
              if ( CmpFindDrivers(
                     BugCheckParameter3,
                     v47,
                     v50,
                     v51,
                     &v37,
                     Context,
                     (__int64)ReturnLength,
                     v31,
                     v34,
                     v32,
                     v43,
                     v33)
                && CmpSortDriverList(BugCheckParameter3, v47, (__int64 **)v34) )
              {
                CmpUnlockRegistry();
                v19 = (__int64 *)v34[0];
                v4 = 0;
                for ( k = 0; v19 != v34; ++k )
                  v19 = (__int64 *)*v19;
                Pool2 = ExAllocatePool2(64LL, 8LL * (unsigned int)(k + 1), 0x32384D43u);
                if ( !Pool2 )
                  KeBugCheckEx(0x67u, 2uLL, 1uLL, 0LL, 0LL);
                v21 = v34[0];
                while ( (__int64 *)v21 != v34 )
                {
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v21 + 32);
                  ObjectAttributes.RootDirectory = 0LL;
                  ObjectAttributes.Attributes = 576;
                  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                  v22 = ZwOpenKey((PHANDLE)(Pool2 + 8LL * v18), 0x2001Fu, &ObjectAttributes);
                  v21 = *(_QWORD *)v21;
                  v23 = v18 + 1;
                  if ( v22 < 0 )
                    v23 = v18;
                  v18 = v23;
                }
                *(_QWORD *)(Pool2 + 8LL * v18) = 0LL;
              }
            }
          }
        }
      }
    }
  }
LABEL_47:
  if ( (__int64 *)v34[0] != v34 )
    CmpFreeDriverList(BugCheckParameter3, v34);
  if ( v4 )
    CmpUnlockRegistry();
  if ( v1 )
    CmpDetachFromRegistryProcess((__int64)&ApcState);
  if ( v5 )
    CmpReleaseShutdownRundown();
  CmpCloseSystemDriverHiveContext(v45);
  if ( v49 )
    CmpCloseSystemDriverHiveContext(v48);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  v24 = (PVOID **)P;
  if ( P != &P )
  {
    do
    {
      v25 = *v24;
      CmpCloseSystemDriverHiveContext(v24);
      ExFreePoolWithTag(v24, 0);
      v24 = (PVOID **)v25;
    }
    while ( v25 != &P );
  }
  v26 = *(UNICODE_STRING **)&v37.Length;
  if ( *(UNICODE_STRING **)&v37.Length != &v37 )
  {
    do
    {
      v27 = *(UNICODE_STRING **)&v26->Length;
      ExFreePoolWithTag(v26, 0);
      v26 = v27;
    }
    while ( v27 != &v37 );
  }
  result = Pool2;
  KeGetCurrentThread()[1].UserAffinity = *(_KAFFINITY_EX **)v42;
  return result;
}
