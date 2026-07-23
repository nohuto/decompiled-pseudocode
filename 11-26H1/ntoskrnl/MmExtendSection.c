/*
 * XREFs of MmExtendSection @ 0x140A65600
 * Callers:
 *     CcSetFileSizesEx @ 0x1403A0060 (CcSetFileSizesEx.c)
 *     MiCreateSection @ 0x14098B4B4 (MiCreateSection.c)
 *     NtExtendSection @ 0x140A65CF0 (NtExtendSection.c)
 *     MiCommitFileBackedSection @ 0x140A65DF8 (MiCommitFileBackedSection.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140263F30 (MiDereferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x1404419A0 (MiReferenceControlAreaFile.c)
 *     MiFindLastSubsection @ 0x1404466F0 (MiFindLastSubsection.c)
 *     MiLockControlAreaSectionExtend @ 0x1404A8244 (MiLockControlAreaSectionExtend.c)
 *     MiUnlockControlAreaSectionExtend @ 0x1404A89A0 (MiUnlockControlAreaSectionExtend.c)
 *     MI_CHECK_SEGMENT @ 0x1404BDC7C (MI_CHECK_SEGMENT.c)
 *     MiUpdateLastSubsectionSize @ 0x1404D8198 (MiUpdateLastSubsectionSize.c)
 *     MiSubsectionNeedsExtents @ 0x1406FCE18 (MiSubsectionNeedsExtents.c)
 *     MiUpdateActiveSubsection @ 0x1406FCE68 (MiUpdateActiveSubsection.c)
 *     FsRtlGetFileSize @ 0x140A64360 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x140A647F8 (FsRtlSetFileSize.c)
 *     MiExtendSection @ 0x140A6590C (MiExtendSection.c)
 *     MiIncreaseExtendInfo @ 0x140A65C00 (MiIncreaseExtendInfo.c)
 */

__int64 __fastcall MmExtendSection(__int64 a1, LARGE_INTEGER *a2, int a3)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v9; // rdi
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r12
  __int64 v12; // r8
  _QWORD *QuadPart; // r13
  NTSTATUS v14; // r14d
  __int64 LastSubsection; // r15
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r8
  NTSTATUS updated; // eax
  unsigned __int64 v20; // rax
  ULONG_PTR v21; // rax
  struct _FILE_OBJECT *v22; // r15
  LARGE_INTEGER v23; // r14
  int v24; // eax
  _OWORD v25[3]; // [rsp+30h] [rbp-30h] BYREF
  LARGE_INTEGER FileSize; // [rsp+B8h] [rbp+58h] BYREF

  FileSize.QuadPart = 0LL;
  memset(v25, 0, sizeof(v25));
  v6 = MiSectionControlArea(a1);
  v7 = v6;
  if ( (*(_DWORD *)(v6 + 56) & 0x420) != 0 || !*(_QWORD *)(v6 + 64) )
    return 3221225607LL;
  if ( a2->QuadPart <= 0x40000000000000uLL )
  {
    v9 = *(_QWORD *)v6;
    v10 = a2->QuadPart + 4095;
    DWORD2(v25[0]) = 16;
    v11 = v10 >> 12;
    MiLockControlAreaSectionExtend((struct _KTHREAD *)v6, (__int64)v25);
    if ( (*(_DWORD *)(v7 + 56) & 0x20) != 0 || (*(_DWORD *)(v7 + 56) & 0x8000) == 0 )
    {
      v20 = *(_QWORD *)(a1 + 48);
      if ( a2->QuadPart <= v20 )
      {
        a2->QuadPart = v20;
        MiUnlockControlAreaSectionExtend(v7, (__int64)v25);
        return 0LL;
      }
    }
    if ( a3 )
      goto LABEL_8;
    MiUnlockControlAreaSectionExtend(v7, (__int64)v25);
    v21 = MiReferenceControlAreaFile(v7);
    DWORD2(v25[0]) = 32;
    v22 = (struct _FILE_OBJECT *)v21;
    MiLockControlAreaSectionExtend((struct _KTHREAD *)v7, (__int64)v25);
    v14 = FsRtlGetFileSize(v22, &FileSize);
    if ( v14 >= 0 )
    {
      v23 = FileSize;
      if ( a2->QuadPart <= (unsigned __int64)FileSize.QuadPart )
      {
LABEL_25:
        if ( *(_QWORD *)(v9 + 32) )
          ((void (__fastcall *)(_QWORD, _QWORD))MiIncreaseExtendInfo)(v9, (LARGE_INTEGER)v23.QuadPart);
        MiUnlockControlAreaSectionExtend(v7, (__int64)v25);
        MiDereferenceControlAreaFile(v7, (unsigned __int64)v22);
        DWORD2(v25[0]) = 16;
        MiLockControlAreaSectionExtend((struct _KTHREAD *)v7, (__int64)v25);
LABEL_8:
        QuadPart = 0LL;
        FileSize.QuadPart = 0LL;
        v14 = 0;
        LastSubsection = MiFindLastSubsection(v7, 0LL, v12);
        MI_CHECK_SEGMENT((_QWORD *)v9);
        if ( v11 <= v16 )
        {
          *(LARGE_INTEGER *)(a1 + 48) = *a2;
          if ( (unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 24), -1LL, -1LL) < a2->QuadPart )
          {
            _InterlockedExchange64((volatile __int64 *)(v9 + 24), a2->QuadPart);
            MiUpdateLastSubsectionSize(LastSubsection, a2, 0);
          }
          MI_CHECK_SEGMENT((_QWORD *)v9);
        }
        else
        {
          v17 = v11 - v16;
          v18 = *(unsigned int *)(LastSubsection + 52);
          if ( v17 <= v18 )
          {
            if ( (*(_DWORD *)(v7 + 56) & 0x30000000) != 0 && *(_QWORD *)(LastSubsection + 8) )
            {
              MiSubsectionNeedsExtents((_DWORD *)LastSubsection);
              QuadPart = (_QWORD *)LastSubsection;
            }
            updated = MiUpdateLastSubsectionSize(LastSubsection, a2, v17);
          }
          else
          {
            updated = MiExtendSection(
                        LastSubsection,
                        (_DWORD)a2,
                        v18,
                        (int)v17 - *(_DWORD *)(LastSubsection + 52),
                        (__int64)&FileSize);
            QuadPart = (_QWORD *)FileSize.QuadPart;
          }
          v14 = updated;
          MI_CHECK_SEGMENT((_QWORD *)v9);
          if ( v14 >= 0 )
          {
            v14 = 0;
            _InterlockedExchange64((volatile __int64 *)(v9 + 24), a2->QuadPart);
            *(LARGE_INTEGER *)(a1 + 48) = *a2;
          }
        }
        MiUnlockControlAreaSectionExtend(v7, (__int64)v25);
        if ( QuadPart )
          return (unsigned int)MiUpdateActiveSubsection(QuadPart);
        return (unsigned int)v14;
      }
      if ( (*(_DWORD *)(a1 + 60) & 0x44) != 0 )
      {
        v23 = *a2;
        FileSize = *a2;
        v24 = FsRtlSetFileSize(v22, (__int64 *)&FileSize);
        if ( v24 >= 0 )
          goto LABEL_25;
        v14 = v24;
      }
      else
      {
        v14 = -1073741689;
      }
    }
    MiUnlockControlAreaSectionExtend(v7, (__int64)v25);
    MiDereferenceControlAreaFile(v7, (unsigned __int64)v22);
    return (unsigned int)v14;
  }
  return 3221225536LL;
}
