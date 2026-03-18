/*
 * XREFs of MiCreatePatchSectionRequest @ 0x14086F788
 * Callers:
 *     NtManageHotPatch @ 0x140A993D0 (NtManageHotPatch.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027F600 (MiUnlockAndDereferenceVad.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     MiWriteVadFlags @ 0x1404737D0 (MiWriteVadFlags.c)
 *     MiGetVadForHotPatchInProgress @ 0x140870088 (MiGetVadForHotPatchInProgress.c)
 *     MiLogHotPatchOperationStatus @ 0x140871F28 (MiLogHotPatchOperationStatus.c)
 *     MiOpenHotPatchFile @ 0x140873028 (MiOpenHotPatchFile.c)
 *     MiCreateSectionCommon @ 0x1409B9D9C (MiCreateSectionCommon.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A99998 (MiFindProcessImageHotPatchRecord.c)
 */

__int64 __fastcall MiCreatePatchSectionRequest(__int64 a1, KPROCESSOR_MODE a2)
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
  int v15; // edx
  int v16; // eax
  int v17; // [rsp+28h] [rbp-C0h]
  ULONGLONG ullMultiplicand; // [rsp+40h] [rbp-A8h]
  __int64 v19; // [rsp+60h] [rbp-88h] BYREF
  PVOID P; // [rsp+68h] [rbp-80h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-78h] BYREF
  __int128 v22; // [rsp+80h] [rbp-68h] BYREF
  __int128 v23; // [rsp+90h] [rbp-58h]
  __int128 v24; // [rsp+A0h] [rbp-48h]
  unsigned int v25; // [rsp+F0h] [rbp+8h] BYREF
  __int64 v26; // [rsp+100h] [rbp+18h]
  HANDLE Handle; // [rsp+108h] [rbp+20h] BYREF

  v25 = 0;
  v26 = 0LL;
  *(_QWORD *)&v24 = 0LL;
  DWORD2(v24) = 0;
  P = 0LL;
  UnicodeString = 0LL;
  v4 = 0LL;
  v19 = 0LL;
  v22 = 0LL;
  Handle = 0LL;
  v23 = 0LL;
  RtlInitUnicodeString(&UnicodeString, 0LL);
  if ( *(_DWORD *)a1 == 1
    && !*(_DWORD *)(a1 + 4)
    && (v8 = *(_QWORD *)(a1 + 24)) != 0
    && (*(_DWORD *)(a1 + 16) & 0x1000000) != 0
    && (*(_DWORD *)(a1 + 12) & 0xF0) != 0 )
  {
    VadForHotPatchInProgress = MiGetVadForHotPatchInProgress(v8, 0LL, &P, &v25);
    if ( VadForHotPatchInProgress >= 0 )
    {
      v9 = (volatile signed __int32 *)P;
      v10 = *(_QWORD *)(***((_QWORD ***)P + 10) + 56LL);
      v12 = *(_DWORD *)(v10 + 72);
      LODWORD(v26) = *(_DWORD *)(v10 + 60);
      v11 = v26;
      HIDWORD(v26) = v12;
      MiWriteVadFlags((__int64)P, 4LL, v25);
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
        v14 = MiOpenHotPatchFile((unsigned int)&UnicodeString, 0, 0, (unsigned int)&v19, 0LL, 0LL, 0LL, 0LL);
        v4 = (void *)v19;
        VadForHotPatchInProgress = v14;
        if ( v14 >= 0 )
        {
          v15 = *(_DWORD *)(a1 + 8);
          LODWORD(ullMultiplicand) = 0;
          v17 = *(_DWORD *)(a1 + 16);
          v16 = *(_DWORD *)(a1 + 12);
          DWORD2(v23) = a2 == 0 ? 0x200 : 0;
          LODWORD(v22) = 48;
          *((_QWORD *)&v22 + 1) = 0LL;
          *(_QWORD *)&v23 = 0LL;
          v24 = 0LL;
          VadForHotPatchInProgress = MiCreateSectionCommon(
                                       (int)&Handle,
                                       v15,
                                       (int)&v22,
                                       0,
                                       v16,
                                       v17,
                                       v19,
                                       0LL,
                                       ullMultiplicand,
                                       6,
                                       0);
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
  if ( stru_140E36558.FirstArgument
    && *(_DWORD *)stru_140E36558.FirstArgument
    && tlgKeywordOn((__int64)stru_140E36558.FirstArgument, 0x400000000020LL) )
  {
    MiLogHotPatchOperationStatus(v6, v26, HIDWORD(v26), (unsigned int)&UnicodeString, VadForHotPatchInProgress, 7);
  }
LABEL_7:
  if ( v4 )
    ObCloseHandle(v4, 0);
  if ( Handle )
    ObCloseHandle(Handle, a2);
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)VadForHotPatchInProgress;
}
