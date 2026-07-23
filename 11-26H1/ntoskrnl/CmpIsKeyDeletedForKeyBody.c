/*
 * XREFs of CmpIsKeyDeletedForKeyBody @ 0x140C5E750
 * Callers:
 *     CmDeleteLayeredKey @ 0x14043F510 (CmDeleteLayeredKey.c)
 *     CmpLoadKeyCommon @ 0x140467F14 (CmpLoadKeyCommon.c)
 *     CmQueryLayeredKey @ 0x14048BE20 (CmQueryLayeredKey.c)
 *     CmSaveMergedKeys @ 0x140853684 (CmSaveMergedKeys.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14085F3EC (CmpIsHiveAlreadyLoaded.c)
 *     CmDeleteKey @ 0x1408C1360 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408C1D50 (CmDeleteValueKey.c)
 *     CmQueryKey @ 0x1408CBC30 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 *     CmQueryValueKey @ 0x1408DEEA0 (CmQueryValueKey.c)
 *     CmpCheckKeyBodyAccess @ 0x14090C4C0 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14090CA40 (CmpCheckOpenAccessOnKeyBody.c)
 *     NtNotifyChangeMultipleKeys @ 0x14093C190 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x14093CF14 (CmpNotifyChangeKey.c)
 *     CmQueryMultipleValueKey @ 0x140940B3C (CmQueryMultipleValueKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1409426FC (CmEnumerateValueFromLayeredKey.c)
 *     CmRestoreKey @ 0x140947D24 (CmRestoreKey.c)
 *     CmpCloseKeyObject @ 0x140A66980 (CmpCloseKeyObject.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140AB0548 (CmKeyBodyNeedsVirtualImage.c)
 *     CmpResolveHiveLoadConflict @ 0x140ADF3F4 (CmpResolveHiveLoadConflict.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140B0144C (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     CmEqualTrans @ 0x1408C2FA0 (CmEqualTrans.c)
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
