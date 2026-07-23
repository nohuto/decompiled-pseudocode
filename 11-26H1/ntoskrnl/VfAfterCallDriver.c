/*
 * XREFs of VfAfterCallDriver @ 0x140C320AC
 * Callers:
 *     IovCallDriver @ 0x1404ECCDC (IovCallDriver.c)
 *     IovCallDriverWithStackBuffer @ 0x140C3084C (IovCallDriverWithStackBuffer.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140263850 (KeAreInterruptsEnabled.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfBugCheckNoStackUsage @ 0x140646BD0 (VfBugCheckNoStackUsage.c)
 *     ViErrorReport1 @ 0x14064927C (ViErrorReport1.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     IovpCallDriver2 @ 0x140C3187C (IovpCallDriver2.c)
 */

void __fastcall VfAfterCallDriver(__int64 a1, int *a2)
{
  __int64 v4; // rdi
  ULONG *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  ULONG_PTR CombinedApcDisable; // rcx
  __int64 v9; // rdx
  _SLIST_ENTRY *v10; // rdx

  if ( a1 )
  {
    v4 = 0LL;
    if ( !KeAreInterruptsEnabled() && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
    {
      *(_BYTE *)(a1 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
      BugCheckParameter1 = 193LL;
      *(_QWORD *)&VfBugcheckTmpData = 196LL;
      qword_140FF0ED8 = *(_QWORD *)(a1 + 48);
      *(_OWORD *)&xmmword_140FF0EE0 = 0LL;
      VfBugCheckNoStackUsage();
    }
    if ( *(_BYTE *)(a1 + 156) != KeGetCurrentIrql() && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
    {
      *(_BYTE *)(a1 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
      qword_140FF0ED8 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)&VfBugcheckTmpData = 201LL;
      BugCheckParameter1 = 18LL;
      do
      {
        *((_QWORD *)&VfBugcheckTmpData + v4 + 3) = *(unsigned __int8 *)(a1 + v4 + 156);
        ++v4;
      }
      while ( v4 < 2 );
      VfBugCheckNoStackUsage();
    }
    if ( *(_DWORD *)(a1 + 188) != KeGetCurrentThread()->WaitBlock[3].SpareLong
      && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
    {
      *(_BYTE *)(a1 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
      v5 = &VfBugcheckTmpData;
      v6 = 196LL;
      v7 = 2LL;
      do
      {
        *(_QWORD *)v5 = v6++;
        v5 += 2;
        --v7;
      }
      while ( v7 );
      qword_140FF0ED8 = *(_QWORD *)(a1 + 48);
      CombinedApcDisable = KeGetCurrentThread()->CombinedApcDisable;
      *(&xmmword_140FF0EE0 + 1) = *(unsigned int *)(a1 + 188);
      xmmword_140FF0EE0 = CombinedApcDisable;
      VfBugCheckNoStackUsage();
    }
    if ( (MmVerifierData & 0x10) != 0 && (*(_DWORD *)(a1 + 152) & 2) != 0 && *a2 == 259 )
    {
      ViErrorReport1(0x307u, *(const void **)(a1 + 176), *(const void **)(a1 + 168));
    }
    else if ( (*(_DWORD *)(a1 + 152) & 1) != 0 )
    {
      IovpCallDriver2(a1, a2);
    }
    v9 = *(_QWORD *)(a1 + 208);
    if ( v9 )
    {
      *(_OWORD *)v9 = 0LL;
      *(_OWORD *)(v9 + 16) = 0LL;
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)&stru_140E27C48.QueueListEntry, (PSLIST_ENTRY)v9);
      _InterlockedDecrement(&IovIrpStackTrackerCount);
    }
    v10 = *(_SLIST_ENTRY **)(a1 + 200);
    if ( v10 )
    {
      *v10 = 0LL;
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)&stru_140E27C48.WaitBlockFill11[168], v10);
      _InterlockedDecrement(&IovIrpTrackerCount);
    }
    if ( *(_BYTE *)(a1 + 192) )
      ExReleaseRundownProtection_0(&IovRundown);
  }
}
