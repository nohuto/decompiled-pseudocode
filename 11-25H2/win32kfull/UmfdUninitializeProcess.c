/*
 * XREFs of UmfdUninitializeProcess @ 0x140332850
 * Callers:
 *     <none>
 * Callees:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x14010B830 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 */

void __fastcall UmfdUninitializeProcess(__int64 a1, __int64 a2, __int64 a3)
{
  UmfdHostLifeTimeManager::UninitializeProcess(a1, a2, a3);
}
