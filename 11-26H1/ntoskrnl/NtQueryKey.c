/*
 * XREFs of NtQueryKey @ 0x1408F4C30
 * Callers:
 *     DifNtQueryKeyWrapper @ 0x1406842E0 (DifNtQueryKeyWrapper.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1407AAB70 (PiDevCfgQueryPolicyStringList.c)
 *     ExpWatchLicenseInfoWork @ 0x140836EA0 (ExpWatchLicenseInfoWork.c)
 *     IopLoadDriver @ 0x140A26FC4 (IopLoadDriver.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140A71014 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140B393C0 (PiDevCfgConfigureDeviceLocation.c)
 *     ExpWatchProductTypeInitialization @ 0x140CE4EEC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140262890 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032D2B0 (EtwGetKernelTraceTimestamp.c)
 *     ExFreeToLookasideListEx @ 0x14039E0D0 (ExFreeToLookasideListEx.c)
 *     ExAllocateFromLookasideListEx @ 0x1403E1EE0 (ExAllocateFromLookasideListEx.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     MmIsUserAddress @ 0x14044E7C0 (MmIsUserAddress.c)
 *     _tlgWriteAgg @ 0x1404599C0 (_tlgWriteAgg.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x1404869D8 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlSetVolatileMemory @ 0x1407330A0 (RtlSetVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadUCharFromUser @ 0x14077F51C (RtlReadUCharFromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlSetUserMemory @ 0x14077F608 (RtlSetUserMemory.c)
 *     RtlWriteUCharToUser @ 0x14077F710 (RtlWriteUCharToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     CmQueryKey @ 0x1408C5660 (CmQueryKey.c)
 *     CmpCallCallBacksEx @ 0x1408C9E40 (CmpCallCallBacksEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F3730 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ExRaiseAccessViolation @ 0x1408F5DA0 (ExRaiseAccessViolation.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtQueryKey(HANDLE Handle, unsigned int a2, unsigned __int64 a3, unsigned int a4, unsigned int *a5)
{
  size_t v5; // r13
  HANDLE v8; // r15
  unsigned int *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  KPROCESSOR_MODE PreviousMode; // si
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r15
  char UCharFromUser; // al
  int ULongFromUser; // eax
  int Key; // ebx
  _QWORD *v22; // r15
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v24; // rbx
  int v25; // eax
  PVOID v26; // rcx
  char *TransientPoolWithQuota; // rax
  unsigned int v29; // eax
  PVOID v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // edx
  char v33; // cl
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
  int v49; // [rsp+B8h] [rbp-1A0h]
  int v50; // [rsp+BCh] [rbp-19Ch]
  unsigned __int64 *v51; // [rsp+C0h] [rbp-198h]
  int v52; // [rsp+C8h] [rbp-190h]
  __int128 v53; // [rsp+CCh] [rbp-18Ch]
  __int64 v54; // [rsp+DCh] [rbp-17Ch]
  int v55; // [rsp+E4h] [rbp-174h]
  _KAFFINITY_EX v56; // [rsp+E8h] [rbp-170h] BYREF
  char *v57; // [rsp+1F0h] [rbp-68h]
  __int64 v58; // [rsp+1F8h] [rbp-60h]
  HANDLE *v59; // [rsp+200h] [rbp-58h]
  __int64 v60; // [rsp+208h] [rbp-50h]

  v5 = a4;
  v8 = Handle;
  v43 = Handle;
  v40[2] = a2;
  v9 = a5;
  v39 = a5;
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
  if ( a2 > 8 )
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
        v16 = a3;
        if ( (a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v17 = a3 + v5;
        if ( a3 + v5 <= a3 || v17 > 0x7FFFFFFF0000LL )
          ExRaiseAccessViolation();
        v18 = ((v17 - 1) & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          UCharFromUser = RtlReadUCharFromUser((volatile void *)v16);
          RtlWriteUCharToUser((_BYTE *)v16, UCharFromUser);
          v16 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v16 != v18 );
        v9 = (unsigned int *)v39;
        v8 = v43;
      }
      ULongFromUser = RtlReadULongFromUser(v9);
      RtlWriteULongToUser(v9, ULongFromUser);
    }
    LODWORD(v43) = ((a2 - 3) & 0xFFFFFFFB) != 0;
    Object = 0LL;
    Key = ObReferenceObjectByHandle(
            v8,
            (ACCESS_MASK)v43,
            (POBJECT_TYPE)CmKeyObjectType,
            PreviousMode,
            &Object,
            &HandleInformation);
    v22 = Object;
    if ( Key >= 0 )
    {
      if ( *(_DWORD *)Object == 1803104306 )
      {
        if ( CmpTraceRoutine )
          v46 = *((_QWORD *)Object + 1);
        if ( ((a2 - 3) & 0xFFFFFFFB) == 0 && !HandleInformation.GrantedAccess )
        {
          Key = -1073741790;
          goto LABEL_36;
        }
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v35 = 1;
        if ( !WheapPfaLock.ExpectedRunTime || (unsigned int)CmpIsRegistryLockAcquired() )
        {
          v24 = v39;
        }
        else
        {
          v56.StaticBitmap[2] = (unsigned __int64)v22;
          LODWORD(v56.StaticBitmap[3]) = a2;
          v56.StaticBitmap[4] = a3;
          LODWORD(v56.StaticBitmap[5]) = v5;
          v24 = v39;
          v56.StaticBitmap[6] = (unsigned __int64)v39;
          v25 = CmpCallCallBacksEx(7u, (__int64)&v56.StaticBitmap[2], 0LL, 1, 0x16u, (__int64)v22, (__int64)v47);
          if ( v25 < 0 )
          {
            Key = 0;
            if ( v25 != -1073740541 )
              Key = v25;
            goto LABEL_36;
          }
          v34 = 1;
        }
        if ( a2 == 7 )
        {
          if ( PreviousMode )
            RtlWriteULongToUser(v24, 4);
          else
            *v24 = 4;
          if ( (unsigned int)v5 < 4 )
          {
            Key = -1073741789;
            v42 = -1073741789;
            goto LABEL_36;
          }
          if ( PreviousMode )
            RtlWriteULongToUser((_DWORD *)a3, *((unsigned __int16 *)v22 + 25));
          else
            *(_DWORD *)a3 = *((unsigned __int16 *)v22 + 25);
          goto LABEL_35;
        }
        Key = CmKeyBodyRemapToVirtualForEnum(&Object, PreviousMode, (int)v43, &v45);
        if ( Key >= 0 )
        {
          LOBYTE(v56.StaticBitmap[12]) = v56.StaticBitmap[12] & 0xFD | (2 * (PreviousMode & 1));
          v56.StaticBitmap[10] = a3;
          if ( !(_DWORD)v5 )
          {
            v56.StaticBitmap[11] = 0LL;
            goto LABEL_64;
          }
          if ( !CmpFreezeListLock.RelativeTimerBias || !PreviousMode && !MmIsUserAddress(a3) )
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
            v32 = v5;
            if ( (((_DWORD)v5 - 1) & (unsigned int)v5) != 0 )
            {
              v33 = -1;
              do
              {
                ++v33;
                v32 >>= 1;
              }
              while ( v32 );
              v32 = 1 << (v33 + 1);
            }
            v43 = (HANDLE)v32;
            v59 = &v43;
            v60 = 8LL;
            tlgWriteAgg(
              (__int64)&dword_140E09EE8,
              (unsigned __int8 *)&byte_140055E63,
              v14,
              5u,
              (PEVENT_DATA_DESCRIPTOR)&v56.StaticBitmap[26]);
          }
          if ( v5 > 0x40 )
          {
            if ( v5 <= 0x1000 )
            {
              v30 = ExAllocateFromLookasideListEx(&CmpBounceBufferLookaside);
              a3 = (unsigned __int64)v30;
              if ( v30 )
              {
                memset_0(v30, 0, v5);
                LOBYTE(v56.StaticBitmap[12]) |= 1u;
LABEL_81:
                v56.StaticBitmap[11] = a3;
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
                        a2,
                        (unsigned int *)v56.StaticBitmap[11],
                        v5,
                        (__int64)v40);
                if ( Key >= 0 || Key == -2147483643 || Key == -1073741789 )
                {
                  if ( PreviousMode )
                  {
                    RtlWriteULongToUser(v39, v40[0]);
                    v29 = v40[0];
                  }
                  else
                  {
                    v29 = v40[0];
                    *(_DWORD *)v39 = v40[0];
                  }
                  if ( Key != -1073741789 )
                  {
                    if ( (unsigned int)v5 < v29 )
                      v29 = v5;
                    v13 = v56.StaticBitmap[11];
                    if ( v56.StaticBitmap[10] != v56.StaticBitmap[11] )
                    {
                      if ( (v56.StaticBitmap[12] & 2) != 0 )
                        RtlCopyToUser((void *)v56.StaticBitmap[10], (void *)v56.StaticBitmap[11], v29);
                      else
                        RtlCopyVolatileMemory((void *)v56.StaticBitmap[10], (const void *)v56.StaticBitmap[11], v29);
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
      else if ( a2 == 4 )
      {
        if ( PreviousMode )
          RtlWriteULongToUser(v39, 40);
        else
          *(_DWORD *)v39 = 40;
        if ( (unsigned int)v5 >= 0x28 )
        {
          if ( PreviousMode )
            RtlSetUserMemory((void *)a3, 0, 0x28uLL);
          else
            RtlSetVolatileMemory((void *)a3, 0, 0x28uLL);
          v13 = *(unsigned int *)(v22[1] + 96LL);
          if ( PreviousMode )
            RtlWriteULongToUser((_DWORD *)(a3 + 20), v13);
          else
            *(_DWORD *)(a3 + 20) = v13;
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
  if ( v34 && WheapPfaLock.ExpectedRunTime && !(unsigned int)CmpIsRegistryLockAcquired() && (_QWORD *)v47[0] != v47 )
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14);
  v26 = Object;
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
    v31 = v46;
    LOBYTE(v31) = 13;
    guard_dispatch_icall_no_overrides(v31, (__int64)&v56.StaticBitmap[22]);
  }
  if ( v38 )
    CmpReleaseShutdownRundown(v26);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v56);
  return (unsigned int)Key;
}
