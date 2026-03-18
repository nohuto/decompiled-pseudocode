/*
 * XREFs of MiShowBadMapper @ 0x1403669CC
 * Callers:
 *     MiDecommitFreePagesTail @ 0x1402DA750 (MiDecommitFreePagesTail.c)
 *     MiMapMdlCommon @ 0x140312C2C (MiMapMdlCommon.c)
 *     MiFillSystemPtes @ 0x14035F448 (MiFillSystemPtes.c)
 *     MiInsertPhysicalPteMapping @ 0x140366150 (MiInsertPhysicalPteMapping.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140261920 (RtlCaptureStackBackTrace.c)
 *     MmUnlockLoadedModuleListShared @ 0x140366D8C (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x140366E14 (MmLockLoadedModuleListShared.c)
 *     MmFindDataTableEntryByAddress @ 0x140366EA0 (MmFindDataTableEntryByAddress.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     RtlAppendUnicodeToString @ 0x140432EB0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140432F70 (RtlAppendUnicodeStringToString.c)
 *     MiLogBadMapper @ 0x140459AC0 (MiLogBadMapper.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiShowBadMapper(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3)
{
  char v3; // si
  unsigned int v4; // r12d
  ULONG_PTR v5; // r14
  unsigned __int16 MaximumLength; // di
  BOOL v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  char v11; // r13
  unsigned int i; // r15d
  __int64 DataTableEntryByAddress; // rax
  unsigned __int16 v14; // r11
  __int64 v15; // r14
  int v16; // eax
  int v17; // ecx
  __int64 v18; // rcx
  unsigned int v19; // [rsp+30h] [rbp-E8h]
  UNICODE_STRING Destination; // [rsp+40h] [rbp-D8h] BYREF
  ULONG BackTraceHash; // [rsp+50h] [rbp-C8h] BYREF
  int v23; // [rsp+54h] [rbp-C4h]
  PVOID BackTrace[16]; // [rsp+60h] [rbp-B8h] BYREF

  v3 = a3;
  v23 = a3;
  v4 = BugCheckParameter3;
  v19 = BugCheckParameter3;
  v5 = BugCheckParameter2;
  MaximumLength = 128;
  BackTraceHash = 0;
  memset_0(BackTrace, 0, sizeof(BackTrace));
  Destination = 0LL;
  v7 = dword_140FBE26C != 0;
  if ( (v3 & 1) != 0 && !KdPitchDebugger && !(_BYTE)KdDebuggerNotPresent )
  {
    v7 = 1;
    goto LABEL_27;
  }
  if ( v7 )
    goto LABEL_27;
  RtlCaptureStackBackTrace(1u, 0x10u, BackTrace, &BackTraceHash);
  Destination.MaximumLength = 128;
  v8 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  LODWORD(v8) = v8 | 0x80000000;
  Destination.Buffer = (wchar_t *)ExAllocatePoolMm(64LL, 128LL, 538996045LL, v8);
  if ( !Destination.Buffer )
  {
    MaximumLength = 0;
    Destination.MaximumLength = 0;
  }
  v9 = 0LL;
  v11 = MmLockLoadedModuleListShared();
  for ( i = 0; i < 0x10; ++i )
  {
    v10 = (unsigned __int64)BackTrace[i];
    if ( v10 < 0x7FFFFFFF0000LL )
      break;
    DataTableEntryByAddress = MmFindDataTableEntryByAddress();
    v15 = DataTableEntryByAddress;
    if ( DataTableEntryByAddress )
    {
      if ( (v23 & 2) != 0
        && (*(_DWORD *)(DataTableEntryByAddress + 104) & 0x2000000) != 0
        && (VfRuleClasses & 0x400000) == 0 )
      {
        v7 = 1;
        break;
      }
      if ( Destination.Buffer && (!v9 || v9 != DataTableEntryByAddress) )
      {
        v16 = *(unsigned __int16 *)(DataTableEntryByAddress + 88);
        v17 = v16 + 2;
        if ( !v9 )
          v17 = v16;
        v10 = (unsigned int)v14 + v17;
        if ( (unsigned int)v10 > MaximumLength )
        {
          MaximumLength = v14;
          Destination.MaximumLength = v14;
        }
        else
        {
          if ( v9 )
            RtlAppendUnicodeToString(&Destination, L" ");
          RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)(v15 + 88));
          v9 = v15;
          MaximumLength = Destination.MaximumLength;
        }
      }
    }
  }
  LOBYTE(v10) = v11;
  MmUnlockLoadedModuleListShared(v10);
  if ( v7 )
  {
LABEL_26:
    v5 = BugCheckParameter2;
    v4 = v19;
    goto LABEL_27;
  }
  if ( !stru_140E36558.FirstArgument )
  {
    _InterlockedIncrement((volatile signed __int32 *)&stru_140E2EB88.SchedulerApcFill5[76]);
    goto LABEL_26;
  }
  _InterlockedIncrement((volatile signed __int32 *)&stru_140E2EB88.SchedulerApcFill5[80]);
  if ( !*(_DWORD *)stru_140E36558.FirstArgument
    || (*((_QWORD *)stru_140E36558.FirstArgument + 2) & 0x400000000080LL) == 0 )
  {
    goto LABEL_26;
  }
  v18 = *((_QWORD *)stru_140E36558.FirstArgument + 3);
  v4 = v19;
  v5 = BugCheckParameter2;
  if ( (v18 & 0x400000000080LL) == v18 )
    MiLogBadMapper(v18, BugCheckParameter2, v19, &Destination);
LABEL_27:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v7 )
    KeBugCheckEx(0x1Au, 0x1233uLL, v5, v4, 0LL);
}
