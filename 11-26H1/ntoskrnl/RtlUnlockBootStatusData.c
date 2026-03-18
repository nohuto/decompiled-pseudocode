/*
 * XREFs of RtlUnlockBootStatusData @ 0x140ACBD70
 * Callers:
 *     PopBootStatUnlock @ 0x140770008 (PopBootStatUnlock.c)
 *     PoClearTransitionMarker @ 0x1407C881C (PoClearTransitionMarker.c)
 *     PopBootStatCheckIntegrity @ 0x1407DAC78 (PopBootStatCheckIntegrity.c)
 *     PopBootStatSet @ 0x140ACB570 (PopBootStatSet.c)
 *     PopBootStatRestoreDefaults @ 0x140B516E4 (PopBootStatRestoreDefaults.c)
 *     PopBootStatGet @ 0x140B67DA4 (PopBootStatGet.c)
 * Callees:
 *     RtlpAcquireBootStatusLock @ 0x1404E3E70 (RtlpAcquireBootStatusLock.c)
 *     RtlpReleaseBootStatusLock @ 0x1404EF738 (RtlpReleaseBootStatusLock.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwFsControlFile @ 0x140723B10 (ZwFsControlFile.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall RtlUnlockBootStatusData(__int64 Handle, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  HANDLE CycleTime; // rbx
  int v5; // eax
  char v6; // di
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  __int16 InputBuffer; // [rsp+78h] [rbp+10h] BYREF

  IoStatusBlock = 0LL;
  InputBuffer = 0;
  CycleTime = (HANDLE)Handle;
  RtlpAcquireBootStatusLock(Handle, a2, a3, a4);
  if ( !HIDWORD(NormalizationListLock.StateSaveArea) )
    goto LABEL_6;
  v5 = HIDWORD(NormalizationListLock.StateSaveArea) - 1;
  v6 = 0;
  --HIDWORD(NormalizationListLock.StateSaveArea);
  if ( !LOBYTE(NormalizationListLock.CurrentRunTime) )
    goto LABEL_7;
  if ( !CycleTime )
  {
    CycleTime = (HANDLE)NormalizationListLock.CycleTime;
LABEL_14:
    HIDWORD(NormalizationListLock.StateSaveArea) = 0;
    v6 = 1;
    NormalizationListLock.CycleTime = 0LL;
    LOWORD(NormalizationListLock.CurrentRunTime) = 0;
LABEL_7:
    if ( !CycleTime )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( !BYTE1(NormalizationListLock.CurrentRunTime) && !v5 )
    goto LABEL_14;
LABEL_5:
  ZwFsControlFile(CycleTime, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9C040u, &InputBuffer, 2u, 0LL, 0);
  if ( v6 )
  {
    if ( NormalizationListLock.KernelStack )
    {
      ExFreePoolWithTag(NormalizationListLock.KernelStack, 0);
      NormalizationListLock.KernelStack = 0LL;
    }
    ZwClose(CycleTime);
  }
LABEL_6:
  RtlpReleaseBootStatusLock();
}
