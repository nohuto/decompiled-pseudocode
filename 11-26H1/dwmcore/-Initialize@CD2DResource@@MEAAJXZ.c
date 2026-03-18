/*
 * XREFs of ?Initialize@CD2DResource@@MEAAJXZ @ 0x1800F6240
 * Callers:
 *     <none>
 * Callees:
 *     ?AddResource@CD2DResourceManager@@QEAAXPEAVCD2DResource@@@Z @ 0x1800F6260 (-AddResource@CD2DResourceManager@@QEAAXPEAVCD2DResource@@@Z.c)
 */

__int64 __fastcall CD2DResource::Initialize(CD2DResourceManager **this)
{
  CD2DResourceManager::AddResource(this[5], (struct CD2DResource *)this);
  return 0LL;
}
