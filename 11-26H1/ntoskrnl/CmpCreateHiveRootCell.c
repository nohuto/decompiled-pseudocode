/*
 * XREFs of CmpCreateHiveRootCell @ 0x140B4D6CC
 * Callers:
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140861458 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     CmpRecordParseFailure @ 0x1408CCA90 (CmpRecordParseFailure.c)
 *     HvUnlockHiveFlusherShared @ 0x1408D65AC (HvUnlockHiveFlusherShared.c)
 *     HvFreeCell @ 0x1408D7AE8 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     HvLockHiveWriter @ 0x1408E1470 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408E14D4 (HvUnlockHiveWriter.c)
 *     HvAllocateCell @ 0x1408E1DBC (HvAllocateCell.c)
 *     CmpNameSize @ 0x1408E3D10 (CmpNameSize.c)
 *     CmpCopyName @ 0x1408E3D50 (CmpCopyName.c)
 *     CmLockHiveSecurityExclusive @ 0x1408E575C (CmLockHiveSecurityExclusive.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1408E5828 (CmpGetSecurityDescriptorNodeEx.c)
 *     SeAssignSecurity @ 0x1408E7210 (SeAssignSecurity.c)
 *     SeDeassignSecurity @ 0x140AAC280 (SeDeassignSecurity.c)
 *     HvMarkBaseBlockDirty @ 0x140AE1304 (HvMarkBaseBlockDirty.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140AEE648 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmUnlockHiveSecurity @ 0x140C5EBA8 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpCreateHiveRootCell(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int *a5)
{
  void *v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  unsigned int v12; // r12d
  int v13; // eax
  char *v14; // r15
  int SecurityDescriptorNode; // edi
  int v16; // edx
  int v17; // r8d
  unsigned int v18; // r14d
  unsigned __int16 v19; // ax
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _KLOCK_ENTRIES *v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  struct _KLOCK_ENTRIES *v25; // r9
  int v26; // edx
  PSECURITY_DESCRIPTOR v27; // r12
  __int64 v28; // rsi
  void *v29; // rcx
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+40h] [rbp-20h] BYREF
  __int64 v32; // [rsp+48h] [rbp-18h] BYREF
  void *v33; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+90h] [rbp+30h] BYREF

  LODWORD(BugCheckParameter3) = -1;
  v32 = 0LL;
  v33 = 0LL;
  HvpGetCellContextInitialize(&v32);
  NewDescriptor = v9;
  HvLockHiveFlusherShared(BugCheckParameter2, (__int64)v9, v10, v11);
  v12 = (unsigned __int16)CmpNameSize(a3) + 76;
  v13 = HvAllocateCell(BugCheckParameter2, v12, 0, (unsigned int *)&BugCheckParameter3, &v33, (__int64)&v32);
  v14 = (char *)v33;
  SecurityDescriptorNode = v13;
  if ( v13 < 0 )
  {
    v16 = 196864;
LABEL_3:
    v17 = v13;
LABEL_4:
    CmpRecordParseFailure(a4, v16, v17);
    v18 = BugCheckParameter3;
    goto LABEL_18;
  }
  memset_0(v33, 0, v12);
  *(_DWORD *)v14 = 813934;
  *(_QWORD *)(v14 + 4) = MEMORY[0xFFFFF78000000014];
  *((_DWORD *)v14 + 4) = -1;
  *((_DWORD *)v14 + 7) = -1;
  *((_DWORD *)v14 + 8) = -1;
  *((_DWORD *)v14 + 10) = -1;
  *((_DWORD *)v14 + 11) = -1;
  *((_DWORD *)v14 + 12) = -1;
  v19 = CmpCopyName(v14 + 76, (const void **)a3);
  *((_WORD *)v14 + 36) = v19;
  if ( v19 < *a3 )
    *((_WORD *)v14 + 1) |= 0x20u;
  if ( (*(_DWORD *)(BugCheckParameter2 + 4120) & 0x20) != 0 )
  {
    NewDescriptor = CmpGenerateAppHiveSecurityDescriptor(a2 + 32);
    if ( !NewDescriptor )
    {
      SecurityDescriptorNode = -1073741670;
      v16 = 197120;
      v17 = -1073741670;
      goto LABEL_4;
    }
  }
  else
  {
    v13 = SeAssignSecurity(
            0LL,
            *(PSECURITY_DESCRIPTOR *)(a2 + 64),
            &NewDescriptor,
            1u,
            (PSECURITY_SUBJECT_CONTEXT)(a2 + 32),
            (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
            *((POOL_TYPE *)CmKeyObjectType + 25));
    SecurityDescriptorNode = v13;
    if ( v13 < 0 )
    {
      v16 = 197376;
      goto LABEL_3;
    }
  }
  CmLockHiveSecurityExclusive(BugCheckParameter2, v20, v21, v22);
  v18 = BugCheckParameter3;
  SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                             BugCheckParameter2,
                             BugCheckParameter3,
                             (__int64)v14,
                             (unsigned int)BugCheckParameter3 >> 31,
                             NewDescriptor,
                             0,
                             (unsigned int *)v14 + 11);
  CmUnlockHiveSecurity(BugCheckParameter2);
  if ( SecurityDescriptorNode < 0 )
  {
    v26 = 197632;
LABEL_14:
    CmpRecordParseFailure(a4, v26, SecurityDescriptorNode);
    goto LABEL_18;
  }
  HvLockHiveWriter(*(_QWORD *)(a4 + 48), v23, v24, v25);
  HvMarkBaseBlockDirty(*(_QWORD *)(a4 + 48));
  SecurityDescriptorNode = HvCheckAndUpdateHiveBackupTimeStamp(*(_QWORD *)(a4 + 48));
  HvUnlockHiveWriter(*(_QWORD *)(a4 + 48));
  if ( SecurityDescriptorNode < 0 )
  {
    v26 = 197888;
    goto LABEL_14;
  }
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL) = v18;
  *a5 = v18;
  v18 = -1;
  SecurityDescriptorNode = 0;
LABEL_18:
  v27 = NewDescriptor;
  if ( NewDescriptor )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 4120) & 0x20) != 0 )
    {
      ExFreePoolWithTag(NewDescriptor, 0);
    }
    else if ( (*(_DWORD *)a4 & 1) != 0 && (*(_DWORD *)(a4 + 24) & 4) != 0 )
    {
      SeDeassignSecurity(&NewDescriptor);
    }
    else
    {
      v28 = *(_QWORD *)(a2 + 72);
      if ( (*(_DWORD *)(a2 + 12) & 0x4000000) == 0 )
      {
        v29 = *(void **)(v28 + 48);
        if ( v29 )
          ExFreePoolWithTag(v29, 0);
      }
      *(_DWORD *)(a2 + 12) &= ~0x4000000u;
      *(_QWORD *)(v28 + 48) = v27;
    }
  }
  if ( v14 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, (__int64)&v32);
    else
      HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v32);
  }
  if ( v18 != -1 )
    HvFreeCell(BugCheckParameter2, v18);
  HvUnlockHiveFlusherShared(BugCheckParameter2);
  return (unsigned int)SecurityDescriptorNode;
}
