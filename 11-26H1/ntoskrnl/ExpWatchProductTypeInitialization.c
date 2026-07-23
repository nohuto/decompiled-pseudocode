/*
 * XREFs of ExpWatchProductTypeInitialization @ 0x140CEB28C
 * Callers:
 *     ExInitSystemPhase2 @ 0x140CEA3E4 (ExInitSystemPhase2.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     wcsncmp @ 0x14053A620 (wcsncmp.c)
 *     wcscat_s @ 0x14053EEE0 (wcscat_s.c)
 *     wcscpy_s @ 0x14053EF80 (wcscpy_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExpGetNtProductTypeFromLicenseValue @ 0x14083CCBC (ExpGetNtProductTypeFromLicenseValue.c)
 *     NtQueryValueKey @ 0x1408F8FD0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x140924BC0 (NtQueryKey.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     NtOpenKey @ 0x140936550 (NtOpenKey.c)
 *     NtNotifyChangeKey @ 0x14093C120 (NtNotifyChangeKey.c)
 *     NtEnumerateKey @ 0x140A68780 (NtEnumerateKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140CEACDC (ExpUpdateProductSuiteTypeInRegistry.c)
 *     ExpLicenseWatchInitWorker @ 0x140D07FA4 (ExpLicenseWatchInitWorker.c)
 */

char ExpWatchProductTypeInitialization()
{
  PVOID v0; // rsi
  NTSTATUS v1; // eax
  NTSTATUS v2; // eax
  PVOID v3; // rdi
  NTSTATUS v4; // eax
  NTSTATUS v5; // eax
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  void *Pool2; // rax
  NTSTATUS v10; // eax
  size_t v11; // r8
  NTSTATUS v12; // eax
  char v13; // si
  __int64 v14; // rax
  NTSTATUS v15; // eax
  ULONG v16; // r12d
  ULONG_PTR v17; // r14
  ULONG v18; // r13d
  ULONG_PTR v19; // rsi
  bool v20; // di
  _DWORD *v21; // r15
  ULONG_PTR v22; // r8
  ULONG i; // edi
  NTSTATUS v24; // eax
  __int64 v25; // rax
  __int64 v26; // rsi
  NTSTATUS v27; // eax
  NTSTATUS v28; // eax
  wchar_t *v29; // rax
  char *v30; // rcx
  NTSTATUS v31; // eax
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t *Dst[2]; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING ValueName; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING v39; // [rsp+C8h] [rbp-38h] BYREF
  __int128 KeyInformation; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v41; // [rsp+E8h] [rbp-18h]
  __int128 v42; // [rsp+F8h] [rbp-8h]
  __int128 v43; // [rsp+108h] [rbp+8h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+120h] [rbp+20h] BYREF
  int v45; // [rsp+12Ch] [rbp+2Ch]

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  ResultLength = 0;
  ValueName = 0LL;
  KeyHandle = 0LL;
  v0 = 0LL;
  v43 = 0LL;
  *(_BYTE *)(MmWriteableSharedUserData + 616) = 1;
  ExpSysDbgLock.WaitRegister.Flags = 0;
  ExpSysDbgLock.ApcStateFill[4] = 0;
  ExpGetNtProductTypeFromLicenseValue((_DWORD *)(MmWriteableSharedUserData + 612));
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = NtOpenKey((PHANDLE)&ExpSysDbgLock.ApcState.ApcListHead[1].Flink, 0x2001Fu, &ObjectAttributes);
  if ( v1 < 0 )
    KeBugCheckEx(0x9Au, 2uLL, (unsigned int)v1, 0LL, 0LL);
  Object = 0LL;
  v2 = ObReferenceObjectByHandle(
         ExpSysDbgLock.ApcState.ApcListHead[1].Flink,
         0,
         (POBJECT_TYPE)CmKeyObjectType,
         0,
         &Object,
         0LL);
  v3 = Object;
  if ( v2 < 0 )
    KeBugCheckEx(0x9Au, 0xBuLL, (unsigned int)v2, 0LL, 0LL);
  RtlInitUnicodeString(&ValueName, L"SetupType");
  v4 = NtQueryValueKey(
         ExpSysDbgLock.ApcState.ApcListHead[1].Flink,
         &ValueName,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x48u,
         &ResultLength);
  if ( v4 < 0 )
    KeBugCheckEx(0x9Au, 3uLL, (unsigned int)v4, 0LL, 0LL);
  if ( v45 == 1 || v45 == 4 )
  {
    ExpSysDbgLock.WaitRegister.Flags = 1;
    *(_BYTE *)(MmWriteableSharedUserData + 616) = 0;
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
    v3 = 0LL;
  }
  RtlInitUnicodeString(&ValueName, L"SystemSetupInProgress");
  v5 = NtQueryValueKey(
         ExpSysDbgLock.ApcState.ApcListHead[1].Flink,
         &ValueName,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x48u,
         &ResultLength);
  if ( v5 < 0 )
    KeBugCheckEx(0x9Au, 3uLL, (unsigned int)v5, 0LL, 0LL);
  if ( v45 == 1 )
    ExpSysDbgLock.ApcStateFill[4] = 1;
  ExpLicenseWatchInitWorker();
  if ( InitIsWinPEMode )
  {
    *(_QWORD *)&ExpSysDbgLock.ApcStateFill[40] = v3;
    return 1;
  }
  ExpSysDbgLock.StateSaveArea = (_XSAVE_FORMAT *)ExpWatchProductTypeWork;
  ExpSysDbgLock.SchedulingGroup = 0LL;
  *(_QWORD *)&ExpSysDbgLock.CurrentRunTime = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = NtOpenKey((PHANDLE)&ExpSysDbgLock.ApcState.ApcListHead[0].Blink, 0x2001Fu, &ObjectAttributes);
  if ( v7 >= 0 )
  {
    if ( !ExpSysDbgLock.WaitRegister.Flags )
    {
      Object = 0LL;
      v8 = ObReferenceObjectByHandle(
             ExpSysDbgLock.ApcState.ApcListHead[0].Blink,
             0,
             (POBJECT_TYPE)CmKeyObjectType,
             0,
             &Object,
             0LL);
      v0 = Object;
      if ( v8 < 0 )
        KeBugCheckEx(0x9Au, 0xCuLL, (unsigned int)v8, 0LL, 0LL);
    }
    *(_QWORD *)&ExpSysDbgLock.ApcStateFill[40] = v3;
    ExpSysDbgLock.WaitStatus = (volatile __int64)v0;
    ExpUpdateProductSuiteTypeInRegistry();
    RtlInitUnicodeString(&ValueName, L"ProductType");
    Pool2 = (void *)ExAllocatePool2(256LL, 0x22uLL, 0x2079654Bu);
    ExpSysDbgLock.StackLimit = Pool2;
    if ( Pool2 )
    {
      v10 = NtQueryValueKey(
              ExpSysDbgLock.ApcState.ApcListHead[0].Blink,
              &ValueName,
              KeyValuePartialInformation,
              Pool2,
              0x22u,
              &ResultLength);
      if ( v10 >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"ProductSuite");
        if ( NtQueryValueKey(
               ExpSysDbgLock.ApcState.ApcListHead[0].Blink,
               &ValueName,
               KeyValuePartialInformation,
               &v43,
               0x10u,
               &ResultLength) != -2147483643 )
          goto LABEL_29;
        ResultLength += 16;
        stru_140E62450.SListFaultAddress = (void *)ExAllocatePool2(256LL, ResultLength, 0x2079654Bu);
        if ( !stru_140E62450.SListFaultAddress )
          KeBugCheckEx(0x9Au, 0x14uLL, ResultLength, 2uLL, 0LL);
        if ( NtQueryValueKey(
               ExpSysDbgLock.ApcState.ApcListHead[0].Blink,
               &ValueName,
               KeyValuePartialInformation,
               stru_140E62450.SListFaultAddress,
               ResultLength,
               &ResultLength) >= 0
          || (ExFreePoolWithTag(stru_140E62450.SListFaultAddress, 0),
              stru_140E62450.SListFaultAddress = 0LL,
              !ExpSysDbgLock.WaitRegister.Flags) )
        {
LABEL_29:
          v11 = -1LL;
          do
            ++v11;
          while ( aLanmannt[v11] );
          if ( !wcsncmp(L"LanmanNT", (const wchar_t *)ExpSysDbgLock.StackLimit + 6, v11)
            && InitSafeBootMode == 3
            && !ExpSysDbgLock.WaitRegister.Flags )
          {
            *(_BYTE *)(MmWriteableSharedUserData + 616) = 1;
            *(_DWORD *)(MmWriteableSharedUserData + 612) = 3;
          }
          v12 = NtNotifyChangeKey(
                  ExpSysDbgLock.ApcState.ApcListHead[0].Blink,
                  0LL,
                  (PIO_APC_ROUTINE)&ExpSysDbgLock.CurrentRunTime,
                  (PVOID)1,
                  (PIO_STATUS_BLOCK)&ExpSysDbgLock.SystemCallNumber,
                  0x10000005u,
                  0,
                  (char *)&ExpSysDbgLock.InitialStack + 4,
                  4u,
                  1u);
          if ( v12 >= 0 )
          {
            RtlInitUnicodeString(
              &DestinationString,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites");
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
            {
              LODWORD(Object) = 0;
              KeyInformation = 0LL;
              v13 = 0;
              v14 = -1LL;
              v41 = 0LL;
              v42 = 0LL;
              *(_OWORD *)Dst = 0LL;
              v39 = 0LL;
              do
                ++v14;
              while ( aRegistryMachin_170[v14] );
              LOWORD(Dst[0]) = 2 * (v14 + 64);
              WORD1(Dst[0]) = Dst[0];
              Dst[1] = (wchar_t *)ExAllocatePool2(64LL, LOWORD(Dst[0]), 0x2079654Bu);
              if ( !Dst[1] )
                KeBugCheckEx(0x9Au, 0x14uLL, LOWORD(Dst[0]), 3uLL, 0LL);
              v15 = NtQueryKey(KeyHandle, KeyFullInformation, &KeyInformation, 0x30u, (PULONG)&Object);
              if ( v15 < 0 )
                KeBugCheckEx(0x9Au, 0x13uLL, v15, 1uLL, 0LL);
              v16 = 2 * DWORD2(v41) + 56;
              if ( v16 < DWORD2(v41) || v16 < 2 * (unsigned __int64)(unsigned int)(DWORD2(v41) + 16) )
                v13 = 1;
              v17 = ExAllocatePool2(64LL, v16, 0x2079654Bu);
              if ( !v17 || v13 )
                KeBugCheckEx(0x9Au, 0x14uLL, v16, 4uLL, 0LL);
              v18 = DWORD2(v42) + 32;
              v19 = (unsigned int)(DWORD2(v42) + 32);
              v20 = (unsigned int)(DWORD2(v42) + 32) < DWORD2(v42);
              v21 = (_DWORD *)ExAllocatePool2(64LL, v19, 0x2079654Bu);
              if ( !v21 || v20 )
                KeBugCheckEx(0x9Au, 0x14uLL, v19, 5uLL, 0LL);
              LODWORD(ExpSysDbgLock.ApcState.ApcListHead[0].Flink) = DWORD1(v41);
              v22 = 80LL * DWORD1(v41);
              if ( v22 > 0xFFFFFFFF )
                KeBugCheckEx(0x9Au, 0x14uLL, v22, 6uLL, 0LL);
              ExpSysDbgLock.TrapFrame = (_KTRAP_FRAME *)ExAllocatePool2(64LL, (unsigned int)v22, 0x2079654Bu);
              if ( !ExpSysDbgLock.TrapFrame )
                KeBugCheckEx(0x9Au, 0x14uLL, 80LL * LODWORD(ExpSysDbgLock.ApcState.ApcListHead[0].Flink), 6uLL, 0LL);
              RtlInitUnicodeString(&v39, L"ConcurrentLimit");
              for ( i = 0; ; ++i )
              {
                v24 = NtEnumerateKey(KeyHandle, i, KeyBasicInformation, (PVOID)v17, v16, (PULONG)&Object);
                if ( v24 == -2147483622 )
                  break;
                if ( v24 < 0 )
                  KeBugCheckEx(0x9Au, 0x1AuLL, v24, 0LL, 0LL);
                *(_WORD *)(v17 + 2 * ((unsigned __int64)*(unsigned int *)(v17 + 12) >> 1) + 16) = 0;
                wcscpy_s(
                  Dst[1],
                  (unsigned __int64)WORD1(Dst[0]) >> 1,
                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites");
                wcscat_s(Dst[1], (unsigned __int64)WORD1(Dst[0]) >> 1, L"\\");
                wcscat_s(Dst[1], (unsigned __int64)WORD1(Dst[0]) >> 1, (const wchar_t *)(v17 + 16));
                v25 = -1LL;
                do
                  ++v25;
                while ( Dst[1][v25] );
                ObjectAttributes.RootDirectory = 0LL;
                LOWORD(Dst[0]) = 2 * v25;
                ObjectAttributes.Length = 48;
                ObjectAttributes.ObjectName = (PUNICODE_STRING)Dst;
                ObjectAttributes.Attributes = 576;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                v26 = 80LL * i;
                v27 = NtOpenKey((PHANDLE)((char *)ExpSysDbgLock.TrapFrame + v26), 0x2001Fu, &ObjectAttributes);
                if ( v27 < 0 )
                  KeBugCheckEx(0x9Au, 0x16uLL, v27, 1uLL, 0LL);
                v28 = NtQueryValueKey(
                        *(HANDLE *)((char *)&ExpSysDbgLock.TrapFrame->P1Home + v26),
                        &v39,
                        KeyValuePartialInformation,
                        v21,
                        v18,
                        (PULONG)&Object);
                if ( v28 < 0 )
                  KeBugCheckEx(0x9Au, 0x13uLL, v28, 2uLL, 0LL);
                v29 = (wchar_t *)ExAllocatePool2(64LL, LOWORD(Dst[0]), 0x2079654Bu);
                *(unsigned __int64 *)((char *)&ExpSysDbgLock.TrapFrame->P3Home + v26) = (unsigned __int64)v29;
                if ( !v29 )
                  KeBugCheckEx(0x9Au, 0x14uLL, LOWORD(Dst[0]), 7uLL, 0LL);
                wcscpy_s(v29, (unsigned __int64)LOWORD(Dst[0]) >> 1, Dst[1]);
                v30 = (char *)ExpSysDbgLock.TrapFrame + v26;
                *((_DWORD *)v30 + 2) = v21[3];
                *((_QWORD *)v30 + 6) = v30;
                *((_QWORD *)v30 + 5) = ExpWatchLicenseInfoWork;
                *((_QWORD *)v30 + 3) = 0LL;
                v31 = NtNotifyChangeKey(
                        *(HANDLE *)v30,
                        0LL,
                        (PIO_APC_ROUTINE)(v30 + 24),
                        (PVOID)1,
                        (PIO_STATUS_BLOCK)(v30 + 56),
                        0x10000005u,
                        1u,
                        v30 + 72,
                        4u,
                        1u);
                if ( v31 < 0 )
                  KeBugCheckEx(0x9Au, 0x18uLL, v31, 1uLL, 0LL);
              }
              ExFreePoolWithTag((PVOID)v17, 0);
              ExFreePoolWithTag(v21, 0);
              ExFreePoolWithTag(Dst[1], 0);
              NtClose(KeyHandle);
            }
            return 1;
          }
          if ( !ExpSysDbgLock.WaitRegister.Flags )
            KeBugCheckEx(0x9Au, 8uLL, (unsigned int)v12, 0LL, 0LL);
        }
      }
      else if ( !ExpSysDbgLock.WaitRegister.Flags )
      {
        KeBugCheckEx(0x9Au, 7uLL, (unsigned int)v10, 0LL, 0LL);
      }
    }
  }
  else if ( !ExpSysDbgLock.WaitRegister.Flags )
  {
    KeBugCheckEx(0x9Au, 6uLL, (unsigned int)v7, 0LL, 0LL);
  }
  return 0;
}
