/*
 * XREFs of CcZeroDataInCache @ 0x1403A0CB8
 * Callers:
 *     CcZeroData @ 0x140466A50 (CcZeroData.c)
 * Callees:
 *     CcUnpinFileDataEx @ 0x1402C11D0 (CcUnpinFileDataEx.c)
 *     CcPinFileData @ 0x1402C1530 (CcPinFileData.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     MmSetAddressRangeModifiedEx @ 0x14039C3F8 (MmSetAddressRangeModifiedEx.c)
 *     CcSetDirtyPinnedData @ 0x14039F000 (CcSetDirtyPinnedData.c)
 *     IopAllocateMdl @ 0x1403A0940 (IopAllocateMdl.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     MiProbeAndLockPages @ 0x1403A1ECC (MiProbeAndLockPages.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 */

char __fastcall CcZeroDataInCache(__int64 a1, _QWORD *a2, unsigned int a3, unsigned __int8 a4)
{
  unsigned int v4; // r13d
  unsigned int v6; // esi
  char v7; // di
  __int64 v8; // r9
  struct _MDL *Mdl; // r14
  char v10; // r15
  NTSTATUS v11; // eax
  struct _KLOCK_ENTRIES BcbVoid; // [rsp+58h] [rbp-70h] BYREF
  __int64 v14; // [rsp+D0h] [rbp+8h]

  v14 = a1;
  v4 = a4;
  v6 = 0;
  *(_QWORD *)&BcbVoid.Entries[0].EntryFlags = *a2;
  memset(&BcbVoid, 0, 24);
  BcbVoid.Entries[0].TreeNode.Children[0] = 0LL;
  v7 = 1;
  while ( (unsigned __int8)CcPinFileData(
                             a1,
                             (__int64 *)&BcbVoid.Entries[0].8,
                             a3 - v6,
                             0,
                             1,
                             v4,
                             &BcbVoid,
                             BcbVoid.Entries[0].TreeNode.Children,
                             (_KLOCK_ENTRY_LOCK_STATE *)&BcbVoid.Entries[0].LockState.0) )
  {
    v6 += *(_DWORD *)&BcbVoid.Entries[0].LockState.0 - BcbVoid.Entries[0].EntryFlags;
    Mdl = (struct _MDL *)IopAllocateMdl(
                           (__int64)BcbVoid.Entries[0].TreeNode.Children[0],
                           *(_DWORD *)&BcbVoid.Entries[0].LockState.0 - BcbVoid.Entries[0].EntryFlags,
                           0,
                           v8,
                           0LL,
                           0);
    *(_QWORD *)&BcbVoid.AvailableEntryBitmap = Mdl;
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    v10 = BYTE5(KeGetCurrentThread()[1].Queue) + 2;
    BYTE5(KeGetCurrentThread()[1].Queue) = 1;
    memset(&BcbVoid.Entries[0].TreeNode.Right, 0, 32);
    v11 = MiProbeAndLockPages(Mdl, &BcbVoid.Entries[0].40);
    if ( v11 < 0 )
      RtlRaiseStatus(v11);
    BYTE5(KeGetCurrentThread()[1].Queue) = v10 - 2;
    *($A1A49EE4C6E599293708B9EDC35F5B5E *)&BcbVoid.Entries[0].EntryFlags = BcbVoid.Entries[0].LockState.0;
    MmSetAddressRangeModifiedEx((unsigned __int64)BcbVoid.Entries[0].TreeNode.Children[0]);
    CcSetDirtyPinnedData(BcbVoid.Thread, 0LL);
    CcUnpinFileDataEx((char *)BcbVoid.Thread, 0, 0);
    BcbVoid.Thread = 0LL;
    MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
    *(_QWORD *)&BcbVoid.AvailableEntryBitmap = 0LL;
    a1 = v14;
    if ( a3 <= v6 )
      goto LABEL_10;
  }
  v7 = 0;
  *(_QWORD *)&BcbVoid.AvailableEntryBitmap = 0LL;
LABEL_10:
  if ( BcbVoid.Thread )
    CcUnpinFileDataEx((char *)BcbVoid.Thread, 0, 0);
  return v7;
}
