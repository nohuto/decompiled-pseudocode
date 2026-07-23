/*
 * XREFs of MiCreatePatchSectionRequest @ 0x140875B58
 * Callers:
 *     NtManageHotPatch @ 0x140A9D550 (NtManageHotPatch.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     MiWriteVadFlags @ 0x14046CF50 (MiWriteVadFlags.c)
 *     MiGetVadForHotPatchInProgress @ 0x1408763E8 (MiGetVadForHotPatchInProgress.c)
 *     MiLogHotPatchOperationStatus @ 0x140878288 (MiLogHotPatchOperationStatus.c)
 *     MiOpenHotPatchFile @ 0x140879388 (MiOpenHotPatchFile.c)
 *     MmCreateSectionForHotpatch @ 0x14087AE7C (MmCreateSectionForHotpatch.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A9DB18 (MiFindProcessImageHotPatchRecord.c)
 */

__int64 __fastcall MiCreatePatchSectionRequest(__int64 a1, char a2)
{
  void *v4; // r15
  int VadForHotPatchInProgress; // ebx
  int v6; // r10d
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rdi
  __int64 v10; // r8
  int v11; // esi
  int v12; // ebx
  int ProcessImageHotPatchRecord; // eax
  int v14; // eax
  void *v15; // [rsp+40h] [rbp-48h] BYREF
  PVOID P; // [rsp+48h] [rbp-40h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+90h] [rbp+8h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+18h]
  HANDLE Handle; // [rsp+A8h] [rbp+20h] BYREF

  v19 = 0LL;
  v18 = 0;
  P = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  UnicodeString = 0LL;
  Handle = 0LL;
  RtlInitUnicodeString(&UnicodeString, 0LL);
  if ( *(_DWORD *)a1 == 1
    && !*(_DWORD *)(a1 + 4)
    && (v8 = *(_QWORD *)(a1 + 24)) != 0
    && (*(_DWORD *)(a1 + 16) & 0x1000000) != 0
    && (*(_DWORD *)(a1 + 12) & 0xF0) != 0 )
  {
    VadForHotPatchInProgress = MiGetVadForHotPatchInProgress(v8, 0LL, &P, &v18);
    if ( VadForHotPatchInProgress >= 0 )
    {
      v9 = (volatile signed __int32 *)P;
      v10 = *(_QWORD *)(***((_QWORD ***)P + 10) + 56LL);
      v12 = *(_DWORD *)(v10 + 72);
      LODWORD(v19) = *(_DWORD *)(v10 + 60);
      v11 = v19;
      HIDWORD(v19) = v12;
      MiWriteVadFlags((__int64)P, 4LL, v18);
      MiUnlockAndDereferenceVad(v9);
      ProcessImageHotPatchRecord = MiFindProcessImageHotPatchRecord(
                                     KeGetCurrentThread()->ApcState.Process,
                                     v11,
                                     v12,
                                     0,
                                     (__int64)&UnicodeString);
      VadForHotPatchInProgress = ProcessImageHotPatchRecord;
      if ( ProcessImageHotPatchRecord >= 0 )
      {
        v14 = MiOpenHotPatchFile((unsigned int)&UnicodeString, 0, 0, (unsigned int)&v15, 0LL, 0LL, 0LL, 0LL);
        v4 = v15;
        VadForHotPatchInProgress = v14;
        if ( v14 >= 0 )
        {
          VadForHotPatchInProgress = MmCreateSectionForHotpatch(
                                       (_DWORD)v15,
                                       *(_DWORD *)(a1 + 8),
                                       *(_DWORD *)(a1 + 12),
                                       *(_DWORD *)(a1 + 16),
                                       a2,
                                       (unsigned int)&Handle);
          if ( VadForHotPatchInProgress >= 0 )
          {
            VadForHotPatchInProgress = 0;
            *(_QWORD *)(a1 + 32) = Handle;
            Handle = 0LL;
            goto LABEL_7;
          }
        }
      }
      else if ( ProcessImageHotPatchRecord == -1073741275 )
      {
        VadForHotPatchInProgress = -1073740588;
      }
    }
  }
  else
  {
    VadForHotPatchInProgress = -1073741811;
  }
  if ( stru_140E366D8.FirstArgument
    && *(_DWORD *)stru_140E366D8.FirstArgument
    && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000020LL) )
  {
    MiLogHotPatchOperationStatus(v6, v19, HIDWORD(v19), (unsigned int)&UnicodeString, VadForHotPatchInProgress, 7);
  }
LABEL_7:
  if ( v4 )
    ObCloseHandle(v4, 0);
  if ( Handle )
    ObCloseHandle(Handle, a2);
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)VadForHotPatchInProgress;
}
