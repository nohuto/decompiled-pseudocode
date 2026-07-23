/*
 * XREFs of NtQueryValueKey @ 0x1408F8FD0
 * Callers:
 *     DifNtQueryValueKeyWrapper @ 0x14068A290 (DifNtQueryValueKeyWrapper.c)
 *     ExpWatchProductTypeWork @ 0x140935C60 (ExpWatchProductTypeWork.c)
 *     IopLoadDriver @ 0x140A3A064 (IopLoadDriver.c)
 *     InitSafeBoot @ 0x140CB1580 (InitSafeBoot.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 *     IopProtectSystemPartition @ 0x140CC5268 (IopProtectSystemPartition.c)
 *     ExpWatchProductTypeInitialization @ 0x140CEB28C (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140261E00 (CmpIsRegistryLockAcquired.c)
 *     KeExpandKernelStackAndCallout @ 0x140263D70 (KeExpandKernelStackAndCallout.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032F2E0 (EtwGetKernelTraceTimestamp.c)
 *     ExFreeToLookasideListEx @ 0x14039FE30 (ExFreeToLookasideListEx.c)
 *     ExAllocateFromLookasideListEx @ 0x1403E50D0 (ExAllocateFromLookasideListEx.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline @ 0x1404626A0 (Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x140480350 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     CmpCallCallBacksEx @ 0x1408D03F0 (CmpCallCallBacksEx.c)
 *     CmQueryValueKey @ 0x1408DEEA0 (CmQueryValueKey.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F9CF0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     CmObReferenceObjectByHandle @ 0x140C5E340 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtQueryValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  ULONG v9; // r13d
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r8d
  char v14; // r14
  unsigned __int8 PreviousMode; // r14
  NTSTATUS ValueKey; // edi
  int ULongFromUser; // edi
  UNICODE_STRING v18; // xmm0
  char v19; // dl
  unsigned int v20; // edi
  wchar_t *Buffer; // rsi
  unsigned int *v22; // r12
  int v23; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v25; // rsi
  int v26; // eax
  __int64 v27; // r8
  char *v28; // rax
  PVOID v29; // rcx
  PVOID v31; // rax
  ULONG v32; // eax
  ULONG v33; // edx
  char v34; // cl
  UNICODE_STRING *p_DestinationString; // rcx
  char v36; // [rsp+40h] [rbp-308h]
  char v37; // [rsp+42h] [rbp-306h]
  char v38; // [rsp+43h] [rbp-305h]
  char v39; // [rsp+44h] [rbp-304h]
  char v40; // [rsp+45h] [rbp-303h] BYREF
  KEY_VALUE_INFORMATION_CLASS v41; // [rsp+48h] [rbp-300h]
  void *v42; // [rsp+50h] [rbp-2F8h]
  size_t Size; // [rsp+58h] [rbp-2F0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-2E8h] BYREF
  PVOID v45; // [rsp+70h] [rbp-2D8h] BYREF
  PVOID v46; // [rsp+78h] [rbp-2D0h] BYREF
  int v47; // [rsp+80h] [rbp-2C8h]
  KEY_VALUE_INFORMATION_CLASS v48; // [rsp+88h] [rbp-2C0h]
  PVOID v49; // [rsp+90h] [rbp-2B8h] BYREF
  UNICODE_STRING v50; // [rsp+A0h] [rbp-2A8h] BYREF
  unsigned __int64 *p_PrivilegeCount; // [rsp+B0h] [rbp-298h]
  unsigned int *v52; // [rsp+B8h] [rbp-290h] BYREF
  __int128 Parameter; // [rsp+C0h] [rbp-288h] BYREF
  UNICODE_STRING v54; // [rsp+D0h] [rbp-278h]
  __int128 v55; // [rsp+E0h] [rbp-268h]
  __int64 v56; // [rsp+F0h] [rbp-258h]
  size_t *p_Size; // [rsp+F8h] [rbp-250h]
  PVOID Object; // [rsp+108h] [rbp-240h] BYREF
  _QWORD v59[2]; // [rsp+110h] [rbp-238h] BYREF
  UNICODE_STRING v60; // [rsp+120h] [rbp-228h]
  UNICODE_STRING v61; // [rsp+130h] [rbp-218h]
  __int128 v62; // [rsp+140h] [rbp-208h] BYREF
  __int128 v63; // [rsp+150h] [rbp-1F8h]
  __int128 v64; // [rsp+160h] [rbp-1E8h]
  __int128 v65; // [rsp+170h] [rbp-1D8h]
  __int64 v66; // [rsp+180h] [rbp-1C8h]
  PVOID v67; // [rsp+190h] [rbp-1B8h] BYREF
  NTSTATUS v68; // [rsp+198h] [rbp-1B0h]
  int v69; // [rsp+19Ch] [rbp-1ACh]
  __int128 *v70; // [rsp+1A0h] [rbp-1A8h]
  NTSTATUS v71; // [rsp+1A8h] [rbp-1A0h]
  __int128 v72; // [rsp+1ACh] [rbp-19Ch]
  __int64 v73; // [rsp+1BCh] [rbp-18Ch]
  int v74; // [rsp+1C4h] [rbp-184h]
  _KAFFINITY_EX v75; // [rsp+1C8h] [rbp-180h] BYREF

  v49 = KeyValueInformation;
  v41 = KeyValueInformationClass;
  v9 = Length;
  v48 = KeyValueInformationClass;
  v52 = ResultLength;
  memset(&v75, 0, 24);
  DestinationString = 0LL;
  memset((char *)&v75.StaticBitmap[6] + 1, 0, 71);
  Parameter = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  LODWORD(p_Size) = 0;
  memset(&v75.StaticBitmap[16], 0, 32);
  v42 = 0LL;
  v46 = 0LL;
  v39 = 0;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp(
      (unsigned __int64)&v75.StaticBitmap[16],
      0x20000uLL,
      *(__int64 *)&KeyValueInformationClass);
    v39 = 1;
  }
  v37 = 0;
  v38 = 0;
  v45 = 0LL;
  LODWORD(Size) = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  TransientPoolWithQuota = 0LL;
  p_PrivilegeCount = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  memset(&v75.StaticBitmap[4], 0, 17);
  v59[1] = v59;
  v59[0] = v59;
  CmpInitializeThreadInfo(&v75);
  Object = 0LL;
  v14 = CmpAcquireShutdownRundown(v12, v11);
  v36 = v14;
  if ( !v14 )
  {
    ValueKey = -1073741431;
    goto LABEL_68;
  }
  if ( (unsigned int)KeyValueInformationClass <= KeyValuePartialInformationAlign64 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    ValueKey = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 1, v13, PreviousMode, (__int64)&v45, 0LL);
    if ( ValueKey < 0 )
    {
      v14 = v36;
      goto LABEL_68;
    }
    if ( CmpTraceRoutine && v45 )
    {
      v42 = (void *)*((_QWORD *)v45 + 1);
      v46 = v42;
    }
    if ( PreviousMode )
    {
      v61 = 0LL;
      ULongFromUser = RtlReadULongFromUser((unsigned int *)&ValueName->Length);
      *(_DWORD *)&v61.Length = ULongFromUser;
      v61.Buffer = (wchar_t *)RtlReadULong64FromUser(&ValueName->Buffer);
      v18 = v61;
    }
    else
    {
      v50 = 0LL;
      ULongFromUser = *(_DWORD *)&ValueName->Length;
      *(_DWORD *)&v50.Length = *(_DWORD *)&ValueName->Length;
      v50.Buffer = ValueName->Buffer;
      v18 = v50;
    }
    *(UNICODE_STRING *)&v75.StaticBitmap[2] = v18;
    v19 = ULongFromUser;
    v50 = v18;
    v60.Length = v18.Length;
    *(_DWORD *)(&v60.MaximumLength + 1) = *(_DWORD *)(&v18.MaximumLength + 1);
    v60.Buffer = v18.Buffer;
    v60.MaximumLength = v18.Length;
    if ( !(_WORD)ULongFromUser )
    {
      v60.Buffer = 0LL;
      v19 = 0;
    }
    if ( (v19 & 1) != 0 )
    {
      ValueKey = -1073741811;
    }
    else
    {
      DestinationString = v60;
      ValueKey = 0;
    }
    v47 = ValueKey;
    if ( ValueKey < 0 )
    {
      v14 = v36;
      goto LABEL_68;
    }
    v20 = DestinationString.Length;
    if ( DestinationString.Length )
    {
      if ( PreviousMode )
      {
        Buffer = DestinationString.Buffer;
LABEL_17:
        if ( v20 > 0x40 )
        {
          TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota();
          p_PrivilegeCount = (unsigned __int64 *)&TransientPoolWithQuota->PrivilegeCount;
          if ( !TransientPoolWithQuota )
          {
            ValueKey = -1073741670;
            v47 = -1073741670;
            v14 = v36;
            goto LABEL_68;
          }
          Buffer = DestinationString.Buffer;
          LOWORD(v20) = DestinationString.Length;
        }
        else
        {
          TransientPoolWithQuota = (struct _PRIVILEGE_SET *)&v75.StaticBitmap[30];
          p_PrivilegeCount = &v75.StaticBitmap[30];
        }
        if ( PreviousMode && (_WORD)v20 && ((unsigned __int8)Buffer & 1) != 0 )
LABEL_22:
          ExRaiseDatatypeMisalignment();
        if ( PreviousMode )
          RtlCopyFromUser(TransientPoolWithQuota, Buffer, (unsigned __int16)v20);
        else
          RtlCopyVolatileMemory(TransientPoolWithQuota, Buffer, (unsigned __int16)v20);
        Buffer = (wchar_t *)TransientPoolWithQuota;
        DestinationString.Buffer = (wchar_t *)TransientPoolWithQuota;
        LOWORD(v20) = DestinationString.Length;
LABEL_27:
        if ( PreviousMode )
        {
          if ( Length && ((unsigned __int8)v49 & 3) != 0 )
            goto LABEL_22;
          v22 = v52;
          v23 = RtlReadULongFromUser(v52);
          RtlWriteULongToUser(v22, v23);
          Buffer = DestinationString.Buffer;
          LOWORD(v20) = DestinationString.Length;
        }
        else
        {
          v22 = v52;
        }
        while ( (_WORD)v20 && !Buffer[((unsigned __int64)(unsigned __int16)v20 >> 1) - 1] )
        {
          LOWORD(v20) = v20 - 2;
          DestinationString.Length = v20;
        }
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v38 = 1;
        if ( !HIDWORD(WheapPfaLock.StateSaveArea) || (unsigned int)CmpIsRegistryLockAcquired() )
        {
          v25 = (unsigned __int64)v49;
        }
        else
        {
          *(_QWORD *)&v62 = v45;
          *((_QWORD *)&v62 + 1) = &DestinationString;
          LODWORD(v63) = v41;
          v25 = (unsigned __int64)v49;
          *((_QWORD *)&v63 + 1) = v49;
          LODWORD(v64) = Length;
          *((_QWORD *)&v64 + 1) = v22;
          v26 = CmpCallCallBacksEx(8u, (__int64)&v62, 0LL, 1, 0x17u, (__int64)v45, (__int64)v59);
          if ( v26 < 0 )
          {
            ValueKey = 0;
            if ( v26 != -1073740541 )
              ValueKey = v26;
            goto LABEL_67;
          }
          v37 = 1;
        }
        ValueKey = CmKeyBodyRemapToVirtualForEnum(&v45, PreviousMode, 1LL, &Object);
        if ( ValueKey < 0 )
          goto LABEL_67;
        LOBYTE(v75.StaticBitmap[6]) = v75.StaticBitmap[6] & 0xFD | (2 * (PreviousMode & 1));
        v75.StaticBitmap[4] = v25;
        if ( !Length )
        {
          v75.StaticBitmap[5] = 0LL;
          goto LABEL_58;
        }
        if ( !CmpFreezeListLock.CycleTime || !PreviousMode && !MmIsUserAddress(v25) )
          goto LABEL_92;
        if ( (unsigned int)dword_140E09EE8 > 5 && (qword_140E09EF8 & 4) != 0 && (qword_140E09F00 & 4) == qword_140E09F00 )
        {
          v52 = (unsigned int *)1;
          v75.StaticBitmap[24] = (unsigned __int64)&v52;
          v75.StaticBitmap[25] = 8LL;
          v40 = 3;
          v75.StaticBitmap[26] = (unsigned __int64)&v40;
          v75.StaticBitmap[27] = 1LL;
          v33 = Length;
          if ( ((Length - 1) & Length) != 0 )
          {
            v34 = -1;
            do
            {
              ++v34;
              v33 >>= 1;
            }
            while ( v33 );
            v33 = 1 << (v34 + 1);
          }
          v49 = (PVOID)v33;
          v75.StaticBitmap[28] = (unsigned __int64)&v49;
          v75.StaticBitmap[29] = 8LL;
          tlgWriteAgg(
            (__int64)&dword_140E09EE8,
            (unsigned __int8 *)&word_140056E56,
            v27,
            5u,
            (PEVENT_DATA_DESCRIPTOR)&v75.StaticBitmap[20]);
        }
        if ( Length > 0x40uLL )
        {
          if ( Length <= 0x1000uLL )
          {
            v31 = ExAllocateFromLookasideListEx(&CmpBounceBufferLookaside);
            v25 = (unsigned __int64)v31;
            if ( v31 )
            {
              memset_0(v31, 0, Length);
              LOBYTE(v75.StaticBitmap[6]) |= 1u;
LABEL_92:
              v75.StaticBitmap[5] = v25;
              goto LABEL_58;
            }
          }
          v28 = (char *)CmpAllocateTransientPoolWithQuota();
          if ( !v28 )
          {
            ValueKey = -1073741670;
LABEL_59:
            if ( ValueKey >= 0 )
            {
              *(_QWORD *)&Parameter = 0LL;
              v54 = DestinationString;
              *(_QWORD *)&v55 = (unsigned int)v41;
              *((_QWORD *)&v55 + 1) = v75.StaticBitmap[5];
              v56 = Length;
              p_Size = &Size;
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
                  v50 = v54;
                  ValueKey = CmQueryValueKey(
                               *((__int64 *)&Parameter + 1),
                               &v50.Length,
                               v55,
                               *((size_t *)&v55 + 1),
                               v56,
                               (__int64)p_Size);
                  LODWORD(Parameter) = ValueKey;
                }
                if ( ValueKey >= 0 )
                {
LABEL_93:
                  if ( PreviousMode )
                  {
                    RtlWriteULongToUser(v22, Size);
                    v32 = Size;
                  }
                  else
                  {
                    v32 = Size;
                    *v22 = Size;
                  }
                  if ( ValueKey != -1073741789 )
                  {
                    if ( v32 < Length )
                      v9 = v32;
                    if ( v75.StaticBitmap[4] != v75.StaticBitmap[5] )
                    {
                      if ( (v75.StaticBitmap[6] & 2) != 0 )
                        RtlCopyToUser((void *)v75.StaticBitmap[4], (void *)v75.StaticBitmap[5], v9);
                      else
                        RtlCopyVolatileMemory((void *)v75.StaticBitmap[4], (const void *)v75.StaticBitmap[5], v9);
                    }
                  }
                  v14 = v36;
                  goto LABEL_68;
                }
                if ( ValueKey != -1073741772 )
                {
                  if ( ValueKey != -1073741789 && ValueKey != -2147483643 )
                  {
                    v14 = v36;
                    goto LABEL_68;
                  }
                  goto LABEL_93;
                }
              }
              *((_QWORD *)&Parameter + 1) = v45;
              if ( !(unsigned int)Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline() )
              {
                v50 = v54;
                ValueKey = CmQueryValueKey(
                             *((__int64 *)&Parameter + 1),
                             &v50.Length,
                             v55,
                             *((size_t *)&v55 + 1),
                             v56,
                             (__int64)p_Size);
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
            v14 = v36;
            goto LABEL_68;
          }
        }
        else
        {
          memset_0((char *)&v75.StaticBitmap[6] + 1, 0, Length);
          v28 = (char *)&v75.StaticBitmap[6] + 1;
        }
        v75.StaticBitmap[5] = (unsigned __int64)v28;
LABEL_58:
        ValueKey = 0;
        goto LABEL_59;
      }
      if ( CmpFreezeListLock.CycleTime )
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
    if ( KeyHandle )
    {
      v46 = 0LL;
      if ( ObReferenceObjectByHandle(
             KeyHandle,
             0,
             (POBJECT_TYPE)CmKeyObjectType,
             KeGetCurrentThread()->PreviousMode,
             &v46,
             0LL) >= 0 )
        ObfDereferenceObject(v46);
    }
  }
  ValueKey = -1073741811;
LABEL_68:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v37
    && HIDWORD(WheapPfaLock.StateSaveArea)
    && !(unsigned int)CmpIsRegistryLockAcquired()
    && (_QWORD *)v59[0] != v59 )
  {
    v69 = 0;
    v72 = 0LL;
    v73 = 0LL;
    v74 = 0;
    v67 = v45;
    v68 = ValueKey;
    v71 = ValueKey;
    v70 = &v62;
    CmpCallCallBacksEx(0x17u, (__int64)&v67, 0LL, 0, 0x17u, (__int64)v45, (__int64)v59);
    ValueKey = v71;
  }
  if ( v38 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v29 = v45;
  if ( v45 )
    ObfDereferenceObject(v45);
  if ( v75.StaticBitmap[5]
    && v75.StaticBitmap[5] != v75.StaticBitmap[4]
    && (_KAFFINITY_EX *)v75.StaticBitmap[5] != (_KAFFINITY_EX *)((char *)&v75.StaticBitmap[6] + 1) )
  {
    if ( (v75.StaticBitmap[6] & 1) != 0 )
      ExFreeToLookasideListEx(&CmpBounceBufferLookaside, (PVOID)v75.StaticBitmap[5]);
    else
      CmSiFreeMemory((PPRIVILEGE_SET)v75.StaticBitmap[5]);
  }
  if ( v39 && CmpTraceRoutine )
  {
    p_DestinationString = &DestinationString;
    LOBYTE(p_DestinationString) = 16;
    guard_dispatch_icall_no_overrides((__int64)p_DestinationString, (__int64)&v75.StaticBitmap[16]);
  }
  if ( TransientPoolWithQuota && TransientPoolWithQuota != (struct _PRIVILEGE_SET *)&v75.StaticBitmap[30] )
    CmSiFreeMemory(TransientPoolWithQuota);
  if ( v14 )
    CmpReleaseShutdownRundown(v29);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v75);
  return ValueKey;
}
