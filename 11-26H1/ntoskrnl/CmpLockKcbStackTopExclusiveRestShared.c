/*
 * XREFs of CmpLockKcbStackTopExclusiveRestShared @ 0x1408D0B78
 * Callers:
 *     CmDeleteLayeredKey @ 0x140446A10 (CmDeleteLayeredKey.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x14084E670 (CmOpenKeyForBugCheckRecovery.c)
 *     CmpDoBuildVirtualStack @ 0x140859914 (CmpDoBuildVirtualStack.c)
 *     CmSetKeyFlags @ 0x1408B09D8 (CmSetKeyFlags.c)
 *     CmpPromoteKey @ 0x1408B0E74 (CmpPromoteKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408BA354 (CmpGetSymbolicLinkTarget.c)
 *     CmDeleteKey @ 0x1408BAD90 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408BB780 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1408BE00C (CmpSetKeySecurity.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmSetValueKey @ 0x1408CEE30 (CmSetValueKey.c)
 *     CmSetLastWriteTimeKey @ 0x140B53BB0 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1408BACF0 (CmpGetKcbAtLayerHeight.c)
 *     CmpLockKcbExclusive @ 0x1408CEB50 (CmpLockKcbExclusive.c)
 *     CmpLockKcbShared @ 0x140C583F0 (CmpLockKcbShared.c)
 */

struct _KTHREAD *__fastcall CmpLockKcbStackTopExclusiveRestShared(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdx
  __int16 v5; // di
  __int64 v7; // rcx
  __int64 KcbAtLayerHeight; // rax

  v4 = (unsigned int)*(__int16 *)(a1 + 2);
  v5 = 0;
  if ( (int)v4 - 1 >= 0 )
  {
    do
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v5);
      CmpLockKcbShared(KcbAtLayerHeight);
      v4 = (unsigned int)*(__int16 *)(a1 + 2);
      ++v5;
    }
    while ( v5 <= *(__int16 *)(a1 + 2) - 1 );
  }
  if ( (__int16)v4 >= 2 )
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (__int16)v4 - 16);
  else
    v7 = *(_QWORD *)(a1 + 8LL * (__int16)v4 + 8);
  return CmpLockKcbExclusive(v7, v4, a3, a4);
}
