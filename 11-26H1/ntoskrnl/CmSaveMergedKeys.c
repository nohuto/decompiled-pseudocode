/*
 * XREFs of CmSaveMergedKeys @ 0x140853684
 * Callers:
 *     NtSaveMergedKeys @ 0x1408564A0 (NtSaveMergedKeys.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpBlockTwoHiveWrites @ 0x1408B86EC (CmpBlockTwoHiveWrites.c)
 *     CmpDestroyHive @ 0x1408BD394 (CmpDestroyHive.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpCopyKeyPartial @ 0x1408E41BC (CmpCopyKeyPartial.c)
 *     CmpUnlockTwoKcbs @ 0x1409409F0 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x140940A90 (CmpLockTwoKcbsShared.c)
 *     CmpCopySyncTree @ 0x140948D9C (CmpCopySyncTree.c)
 *     CmpUuidCreate @ 0x140A7EF4C (CmpUuidCreate.c)
 *     CmpCreateTemporaryHive @ 0x140A7FC0C (CmpCreateTemporaryHive.c)
 *     HvWriteExternal @ 0x140AA7B6C (HvWriteExternal.c)
 *     CmpMergeKeyValues @ 0x140B2DE64 (CmpMergeKeyValues.c)
 *     CmpLogUnsupportedOperation @ 0x140B5F4D8 (CmpLogUnsupportedOperation.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C5E750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmLockHiveSecurityShared @ 0x140C5EB30 (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140C5EBA8 (CmUnlockHiveSecurity.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C5ED14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C5ED30 (HvLockHiveFlusherExclusive.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140C5ED4C (CmpDoAccessCheckOnSubtree.c)
 */

__int64 __fastcall CmSaveMergedKeys(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // r12
  ULONG_PTR v7; // rdi
  ULONG_PTR v8; // r15
  ULONG_PTR v9; // rsi
  int v10; // ebx
  char v11; // r14
  int v12; // r13d
  unsigned int v13; // r12d
  int v14; // r9d
  _BYTE *v15; // r13
  __int64 CellFlat; // rax
  __int64 CellPaged; // rax
  __int64 v18; // r12
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v22; // [rsp+28h] [rbp-91h]
  unsigned int v23; // [rsp+44h] [rbp-75h] BYREF
  unsigned int v24; // [rsp+48h] [rbp-71h]
  _DWORD v25[2]; // [rsp+50h] [rbp-69h] BYREF
  _DWORD v26[2]; // [rsp+58h] [rbp-61h] BYREF
  int v27; // [rsp+60h] [rbp-59h]
  ULONG_PTR v28; // [rsp+68h] [rbp-51h]
  ULONG_PTR v29; // [rsp+70h] [rbp-49h]
  __int64 v30; // [rsp+78h] [rbp-41h] BYREF
  UUID v31; // [rsp+80h] [rbp-39h] BYREF
  UUID Uuid; // [rsp+90h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+A0h] [rbp-19h] BYREF
  __int64 *v34; // [rsp+C0h] [rbp+7h]
  __int64 v35; // [rsp+C8h] [rbp+Fh]

  v30 = a3;
  v23 = 0;
  v26[1] = 0;
  v5 = *(_QWORD *)(a1 + 8);
  Uuid = 0LL;
  v6 = *(_QWORD *)(a2 + 8);
  v7 = 0LL;
  v29 = v5;
  v31 = 0LL;
  v8 = *(_QWORD *)(v5 + 32);
  v9 = *(_QWORD *)(v6 + 32);
  v27 = *(_DWORD *)(v5 + 40);
  LODWORD(v5) = *(_DWORD *)(v6 + 40);
  v25[1] = 0;
  v24 = v5;
  v26[0] = -1;
  v25[0] = -1;
  v28 = v6;
  v10 = CmpUuidCreate(&Uuid);
  if ( v10 >= 0 )
  {
    v10 = CmpUuidCreate(&v31);
    if ( v10 >= 0 )
    {
      if ( v9 != CmpMasterHive && v8 != CmpMasterHive )
      {
        if ( v9 == v8 )
          return (unsigned int)-1073741811;
        CmpLockRegistry();
        CmpLockTwoKcbsShared(v29, v6);
        if ( *(_WORD *)(v29 + 66) || *(_WORD *)(v28 + 66) )
        {
          CmpLogUnsupportedOperation(19LL);
          v10 = -1073741822;
          goto LABEL_56;
        }
        if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) || (unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, 0LL) )
        {
          v10 = -1073741444;
          goto LABEL_56;
        }
        if ( (*(_DWORD *)(v8 + 160) & 2) != 0 && *(_DWORD *)(v8 + 104)
          || (*(_DWORD *)(v9 + 160) & 2) != 0 && *(_DWORD *)(v9 + 104) )
        {
          v10 = -1073741811;
          goto LABEL_56;
        }
        v7 = CmpCreateTemporaryHive(&Uuid, &v31);
        if ( !v7 )
        {
          v10 = -1073741670;
          goto LABEL_56;
        }
        v10 = CmpBlockTwoHiveWrites(v9, v8, 0LL);
        if ( v10 < 0 )
        {
LABEL_56:
          CmpUnlockTwoKcbs(v29, v28);
          CmpUnlockRegistry(v20);
          if ( !v7 )
            return (unsigned int)v10;
LABEL_57:
          CmpDestroyHive((PVOID)v7);
          return (unsigned int)v10;
        }
        v11 = 6;
        CmLockHiveSecurityShared(v8);
        v12 = v27;
        v10 = CmpDoAccessCheckOnSubtree(v8, 3);
        CmUnlockHiveSecurity(v8);
        if ( v10 >= 0 )
        {
          CmLockHiveSecurityShared(v9);
          v10 = CmpDoAccessCheckOnSubtree(v9, 3);
          CmUnlockHiveSecurity(v9);
          if ( v10 >= 0 )
          {
            HvLockHiveFlusherExclusive(v7);
            v11 = 7;
            v10 = CmpCopyKeyPartial(v8, 6, v22, 0, (__int64)&v23);
            if ( v10 >= 0 )
            {
              v13 = v23;
              v14 = v23;
              *(_DWORD *)(*(_QWORD *)(v7 + 64) + 36LL) = v23;
              v10 = CmpCopySyncTree(v8, v12, v7, v14, 2, 0);
              if ( v10 >= 0 )
              {
                HvUnlockHiveFlusherExclusive(v8);
                v15 = (_BYTE *)(v9 + 140);
                v11 = 5;
                if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
                  CellFlat = HvpGetCellFlat(v9, v24, v25);
                else
                  CellFlat = HvpGetCellPaged(v9);
                if ( CellFlat )
                {
                  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
                    CellPaged = HvpGetCellFlat(v7, v13, v26);
                  else
                    CellPaged = HvpGetCellPaged(v7);
                  v18 = CellPaged;
                  if ( CellPaged )
                  {
                    v10 = CmpMergeKeyValues(v9, v23, CellPaged);
                    if ( v10 >= 0 )
                    {
                      if ( (*v15 & 1) != 0 )
                        HvpReleaseCellFlat(v9, v25);
                      else
                        HvpReleaseCellPaged(v9, v25);
                      if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(v7, v26);
                      else
                        HvpReleaseCellPaged(v7, v26);
                      v10 = CmpCopySyncTree(v9, v24, v7, v23, 2, 2);
                      if ( v10 >= 0 )
                      {
                        HvUnlockHiveFlusherExclusive(v9);
                        HvUnlockHiveFlusherExclusive(v7);
                        CmpUnlockTwoKcbs(v29, v28);
                        CmpUnlockRegistry(v19);
                        *(_QWORD *)(v7 + 1560) = v30;
                        v10 = HvWriteExternal(v7);
                        *(_QWORD *)(v7 + 1560) = 0LL;
                        goto LABEL_57;
                      }
                      goto LABEL_49;
                    }
                  }
                  else
                  {
                    v10 = -1073741670;
                  }
                  if ( (*v15 & 1) != 0 )
                    HvpReleaseCellFlat(v9, v25);
                  else
                    HvpReleaseCellPaged(v9, v25);
                  if ( v18 )
                  {
                    if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(v7, v26);
                    else
                      HvpReleaseCellPaged(v7, v26);
                  }
                }
                else
                {
                  v10 = -1073741670;
                }
              }
            }
          }
        }
LABEL_49:
        HvUnlockHiveFlusherExclusive(v9);
        if ( (v11 & 2) != 0 )
          HvUnlockHiveFlusherExclusive(v8);
        if ( (v11 & 1) != 0 )
          HvUnlockHiveFlusherExclusive(v7);
        goto LABEL_56;
      }
      if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 0x400000000000LL) )
      {
        v30 = 0x1000000LL;
        v34 = &v30;
        v35 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E09EE8,
          (unsigned __int8 *)byte_140056B58,
          0LL,
          0LL,
          3u,
          &v33);
      }
      return (unsigned int)-1073741790;
    }
  }
  return (unsigned int)v10;
}
