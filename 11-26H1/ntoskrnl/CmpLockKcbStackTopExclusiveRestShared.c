/*
 * XREFs of CmpLockKcbStackTopExclusiveRestShared @ 0x1408D7138
 * Callers:
 *     CmDeleteLayeredKey @ 0x14043F510 (CmDeleteLayeredKey.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140854980 (CmOpenKeyForBugCheckRecovery.c)
 *     CmpDoBuildVirtualStack @ 0x14085FCA4 (CmpDoBuildVirtualStack.c)
 *     CmSetKeyFlags @ 0x1408B6EC8 (CmSetKeyFlags.c)
 *     CmpPromoteKey @ 0x1408B7364 (CmpPromoteKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408C0924 (CmpGetSymbolicLinkTarget.c)
 *     CmDeleteKey @ 0x1408C1360 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1408C1D50 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1408C45DC (CmpSetKeySecurity.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 *     CmSetLastWriteTimeKey @ 0x140B56450 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x1408C12C0 (CmpGetKcbAtLayerHeight.c)
 *     CmpLockKcbExclusive @ 0x1408D5100 (CmpLockKcbExclusive.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
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
