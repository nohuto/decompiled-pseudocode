/*
 * XREFs of CmUnloadKey @ 0x140A3E88C
 * Callers:
 *     NtUnloadKeyEx @ 0x140A3E7F0 (NtUnloadKeyEx.c)
 *     NtUnloadKey @ 0x140A3E840 (NtUnloadKey.c)
 *     NtUnloadKey2 @ 0x140A3FE10 (NtUnloadKey2.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     CmpIsRegistryLockAcquired @ 0x140261E00 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x140480350 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpPerformUnloadKey @ 0x1408B6104 (CmpPerformUnloadKey.c)
 *     CmpCallCallBacksEx @ 0x1408D03F0 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByNameEx @ 0x1408F238C (ObReferenceObjectByNameEx.c)
 *     CmpCaptureUnicodeStringBuffer @ 0x1408F8C10 (CmpCaptureUnicodeStringBuffer.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     CmpInitializeParseContext @ 0x14093E5E0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14093E860 (CmpCleanupParseContext.c)
 *     CmConvertHandleToKernelHandle @ 0x14093EB94 (CmConvertHandleToKernelHandle.c)
 *     CmpDoesBufferRequireCapturing @ 0x14093FE00 (CmpDoesBufferRequireCapturing.c)
 *     CmpCaptureUnicodeString @ 0x140940730 (CmpCaptureUnicodeString.c)
 *     ExWnfHiveUnloaded @ 0x140A3D814 (ExWnfHiveUnloaded.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140C5ECD4 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140C5EF14 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpIsHiveLoadUnloadRundownActive @ 0x140C5EFB8 (CmpIsHiveLoadUnloadRundownActive.c)
 */

__int64 __fastcall CmUnloadKey(void *Src, int a2, char a3, void *a4)
{
  int PreviousMode; // esi
  void *QuadPart; // r15
  struct _PRIVILEGE_SET *v8; // r14
  char v9; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rdx
  int v14; // edi
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // esi
  int v21; // eax
  char UnloadRundown; // [rsp+43h] [rbp-305h]
  LARGE_INTEGER Interval; // [rsp+48h] [rbp-300h] BYREF
  int v25; // [rsp+50h] [rbp-2F8h]
  int v26; // [rsp+54h] [rbp-2F4h]
  PVOID Object; // [rsp+58h] [rbp-2F0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-2E8h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-2D0h] BYREF
  _QWORD v30[2]; // [rsp+80h] [rbp-2C8h] BYREF
  struct _PRIVILEGE_SET *v31; // [rsp+90h] [rbp-2B8h]
  __int128 v32; // [rsp+98h] [rbp-2B0h] BYREF
  __int128 v33; // [rsp+A8h] [rbp-2A0h]
  __int128 v34; // [rsp+B8h] [rbp-290h]
  _QWORD v35[3]; // [rsp+C8h] [rbp-280h] BYREF
  __int64 v36; // [rsp+E0h] [rbp-268h]
  __int128 v37; // [rsp+E8h] [rbp-260h]
  __int64 v38; // [rsp+F8h] [rbp-250h]
  _OWORD v39[2]; // [rsp+100h] [rbp-248h] BYREF
  __int64 v40; // [rsp+120h] [rbp-228h]
  _DWORD v41[116]; // [rsp+130h] [rbp-218h] BYREF

  v25 = a2;
  memset_0(v41, 0, sizeof(v41));
  DWORD1(v32) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  CmpInitializeParseContext((__int64)v41);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  QuadPart = 0LL;
  v8 = 0LL;
  v31 = 0LL;
  Handle = 0LL;
  memset(v39, 0, sizeof(v39));
  v40 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v9 = 0;
  v30[1] = v30;
  v30[0] = v30;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( !UnloadRundown )
  {
LABEL_28:
    v14 = -1073741431;
    goto LABEL_29;
  }
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    v14 = -1073741727;
    goto LABEL_29;
  }
  if ( (v25 & 0xFFFFFFFE) != 0 )
  {
    v14 = -1073741811;
    goto LABEL_29;
  }
  if ( (_BYTE)PreviousMode )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlCopyFromUser(&v32, Src, 0x30uLL);
  }
  else
  {
    RtlCopyVolatileMemory(&v32, Src, 0x30uLL);
  }
  v14 = CmpCaptureUnicodeString((__m128i *)&DestinationString, (unsigned int *)v33, PreviousMode);
  v26 = v14;
  if ( v14 >= 0 )
  {
    if ( DestinationString.Length
      && CmpDoesBufferRequireCapturing(PreviousMode, (unsigned __int64)DestinationString.Buffer) )
    {
      TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota();
      v8 = TransientPoolWithQuota;
      v31 = TransientPoolWithQuota;
      if ( !TransientPoolWithQuota )
      {
        v14 = -1073741670;
        v26 = -1073741670;
        goto LABEL_29;
      }
      CmpCaptureUnicodeStringBuffer(&DestinationString.Length, TransientPoolWithQuota, PreviousMode);
    }
    *(_QWORD *)&v33 = &DestinationString;
    v34 = 0LL;
    if ( (_BYTE)PreviousMode )
    {
      v14 = CmConvertHandleToKernelHandle(*((void **)&v32 + 1), v13, PreviousMode, 0, &Handle);
      if ( v14 < 0 )
        goto LABEL_29;
      *((_QWORD *)&v32 + 1) = Handle;
    }
    v41[6] = 0;
    v41[0] = 4;
    v16 = ObReferenceObjectByNameEx((__int64)&v32, 0LL, 0, (__int64)CmKeyObjectType, 0, (__int64)v41, &Object);
    if ( v16 == -1073741772 )
      v16 = -1073741811;
    v14 = v16;
    if ( v16 >= 0 )
    {
      if ( a4 )
      {
        Interval.QuadPart = 0LL;
        v14 = ObReferenceObjectByHandle(a4, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, (PVOID *)&Interval, 0LL);
        QuadPart = (void *)Interval.QuadPart;
        if ( v14 < 0 )
          goto LABEL_29;
        KeResetEvent((PRKEVENT)Interval.QuadPart);
      }
      if ( !HIDWORD(WheapPfaLock.StateSaveArea) || (unsigned int)CmpIsRegistryLockAcquired() )
        goto LABEL_22;
      *(_QWORD *)&v39[0] = Object;
      *((_QWORD *)&v39[0] + 1) = QuadPart;
      v21 = CmpCallCallBacksEx(0x22u, (__int64)v39, 0LL, 1, 0x23u, (__int64)Object, (__int64)v30);
      if ( v21 >= 0 )
      {
        v9 = 1;
LABEL_22:
        ExWnfHiveUnloaded(&DestinationString);
LABEL_23:
        v19 = 0;
        while ( !(unsigned __int8)CmpIsHiveLoadUnloadRundownActive(v18, v17) )
        {
          v14 = CmpPerformUnloadKey((__int64)Object, v25, a3, (__int64)QuadPart);
          if ( v14 != -1073741267 )
            goto LABEL_29;
          if ( (unsigned int)++v19 > 0xA )
          {
            Interval.QuadPart = -10000000LL;
            KeDelayExecutionThread(0, 0, &Interval);
            goto LABEL_23;
          }
        }
        goto LABEL_28;
      }
      v14 = 0;
      if ( v21 != -1073740541 )
        v14 = v21;
    }
  }
LABEL_29:
  if ( v9
    && HIDWORD(WheapPfaLock.StateSaveArea)
    && !(unsigned int)CmpIsRegistryLockAcquired()
    && (_QWORD *)v30[0] != v30 )
  {
    v37 = 0LL;
    v38 = 0LL;
    v35[0] = Object;
    v35[1] = (unsigned int)v14;
    v36 = (unsigned int)v14;
    v35[2] = v39;
    CmpCallCallBacksEx(0x23u, (__int64)v35, 0LL, 0, 0x23u, (__int64)Object, (__int64)v30);
    v14 = v36;
  }
  if ( QuadPart )
    ObfDereferenceObject(QuadPart);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v8 )
    CmSiFreeMemory(v8);
  if ( Handle )
    ZwClose(Handle);
  CmpCleanupParseContext((__int64)v41, 0LL, v11, v12);
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  KeLeaveCriticalRegion();
  return (unsigned int)v14;
}
