/*
 * XREFs of CmpStartKcbStackForTopLayerKcb @ 0x1408C2A40
 * Callers:
 *     CmDeleteLayeredKey @ 0x14043F510 (CmDeleteLayeredKey.c)
 *     CmQueryLayeredKey @ 0x14048BE20 (CmQueryLayeredKey.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140854980 (CmOpenKeyForBugCheckRecovery.c)
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x14085FCA4 (CmpDoBuildVirtualStack.c)
 *     CmpAssignKeySecurity @ 0x140860E54 (CmpAssignKeySecurity.c)
 *     CmpPerformUnloadKey @ 0x1408B6104 (CmpPerformUnloadKey.c)
 *     CmSetKeyFlags @ 0x1408B6EC8 (CmSetKeyFlags.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408C0924 (CmpGetSymbolicLinkTarget.c)
 *     CmpReportNotify @ 0x1408C12E4 (CmpReportNotify.c)
 *     CmDeleteKey @ 0x1408C1360 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408C1D50 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1408C45DC (CmpSetKeySecurity.c)
 *     CmpDoWritethroughReparse @ 0x1408C77A0 (CmpDoWritethroughReparse.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14090CA40 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1409426FC (CmEnumerateValueFromLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x140944A98 (CmpEnumerateLayeredKey.c)
 *     CmRestoreKey @ 0x140947D24 (CmRestoreKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x140A4C1F8 (CmpStartSiloRegistryNamespace.c)
 *     CmSaveKey @ 0x140A7EF8C (CmSaveKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140B10F94 (CmQueryMultipleValueForLayeredKey.c)
 *     CmSetLastWriteTimeKey @ 0x140B56450 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
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
