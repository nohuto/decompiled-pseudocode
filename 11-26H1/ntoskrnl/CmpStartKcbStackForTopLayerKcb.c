/*
 * XREFs of CmpStartKcbStackForTopLayerKcb @ 0x1408BC470
 * Callers:
 *     CmDeleteLayeredKey @ 0x140446A10 (CmDeleteLayeredKey.c)
 *     CmQueryLayeredKey @ 0x1404922D0 (CmQueryLayeredKey.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x14084E670 (CmOpenKeyForBugCheckRecovery.c)
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x140859914 (CmpDoBuildVirtualStack.c)
 *     CmpAssignKeySecurity @ 0x14085AB60 (CmpAssignKeySecurity.c)
 *     CmpPerformUnloadKey @ 0x1408AFC14 (CmpPerformUnloadKey.c)
 *     CmSetKeyFlags @ 0x1408B09D8 (CmSetKeyFlags.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408BA354 (CmpGetSymbolicLinkTarget.c)
 *     CmpReportNotify @ 0x1408BAD14 (CmpReportNotify.c)
 *     CmDeleteKey @ 0x1408BAD90 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408BB780 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1408BE00C (CmpSetKeySecurity.c)
 *     CmpDoWritethroughReparse @ 0x1408C11D0 (CmpDoWritethroughReparse.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140930F10 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1409806EC (CmEnumerateValueFromLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x140982A88 (CmpEnumerateLayeredKey.c)
 *     CmRestoreKey @ 0x140986024 (CmRestoreKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x140A31298 (CmpStartSiloRegistryNamespace.c)
 *     CmSaveKey @ 0x140A7626C (CmSaveKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140B0F764 (CmQueryMultipleValueForLayeredKey.c)
 *     CmSetLastWriteTimeKey @ 0x140B53BB0 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x140474870 (CmpAllocatePool.c)
 */

__int64 __fastcall CmpStartKcbStackForTopLayerKcb(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 Pool; // rcx
  __int64 v6; // rcx
  __int64 i; // rdx
  __int64 v9; // r8

  v2 = *(__int16 *)(a2 + 66);
  Pool = 0LL;
  if ( v2 >= 2 )
  {
    Pool = CmpAllocatePool(0x100uLL);
    if ( !Pool )
      return 3221225626LL;
  }
  *(_WORD *)(a1 + 2) = -1;
  *(_WORD *)a1 = v2;
  *(_QWORD *)(a1 + 24) = Pool;
  *(_WORD *)(a1 + 2) = *(_WORD *)(a2 + 66);
  v6 = *(__int16 *)(a2 + 66);
  if ( (_WORD)v6 )
  {
    for ( i = *(_QWORD *)(a2 + 192); i; LOWORD(v6) = v6 - 1 )
    {
      v9 = *(_QWORD *)(i + 16);
      if ( (__int16)v6 >= 2 )
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (__int16)v6 - 16) = v9;
      else
        *(_QWORD *)(a1 + 8LL * (__int16)v6 + 8) = v9;
      i = *(_QWORD *)(i + 24);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 8 * v6 + 8) = a2;
  }
  return 0LL;
}
