/*
 * XREFs of NtEnumerateKey @ 0x140A5B7C0
 * Callers:
 *     DifNtEnumerateKeyWrapper @ 0x140676DC0 (DifNtEnumerateKeyWrapper.c)
 *     ExpWatchLicenseInfoWork @ 0x140836EA0 (ExpWatchLicenseInfoWork.c)
 *     AdtpObjsInitialize @ 0x140890854 (AdtpObjsInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x140CE4EEC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140262890 (CmpIsRegistryLockAcquired.c)
 *     KeExpandKernelStackAndCallout @ 0x140264800 (KeExpandKernelStackAndCallout.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032D2B0 (EtwGetKernelTraceTimestamp.c)
 *     ExFreeToLookasideListEx @ 0x14039E0D0 (ExFreeToLookasideListEx.c)
 *     ExAllocateFromLookasideListEx @ 0x1403E1EE0 (ExAllocateFromLookasideListEx.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     MmIsUserAddress @ 0x14044E7C0 (MmIsUserAddress.c)
 *     _tlgWriteAgg @ 0x1404599C0 (_tlgWriteAgg.c)
 *     Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline @ 0x1404690D0 (Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x1404869D8 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadUCharFromUser @ 0x14077F51C (RtlReadUCharFromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteUCharToUser @ 0x14077F710 (RtlWriteUCharToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     CmEnumerateKey @ 0x1408C21A0 (CmEnumerateKey.c)
 *     CmpCallCallBacksEx @ 0x1408C9E40 (CmpCallCallBacksEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F3730 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ExRaiseAccessViolation @ 0x1408F5DA0 (ExRaiseAccessViolation.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     CmObReferenceObjectByHandle @ 0x140C58340 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtEnumerateKey(
        HANDLE Handle,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        size_t Size,
        unsigned int *a6)
{
  __int64 v9; // r8
  PVOID v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  char v15; // r14
  unsigned __int8 PreviousMode; // r13
  int v17; // ebx
  unsigned int v18; // r14d
  size_t v19; // rdi
  unsigned int *v20; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v22; // eax
  char *TransientPoolWithQuota; // rax
  unsigned int v24; // eax
  PVOID v25; // rcx
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rax
  char UCharFromUser; // al
  int ULongFromUser; // eax
  PVOID v31; // rax
  unsigned __int64 v32; // rbx
  unsigned int v33; // edx
  unsigned int v34; // eax
  char v35; // cl
  char v36; // [rsp+40h] [rbp-258h]
  char v37; // [rsp+41h] [rbp-257h]
  char v38; // [rsp+42h] [rbp-256h]
  char v39; // [rsp+43h] [rbp-255h]
  _BYTE v41[8]; // [rsp+48h] [rbp-250h] BYREF
  PVOID v42; // [rsp+50h] [rbp-248h] BYREF
  unsigned int v43; // [rsp+58h] [rbp-240h] BYREF
  void *v44; // [rsp+60h] [rbp-238h]
  PVOID v45; // [rsp+68h] [rbp-230h] BYREF
  unsigned int v46; // [rsp+70h] [rbp-228h]
  unsigned int v47; // [rsp+78h] [rbp-220h]
  unsigned int *v48; // [rsp+80h] [rbp-218h]
  PVOID Object; // [rsp+90h] [rbp-208h] BYREF
  unsigned __int64 v50; // [rsp+98h] [rbp-200h] BYREF
  _QWORD v51[2]; // [rsp+A0h] [rbp-1F8h] BYREF
  __int128 Parameter; // [rsp+B0h] [rbp-1E8h] BYREF
  __int128 v53; // [rsp+C0h] [rbp-1D8h]
  __int128 v54; // [rsp+D0h] [rbp-1C8h]
  int *v55; // [rsp+E0h] [rbp-1B8h]
  __int64 v56; // [rsp+E8h] [rbp-1B0h] BYREF
  PVOID v57; // [rsp+F0h] [rbp-1A8h] BYREF
  int v58; // [rsp+F8h] [rbp-1A0h]
  int v59; // [rsp+FCh] [rbp-19Ch]
  unsigned __int64 *v60; // [rsp+100h] [rbp-198h]
  int v61; // [rsp+108h] [rbp-190h]
  __int128 v62; // [rsp+10Ch] [rbp-18Ch]
  __int64 v63; // [rsp+11Ch] [rbp-17Ch]
  int v64; // [rsp+124h] [rbp-174h]
  _KAFFINITY_EX v65; // [rsp+128h] [rbp-170h] BYREF
  _BYTE *v66; // [rsp+230h] [rbp-68h]
  __int64 v67; // [rsp+238h] [rbp-60h]
  __int64 *v68; // [rsp+240h] [rbp-58h]
  __int64 v69; // [rsp+248h] [rbp-50h]

  v46 = a3;
  v47 = a2;
  v48 = a6;
  memset(&v65, 0, 24);
  memset_0((char *)&v65.StaticBitmap[12] + 1, 0, 0x47uLL);
  DWORD1(Parameter) = 0;
  memset(&v65.StaticBitmap[22], 0, 32);
  v44 = 0LL;
  v45 = 0LL;
  v39 = 0;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((unsigned __int64)&v65.StaticBitmap[22], 0x20000uLL, v9);
    v39 = 1;
  }
  v37 = 0;
  v38 = 0;
  memset_0(&v65.StaticBitmap[2], 0, 0x40uLL);
  v10 = 0LL;
  v42 = 0LL;
  v43 = 0;
  memset(&v65.StaticBitmap[10], 0, 17);
  v51[1] = v51;
  v51[0] = v51;
  CmpInitializeThreadInfo(&v65);
  Object = 0LL;
  Parameter = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v15 = CmpAcquireShutdownRundown(v12, v11);
  v36 = v15;
  if ( !v15 )
  {
    v17 = -1073741431;
    goto LABEL_38;
  }
  if ( a3 > 2 )
  {
    if ( CmpTraceRoutine )
    {
      if ( Handle )
      {
        v45 = 0LL;
        if ( ObReferenceObjectByHandle(
               Handle,
               0,
               (POBJECT_TYPE)CmKeyObjectType,
               KeGetCurrentThread()->PreviousMode,
               &v45,
               0LL) >= 0 )
          ObfDereferenceObject(v45);
      }
    }
    v17 = -1073741811;
    goto LABEL_38;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v41[1] = PreviousMode;
  v17 = CmObReferenceObjectByHandle((_DWORD)Handle, 8, v14, PreviousMode, (__int64)&v42, 0LL);
  v10 = v42;
  if ( v17 < 0 )
    goto LABEL_38;
  if ( CmpTraceRoutine && v42 )
  {
    v44 = (void *)*((_QWORD *)v42 + 1);
    v45 = v44;
  }
  if ( PreviousMode )
  {
    v18 = Size;
    v19 = (unsigned int)Size;
    if ( (_DWORD)Size )
    {
      v27 = a4;
      if ( (a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v28 = a4 + (unsigned int)Size;
      if ( v28 <= a4 || v28 > 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v50 = ((v28 - 1) & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        UCharFromUser = RtlReadUCharFromUser((volatile void *)v27);
        RtlWriteUCharToUser((_BYTE *)v27, UCharFromUser);
        v27 = (v27 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v27 != v50 );
    }
    v20 = v48;
    ULongFromUser = RtlReadULongFromUser(v48);
    RtlWriteULongToUser(v20, ULongFromUser);
  }
  else
  {
    v18 = Size;
    v19 = (unsigned int)Size;
    v20 = v48;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v38 = 1;
  if ( WheapPfaLock.ExpectedRunTime && !(unsigned int)CmpIsRegistryLockAcquired() )
  {
    v65.StaticBitmap[2] = (unsigned __int64)v10;
    v65.StaticBitmap[3] = __PAIR64__(v46, a2);
    v65.StaticBitmap[4] = a4;
    LODWORD(v65.StaticBitmap[5]) = v18;
    v65.StaticBitmap[6] = (unsigned __int64)v20;
    v22 = CmpCallCallBacksEx(5u, (__int64)&v65.StaticBitmap[2], 0LL, 1, 0x14u, (__int64)v10, (__int64)v51);
    if ( v22 < 0 )
    {
      v17 = 0;
      if ( v22 != -1073740541 )
        v17 = v22;
      goto LABEL_68;
    }
    v37 = 1;
  }
  v17 = CmKeyBodyRemapToVirtualForEnum(&v42, PreviousMode, 8, &Object);
  if ( v17 < 0 )
  {
    v10 = v42;
    v15 = v36;
    goto LABEL_38;
  }
  LOBYTE(v65.StaticBitmap[12]) = v65.StaticBitmap[12] & 0xFD | (2 * (PreviousMode & 1));
  v65.StaticBitmap[10] = a4;
  if ( !v19 )
  {
    v65.StaticBitmap[11] = 0LL;
    goto LABEL_21;
  }
  if ( !CmpFreezeListLock.RelativeTimerBias || !PreviousMode && !MmIsUserAddress(a4) )
  {
    v65.StaticBitmap[11] = a4;
    goto LABEL_21;
  }
  if ( (unsigned int)dword_140E09EE8 > 5 && (qword_140E09EF8 & 4) != 0 && (qword_140E09F00 & 4) == qword_140E09F00 )
  {
    v50 = 1LL;
    v65.StaticBitmap[30] = (unsigned __int64)&v50;
    v65.StaticBitmap[31] = 8LL;
    v41[0] = 0;
    v66 = v41;
    v67 = 1LL;
    v33 = v19;
    if ( (((_DWORD)v19 - 1) & (unsigned int)v19) != 0 )
    {
      v34 = v19;
      v35 = -1;
      do
      {
        ++v35;
        v34 >>= 1;
      }
      while ( v34 );
      v33 = 1 << (v35 + 1);
    }
    v56 = v33;
    v68 = &v56;
    v69 = 8LL;
    tlgWriteAgg(
      (__int64)&dword_140E09EE8,
      (unsigned __int8 *)&byte_140055E63,
      v14,
      5u,
      (PEVENT_DATA_DESCRIPTOR)&v65.StaticBitmap[26]);
  }
  if ( v19 <= 0x40 )
  {
    memset_0((char *)&v65.StaticBitmap[12] + 1, 0, v19);
    TransientPoolWithQuota = (char *)&v65.StaticBitmap[12] + 1;
    goto LABEL_20;
  }
  if ( v19 <= 0x1000 )
  {
    v31 = ExAllocateFromLookasideListEx(&CmpBounceBufferLookaside);
    v32 = (unsigned __int64)v31;
    if ( v31 )
    {
      memset_0(v31, 0, v19);
      LOBYTE(v65.StaticBitmap[12]) |= 1u;
      v65.StaticBitmap[11] = v32;
      goto LABEL_21;
    }
  }
  TransientPoolWithQuota = (char *)CmpAllocateTransientPoolWithQuota();
  if ( TransientPoolWithQuota )
  {
LABEL_20:
    v65.StaticBitmap[11] = (unsigned __int64)TransientPoolWithQuota;
LABEL_21:
    v17 = 0;
    goto LABEL_22;
  }
  v17 = -1073741670;
LABEL_22:
  v10 = v42;
  if ( v17 < 0 )
    goto LABEL_68;
  *((_QWORD *)&Parameter + 1) = v42;
  *(_QWORD *)&v53 = Object;
  *((_QWORD *)&v53 + 1) = __PAIR64__(v46, a2);
  *(_QWORD *)&v54 = v65.StaticBitmap[11];
  DWORD2(v54) = v18;
  v55 = (int *)&v43;
  if ( (unsigned int)Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline() )
  {
    v17 = KeExpandKernelStackAndCallout((PEXPAND_STACK_CALLOUT)CmEnumerateKeyCallout, &Parameter, 0x4800uLL);
    if ( v17 >= 0 )
    {
      v17 = Parameter;
      goto LABEL_26;
    }
LABEL_68:
    v15 = v36;
    goto LABEL_38;
  }
  v17 = CmEnumerateKey(*((_QWORD **)&Parameter + 1), v53, SDWORD2(v53), HIDWORD(v53), v54, SDWORD2(v54), (__int64)v55);
  LODWORD(Parameter) = v17;
LABEL_26:
  if ( v17 < 0 && v17 != -2147483643 && v17 != -1073741789 )
    goto LABEL_68;
  if ( PreviousMode )
  {
    RtlWriteULongToUser(v48, v43);
    v24 = v43;
  }
  else
  {
    v24 = v43;
    *v48 = v43;
  }
  if ( v17 != -1073741789 )
  {
    if ( v18 < v24 )
      v24 = v18;
    v13 = v65.StaticBitmap[11];
    if ( v65.StaticBitmap[10] != v65.StaticBitmap[11] )
    {
      if ( (v65.StaticBitmap[12] & 2) != 0 )
        RtlCopyToUser((void *)v65.StaticBitmap[10], (void *)v65.StaticBitmap[11], v24);
      else
        RtlCopyVolatileMemory((void *)v65.StaticBitmap[10], (const void *)v65.StaticBitmap[11], v24);
    }
  }
  v15 = v36;
LABEL_38:
  v25 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v37 && WheapPfaLock.ExpectedRunTime && !(unsigned int)CmpIsRegistryLockAcquired() && (_QWORD *)v51[0] != v51 )
  {
    v59 = 0;
    v62 = 0LL;
    v63 = 0LL;
    v64 = 0;
    v57 = v10;
    v58 = v17;
    v61 = v17;
    v60 = &v65.StaticBitmap[2];
    CmpCallCallBacksEx(0x14u, (__int64)&v57, 0LL, 0, 0x14u, (__int64)v10, (__int64)v51);
    v17 = v61;
  }
  if ( v38 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14);
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( v65.StaticBitmap[11]
    && v65.StaticBitmap[11] != v65.StaticBitmap[10]
    && (_KAFFINITY_EX *)v65.StaticBitmap[11] != (_KAFFINITY_EX *)((char *)&v65.StaticBitmap[12] + 1) )
  {
    if ( (v65.StaticBitmap[12] & 1) != 0 )
      ExFreeToLookasideListEx(&CmpBounceBufferLookaside, (PVOID)v65.StaticBitmap[11]);
    else
      CmSiFreeMemory((PPRIVILEGE_SET)v65.StaticBitmap[11]);
  }
  if ( v39 && CmpTraceRoutine )
  {
    LOBYTE(v25) = 17;
    guard_dispatch_icall_no_overrides((__int64)v25, (__int64)&v65.StaticBitmap[22]);
  }
  if ( v15 )
    CmpReleaseShutdownRundown(v25);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v65);
  return (unsigned int)v17;
}
