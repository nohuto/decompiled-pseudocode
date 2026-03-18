/*
 * XREFs of ExpWatchProductTypeInitialization @ 0x140CE4EEC
 * Callers:
 *     ExInitSystemPhase2 @ 0x140CE4044 (ExInitSystemPhase2.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     wcsncmp @ 0x1405381A0 (wcsncmp.c)
 *     wcscat_s @ 0x14053CA60 (wcscat_s.c)
 *     wcscpy_s @ 0x14053CB00 (wcscpy_s.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ExpGetNtProductTypeFromLicenseValue @ 0x140836A7C (ExpGetNtProductTypeFromLicenseValue.c)
 *     NtQueryValueKey @ 0x1408F2A10 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x1408F4C30 (NtQueryKey.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x1408F9F30 (NtClose.c)
 *     NtOpenKey @ 0x140974540 (NtOpenKey.c)
 *     NtNotifyChangeKey @ 0x14097A110 (NtNotifyChangeKey.c)
 *     NtEnumerateKey @ 0x140A5B7C0 (NtEnumerateKey.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140CE493C (ExpUpdateProductSuiteTypeInRegistry.c)
 *     ExpLicenseWatchInitWorker @ 0x140D01C04 (ExpLicenseWatchInitWorker.c)
 */

char ExpWatchProductTypeInitialization()
{
  _LIST_ENTRY v0; // rdi
  int v1; // eax
  NTSTATUS v2; // eax
  int ValueKey; // eax
  int v4; // eax
  int v6; // eax
  NTSTATUS v7; // eax
  _KSCHEDULING_GROUP *Pool2; // rax
  int v9; // eax
  size_t v10; // r8
  int v11; // eax
  char v12; // si
  __int64 v13; // rax
  int Key; // eax
  unsigned int v15; // r12d
  ULONG_PTR v16; // r14
  int v17; // r13d
  ULONG_PTR v18; // rsi
  bool v19; // di
  _DWORD *v20; // r15
  ULONG_PTR v21; // r8
  unsigned int i; // edi
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rsi
  int v26; // eax
  int v27; // eax
  wchar_t *v28; // rax
  char *v29; // rcx
  int v30; // eax
  PVOID *Object; // [rsp+20h] [rbp-E0h]
  PVOID *Objecta; // [rsp+20h] [rbp-E0h]
  PVOID *Objectb; // [rsp+20h] [rbp-E0h]
  PVOID *Objectc; // [rsp+20h] [rbp-E0h]
  PVOID *Objectd; // [rsp+20h] [rbp-E0h]
  PVOID *Objecte; // [rsp+20h] [rbp-E0h]
  PVOID *Objectf; // [rsp+20h] [rbp-E0h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v39; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t *Dst[2]; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h]
  UNICODE_STRING v42; // [rsp+78h] [rbp-88h] BYREF
  int v43; // [rsp+88h] [rbp-78h]
  int v44; // [rsp+8Ch] [rbp-74h]
  __int64 v45; // [rsp+90h] [rbp-70h]
  void *p_DestinationString; // [rsp+98h] [rbp-68h]
  int v47; // [rsp+A0h] [rbp-60h]
  int v48; // [rsp+A4h] [rbp-5Ch]
  __int128 v49; // [rsp+A8h] [rbp-58h]
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING v51; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v52; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v53; // [rsp+E8h] [rbp-18h]
  __int128 v54; // [rsp+F8h] [rbp-8h]
  __int128 v55; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v56[12]; // [rsp+120h] [rbp+20h] BYREF
  int v57; // [rsp+12Ch] [rbp+2Ch]

  v44 = 0;
  v48 = 0;
  DestinationString = 0LL;
  LODWORD(BugCheckParameter2) = 0;
  v42 = 0LL;
  Handle = 0LL;
  v0.Blink = 0LL;
  v55 = 0LL;
  *(_BYTE *)(MmWriteableSharedUserData + 616) = 1;
  BYTE4(ExpSysDbgLock.InitialStack) = 0;
  LOBYTE(ExpSysDbgLock.SystemCallNumber) = 0;
  ExpGetNtProductTypeFromLicenseValue((_DWORD *)(MmWriteableSharedUserData + 612));
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
  v45 = 0LL;
  p_DestinationString = &DestinationString;
  v47 = 576;
  v43 = 48;
  v49 = 0LL;
  v1 = NtOpenKey();
  if ( v1 < 0 )
    KeBugCheckEx(0x9Au, 2uLL, (unsigned int)v1, 0LL, 0LL);
  v39 = 0LL;
  v2 = ObReferenceObjectByHandle(ExpSysDbgLock.FirstArgument, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v39, 0LL);
  v0.Flink = (struct _LIST_ENTRY *)v39;
  if ( v2 < 0 )
    KeBugCheckEx(0x9Au, 0xBuLL, (unsigned int)v2, 0LL, 0LL);
  RtlInitUnicodeString(&v42, L"SetupType");
  LODWORD(Object) = 72;
  ValueKey = NtQueryValueKey(
               ExpSysDbgLock.FirstArgument,
               (unsigned int *)&v42.Length,
               2LL,
               (unsigned __int64)v56,
               (size_t)Object,
               (unsigned int *)&BugCheckParameter2);
  if ( ValueKey < 0 )
    KeBugCheckEx(0x9Au, 3uLL, (unsigned int)ValueKey, 0LL, 0LL);
  if ( v57 == 1 || v57 == 4 )
  {
    BYTE4(ExpSysDbgLock.InitialStack) = 1;
    *(_BYTE *)(MmWriteableSharedUserData + 616) = 0;
    ObfDereferenceObjectWithTag(v0.Flink, 0x746C6644u);
    v0.Flink = 0LL;
  }
  RtlInitUnicodeString(&v42, L"SystemSetupInProgress");
  LODWORD(Objecta) = 72;
  v4 = NtQueryValueKey(
         ExpSysDbgLock.FirstArgument,
         (unsigned int *)&v42.Length,
         2LL,
         (unsigned __int64)v56,
         (size_t)Objecta,
         (unsigned int *)&BugCheckParameter2);
  if ( v4 < 0 )
    KeBugCheckEx(0x9Au, 3uLL, (unsigned int)v4, 0LL, 0LL);
  if ( v57 == 1 )
    LOBYTE(ExpSysDbgLock.SystemCallNumber) = 1;
  ExpLicenseWatchInitWorker();
  if ( InitIsWinPEMode )
  {
    ExpSysDbgLock.ApcState.ApcListHead[0].Flink = v0.Flink;
    return 1;
  }
  ExpSysDbgLock.CycleTime = (volatile unsigned __int64)ExpWatchProductTypeWork;
  *(_QWORD *)&ExpSysDbgLock.CurrentRunTime = 0LL;
  ExpSysDbgLock.StackBase = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  v43 = 48;
  p_DestinationString = &DestinationString;
  v45 = 0LL;
  v47 = 576;
  v49 = 0LL;
  v6 = NtOpenKey();
  if ( v6 >= 0 )
  {
    if ( !BYTE4(ExpSysDbgLock.InitialStack) )
    {
      v39 = 0LL;
      v7 = ObReferenceObjectByHandle(
             ExpSysDbgLock.ApcState.ApcListHead[1].Flink,
             0,
             (POBJECT_TYPE)CmKeyObjectType,
             0,
             &v39,
             0LL);
      v0.Blink = (struct _LIST_ENTRY *)v39;
      if ( v7 < 0 )
        KeBugCheckEx(0x9Au, 0xCuLL, (unsigned int)v7, 0LL, 0LL);
    }
    ExpSysDbgLock.ApcState.ApcListHead[0] = v0;
    ExpUpdateProductSuiteTypeInRegistry();
    RtlInitUnicodeString(&v42, L"ProductType");
    Pool2 = (_KSCHEDULING_GROUP *)ExAllocatePool2(256LL, 0x22uLL, 0x2079654Bu);
    ExpSysDbgLock.SchedulingGroup = Pool2;
    if ( Pool2 )
    {
      LODWORD(Objectb) = 34;
      v9 = NtQueryValueKey(
             ExpSysDbgLock.ApcState.ApcListHead[1].Flink,
             (unsigned int *)&v42.Length,
             2LL,
             (unsigned __int64)Pool2,
             (size_t)Objectb,
             (unsigned int *)&BugCheckParameter2);
      if ( v9 >= 0 )
      {
        RtlInitUnicodeString(&v42, L"ProductSuite");
        LODWORD(Objectc) = 16;
        if ( (unsigned int)NtQueryValueKey(
                             ExpSysDbgLock.ApcState.ApcListHead[1].Flink,
                             (unsigned int *)&v42.Length,
                             2LL,
                             (unsigned __int64)&v55,
                             (size_t)Objectc,
                             (unsigned int *)&BugCheckParameter2) != -2147483643 )
          goto LABEL_29;
        LODWORD(BugCheckParameter2) = BugCheckParameter2 + 16;
        stru_140E3E928.AbWaitObject = (void *volatile)ExAllocatePool2(
                                                        256LL,
                                                        (unsigned int)BugCheckParameter2,
                                                        0x2079654Bu);
        if ( !stru_140E3E928.AbWaitObject )
          KeBugCheckEx(0x9Au, 0x14uLL, (unsigned int)BugCheckParameter2, 2uLL, 0LL);
        LODWORD(Objectd) = BugCheckParameter2;
        if ( (int)NtQueryValueKey(
                    ExpSysDbgLock.ApcState.ApcListHead[1].Flink,
                    (unsigned int *)&v42.Length,
                    2LL,
                    (unsigned __int64)stru_140E3E928.AbWaitObject,
                    (size_t)Objectd,
                    (unsigned int *)&BugCheckParameter2) >= 0
          || (ExFreePoolWithTag(stru_140E3E928.AbWaitObject, 0),
              stru_140E3E928.AbWaitObject = 0LL,
              !BYTE4(ExpSysDbgLock.InitialStack)) )
        {
LABEL_29:
          v10 = -1LL;
          do
            ++v10;
          while ( aLanmannt[v10] );
          if ( !wcsncmp(L"LanmanNT", (const wchar_t *)&ExpSysDbgLock.SchedulingGroup->ChildMinRate, v10)
            && (_DWORD)InitSafeBootMode == 3
            && !BYTE4(ExpSysDbgLock.InitialStack) )
          {
            *(_BYTE *)(MmWriteableSharedUserData + 616) = 1;
            *(_DWORD *)(MmWriteableSharedUserData + 612) = 3;
          }
          v11 = NtNotifyChangeKey(
                  *(int *)&ExpSysDbgLock.ApcStateFill[16],
                  0,
                  (__int64)&ExpSysDbgLock.StackBase,
                  1LL,
                  &ExpSysDbgLock.KernelStack,
                  268435461,
                  0,
                  &ExpSysDbgLock.WaitRegister,
                  4,
                  1);
          if ( v11 >= 0 )
          {
            RtlInitUnicodeString(
              &DestinationString,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites");
            v43 = 48;
            p_DestinationString = &DestinationString;
            v45 = 0LL;
            v47 = 576;
            v49 = 0LL;
            if ( (int)NtOpenKey() >= 0 )
            {
              LODWORD(v39) = 0;
              v52 = 0LL;
              v12 = 0;
              v13 = -1LL;
              v53 = 0LL;
              v54 = 0LL;
              *(_OWORD *)Dst = 0LL;
              v51 = 0LL;
              do
                ++v13;
              while ( aRegistryMachin_168[v13] );
              LOWORD(Dst[0]) = 2 * (v13 + 64);
              WORD1(Dst[0]) = Dst[0];
              Dst[1] = (wchar_t *)ExAllocatePool2(64LL, LOWORD(Dst[0]), 0x2079654Bu);
              if ( !Dst[1] )
                KeBugCheckEx(0x9Au, 0x14uLL, LOWORD(Dst[0]), 3uLL, 0LL);
              Key = NtQueryKey(Handle, 2u, (unsigned __int64)&v52, 0x30u, (unsigned int *)&v39);
              if ( Key < 0 )
                KeBugCheckEx(0x9Au, 0x13uLL, Key, 1uLL, 0LL);
              v15 = 2 * DWORD2(v53) + 56;
              if ( v15 < DWORD2(v53) || v15 < 2 * (unsigned __int64)(unsigned int)(DWORD2(v53) + 16) )
                v12 = 1;
              v16 = ExAllocatePool2(64LL, v15, 0x2079654Bu);
              if ( !v16 || v12 )
                KeBugCheckEx(0x9Au, 0x14uLL, v15, 4uLL, 0LL);
              v17 = DWORD2(v54) + 32;
              v18 = (unsigned int)(DWORD2(v54) + 32);
              v19 = (unsigned int)(DWORD2(v54) + 32) < DWORD2(v54);
              v20 = (_DWORD *)ExAllocatePool2(64LL, v18, 0x2079654Bu);
              if ( !v20 || v19 )
                KeBugCheckEx(0x9Au, 0x14uLL, v18, 5uLL, 0LL);
              LODWORD(ExpSysDbgLock.InitialStack) = DWORD1(v53);
              v21 = 80LL * DWORD1(v53);
              if ( v21 > 0xFFFFFFFF )
                KeBugCheckEx(0x9Au, 0x14uLL, v21, 6uLL, 0LL);
              ExpSysDbgLock.StackLimit = (void *volatile)ExAllocatePool2(64LL, (unsigned int)v21, 0x2079654Bu);
              if ( !ExpSysDbgLock.StackLimit )
                KeBugCheckEx(0x9Au, 0x14uLL, 80LL * LODWORD(ExpSysDbgLock.InitialStack), 6uLL, 0LL);
              RtlInitUnicodeString(&v51, L"ConcurrentLimit");
              for ( i = 0; ; ++i )
              {
                LODWORD(Objecte) = v15;
                v23 = NtEnumerateKey(Handle, i, 0, v16, (size_t)Objecte, (unsigned int *)&v39);
                if ( v23 == -2147483622 )
                  break;
                if ( v23 < 0 )
                  KeBugCheckEx(0x9Au, 0x1AuLL, v23, 0LL, 0LL);
                *(_WORD *)(v16 + 2 * ((unsigned __int64)*(unsigned int *)(v16 + 12) >> 1) + 16) = 0;
                wcscpy_s(
                  Dst[1],
                  (unsigned __int64)WORD1(Dst[0]) >> 1,
                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\LicenseInfoSuites");
                wcscat_s(Dst[1], (unsigned __int64)WORD1(Dst[0]) >> 1, L"\\");
                wcscat_s(Dst[1], (unsigned __int64)WORD1(Dst[0]) >> 1, (const wchar_t *)(v16 + 16));
                v24 = -1LL;
                do
                  ++v24;
                while ( Dst[1][v24] );
                v45 = 0LL;
                LOWORD(Dst[0]) = 2 * v24;
                v43 = 48;
                p_DestinationString = Dst;
                v47 = 576;
                v49 = 0LL;
                v25 = 80LL * i;
                v26 = NtOpenKey();
                if ( v26 < 0 )
                  KeBugCheckEx(0x9Au, 0x16uLL, v26, 1uLL, 0LL);
                LODWORD(Objectf) = v17;
                v27 = NtQueryValueKey(
                        *(HANDLE *)((char *)ExpSysDbgLock.StackLimit + v25),
                        (unsigned int *)&v51.Length,
                        2LL,
                        (unsigned __int64)v20,
                        (size_t)Objectf,
                        (unsigned int *)&v39);
                if ( v27 < 0 )
                  KeBugCheckEx(0x9Au, 0x13uLL, v27, 2uLL, 0LL);
                v28 = (wchar_t *)ExAllocatePool2(64LL, LOWORD(Dst[0]), 0x2079654Bu);
                *(_QWORD *)((char *)ExpSysDbgLock.StackLimit + v25 + 16) = v28;
                if ( !v28 )
                  KeBugCheckEx(0x9Au, 0x14uLL, LOWORD(Dst[0]), 7uLL, 0LL);
                wcscpy_s(v28, (unsigned __int64)LOWORD(Dst[0]) >> 1, Dst[1]);
                v29 = (char *)ExpSysDbgLock.StackLimit + v25;
                *((_DWORD *)v29 + 2) = v20[3];
                *((_QWORD *)v29 + 6) = v29;
                *((_QWORD *)v29 + 5) = ExpWatchLicenseInfoWork;
                *((_QWORD *)v29 + 3) = 0LL;
                v30 = NtNotifyChangeKey(
                        *(_QWORD *)v29,
                        0,
                        (__int64)(v29 + 24),
                        1LL,
                        v29 + 56,
                        268435461,
                        1,
                        v29 + 72,
                        4,
                        1);
                if ( v30 < 0 )
                  KeBugCheckEx(0x9Au, 0x18uLL, v30, 1uLL, 0LL);
              }
              ExFreePoolWithTag((PVOID)v16, 0);
              ExFreePoolWithTag(v20, 0);
              ExFreePoolWithTag(Dst[1], 0);
              NtClose(Handle);
            }
            return 1;
          }
          if ( !BYTE4(ExpSysDbgLock.InitialStack) )
            KeBugCheckEx(0x9Au, 8uLL, (unsigned int)v11, 0LL, 0LL);
        }
      }
      else if ( !BYTE4(ExpSysDbgLock.InitialStack) )
      {
        KeBugCheckEx(0x9Au, 7uLL, (unsigned int)v9, 0LL, 0LL);
      }
    }
  }
  else if ( !BYTE4(ExpSysDbgLock.InitialStack) )
  {
    KeBugCheckEx(0x9Au, 6uLL, (unsigned int)v6, 0LL, 0LL);
  }
  return 0;
}
