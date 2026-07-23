/*
 * XREFs of NtQueryKey @ 0x140924BC0
 * Callers:
 *     DifNtQueryKeyWrapper @ 0x140687EC0 (DifNtQueryKeyWrapper.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1407ADA4C (PiDevCfgQueryPolicyStringList.c)
 *     ExpWatchLicenseInfoWork @ 0x14083D0E0 (ExpWatchLicenseInfoWork.c)
 *     IopLoadDriver @ 0x140A3A064 (IopLoadDriver.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140A46B84 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140B3B5D0 (PiDevCfgConfigureDeviceLocation.c)
 *     ExpWatchProductTypeInitialization @ 0x140CEB28C (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140261E00 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032F2E0 (EtwGetKernelTraceTimestamp.c)
 *     ExFreeToLookasideListEx @ 0x14039FE30 (ExFreeToLookasideListEx.c)
 *     ExAllocateFromLookasideListEx @ 0x1403E50D0 (ExAllocateFromLookasideListEx.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x140480350 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlSetVolatileMemory @ 0x140737C70 (RtlSetVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlSetUserMemory @ 0x140782108 (RtlSetUserMemory.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     CmQueryKey @ 0x1408CBC30 (CmQueryKey.c)
 *     CmpCallCallBacksEx @ 0x1408D03F0 (CmpCallCallBacksEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F9CF0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ExRaiseAccessViolation @ 0x140925D30 (ExRaiseAccessViolation.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

NTSTATUS __cdecl NtQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  size_t v5; // r13
  HANDLE v8; // r15
  unsigned int *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  KPROCESSOR_MODE PreviousMode; // si
  unsigned __int64 v14; // rbx
  char *v15; // rcx
  unsigned __int64 v16; // r15
  char UCharFromUser; // al
  int ULongFromUser; // eax
  NTSTATUS Key; // ebx
  _QWORD *v20; // r15
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v22; // rbx
  int v23; // eax
  PVOID v24; // rcx
  __int64 v26; // r8
  char *TransientPoolWithQuota; // rax
  unsigned int v28; // eax
  PVOID v29; // rax
  __int64 v30; // rcx
  unsigned int v31; // edx
  char v32; // cl
  int v33; // edx
  char v34; // [rsp+41h] [rbp-217h]
  char v35; // [rsp+42h] [rbp-216h]
  char v36; // [rsp+43h] [rbp-215h]
  char v37; // [rsp+44h] [rbp-214h] BYREF
  char v38; // [rsp+45h] [rbp-213h]
  PVOID v39; // [rsp+48h] [rbp-210h] BYREF
  int v40[4]; // [rsp+50h] [rbp-208h] BYREF
  PVOID Object; // [rsp+60h] [rbp-1F8h] BYREF
  int v42; // [rsp+68h] [rbp-1F0h]
  HANDLE v43; // [rsp+70h] [rbp-1E8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+78h] [rbp-1E0h] BYREF
  PVOID v45; // [rsp+90h] [rbp-1C8h] BYREF
  __int64 v46; // [rsp+98h] [rbp-1C0h]
  _QWORD v47[2]; // [rsp+A0h] [rbp-1B8h] BYREF
  PVOID v48; // [rsp+B0h] [rbp-1A8h] BYREF
  NTSTATUS v49; // [rsp+B8h] [rbp-1A0h]
  int v50; // [rsp+BCh] [rbp-19Ch]
  unsigned __int64 *v51; // [rsp+C0h] [rbp-198h]
  NTSTATUS v52; // [rsp+C8h] [rbp-190h]
  __int128 v53; // [rsp+CCh] [rbp-18Ch]
  __int64 v54; // [rsp+DCh] [rbp-17Ch]
  int v55; // [rsp+E4h] [rbp-174h]
  _KAFFINITY_EX v56; // [rsp+E8h] [rbp-170h] BYREF
  char *v57; // [rsp+1F0h] [rbp-68h]
  __int64 v58; // [rsp+1F8h] [rbp-60h]
  HANDLE *v59; // [rsp+200h] [rbp-58h]
  __int64 v60; // [rsp+208h] [rbp-50h]

  v5 = Length;
  v8 = KeyHandle;
  v43 = KeyHandle;
  v40[2] = KeyInformationClass;
  v9 = ResultLength;
  v39 = ResultLength;
  memset(&v56, 0, 24);
  HandleInformation = 0LL;
  v40[0] = 0;
  memset_0((char *)&v56.StaticBitmap[12] + 1, 0, 0x47uLL);
  memset(&v56.StaticBitmap[22], 0, 32);
  v46 = 0LL;
  v36 = 0;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((unsigned __int64)&v56.StaticBitmap[22], 0x20000uLL, v10);
    v36 = 1;
  }
  v34 = 0;
  v35 = 0;
  Object = 0LL;
  memset_0(&v56.StaticBitmap[2], 0, 0x40uLL);
  memset(&v56.StaticBitmap[10], 0, 17);
  v47[1] = v47;
  v47[0] = v47;
  CmpInitializeThreadInfo(&v56);
  v45 = 0LL;
  v38 = CmpAcquireShutdownRundown(v12, v11);
  if ( !v38 )
  {
    Key = -1073741431;
    goto LABEL_36;
  }
  if ( (unsigned int)KeyInformationClass > KeyTrustInformation )
  {
    if ( CmpTraceRoutine )
    {
      if ( v8 )
      {
        v39 = 0LL;
        if ( ObReferenceObjectByHandle(
               v8,
               0,
               (POBJECT_TYPE)CmKeyObjectType,
               KeGetCurrentThread()->PreviousMode,
               &v39,
               0LL) >= 0 )
        {
          v46 = *((_QWORD *)v39 + 1);
          ObfDereferenceObject(v39);
        }
      }
    }
    Key = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      if ( (_DWORD)v5 )
      {
        v14 = (unsigned __int64)KeyInformation;
        if ( ((unsigned __int8)KeyInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v15 = (char *)KeyInformation + v5;
        if ( (char *)KeyInformation + v5 <= KeyInformation || (unsigned __int64)v15 > 0x7FFFFFFF0000LL )
          ExRaiseAccessViolation();
        v16 = ((unsigned __int64)(v15 - 1) & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          UCharFromUser = RtlReadUCharFromUser((volatile void *)v14);
          RtlWriteUCharToUser((_BYTE *)v14, UCharFromUser);
          v14 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v14 != v16 );
        v9 = (unsigned int *)v39;
        v8 = v43;
      }
      ULongFromUser = RtlReadULongFromUser(v9);
      RtlWriteULongToUser(v9, ULongFromUser);
    }
    LODWORD(v43) = ((KeyInformationClass - 3) & 0xFFFFFFFB) != 0;
    Object = 0LL;
    Key = ObReferenceObjectByHandle(
            v8,
            (ACCESS_MASK)v43,
            (POBJECT_TYPE)CmKeyObjectType,
            PreviousMode,
            &Object,
            &HandleInformation);
    v20 = Object;
    if ( Key >= 0 )
    {
      if ( *(_DWORD *)Object == 1803104306 )
      {
        if ( CmpTraceRoutine )
          v46 = *((_QWORD *)Object + 1);
        if ( ((KeyInformationClass - 3) & 0xFFFFFFFB) == 0 && !HandleInformation.GrantedAccess )
        {
          Key = -1073741790;
          goto LABEL_36;
        }
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v35 = 1;
        if ( !HIDWORD(WheapPfaLock.StateSaveArea) || (unsigned int)CmpIsRegistryLockAcquired() )
        {
          v22 = v39;
        }
        else
        {
          v56.StaticBitmap[2] = (unsigned __int64)v20;
          LODWORD(v56.StaticBitmap[3]) = KeyInformationClass;
          v56.StaticBitmap[4] = (unsigned __int64)KeyInformation;
          LODWORD(v56.StaticBitmap[5]) = v5;
          v22 = v39;
          v56.StaticBitmap[6] = (unsigned __int64)v39;
          v23 = CmpCallCallBacksEx(7u, (__int64)&v56.StaticBitmap[2], 0LL, 1, 0x16u, (__int64)v20, (__int64)v47);
          if ( v23 < 0 )
          {
            Key = 0;
            if ( v23 != -1073740541 )
              Key = v23;
            goto LABEL_36;
          }
          v34 = 1;
        }
        if ( KeyInformationClass == KeyHandleTagsInformation )
        {
          if ( PreviousMode )
            RtlWriteULongToUser(v22, 4);
          else
            *v22 = 4;
          if ( (unsigned int)v5 < 4 )
          {
            Key = -1073741789;
            v42 = -1073741789;
            goto LABEL_36;
          }
          if ( PreviousMode )
            RtlWriteULongToUser(KeyInformation, *((unsigned __int16 *)v20 + 25));
          else
            *(_DWORD *)KeyInformation = *((unsigned __int16 *)v20 + 25);
          goto LABEL_35;
        }
        Key = CmKeyBodyRemapToVirtualForEnum(&Object, PreviousMode, (int)v43, &v45);
        if ( Key >= 0 )
        {
          LOBYTE(v56.StaticBitmap[12]) = v56.StaticBitmap[12] & 0xFD | (2 * (PreviousMode & 1));
          v56.StaticBitmap[10] = (unsigned __int64)KeyInformation;
          if ( !(_DWORD)v5 )
          {
            v56.StaticBitmap[11] = 0LL;
            goto LABEL_64;
          }
          if ( !CmpFreezeListLock.CycleTime || !PreviousMode && !MmIsUserAddress((unsigned __int64)KeyInformation) )
            goto LABEL_81;
          if ( (unsigned int)dword_140E09EE8 > 5
            && (qword_140E09EF8 & 4) != 0
            && (qword_140E09F00 & 4) == qword_140E09F00 )
          {
            HandleInformation = (struct _OBJECT_HANDLE_INFORMATION)1LL;
            v56.StaticBitmap[30] = (unsigned __int64)&HandleInformation;
            v56.StaticBitmap[31] = 8LL;
            v37 = 2;
            v57 = &v37;
            v58 = 1LL;
            v31 = v5;
            if ( (((_DWORD)v5 - 1) & (unsigned int)v5) != 0 )
            {
              v32 = -1;
              do
              {
                ++v32;
                v31 >>= 1;
              }
              while ( v31 );
              v31 = 1 << (v32 + 1);
            }
            v43 = (HANDLE)v31;
            v59 = &v43;
            v60 = 8LL;
            tlgWriteAgg(
              (__int64)&dword_140E09EE8,
              (unsigned __int8 *)&word_140056E56,
              v26,
              5u,
              (PEVENT_DATA_DESCRIPTOR)&v56.StaticBitmap[26]);
          }
          if ( v5 > 0x40 )
          {
            if ( v5 <= 0x1000 )
            {
              v29 = ExAllocateFromLookasideListEx(&CmpBounceBufferLookaside);
              KeyInformation = v29;
              if ( v29 )
              {
                memset_0(v29, 0, v5);
                LOBYTE(v56.StaticBitmap[12]) |= 1u;
LABEL_81:
                v56.StaticBitmap[11] = (unsigned __int64)KeyInformation;
                goto LABEL_64;
              }
            }
            TransientPoolWithQuota = (char *)CmpAllocateTransientPoolWithQuota();
            if ( !TransientPoolWithQuota )
            {
              Key = -1073741670;
LABEL_65:
              if ( Key >= 0 )
              {
                Key = CmQueryKey(
                        (__int64)Object,
                        (__int64)v45,
                        KeyInformationClass,
                        (unsigned int *)v56.StaticBitmap[11],
                        v5,
                        (__int64)v40);
                if ( Key >= 0 || Key == -2147483643 || Key == -1073741789 )
                {
                  if ( PreviousMode )
                  {
                    RtlWriteULongToUser(v39, v40[0]);
                    v28 = v40[0];
                  }
                  else
                  {
                    v28 = v40[0];
                    *(_DWORD *)v39 = v40[0];
                  }
                  if ( Key != -1073741789 )
                  {
                    if ( (unsigned int)v5 < v28 )
                      v28 = v5;
                    if ( v56.StaticBitmap[10] != v56.StaticBitmap[11] )
                    {
                      if ( (v56.StaticBitmap[12] & 2) != 0 )
                        RtlCopyToUser((void *)v56.StaticBitmap[10], (void *)v56.StaticBitmap[11], v28);
                      else
                        RtlCopyVolatileMemory((void *)v56.StaticBitmap[10], (const void *)v56.StaticBitmap[11], v28);
                    }
                  }
                }
              }
              goto LABEL_36;
            }
          }
          else
          {
            memset_0((char *)&v56.StaticBitmap[12] + 1, 0, v5);
            TransientPoolWithQuota = (char *)&v56.StaticBitmap[12] + 1;
          }
          v56.StaticBitmap[11] = (unsigned __int64)TransientPoolWithQuota;
LABEL_64:
          Key = 0;
          goto LABEL_65;
        }
      }
      else if ( KeyInformationClass == KeyCachedInformation )
      {
        if ( PreviousMode )
          RtlWriteULongToUser(v39, 40);
        else
          *(_DWORD *)v39 = 40;
        if ( (unsigned int)v5 >= 0x28 )
        {
          if ( PreviousMode )
            RtlSetUserMemory(KeyInformation, 0, 0x28uLL);
          else
            RtlSetVolatileMemory(KeyInformation, 0, 0x28uLL);
          v33 = *(_DWORD *)(v20[1] + 96LL);
          if ( PreviousMode )
            RtlWriteULongToUser((_DWORD *)KeyInformation + 5, v33);
          else
            *((_DWORD *)KeyInformation + 5) = v33;
LABEL_35:
          Key = 0;
          goto LABEL_36;
        }
        Key = -1073741789;
        v42 = -1073741789;
      }
      else
      {
        Key = -1073741816;
      }
    }
  }
LABEL_36:
  if ( v45 )
    ObfDereferenceObject(v45);
  if ( v34
    && HIDWORD(WheapPfaLock.StateSaveArea)
    && !(unsigned int)CmpIsRegistryLockAcquired()
    && (_QWORD *)v47[0] != v47 )
  {
    v50 = 0;
    v53 = 0LL;
    v54 = 0LL;
    v55 = 0;
    v48 = Object;
    v49 = Key;
    v52 = Key;
    v51 = &v56.StaticBitmap[2];
    CmpCallCallBacksEx(0x16u, (__int64)&v48, 0LL, 0, 0x16u, (__int64)Object, (__int64)v47);
    Key = v52;
  }
  if ( v35 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v24 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v56.StaticBitmap[11]
    && v56.StaticBitmap[11] != v56.StaticBitmap[10]
    && (_KAFFINITY_EX *)v56.StaticBitmap[11] != (_KAFFINITY_EX *)((char *)&v56.StaticBitmap[12] + 1) )
  {
    if ( (v56.StaticBitmap[12] & 1) != 0 )
      ExFreeToLookasideListEx(&CmpBounceBufferLookaside, (PVOID)v56.StaticBitmap[11]);
    else
      CmSiFreeMemory((PPRIVILEGE_SET)v56.StaticBitmap[11]);
  }
  if ( v36 && CmpTraceRoutine )
  {
    v30 = v46;
    LOBYTE(v30) = 13;
    guard_dispatch_icall_no_overrides(v30, (__int64)&v56.StaticBitmap[22]);
  }
  if ( v38 )
    CmpReleaseShutdownRundown(v24);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v56);
  return Key;
}
