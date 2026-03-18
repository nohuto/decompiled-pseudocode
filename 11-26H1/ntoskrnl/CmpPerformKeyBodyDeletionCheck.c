/*
 * XREFs of CmpPerformKeyBodyDeletionCheck @ 0x140C587C0
 * Callers:
 *     CmpDoQueryKeyName @ 0x140261160 (CmpDoQueryKeyName.c)
 *     CmpLoadKeyCommon @ 0x14046E794 (CmpLoadKeyCommon.c)
 *     CmQueryLayeredKey @ 0x1404922D0 (CmQueryLayeredKey.c)
 *     CmpSaveBootControlSet @ 0x14084CBB8 (CmpSaveBootControlSet.c)
 *     CmpLoadHiveVolatile @ 0x14084D878 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14084DD4C (CmpRefreshHive.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x14084E670 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x14084E8F0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x14084EBA0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x14084F320 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x14084F540 (NtQueryOpenSubKeysEx.c)
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpAssignKeySecurity @ 0x14085AB60 (CmpAssignKeySecurity.c)
 *     CmpPerformUnloadKey @ 0x1408AFC14 (CmpPerformUnloadKey.c)
 *     CmSetKeyFlags @ 0x1408B09D8 (CmSetKeyFlags.c)
 *     CmpSetKeySecurity @ 0x1408BE00C (CmpSetKeySecurity.c)
 *     CmEnumerateKey @ 0x1408C21A0 (CmEnumerateKey.c)
 *     CmpQueryKeySecurity @ 0x1408ED790 (CmpQueryKeySecurity.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F3730 (CmKeyBodyRemapToVirtualForEnum.c)
 *     NtEnumerateValueKey @ 0x14097F290 (NtEnumerateValueKey.c)
 *     CmpEnumerateLayeredKey @ 0x140982A88 (CmpEnumerateLayeredKey.c)
 *     CmLockKeyForWrite @ 0x140A30B0C (CmLockKeyForWrite.c)
 *     CmSaveKey @ 0x140A7626C (CmSaveKey.c)
 *     NtFlushKey @ 0x140AFFC30 (NtFlushKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140B0F764 (CmQueryMultipleValueForLayeredKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140B3181C (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x140B4BD9C (CmKeyBodyRemapToVirtual.c)
 *     CmSetLastWriteTimeKey @ 0x140B53BB0 (CmSetLastWriteTimeKey.c)
 *     CmpIsKeyBodyEligibleForDump @ 0x140C5825C (CmpIsKeyBodyEligibleForDump.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140CE9398 (CmpAcquireSystemDriverHiveContext.c)
 * Callees:
 *     CmEqualTrans @ 0x1408BC9D0 (CmEqualTrans.c)
 */

__int64 __fastcall CmpPerformKeyBodyDeletionCheck(__int64 a1, __int64 a2)
{
  _QWORD **v3; // r9
  _QWORD *v4; // rax
  _QWORD **v5; // r10
  _QWORD **v6; // r8
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 48) & 9) != 0 )
  {
LABEL_15:
    result = 3221226533LL;
    if ( (*(_BYTE *)(a1 + 48) & 1) == 0 )
      return 3221225852LL;
  }
  else
  {
    if ( a2 )
    {
      v3 = (_QWORD **)(*(_QWORD *)(a1 + 8) + 208LL);
LABEL_4:
      v4 = *v3;
      while ( 1 )
      {
        v5 = (_QWORD **)v4;
        if ( v3 != v4 )
          v4 = (_QWORD *)*v4;
        v6 = 0LL;
        if ( v3 != v5 )
          v6 = v5 - 4;
        if ( !v6 )
          break;
        if ( *((_DWORD *)v6 + 17) == 2 )
        {
          if ( !CmEqualTrans((__int64)v6[7], a2) )
            return 0LL;
          goto LABEL_15;
        }
        if ( !v4 )
          goto LABEL_4;
      }
    }
    return 0LL;
  }
  return result;
}
