/*
 * XREFs of NtQueryValueKey @ 0x1408F2A10
 * Callers:
 *     DifNtQueryValueKeyWrapper @ 0x1406866B0 (DifNtQueryValueKeyWrapper.c)
 *     ExpWatchProductTypeWork @ 0x140973C50 (ExpWatchProductTypeWork.c)
 *     IopLoadDriver @ 0x140A26FC4 (IopLoadDriver.c)
 *     InitSafeBoot @ 0x140CAB540 (InitSafeBoot.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 *     IopProtectSystemPartition @ 0x140CBF198 (IopProtectSystemPartition.c)
 *     ExpWatchProductTypeInitialization @ 0x140CE4EEC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140262890 (CmpIsRegistryLockAcquired.c)
 *     KeExpandKernelStackAndCallout @ 0x140264800 (KeExpandKernelStackAndCallout.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032D2B0 (EtwGetKernelTraceTimestamp.c)
 *     ExFreeToLookasideListEx @ 0x14039E0D0 (ExFreeToLookasideListEx.c)
 *     ExAllocateFromLookasideListEx @ 0x1403E1EE0 (ExAllocateFromLookasideListEx.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     MmIsUserAddress @ 0x14044E7C0 (MmIsUserAddress.c)
 *     _tlgWriteAgg @ 0x1404599C0 (_tlgWriteAgg.c)
 *     Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline @ 0x1404690D0 (Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x1404869D8 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     CmpCallCallBacksEx @ 0x1408C9E40 (CmpCallCallBacksEx.c)
 *     CmQueryValueKey @ 0x1408D88E0 (CmQueryValueKey.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F3730 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     CmObReferenceObjectByHandle @ 0x140C58340 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtQueryValueKey(
        HANDLE Handle,
        unsigned int *a2,
        __int64 a3,
        unsigned __int64 a4,
        size_t Size,
        unsigned int *a6)
{
  unsigned int v6; // esi
  unsigned int v9; // r13d
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  char v15; // r14
  unsigned __int8 PreviousMode; // r14
  int ValueKey; // edi
  unsigned int ULongFromUser; // edi
  UNICODE_STRING v19; // xmm0
  unsigned int Length; // edi
  wchar_t *Buffer; // rsi
  _DWORD *v22; // r12
  int v23; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v25; // rsi
  int v26; // eax
  char *v27; // rax
  PVOID v28; // rcx
  PVOID v30; // rax
  unsigned int v31; // eax
  unsigned int v32; // edx
  char v33; // cl
  UNICODE_STRING *p_DestinationString; // rcx
  char v35; // [rsp+40h] [rbp-308h]
  char v36; // [rsp+42h] [rbp-306h]
  char v37; // [rsp+43h] [rbp-305h]
  char v38; // [rsp+44h] [rbp-304h]
  char v39; // [rsp+45h] [rbp-303h] BYREF
  unsigned int v40; // [rsp+48h] [rbp-300h]
  void *v41; // [rsp+50h] [rbp-2F8h]
  size_t v42; // [rsp+58h] [rbp-2F0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-2E8h] BYREF
  PVOID v44; // [rsp+70h] [rbp-2D8h] BYREF
  PVOID v45; // [rsp+78h] [rbp-2D0h] BYREF
  int v46; // [rsp+80h] [rbp-2C8h]
  int v47; // [rsp+88h] [rbp-2C0h]
  unsigned __int64 v48; // [rsp+90h] [rbp-2B8h] BYREF
  UNICODE_STRING v49; // [rsp+A0h] [rbp-2A8h] BYREF
  unsigned __int64 *p_PrivilegeCount; // [rsp+B0h] [rbp-298h]
  __int64 v51; // [rsp+B8h] [rbp-290h] BYREF
  __int128 Parameter; // [rsp+C0h] [rbp-288h] BYREF
  UNICODE_STRING v53; // [rsp+D0h] [rbp-278h]
  __int128 v54; // [rsp+E0h] [rbp-268h]
  __int64 v55; // [rsp+F0h] [rbp-258h]
  size_t *v56; // [rsp+F8h] [rbp-250h]
  PVOID Object; // [rsp+108h] [rbp-240h] BYREF
  _QWORD v58[2]; // [rsp+110h] [rbp-238h] BYREF
  UNICODE_STRING v59; // [rsp+120h] [rbp-228h]
  UNICODE_STRING v60; // [rsp+130h] [rbp-218h]
  __int128 v61; // [rsp+140h] [rbp-208h] BYREF
  __int128 v62; // [rsp+150h] [rbp-1F8h]
  __int128 v63; // [rsp+160h] [rbp-1E8h]
  __int128 v64; // [rsp+170h] [rbp-1D8h]
  __int64 v65; // [rsp+180h] [rbp-1C8h]
  PVOID v66; // [rsp+190h] [rbp-1B8h] BYREF
  int v67; // [rsp+198h] [rbp-1B0h]
  int v68; // [rsp+19Ch] [rbp-1ACh]
  __int128 *v69; // [rsp+1A0h] [rbp-1A8h]
  int v70; // [rsp+1A8h] [rbp-1A0h]
  __int128 v71; // [rsp+1ACh] [rbp-19Ch]
  __int64 v72; // [rsp+1BCh] [rbp-18Ch]
  int v73; // [rsp+1C4h] [rbp-184h]
  _KAFFINITY_EX v74; // [rsp+1C8h] [rbp-180h] BYREF

  v48 = a4;
  v6 = a3;
  v40 = a3;
  v9 = Size;
  v47 = a3;
  v51 = (__int64)a6;
  memset(&v74, 0, 24);
  DestinationString = 0LL;
  memset((char *)&v74.StaticBitmap[6] + 1, 0, 71);
  Parameter = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  LODWORD(v56) = 0;
  memset(&v74.StaticBitmap[16], 0, 32);
  v41 = 0LL;
  v45 = 0LL;
  v38 = 0;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((unsigned __int64)&v74.StaticBitmap[16], 0x20000uLL, a3);
    v38 = 1;
  }
  v36 = 0;
  v37 = 0;
  v44 = 0LL;
  LODWORD(v42) = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  TransientPoolWithQuota = 0LL;
  p_PrivilegeCount = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  memset(&v74.StaticBitmap[4], 0, 17);
  v58[1] = v58;
  v58[0] = v58;
  CmpInitializeThreadInfo(&v74);
  Object = 0LL;
  v15 = CmpAcquireShutdownRundown(v12, v11);
  v35 = v15;
  if ( !v15 )
  {
    ValueKey = -1073741431;
    goto LABEL_68;
  }
  if ( v6 <= 4 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    ValueKey = CmObReferenceObjectByHandle((_DWORD)Handle, 1, v14, PreviousMode, (__int64)&v44, 0LL);
    if ( ValueKey < 0 )
    {
      v15 = v35;
      goto LABEL_68;
    }
    if ( CmpTraceRoutine && v44 )
    {
      v41 = (void *)*((_QWORD *)v44 + 1);
      v45 = v41;
    }
    if ( PreviousMode )
    {
      v60 = 0LL;
      ULongFromUser = RtlReadULongFromUser(a2);
      *(_DWORD *)&v60.Length = ULongFromUser;
      v60.Buffer = (wchar_t *)RtlReadULong64FromUser(a2 + 2);
      v19 = v60;
    }
    else
    {
      v49 = 0LL;
      ULongFromUser = *a2;
      *(_DWORD *)&v49.Length = *a2;
      v49.Buffer = (wchar_t *)*((_QWORD *)a2 + 1);
      v19 = v49;
    }
    *(UNICODE_STRING *)&v74.StaticBitmap[2] = v19;
    v14 = ULongFromUser;
    v13 = ULongFromUser;
    v49 = v19;
    v59.Length = v19.Length;
    *(_DWORD *)(&v59.MaximumLength + 1) = *(_DWORD *)(&v19.MaximumLength + 1);
    v59.Buffer = v19.Buffer;
    v59.MaximumLength = v19.Length;
    if ( !(_WORD)ULongFromUser )
    {
      v59.Buffer = 0LL;
      v13 = 0LL;
    }
    if ( (v13 & 1) != 0 )
    {
      ValueKey = -1073741811;
    }
    else
    {
      DestinationString = v59;
      ValueKey = 0;
    }
    v46 = ValueKey;
    if ( ValueKey < 0 )
    {
      v15 = v35;
      goto LABEL_68;
    }
    Length = DestinationString.Length;
    if ( DestinationString.Length )
    {
      if ( PreviousMode )
      {
        Buffer = DestinationString.Buffer;
LABEL_17:
        if ( Length > 0x40 )
        {
          TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota();
          p_PrivilegeCount = (unsigned __int64 *)&TransientPoolWithQuota->PrivilegeCount;
          if ( !TransientPoolWithQuota )
          {
            ValueKey = -1073741670;
            v46 = -1073741670;
            v15 = v35;
            goto LABEL_68;
          }
          Buffer = DestinationString.Buffer;
          LOWORD(Length) = DestinationString.Length;
        }
        else
        {
          TransientPoolWithQuota = (struct _PRIVILEGE_SET *)&v74.StaticBitmap[30];
          p_PrivilegeCount = &v74.StaticBitmap[30];
        }
        if ( PreviousMode && (_WORD)Length && ((unsigned __int8)Buffer & 1) != 0 )
LABEL_22:
          ExRaiseDatatypeMisalignment();
        if ( PreviousMode )
          RtlCopyFromUser(TransientPoolWithQuota, Buffer, (unsigned __int16)Length);
        else
          RtlCopyVolatileMemory(TransientPoolWithQuota, Buffer, (unsigned __int16)Length);
        Buffer = (wchar_t *)TransientPoolWithQuota;
        DestinationString.Buffer = (wchar_t *)TransientPoolWithQuota;
        LOWORD(Length) = DestinationString.Length;
LABEL_27:
        if ( PreviousMode )
        {
          if ( (_DWORD)Size && (v48 & 3) != 0 )
            goto LABEL_22;
          v22 = (_DWORD *)v51;
          v23 = RtlReadULongFromUser((unsigned int *)v51);
          RtlWriteULongToUser(v22, v23);
          Buffer = DestinationString.Buffer;
          LOWORD(Length) = DestinationString.Length;
        }
        else
        {
          v22 = (_DWORD *)v51;
        }
        while ( (_WORD)Length && !Buffer[((unsigned __int64)(unsigned __int16)Length >> 1) - 1] )
        {
          LOWORD(Length) = Length - 2;
          DestinationString.Length = Length;
        }
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v37 = 1;
        if ( !WheapPfaLock.ExpectedRunTime || (unsigned int)CmpIsRegistryLockAcquired() )
        {
          v25 = v48;
        }
        else
        {
          *(_QWORD *)&v61 = v44;
          *((_QWORD *)&v61 + 1) = &DestinationString;
          LODWORD(v62) = v40;
          v25 = v48;
          *((_QWORD *)&v62 + 1) = v48;
          LODWORD(v63) = Size;
          *((_QWORD *)&v63 + 1) = v22;
          v26 = CmpCallCallBacksEx(8u, (__int64)&v61, 0LL, 1, 0x17u, (__int64)v44, (__int64)v58);
          if ( v26 < 0 )
          {
            ValueKey = 0;
            if ( v26 != -1073740541 )
              ValueKey = v26;
            goto LABEL_67;
          }
          v36 = 1;
        }
        ValueKey = CmKeyBodyRemapToVirtualForEnum(&v44, PreviousMode, 1LL, &Object);
        if ( ValueKey < 0 )
          goto LABEL_67;
        LOBYTE(v74.StaticBitmap[6]) = v74.StaticBitmap[6] & 0xFD | (2 * (PreviousMode & 1));
        v74.StaticBitmap[4] = v25;
        if ( !(_DWORD)Size )
        {
          v74.StaticBitmap[5] = 0LL;
          goto LABEL_58;
        }
        if ( !CmpFreezeListLock.RelativeTimerBias || !PreviousMode && !MmIsUserAddress(v25) )
          goto LABEL_92;
        if ( (unsigned int)dword_140E09EE8 > 5 && (qword_140E09EF8 & 4) != 0 && (qword_140E09F00 & 4) == qword_140E09F00 )
        {
          v51 = 1LL;
          v74.StaticBitmap[24] = (unsigned __int64)&v51;
          v74.StaticBitmap[25] = 8LL;
          v39 = 3;
          v74.StaticBitmap[26] = (unsigned __int64)&v39;
          v74.StaticBitmap[27] = 1LL;
          v32 = Size;
          if ( (((_DWORD)Size - 1) & (unsigned int)Size) != 0 )
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
          v48 = v32;
          v74.StaticBitmap[28] = (unsigned __int64)&v48;
          v74.StaticBitmap[29] = 8LL;
          tlgWriteAgg(
            (__int64)&dword_140E09EE8,
            (unsigned __int8 *)&byte_140055E63,
            v14,
            5u,
            (PEVENT_DATA_DESCRIPTOR)&v74.StaticBitmap[20]);
        }
        if ( (unsigned int)Size > 0x40uLL )
        {
          if ( (unsigned int)Size <= 0x1000uLL )
          {
            v30 = ExAllocateFromLookasideListEx(&CmpBounceBufferLookaside);
            v25 = (unsigned __int64)v30;
            if ( v30 )
            {
              memset_0(v30, 0, (unsigned int)Size);
              LOBYTE(v74.StaticBitmap[6]) |= 1u;
LABEL_92:
              v74.StaticBitmap[5] = v25;
              goto LABEL_58;
            }
          }
          v27 = (char *)CmpAllocateTransientPoolWithQuota();
          if ( !v27 )
          {
            ValueKey = -1073741670;
LABEL_59:
            if ( ValueKey >= 0 )
            {
              *(_QWORD *)&Parameter = 0LL;
              v53 = DestinationString;
              *(_QWORD *)&v54 = v40;
              *((_QWORD *)&v54 + 1) = v74.StaticBitmap[5];
              v55 = (unsigned int)Size;
              v56 = &v42;
              if ( Object )
              {
                *((_QWORD *)&Parameter + 1) = Object;
                if ( (unsigned int)Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline() )
                {
                  ValueKey = KeExpandKernelStackAndCallout(CmQueryValueKeyCallout, &Parameter, 0x4800uLL);
                  if ( ValueKey < 0 )
                    goto LABEL_67;
                  ValueKey = Parameter;
                }
                else
                {
                  v49 = v53;
                  ValueKey = CmQueryValueKey(
                               *((__int64 *)&Parameter + 1),
                               &v49.Length,
                               v54,
                               *((size_t *)&v54 + 1),
                               v55,
                               (__int64)v56);
                  LODWORD(Parameter) = ValueKey;
                }
                if ( ValueKey >= 0 )
                {
LABEL_93:
                  if ( PreviousMode )
                  {
                    RtlWriteULongToUser(v22, v42);
                    v31 = v42;
                  }
                  else
                  {
                    v31 = v42;
                    *v22 = v42;
                  }
                  if ( ValueKey != -1073741789 )
                  {
                    if ( v31 < (unsigned int)Size )
                      v9 = v31;
                    v13 = v74.StaticBitmap[5];
                    if ( v74.StaticBitmap[4] != v74.StaticBitmap[5] )
                    {
                      if ( (v74.StaticBitmap[6] & 2) != 0 )
                        RtlCopyToUser((void *)v74.StaticBitmap[4], (void *)v74.StaticBitmap[5], v9);
                      else
                        RtlCopyVolatileMemory((void *)v74.StaticBitmap[4], (const void *)v74.StaticBitmap[5], v9);
                    }
                  }
                  v15 = v35;
                  goto LABEL_68;
                }
                if ( ValueKey != -1073741772 )
                {
                  if ( ValueKey != -1073741789 && ValueKey != -2147483643 )
                  {
                    v15 = v35;
                    goto LABEL_68;
                  }
                  goto LABEL_93;
                }
              }
              *((_QWORD *)&Parameter + 1) = v44;
              if ( !(unsigned int)Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline() )
              {
                v49 = v53;
                ValueKey = CmQueryValueKey(
                             *((__int64 *)&Parameter + 1),
                             &v49.Length,
                             v54,
                             *((size_t *)&v54 + 1),
                             v55,
                             (__int64)v56);
                LODWORD(Parameter) = ValueKey;
                goto LABEL_64;
              }
              ValueKey = KeExpandKernelStackAndCallout(CmQueryValueKeyCallout, &Parameter, 0x4800uLL);
              if ( ValueKey >= 0 )
              {
                ValueKey = Parameter;
LABEL_64:
                if ( ValueKey < 0 && ValueKey != -2147483643 && ValueKey != -1073741789 )
                  goto LABEL_67;
                goto LABEL_93;
              }
            }
LABEL_67:
            v15 = v35;
            goto LABEL_68;
          }
        }
        else
        {
          memset_0((char *)&v74.StaticBitmap[6] + 1, 0, (unsigned int)Size);
          v27 = (char *)&v74.StaticBitmap[6] + 1;
        }
        v74.StaticBitmap[5] = (unsigned __int64)v27;
LABEL_58:
        ValueKey = 0;
        goto LABEL_59;
      }
      if ( CmpFreezeListLock.RelativeTimerBias )
      {
        Buffer = DestinationString.Buffer;
        if ( !MmIsUserAddress((unsigned __int64)DestinationString.Buffer) )
          goto LABEL_27;
        goto LABEL_17;
      }
    }
    Buffer = DestinationString.Buffer;
    goto LABEL_27;
  }
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
  ValueKey = -1073741811;
LABEL_68:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v36 && WheapPfaLock.ExpectedRunTime && !(unsigned int)CmpIsRegistryLockAcquired() && (_QWORD *)v58[0] != v58 )
  {
    v68 = 0;
    v71 = 0LL;
    v72 = 0LL;
    v73 = 0;
    v66 = v44;
    v67 = ValueKey;
    v70 = ValueKey;
    v69 = &v61;
    CmpCallCallBacksEx(0x17u, (__int64)&v66, 0LL, 0, 0x17u, (__int64)v44, (__int64)v58);
    ValueKey = v70;
  }
  if ( v37 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14);
  v28 = v44;
  if ( v44 )
    ObfDereferenceObject(v44);
  if ( v74.StaticBitmap[5]
    && v74.StaticBitmap[5] != v74.StaticBitmap[4]
    && (_KAFFINITY_EX *)v74.StaticBitmap[5] != (_KAFFINITY_EX *)((char *)&v74.StaticBitmap[6] + 1) )
  {
    if ( (v74.StaticBitmap[6] & 1) != 0 )
      ExFreeToLookasideListEx(&CmpBounceBufferLookaside, (PVOID)v74.StaticBitmap[5]);
    else
      CmSiFreeMemory((PPRIVILEGE_SET)v74.StaticBitmap[5]);
  }
  if ( v38 && CmpTraceRoutine )
  {
    p_DestinationString = &DestinationString;
    LOBYTE(p_DestinationString) = 16;
    guard_dispatch_icall_no_overrides((__int64)p_DestinationString, (__int64)&v74.StaticBitmap[16]);
  }
  if ( TransientPoolWithQuota && TransientPoolWithQuota != (struct _PRIVILEGE_SET *)&v74.StaticBitmap[30] )
    CmSiFreeMemory(TransientPoolWithQuota);
  if ( v15 )
    CmpReleaseShutdownRundown(v28);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v74);
  return (unsigned int)ValueKey;
}
