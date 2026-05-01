/*
 * XREFs of ??_GStoredFailureInfo@wil@@QEAAPEAXI@Z @ 0x180329828
 * Callers:
 *     ?clear@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAAXXZ @ 0x180283514 (-clear@-$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAAXXZ.c)
 *     ?reserve@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N_K@Z @ 0x180332D30 (-reserve@-$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N_K@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18004226C (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

volatile signed __int32 **__fastcall wil::StoredFailureInfo::`scalar deleting destructor'(
        volatile signed __int32 **this)
{
  wil::details::shared_buffer::reset(this + 19);
  return this;
}
