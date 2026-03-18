/*
 * XREFs of CmpUnlockKcbStack @ 0x1408BC3E0
 * Callers:
 *     CmDeleteLayeredKey @ 0x140446A10 (CmDeleteLayeredKey.c)
 *     CmQueryLayeredKey @ 0x1404922D0 (CmQueryLayeredKey.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x14084E670 (CmOpenKeyForBugCheckRecovery.c)
 *     CmpDoBuildVirtualStack @ 0x140859914 (CmpDoBuildVirtualStack.c)
 *     CmpAssignKeySecurity @ 0x14085AB60 (CmpAssignKeySecurity.c)
 *     CmSetKeyFlags @ 0x1408B09D8 (CmSetKeyFlags.c)
 *     CmpPromoteKey @ 0x1408B0E74 (CmpPromoteKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408BA354 (CmpGetSymbolicLinkTarget.c)
 *     CmDeleteKey @ 0x1408BAD90 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408BB780 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1408BE00C (CmpSetKeySecurity.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmSetValueKey @ 0x1408CEE30 (CmSetValueKey.c)
 *     CmQueryValueKey @ 0x1408D88E0 (CmQueryValueKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1409806EC (CmEnumerateValueFromLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x140982A88 (CmpEnumerateLayeredKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x140A31298 (CmpStartSiloRegistryNamespace.c)
 *     CmSaveKey @ 0x140A7626C (CmSaveKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140B0F764 (CmQueryMultipleValueForLayeredKey.c)
 *     CmSetLastWriteTimeKey @ 0x140B53BB0 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpUnlockKcbStack(__int64 a1)
{
  __int16 i; // bx
  ULONG_PTR v3; // rcx
  __int64 result; // rax

  for ( i = 0; i <= *(__int16 *)(a1 + 2); ++i )
  {
    if ( i >= 2 )
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * i - 16);
    else
      v3 = *(_QWORD *)(a1 + 8LL * i + 8);
    result = CmpUnlockKcb(v3);
  }
  return result;
}
