/*
 * XREFs of CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0
 * Callers:
 *     CmpDoQueryKeyName @ 0x1402606D0 (CmpDoQueryKeyName.c)
 *     CmpLoadKeyCommon @ 0x140467F14 (CmpLoadKeyCommon.c)
 *     CmQueryLayeredKey @ 0x14048BE20 (CmQueryLayeredKey.c)
 *     CmpSaveBootControlSet @ 0x140852EC8 (CmpSaveBootControlSet.c)
 *     CmpLoadHiveVolatile @ 0x140853B84 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140854058 (CmpRefreshHive.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140854980 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x140854C00 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140854EB0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x140855630 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140855850 (NtQueryOpenSubKeysEx.c)
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpAssignKeySecurity @ 0x140860E54 (CmpAssignKeySecurity.c)
 *     CmpPerformUnloadKey @ 0x1408B6104 (CmpPerformUnloadKey.c)
 *     CmSetKeyFlags @ 0x1408B6EC8 (CmSetKeyFlags.c)
 *     CmpSetKeySecurity @ 0x1408C45DC (CmpSetKeySecurity.c)
 *     CmEnumerateKey @ 0x1408C8770 (CmEnumerateKey.c)
 *     CmpQueryKeySecurity @ 0x1408F3D50 (CmpQueryKeySecurity.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F9CF0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     NtEnumerateValueKey @ 0x1409412A0 (NtEnumerateValueKey.c)
 *     CmpEnumerateLayeredKey @ 0x140944A98 (CmpEnumerateLayeredKey.c)
 *     CmLockKeyForWrite @ 0x140A4BA6C (CmLockKeyForWrite.c)
 *     CmSaveKey @ 0x140A7EF8C (CmSaveKey.c)
 *     NtFlushKey @ 0x140B018C0 (NtFlushKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140B10F94 (CmQueryMultipleValueForLayeredKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140B33A1C (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtual @ 0x140B4DB2C (CmKeyBodyRemapToVirtual.c)
 *     CmSetLastWriteTimeKey @ 0x140B56450 (CmSetLastWriteTimeKey.c)
 *     CmpIsKeyBodyEligibleForDump @ 0x140C5E25C (CmpIsKeyBodyEligibleForDump.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x140CEF738 (CmpAcquireSystemDriverHiveContext.c)
 * Callees:
 *     CmEqualTrans @ 0x1408C2FA0 (CmEqualTrans.c)
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
