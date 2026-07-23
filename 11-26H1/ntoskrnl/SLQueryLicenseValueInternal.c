/*
 * XREFs of SLQueryLicenseValueInternal @ 0x140A770F8
 * Callers:
 *     NtQueryLicenseValue @ 0x140A76CE0 (NtQueryLicenseValue.c)
 *     ntoskrnl_27 @ 0x140A77090 (ntoskrnl_27.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExpQueryLicenseValueFromBlobHelper @ 0x1404EACF8 (ExpQueryLicenseValueFromBlobHelper.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     sub_14083ED44 @ 0x14083ED44 (sub_14083ED44.c)
 *     SLGetSubscriptionPfn @ 0x14083F698 (SLGetSubscriptionPfn.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SLQueryLicenseValueInternal(
        __int64 a1,
        _RTL_BALANCED_NODE *a2,
        __int64 a3,
        _RTL_BALANCED_NODE *a4,
        int a5,
        __int64 a6)
{
  wchar_t *v6; // r12
  struct _KLOCK_ENTRIES *v7; // r9
  int v8; // r13d
  unsigned int i; // ebx
  size_t v10; // r8
  unsigned int v11; // eax
  unsigned int v12; // eax
  _WORD *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r10
  _RTL_BALANCED_NODE *v16; // rax
  struct _KTHREAD *CurrentThread; // rax
  void *v18; // rdx
  LegacyAutoBoost *v19; // rdi
  bool v20; // zf
  __int64 v21; // r12
  int LicenseValueFromBlobHelper; // edi
  _RTL_BALANCED_NODE *Min; // r14
  wchar_t *Pool2; // rax
  __int64 v26; // r8
  struct _KLOCK_ENTRIES *v27; // r9
  unsigned int v28; // r14d
  int v29; // r12d
  __int64 v30; // r14
  int v31; // eax
  char v32; // al
  struct _KLOCK_ENTRIES *v33; // r9
  struct _KTHREAD *v34; // rax
  AutoBoost *v35; // rax
  void *v36; // rdx
  AutoBoost *v37; // r13
  __int64 v38; // r12
  int v39; // r14d
  unsigned int j; // ebx
  size_t v41; // r9
  unsigned int v42; // eax
  unsigned int v43; // eax
  _WORD *v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r10
  const wchar_t *v47; // [rsp+70h] [rbp-168h]
  struct _KLOCK_ENTRIES v49; // [rsp+88h] [rbp-150h] BYREF
  _RTL_BALANCED_NODE *v50; // [rsp+F0h] [rbp-E8h]
  __int64 v51; // [rsp+F8h] [rbp-E0h]
  __int64 v52; // [rsp+100h] [rbp-D8h]
  PCUNICODE_STRING String1; // [rsp+110h] [rbp-C8h]
  const void **v54; // [rsp+118h] [rbp-C0h]
  _QWORD Buf1[14]; // [rsp+120h] [rbp-B8h] BYREF

  v49.Entries[0].LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)a4;
  *(_QWORD *)&v49.Entries[0].EntryFlags = a3;
  v49.Entries[0].OwnerTree.Min = a2;
  v50 = a2;
  v51 = a1;
  String1 = (PCUNICODE_STRING)a2;
  v52 = a3;
  v49.Entries[0].WaiterTree.Root = a4;
  *(_OWORD *)&v49.Entries[0].WaiterTree.0 = 0LL;
  v6 = 0LL;
  v47 = 0LL;
  v49.Entries[0].TreeNode.ParentValue = 0LL;
  if ( a2 )
  {
    if ( a6 )
    {
      LODWORD(v49.Thread) = 0;
      v54 = (const void **)&a2->Children[1];
      if ( a2->Children[1] )
      {
        if ( LOWORD(a2->Children[0]) >= 2u )
        {
          v49.Entries[0].WaiterTree.0 = ($7D93978C745EB1C2D28075BAF55422B4)1;
          v49.Entries[0].EntryLock = (unsigned __int64)a2;
          *(_DWORD *)&v49.AvailableEntryBitmap = sub_14083ED44(a1, 2LL, a3, (struct _KLOCK_ENTRIES *)a4);
          v49.Entries[0].TreeNode.Children[0] = 0LL;
          v8 = 1;
          for ( i = 0; i < 0xE; ++i )
          {
            v10 = *((unsigned __int16 *)&off_140BDF750 + 20 * i + 4);
            v11 = *(unsigned __int16 *)v49.Entries[0].EntryLock;
            if ( (_WORD)v11 == (_WORD)v10 )
            {
              v12 = v11 >> 1;
              if ( v12 )
              {
                v13 = Buf1;
                v14 = *(_QWORD *)(v49.Entries[0].EntryLock + 8) - (_QWORD)Buf1;
                v15 = v12;
                do
                {
                  *v13 = *(_WORD *)((char *)v13 + v14) ^ ((v8 + 1) | ((_WORD)v8 << 8) | 0x5555);
                  v8 += 2;
                  ++v13;
                  --v15;
                }
                while ( v15 );
              }
              if ( !memcmp(Buf1, *(&off_140BDF750 + 5 * i), v10) )
              {
                LOBYTE(v6) = *((_BYTE *)&off_140BDF750 + 40 * i + 32);
                v16 = (_RTL_BALANCED_NODE *)*(&off_140BDF750 + 5 * i + 2);
                v49.Entries[0].TreeNode.Children[0] = v16;
                goto LABEL_16;
              }
            }
            else
            {
              v8 += v10;
            }
          }
          v16 = 0LL;
LABEL_16:
          if ( v16 )
          {
            if ( (_BYTE)v6 )
            {
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              v19 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 46840, 0LL, 0LL, v7);
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 46840), 17LL, 0LL) )
                ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 46840), 0, v19, (struct _KTHREAD *)(a1 + 46840));
              if ( v19 )
              {
                if ( (KiAbpGlobalState & 1) != 0 )
                  AutoBoost::KiAbpPostAcquire(v19, v18);
                else
                  *((_BYTE *)v19 + 10) = 1;
              }
            }
            guard_dispatch_icall_no_overrides(a1, *(__int64 *)&v49.Entries[0].EntryFlags);
            v20 = (_BYTE)v6 == 0;
            v21 = a1;
            if ( !v20 )
            {
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 46840), 0LL, 17LL) != 17 )
                ExfReleasePushLockShared((signed __int64 *)(a1 + 46840));
              KeAbPostRelease(a1 + 46840);
              KeLeaveCriticalRegion();
            }
          }
          else
          {
            v21 = a1;
          }
          LicenseValueFromBlobHelper = *(_DWORD *)&v49.AvailableEntryBitmap;
          if ( *(int *)&v49.AvailableEntryBitmap < 0 )
            goto LABEL_30;
          LODWORD(v49.Thread) = 0;
          LicenseValueFromBlobHelper = ExpQueryLicenseValueFromBlobHelper(
                                         v21,
                                         (__int64)&qword_140BE01E0,
                                         0LL,
                                         &v49,
                                         4,
                                         (__int64)&v49.AvailableEntryBitmap);
          if ( !ExpPlatformBinaryLock.SchedulerApc.SystemArgument2
            || !LODWORD(v49.Thread)
            || RtlEqualUnicodeString(String1, &stru_140BE01F0, 0) )
          {
            goto LABEL_52;
          }
          Min = v49.Entries[0].OwnerTree.Min;
          Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
          v6 = Pool2;
          v47 = Pool2;
          if ( !Pool2 )
          {
            LicenseValueFromBlobHelper = -1073741801;
            goto LABEL_31;
          }
          memmove(Pool2, *v54, LOWORD(Min->Children[0]));
          Buf1[0] = L"Security-SPP-GenuineLocalStatus";
          Buf1[1] = L"Security-SPP-Action-StateData";
          Buf1[2] = L"Security-SPP-LastWindowsActivationHResult";
          Buf1[3] = L"Security-SPP-LastWindowsActivationTime";
          Buf1[4] = L"Kernel-ExpirationDate";
          Buf1[5] = L"SMR-HostManaged-Enabled";
          Buf1[6] = L"TerminalServices-RemoteConnectionManager-AllowAppServerMode";
          v28 = 0;
          v29 = 0;
          while ( v28 < 7 )
          {
            if ( !wcsicmp(v47, (const wchar_t *)Buf1[v28]) )
            {
              v29 = 1;
              break;
            }
            ++v28;
          }
          v20 = v29 == 0;
          v21 = a1;
          if ( v20 )
          {
            SLGetSubscriptionPfn(a1, (__int64 *)&v49.Entries[0].TreeNode.16, v26, v27);
            v30 = a6;
            v31 = guard_dispatch_icall_no_overrides(v49.Entries[0].TreeNode.ParentValue, 0LL);
            if ( (int)(v31 + 0x80000000) < 0 || v31 == -1073741789 )
            {
              LicenseValueFromBlobHelper = v31;
              if ( !a5 )
                LicenseValueFromBlobHelper = -1073741789;
              v32 = 0;
LABEL_54:
              if ( v32 )
              {
                LicenseValueFromBlobHelper = ExpQueryLicenseValueFromBlobHelper(
                                               v21,
                                               (__int64)&v49.Entries[0].WaiterTree.8,
                                               *(__int64 *)&v49.Entries[0].EntryFlags,
                                               (struct _KLOCK_ENTRIES *)v49.Entries[0].LockState.LockState,
                                               a5,
                                               v30);
                if ( LicenseValueFromBlobHelper == -1073741762 )
                {
                  v34 = KeGetCurrentThread();
                  --v34->KernelApcDisable;
                  v35 = (AutoBoost *)KeAbPreAcquire(v21 + 46840, 0LL, 0LL, v33);
                  v37 = v35;
                  if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 46840), 0LL) )
                    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v21 + 46840), v35, v21 + 46840);
                  if ( v37 )
                  {
                    if ( (KiAbpGlobalState & 1) != 0 )
                      AutoBoost::KiAbpPostAcquire(v37, v36);
                    else
                      *((_BYTE *)v37 + 10) = 1;
                  }
                  *(_BYTE *)(v21 + 46992) = 1;
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock((volatile signed __int64 *)(v21 + 46840));
                  KeAbPostRelease(v21 + 46840);
                  KeLeaveCriticalRegion();
                }
              }
              v38 = 0LL;
              v39 = 1;
              for ( j = 0; j < 0xE; ++j )
              {
                v41 = *((unsigned __int16 *)&off_140BDF750 + 20 * j + 4);
                v42 = *(unsigned __int16 *)v49.Entries[0].EntryLock;
                if ( (_WORD)v42 == (_WORD)v41 )
                {
                  v43 = v42 >> 1;
                  if ( v43 )
                  {
                    v44 = Buf1;
                    v45 = *(_QWORD *)(v49.Entries[0].EntryLock + 8) - (_QWORD)Buf1;
                    v46 = v43;
                    do
                    {
                      *v44 = *(_WORD *)((char *)v44 + v45) ^ ((v39 + 1) | ((_WORD)v39 << 8) | 0x5555);
                      v39 += 2;
                      ++v44;
                      --v46;
                    }
                    while ( v46 );
                    v38 = 0LL;
                  }
                  if ( !memcmp(Buf1, *(&off_140BDF750 + 5 * j), v41) )
                  {
                    v38 = (__int64)*(&off_140BDF750 + 5 * j + 3);
                    break;
                  }
                }
                else
                {
                  v39 += v41;
                }
              }
              if ( v38
                && (LicenseValueFromBlobHelper >= 0
                 || LicenseValueFromBlobHelper == -1073741772
                 || LicenseValueFromBlobHelper == -1073741275) )
              {
                guard_dispatch_icall_no_overrides(a1, *(__int64 *)&v49.Entries[0].EntryFlags);
              }
LABEL_30:
              v6 = (wchar_t *)v47;
              goto LABEL_31;
            }
          }
          else
          {
LABEL_52:
            v30 = a6;
          }
          v32 = 1;
          goto LABEL_54;
        }
      }
    }
  }
  LicenseValueFromBlobHelper = -1073741811;
LABEL_31:
  if ( v49.Entries[0].TreeNode.ParentValue )
    ExFreePoolWithTag((PVOID)v49.Entries[0].TreeNode.ParentValue, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)LicenseValueFromBlobHelper;
}
