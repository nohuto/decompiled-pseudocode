/*
 * XREFs of CmGetSystemDriverList @ 0x140D04720
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140D04488 (IopInitializeSystemDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     CmpAllocatePool @ 0x140474870 (CmpAllocatePool.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     ZwOpenDirectoryObject @ 0x140723EF0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x140725DD0 (ZwQueryDirectoryObject.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     CmpLockRegistryExclusive @ 0x1408C2148 (CmpLockRegistryExclusive.c)
 *     RtlEqualUnicodeString @ 0x14091F0E0 (RtlEqualUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140CE9398 (CmpAcquireSystemDriverHiveContext.c)
 *     CmpFreeDriverList @ 0x140CEAA44 (CmpFreeDriverList.c)
 *     CmpFindDrivers @ 0x140CEEE14 (CmpFindDrivers.c)
 *     CmpSortDriverList @ 0x140CF024C (CmpSortDriverList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140D04CDC (CmpOpenSystemDriverHiveContext.c)
 *     CmpCloseSystemDriverHiveContext @ 0x140D04E7C (CmpCloseSystemDriverHiveContext.c)
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
  int DirectoryObject; // eax
  const UNICODE_STRING *i; // rdi
  _DWORD *v11; // rax
  _DWORD *v12; // rbx
  PVOID *v13; // rax
  PVOID *j; // rbx
  __int64 v15; // rax
  wchar_t *Buffer; // rcx
  unsigned int v17; // ebx
  __int64 *v18; // rax
  int k; // edx
  __int64 v20; // rdi
  NTSTATUS v21; // eax
  unsigned int v22; // ecx
  PVOID **v23; // rdi
  PVOID *v24; // rbx
  UNICODE_STRING *v25; // rcx
  UNICODE_STRING *v26; // rbx
  ULONG_PTR result; // rax
  int v28; // [rsp+40h] [rbp-C8h]
  __int64 v29; // [rsp+50h] [rbp-B8h]
  __int64 v30; // [rsp+60h] [rbp-A8h]
  __int64 v31[2]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  PVOID *p_P; // [rsp+80h] [rbp-88h]
  UNICODE_STRING v34; // [rsp+88h] [rbp-80h] BYREF
  __int64 v35; // [rsp+98h] [rbp-70h] BYREF
  HANDLE DirectoryHandle; // [rsp+A0h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v38[24]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v39; // [rsp+F0h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v41[48]; // [rsp+108h] [rbp+0h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+138h] [rbp+30h]
  unsigned int v43; // [rsp+140h] [rbp+38h]
  _BYTE v44[32]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v45; // [rsp+168h] [rbp+60h]
  __int64 v46; // [rsp+178h] [rbp+70h]
  unsigned int v47; // [rsp+180h] [rbp+78h]
  struct _KAPC_STATE ApcState; // [rsp+188h] [rbp+80h] BYREF

  v39 = a1;
  *(_OWORD *)&v38[8] = 0LL;
  v35 = 0LL;
  DestinationString = 0LL;
  v1 = 0;
  memset(&ObjectAttributes, 0, 44);
  memset(&ApcState, 0, sizeof(ApcState));
  memset_0(v41, 0, 0x40uLL);
  v43 = -1;
  memset_0(v44, 0, 0x40uLL);
  DirectoryHandle = 0LL;
  p_P = &P;
  Pool2 = 0LL;
  v47 = -1;
  P = &P;
  Pool = 0LL;
  v4 = 0;
  v34.Buffer = (wchar_t *)&v34;
  v5 = 0;
  *(_QWORD *)&v34.Length = &v34;
  CurrentThread = KeGetCurrentThread();
  UserAffinity = CurrentThread[1].UserAffinity;
  if ( UserAffinity )
  {
    *(_OWORD *)v38 = *(_OWORD *)&UserAffinity->Count;
    *(_QWORD *)&v38[16] = UserAffinity->StaticBitmap[1];
  }
  else
  {
    *(_OWORD *)&v38[8] = 0LL;
  }
  *(_QWORD *)v38 = UserAffinity;
  CurrentThread[1].UserAffinity = (_KAFFINITY_EX *)v38;
  v31[1] = (__int64)v31;
  v31[0] = (__int64)v31;
  if ( (int)CmpOpenSystemDriverHiveContext(&CmpSystemHiveNameString) >= 0 )
  {
    if ( !HIDWORD(WheapPfaLock.CycleTime)
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
          while ( 1 )
          {
            DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)Pool);
            if ( DirectoryObject == -2147483622 )
              break;
            if ( DirectoryObject < 0 )
              goto LABEL_46;
            for ( i = Pool; i->Length; i += 2 )
            {
              if ( !RtlEqualUnicodeString(i, (PCUNICODE_STRING)&KiSystemServiceTraceCallbackLock.ApcStateFill[16], 1u) )
              {
                v11 = (_DWORD *)CmpAllocatePool(0x100uLL);
                v12 = v11;
                if ( !v11 )
                  goto LABEL_46;
                memset_0(v11, 0, 0x40uLL);
                v12[14] = -1;
                if ( (int)CmpOpenSystemDriverHiveContext(i) >= 0 )
                {
                  v13 = p_P;
                  if ( *p_P != &P )
                    goto LABEL_33;
                  *((_QWORD *)v12 + 1) = p_P;
                  *(_QWORD *)v12 = &P;
                  *v13 = v12;
                  p_P = (PVOID *)v12;
                }
                else
                {
                  ExFreePoolWithTag(v12, 0);
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
            if ( (int)CmpAcquireSystemDriverHiveContext((__int64)v41) >= 0
              && (!v45 || (int)CmpAcquireSystemDriverHiveContext((__int64)v44) >= 0) )
            {
              for ( j = (PVOID *)P; j != &P; j = (PVOID *)*j )
              {
                if ( (int)CmpAcquireSystemDriverHiveContext((__int64)j) >= 0 )
                {
                  v15 = CmpAllocatePool(0x100uLL);
                  if ( !v15 )
                    goto LABEL_46;
                  *(_OWORD *)(v15 + 16) = *((_OWORD *)j + 1);
                  *(_QWORD *)(v15 + 32) = j[6];
                  *(_DWORD *)(v15 + 40) = *((_DWORD *)j + 14);
                  Buffer = v34.Buffer;
                  if ( *(UNICODE_STRING **)v34.Buffer != &v34 )
LABEL_33:
                    __fastfail(3u);
                  *(_QWORD *)(v15 + 8) = v34.Buffer;
                  *(_QWORD *)v15 = &v34;
                  *(_QWORD *)Buffer = v15;
                  v34.Buffer = (wchar_t *)v15;
                }
              }
              v17 = 0;
              if ( CmpFindDrivers(
                     BugCheckParameter3,
                     v43,
                     v46,
                     v47,
                     &v34,
                     (unsigned int)&v35 + 4,
                     (__int64)&v35,
                     v28,
                     v31,
                     v29,
                     v39,
                     v30)
                && CmpSortDriverList(BugCheckParameter3, v43, (__int64 **)v31) )
              {
                CmpUnlockRegistry();
                v18 = (__int64 *)v31[0];
                v4 = 0;
                for ( k = 0; v18 != v31; ++k )
                  v18 = (__int64 *)*v18;
                Pool2 = ExAllocatePool2(64LL, 8LL * (unsigned int)(k + 1), 0x32384D43u);
                if ( !Pool2 )
                  KeBugCheckEx(0x67u, 2uLL, 1uLL, 0LL, 0LL);
                v20 = v31[0];
                while ( (__int64 *)v20 != v31 )
                {
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v20 + 32);
                  ObjectAttributes.RootDirectory = 0LL;
                  ObjectAttributes.Attributes = 576;
                  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                  v21 = ZwOpenKey((PHANDLE)(Pool2 + 8LL * v17), 0x2001Fu, &ObjectAttributes);
                  v20 = *(_QWORD *)v20;
                  v22 = v17 + 1;
                  if ( v21 < 0 )
                    v22 = v17;
                  v17 = v22;
                }
                *(_QWORD *)(Pool2 + 8LL * v17) = 0LL;
              }
            }
          }
        }
      }
    }
  }
LABEL_46:
  if ( (__int64 *)v31[0] != v31 )
    CmpFreeDriverList(BugCheckParameter3, v31);
  if ( v4 )
    CmpUnlockRegistry();
  if ( v1 )
    CmpDetachFromRegistryProcess((__int64)&ApcState);
  if ( v5 )
    CmpReleaseShutdownRundown();
  CmpCloseSystemDriverHiveContext(v41);
  if ( v45 )
    CmpCloseSystemDriverHiveContext(v44);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  v23 = (PVOID **)P;
  if ( P != &P )
  {
    do
    {
      v24 = *v23;
      CmpCloseSystemDriverHiveContext(v23);
      ExFreePoolWithTag(v23, 0);
      v23 = (PVOID **)v24;
    }
    while ( v24 != &P );
  }
  v25 = *(UNICODE_STRING **)&v34.Length;
  if ( *(UNICODE_STRING **)&v34.Length != &v34 )
  {
    do
    {
      v26 = *(UNICODE_STRING **)&v25->Length;
      ExFreePoolWithTag(v25, 0);
      v25 = v26;
    }
    while ( v26 != &v34 );
  }
  result = Pool2;
  KeGetCurrentThread()[1].UserAffinity = *(_KAFFINITY_EX **)v38;
  return result;
}
