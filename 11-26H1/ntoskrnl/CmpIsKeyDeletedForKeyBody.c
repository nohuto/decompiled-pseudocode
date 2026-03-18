/*
 * XREFs of CmpIsKeyDeletedForKeyBody @ 0x140C58750
 * Callers:
 *     CmDeleteLayeredKey @ 0x140446A10 (CmDeleteLayeredKey.c)
 *     CmpLoadKeyCommon @ 0x14046E794 (CmpLoadKeyCommon.c)
 *     CmQueryLayeredKey @ 0x1404922D0 (CmQueryLayeredKey.c)
 *     CmSaveMergedKeys @ 0x14084D378 (CmSaveMergedKeys.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14085905C (CmpIsHiveAlreadyLoaded.c)
 *     CmDeleteKey @ 0x1408BAD90 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408BB780 (CmDeleteValueKey.c)
 *     CmQueryKey @ 0x1408C5660 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmSetValueKey @ 0x1408CEE30 (CmSetValueKey.c)
 *     CmQueryValueKey @ 0x1408D88E0 (CmQueryValueKey.c)
 *     CmpCheckKeyBodyAccess @ 0x140930990 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140930F10 (CmpCheckOpenAccessOnKeyBody.c)
 *     NtNotifyChangeMultipleKeys @ 0x14097A180 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x14097AF04 (CmpNotifyChangeKey.c)
 *     CmQueryMultipleValueKey @ 0x14097EB2C (CmQueryMultipleValueKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1409806EC (CmEnumerateValueFromLayeredKey.c)
 *     CmRestoreKey @ 0x140986024 (CmRestoreKey.c)
 *     CmpCloseKeyObject @ 0x140A59A10 (CmpCloseKeyObject.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140AB2878 (CmKeyBodyNeedsVirtualImage.c)
 *     CmpResolveHiveLoadConflict @ 0x140AE1F04 (CmpResolveHiveLoadConflict.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140AFF7BC (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     CmEqualTrans @ 0x1408BC9D0 (CmEqualTrans.c)
 */

bool __fastcall CmpIsKeyDeletedForKeyBody(__int64 a1, __int64 a2)
{
  _QWORD **v2; // r8
  _QWORD *v3; // rax
  _QWORD **v4; // r10
  _QWORD **v5; // r9

  if ( (*(_BYTE *)(a1 + 48) & 9) != 0 )
    return 1;
  if ( a2 )
  {
    v2 = (_QWORD **)(*(_QWORD *)(a1 + 8) + 208LL);
LABEL_4:
    v3 = *v2;
    while ( 1 )
    {
      v4 = (_QWORD **)v3;
      if ( v2 != v3 )
        v3 = (_QWORD *)*v3;
      v5 = 0LL;
      if ( v2 != v4 )
        v5 = v4 - 4;
      if ( !v5 )
        break;
      if ( *((_DWORD *)v5 + 17) == 2 )
        return CmEqualTrans((__int64)v5[7], a2) != 0;
      if ( !v3 )
        goto LABEL_4;
    }
  }
  return 0;
}
