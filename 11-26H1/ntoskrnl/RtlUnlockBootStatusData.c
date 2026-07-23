/*
 * XREFs of RtlUnlockBootStatusData @ 0x140ACDFB0
 * Callers:
 *     PopBootStatUnlock @ 0x140773008 (PopBootStatUnlock.c)
 *     PoClearTransitionMarker @ 0x1407CB8BC (PoClearTransitionMarker.c)
 *     PopBootStatCheckIntegrity @ 0x1407DEB68 (PopBootStatCheckIntegrity.c)
 *     PopBootStatSet @ 0x140ACD7B0 (PopBootStatSet.c)
 *     PopBootStatRestoreDefaults @ 0x140B53F84 (PopBootStatRestoreDefaults.c)
 *     PopBootStatGet @ 0x140B6AD34 (PopBootStatGet.c)
 * Callees:
 *     RtlpAcquireBootStatusLock @ 0x1404DD410 (RtlpAcquireBootStatusLock.c)
 *     RtlpReleaseBootStatusLock @ 0x1404E8D18 (RtlpReleaseBootStatusLock.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwFsControlFile @ 0x1407286E0 (ZwFsControlFile.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlUnlockBootStatusData(HANDLE FileHandle)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  struct _KLOCK_ENTRIES *v3; // r9
  HANDLE v4; // rbx
  int v5; // eax
  char v6; // di
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  __int16 InputBuffer; // [rsp+78h] [rbp+10h] BYREF

  IoStatusBlock = 0LL;
  InputBuffer = 0;
  v4 = FileHandle;
  RtlpAcquireBootStatusLock((__int64)FileHandle, v1, v2, v3);
  if ( !HIDWORD(NormalizationListLock.SchedulingGroup) )
    goto LABEL_6;
  v5 = HIDWORD(NormalizationListLock.SchedulingGroup) - 1;
  v6 = 0;
  --HIDWORD(NormalizationListLock.SchedulingGroup);
  if ( !BYTE4(NormalizationListLock.CycleTime) )
    goto LABEL_7;
  if ( !v4 )
  {
    v4 = *(HANDLE *)&NormalizationListLock.CurrentRunTime;
LABEL_14:
    HIDWORD(NormalizationListLock.SchedulingGroup) = 0;
    v6 = 1;
    *(_QWORD *)&NormalizationListLock.CurrentRunTime = 0LL;
    BYTE4(NormalizationListLock.CycleTime) = 0;
    LOBYTE(NormalizationListLock.SchedulingGroup) = 0;
LABEL_7:
    if ( !v4 )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( !LOBYTE(NormalizationListLock.SchedulingGroup) && !v5 )
    goto LABEL_14;
LABEL_5:
  ZwFsControlFile(v4, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9C040u, &InputBuffer, 2u, 0LL, 0);
  if ( v6 )
  {
    if ( NormalizationListLock.StateSaveArea )
    {
      ExFreePoolWithTag(NormalizationListLock.StateSaveArea, 0);
      NormalizationListLock.StateSaveArea = 0LL;
    }
    ZwClose(v4);
  }
LABEL_6:
  RtlpReleaseBootStatusLock();
  return result;
}
