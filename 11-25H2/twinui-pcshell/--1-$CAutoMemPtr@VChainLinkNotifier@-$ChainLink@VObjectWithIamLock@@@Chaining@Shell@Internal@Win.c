/*
 * XREFs of ??1?$CAutoMemPtr@VChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@@@QEAA@XZ @ 0x180300740
 * Callers:
 *     ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x1801AC9B8 (-_RemoveFromChain@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ??_GChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAPEAXI@Z @ 0x180300D0C (--_GChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAPEAX.c)
 */

void *__fastcall CAutoMemPtr<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier>::~CAutoMemPtr<Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier>(
        void **a1)
{
  void *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (void *)Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::`scalar deleting destructor'(result);
  return result;
}
