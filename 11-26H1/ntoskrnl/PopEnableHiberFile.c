/*
 * XREFs of PopEnableHiberFile @ 0x1409BEEB4
 * Callers:
 *     PopNotifyPolicyDevice @ 0x1407DAD80 (PopNotifyPolicyDevice.c)
 *     PopHibernateEvaluation @ 0x1409BEDDC (PopHibernateEvaluation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     MmGetHighestPhysicalPage @ 0x1404BD3D0 (MmGetHighestPhysicalPage.c)
 *     PopOpenPowerKey @ 0x1404E1064 (PopOpenPowerKey.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopCreateHiberFile @ 0x1407D2BAC (PopCreateHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x1407D356C (PopPreallocateHibernateMemory.c)
 *     PopZeroHiberFile @ 0x1407D3F4C (PopZeroHiberFile.c)
 *     MmZeroPageFileAtShutdown @ 0x14086AC94 (MmZeroPageFileAtShutdown.c)
 *     PopResetCurrentPolicies @ 0x1409BEAA8 (PopResetCurrentPolicies.c)
 *     PopCheckDisabledReason @ 0x1409BEE7C (PopCheckDisabledReason.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1409C0A18 (PopRemoveReasonRecordByReasonCode.c)
 *     PopLogSleepDisabled @ 0x1409C11F0 (PopLogSleepDisabled.c)
 *     PopCalculateHiberFileSize @ 0x140B03088 (PopCalculateHiberFileSize.c)
 *     MmReleaseDumpHibernateResources @ 0x140B1D0CC (MmReleaseDumpHibernateResources.c)
 *     PopClearHiberFileSignature @ 0x140B1D150 (PopClearHiberFileSignature.c)
 *     MmAllocateDumpHibernateResources @ 0x140B2C898 (MmAllocateDumpHibernateResources.c)
 *     MmReturnChargesToLockPagedPool @ 0x140B60320 (MmReturnChargesToLockPagedPool.c)
 *     EmClientQueryRuleState @ 0x140C09B60 (EmClientQueryRuleState.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopEnableHiberFile(char a1)
{
  int v1; // ebx
  PVOID v3; // r15
  __int64 v4; // rsi
  PVOID v5; // r12
  unsigned int v6; // r14d
  int v7; // ecx
  bool v8; // zf
  char v9; // r11
  char v10; // di
  HANDLE v11; // rbx
  __int64 DumpHibernateResources; // rax
  unsigned __int64 v13; // rdi
  int HiberFile; // eax
  void *Pool2; // rax
  _BYTE v17[8]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v18; // [rsp+40h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-19h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-9h] BYREF
  UNICODE_STRING v23; // [rsp+78h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+88h] [rbp+17h] BYREF
  int v25; // [rsp+98h] [rbp+27h]

  v1 = 0;
  v18 = 0LL;
  v17[0] = 0;
  ResultLength = 0;
  v25 = 0;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  v3 = 0LL;
  v23 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  KeyValueInformation = 0LL;
  ValueName = 0LL;
  PopRemoveReasonRecordByReasonCode(6LL);
  PopRemoveReasonRecordByReasonCode(8LL);
  PopRemoveReasonRecordByReasonCode(22LL);
  PopRemoveReasonRecordByReasonCode(23LL);
  PopRemoveReasonRecordByReasonCode(24LL);
  PopRemoveReasonRecordByReasonCode(25LL);
  v6 = (unsigned __int64)MmGetHighestPhysicalPage(0) >= 0x100000000LL ? 8 : 0;
  if ( !PopCheckDisabledReason() && !PopCheckDisabledReason() )
    PopCheckDisabledReason();
  if ( PopCheckDisabledReason() )
  {
    v7 = -1073741637;
    v1 = -1073741637;
    LODWORD(v18) = -1073741637;
    goto LABEL_13;
  }
  v8 = PopCheckDisabledReason() == 0;
  v10 = v9;
  if ( !v8 )
    v10 = 1;
  if ( a1 )
  {
    if ( FileObject )
      goto LABEL_53;
    dword_140F10924 = 1;
    dword_140F10904 = 1601;
    byte_140F10921 = 0;
    dword_140F109B8 = 0;
    if ( (int)PopOpenPowerKey((__int64)&KeyHandle) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"MaxHuffRatio");
      v11 = KeyHandle;
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        dword_140F10924 = HIDWORD(KeyValueInformation);
        if ( (unsigned int)(HIDWORD(KeyValueInformation) - 1) > 0x62 )
          dword_140F10924 = 1;
      }
      RtlInitUnicodeString(&ValueName, L"HybridBootAnimationTime");
      v25 = 0;
      KeyValueInformation = 0LL;
      if ( ZwQueryValueKey(v11, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        dword_140F10904 = HIDWORD(KeyValueInformation);
      }
      RtlInitUnicodeString(&v23, L"MultiPhaseResumeDisabled");
      v25 = 0;
      KeyValueInformation = 0LL;
      if ( ZwQueryValueKey(v11, &v23, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        byte_140F10921 = HIDWORD(KeyValueInformation) == 1;
        dword_140F109B8 |= 0x20u;
      }
      ZwClose(v11);
    }
    PopHiberEnabled = 1;
    if ( v10 )
    {
      v7 = -1073741637;
    }
    else
    {
      DumpHibernateResources = MmAllocateDumpHibernateResources(77824LL);
      v4 = DumpHibernateResources;
      if ( DumpHibernateResources )
      {
        v13 = DumpHibernateResources + 0x200000;
        if ( (DumpHibernateResources & 0x1FFFFF) != 0 )
          v13 = (DumpHibernateResources + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
        if ( v13 - DumpHibernateResources >= 0xA000 )
          v13 = DumpHibernateResources;
        PopCalculateHiberFileSize(&v18, v17);
        HiberFile = PopCreateHiberFile(v18);
        LODWORD(v18) = HiberFile;
        v1 = HiberFile;
        if ( HiberFile >= 0 )
        {
          *(_QWORD *)&xmmword_140F10908 = v4;
          v4 = 0LL;
          *((_QWORD *)&xmmword_140F10908 + 1) = v13;
          Pool2 = (void *)ExAllocatePool2(0x40uLL);
          v3 = Pool2;
          if ( !Pool2 )
          {
            v7 = -1073741670;
            v6 = 24;
            goto LABEL_30;
          }
          MemoryMap = Pool2;
          v3 = 0LL;
          HiberFile = PopPreallocateHibernateMemory();
          LODWORD(v18) = HiberFile;
          v1 = HiberFile;
          if ( HiberFile >= 0 )
          {
            LODWORD(v18) = 1;
            EmClientQueryRuleState(EM_RULE_DISABLE_MULTI_PHASE_RESUME, &v18);
            if ( (_DWORD)v18 == 2 )
            {
              dword_140F109B8 |= 0x10u;
              byte_140F10921 = 1;
            }
            BYTE6(PpmIdlePolicyLock.Padding[3]) = v17[0];
            LOBYTE(PpmIdlePolicyLock.Padding[2]) = 1;
            if ( !InitSafeBootMode )
              BYTE2(PpmIdlePolicyLock.Padding[3]) = 1;
            if ( (stru_140E67200.InGlobalForegroundList & 1) == 0 )
              PopClearHiberFileSignature();
            PopResetCurrentPolicies();
            v1 = 0;
            goto LABEL_53;
          }
          v6 = 25;
        }
        else
        {
          v6 = 6;
        }
        v7 = HiberFile;
LABEL_44:
        if ( (PopSimulateHiberBugcheck & 0x800) != 0 )
          KeBugCheckEx(0xA0u, 9uLL, v7, 0xFFFFFFFFFFFFFFFFuLL, v6);
        goto LABEL_54;
      }
      v7 = -1073741670;
      v6 = 23;
    }
LABEL_30:
    v1 = v7;
    LODWORD(v18) = v7;
    goto LABEL_44;
  }
  PopHiberEnabled = 0;
  if ( !FileObject )
  {
LABEL_53:
    LODWORD(v18) = 0;
    goto LABEL_54;
  }
  if ( (unsigned int)MmZeroPageFileAtShutdown() )
    PopZeroHiberFile(PopHiberInfo, (__int64)FileObject);
  ObfDereferenceObjectWithTag(FileObject, 0x62486F50u);
  ZwClose(PopHiberInfo);
  ExFreePoolWithTag(qword_140F108F8, 0x72626968u);
  v4 = xmmword_140F10908;
  v5 = qword_140F10930;
  v3 = MemoryMap;
  xmmword_140F10908 = 0LL;
  LOBYTE(PpmIdlePolicyLock.Padding[2]) = 0;
  BYTE6(PpmIdlePolicyLock.Padding[3]) = 0;
  BYTE2(PpmIdlePolicyLock.Padding[3]) = 0;
  qword_140F10918 = 0LL;
  v1 = PopResetCurrentPolicies();
  LODWORD(v18) = v1;
  v7 = v1;
  if ( v1 < 0 )
  {
LABEL_13:
    if ( !a1 )
      goto LABEL_54;
    goto LABEL_44;
  }
LABEL_54:
  if ( v6 )
  {
    PopLogSleepDisabled(v6, 8LL, &v18, 4LL);
    v1 = v18;
  }
  if ( v4 )
    MmReleaseDumpHibernateResources(v4, 77824LL);
  if ( v5 )
  {
    MmReturnChargesToLockPagedPool(v5, Length);
    ExFreePoolWithTag(v5, 0);
    memset_0(&qword_140F10930, 0, 0x88uLL);
  }
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x70616D48u);
    MemoryMap = 0LL;
  }
  if ( !a1 )
    memset_0(&PopHiberInfo, 0, 0xE8uLL);
  return (unsigned int)v1;
}
