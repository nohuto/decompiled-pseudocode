/*
 * XREFs of CmUnloadKey @ 0x140B0A63C
 * Callers:
 *     NtUnloadKey2 @ 0x140B0A550 (NtUnloadKey2.c)
 *     NtUnloadKeyEx @ 0x140B0A5A0 (NtUnloadKeyEx.c)
 *     NtUnloadKey @ 0x140B0A5F0 (NtUnloadKey.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     CmpIsRegistryLockAcquired @ 0x140262890 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x1404869D8 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     CmpPerformUnloadKey @ 0x1408AFC14 (CmpPerformUnloadKey.c)
 *     CmpCallCallBacksEx @ 0x1408C9E40 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByNameEx @ 0x1408EBDCC (ObReferenceObjectByNameEx.c)
 *     CmpCaptureUnicodeStringBuffer @ 0x1408F2650 (CmpCaptureUnicodeStringBuffer.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     CmpInitializeParseContext @ 0x14097C5D0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14097C850 (CmpCleanupParseContext.c)
 *     CmConvertHandleToKernelHandle @ 0x14097CB84 (CmConvertHandleToKernelHandle.c)
 *     CmpDoesBufferRequireCapturing @ 0x14097DDF0 (CmpDoesBufferRequireCapturing.c)
 *     CmpCaptureUnicodeString @ 0x14097E720 (CmpCaptureUnicodeString.c)
 *     ExWnfHiveUnloaded @ 0x140A2A784 (ExWnfHiveUnloaded.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140C58CD4 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140C58F14 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpIsHiveLoadUnloadRundownActive @ 0x140C58FB8 (CmpIsHiveLoadUnloadRundownActive.c)
 */

__int64 __fastcall CmUnloadKey(void *Src, int a2, char a3, void *a4)
{
  int PreviousMode; // esi
  void *QuadPart; // r15
  struct _PRIVILEGE_SET *v8; // r14
  char v9; // r12
  struct _KTHREAD *CurrentThread; // rax
  void *v11; // rdx
  int v12; // edi
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // esi
  int v19; // eax
  char UnloadRundown; // [rsp+43h] [rbp-305h]
  LARGE_INTEGER Interval; // [rsp+48h] [rbp-300h] BYREF
  int v23; // [rsp+50h] [rbp-2F8h]
  int v24; // [rsp+54h] [rbp-2F4h]
  PVOID Object; // [rsp+58h] [rbp-2F0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-2E8h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-2D0h] BYREF
  _QWORD v28[2]; // [rsp+80h] [rbp-2C8h] BYREF
  struct _PRIVILEGE_SET *v29; // [rsp+90h] [rbp-2B8h]
  __int128 v30; // [rsp+98h] [rbp-2B0h] BYREF
  __int128 v31; // [rsp+A8h] [rbp-2A0h]
  __int128 v32; // [rsp+B8h] [rbp-290h]
  _QWORD v33[3]; // [rsp+C8h] [rbp-280h] BYREF
  __int64 v34; // [rsp+E0h] [rbp-268h]
  __int128 v35; // [rsp+E8h] [rbp-260h]
  __int64 v36; // [rsp+F8h] [rbp-250h]
  _OWORD v37[2]; // [rsp+100h] [rbp-248h] BYREF
  __int64 v38; // [rsp+120h] [rbp-228h]
  _DWORD v39[116]; // [rsp+130h] [rbp-218h] BYREF

  v23 = a2;
  memset_0(v39, 0, sizeof(v39));
  DWORD1(v30) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  CmpInitializeParseContext((__int64)v39);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  QuadPart = 0LL;
  v8 = 0LL;
  v29 = 0LL;
  Handle = 0LL;
  memset(v37, 0, sizeof(v37));
  v38 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v9 = 0;
  v28[1] = v28;
  v28[0] = v28;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( !UnloadRundown )
  {
LABEL_28:
    v12 = -1073741431;
    goto LABEL_29;
  }
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    v12 = -1073741727;
    goto LABEL_29;
  }
  if ( (v23 & 0xFFFFFFFE) != 0 )
  {
    v12 = -1073741811;
    goto LABEL_29;
  }
  if ( (_BYTE)PreviousMode )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlCopyFromUser(&v30, Src, 0x30uLL);
  }
  else
  {
    RtlCopyVolatileMemory(&v30, Src, 0x30uLL);
  }
  v12 = CmpCaptureUnicodeString((__m128i *)&DestinationString, (unsigned int *)v31, PreviousMode);
  v24 = v12;
  if ( v12 >= 0 )
  {
    if ( DestinationString.Length
      && CmpDoesBufferRequireCapturing(PreviousMode, (unsigned __int64)DestinationString.Buffer) )
    {
      TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota();
      v8 = TransientPoolWithQuota;
      v29 = TransientPoolWithQuota;
      if ( !TransientPoolWithQuota )
      {
        v12 = -1073741670;
        v24 = -1073741670;
        goto LABEL_29;
      }
      CmpCaptureUnicodeStringBuffer(&DestinationString.Length, TransientPoolWithQuota, PreviousMode);
    }
    *(_QWORD *)&v31 = &DestinationString;
    v32 = 0LL;
    if ( (_BYTE)PreviousMode )
    {
      v12 = CmConvertHandleToKernelHandle(*((void **)&v30 + 1), v11, PreviousMode, 0, &Handle);
      if ( v12 < 0 )
        goto LABEL_29;
      *((_QWORD *)&v30 + 1) = Handle;
    }
    v39[6] = 0;
    v39[0] = 4;
    v14 = ObReferenceObjectByNameEx((__int64)&v30, 0LL, 0, (__int64)CmKeyObjectType, 0, (__int64)v39, &Object);
    if ( v14 == -1073741772 )
      v14 = -1073741811;
    v12 = v14;
    if ( v14 >= 0 )
    {
      if ( a4 )
      {
        Interval.QuadPart = 0LL;
        v12 = ObReferenceObjectByHandle(a4, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, (PVOID *)&Interval, 0LL);
        QuadPart = (void *)Interval.QuadPart;
        if ( v12 < 0 )
          goto LABEL_29;
        KeResetEvent((PRKEVENT)Interval.QuadPart);
      }
      if ( !WheapPfaLock.ExpectedRunTime || (unsigned int)CmpIsRegistryLockAcquired() )
        goto LABEL_22;
      *(_QWORD *)&v37[0] = Object;
      *((_QWORD *)&v37[0] + 1) = QuadPart;
      v19 = CmpCallCallBacksEx(0x22u, (__int64)v37, 0LL, 1, 0x23u, (__int64)Object, (__int64)v28);
      if ( v19 >= 0 )
      {
        v9 = 1;
LABEL_22:
        ExWnfHiveUnloaded(&DestinationString);
LABEL_23:
        v17 = 0;
        while ( !(unsigned __int8)CmpIsHiveLoadUnloadRundownActive(v16, v15) )
        {
          v12 = CmpPerformUnloadKey((__int64)Object, v23, a3, (__int64)QuadPart);
          if ( v12 != -1073741267 )
            goto LABEL_29;
          if ( (unsigned int)++v17 > 0xA )
          {
            Interval.QuadPart = -10000000LL;
            KeDelayExecutionThread(0, 0, &Interval);
            goto LABEL_23;
          }
        }
        goto LABEL_28;
      }
      v12 = 0;
      if ( v19 != -1073740541 )
        v12 = v19;
    }
  }
LABEL_29:
  if ( v9 && WheapPfaLock.ExpectedRunTime && !(unsigned int)CmpIsRegistryLockAcquired() && (_QWORD *)v28[0] != v28 )
  {
    v35 = 0LL;
    v36 = 0LL;
    v33[0] = Object;
    v33[1] = (unsigned int)v12;
    v34 = (unsigned int)v12;
    v33[2] = v37;
    CmpCallCallBacksEx(0x23u, (__int64)v33, 0LL, 0, 0x23u, (__int64)Object, (__int64)v28);
    v12 = v34;
  }
  if ( QuadPart )
    ObfDereferenceObject(QuadPart);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v8 )
    CmSiFreeMemory(v8);
  if ( Handle )
    ZwClose(Handle);
  CmpCleanupParseContext((__int64)v39, 0);
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  KeLeaveCriticalRegion();
  return (unsigned int)v12;
}
