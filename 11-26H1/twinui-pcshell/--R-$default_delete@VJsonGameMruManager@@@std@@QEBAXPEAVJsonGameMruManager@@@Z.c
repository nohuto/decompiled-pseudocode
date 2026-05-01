/*
 * XREFs of ??R?$default_delete@VJsonGameMruManager@@@std@@QEBAXPEAVJsonGameMruManager@@@Z @ 0x1803109D8
 * Callers:
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800C53F0 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 *     ??1?$unique_ptr@VJsonGameMruManager@@U?$default_delete@VJsonGameMruManager@@@std@@@std@@QEAA@XZ @ 0x180286D98 (--1-$unique_ptr@VJsonGameMruManager@@U-$default_delete@VJsonGameMruManager@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??1JsonGameMruManager@@QEAA@XZ @ 0x18013A7F0 (--1JsonGameMruManager@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::default_delete<JsonGameMruManager>::operator()(__int64 a1, JsonGameMruManager *a2)
{
  if ( a2 )
  {
    JsonGameMruManager::~JsonGameMruManager(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x50);
  }
}
