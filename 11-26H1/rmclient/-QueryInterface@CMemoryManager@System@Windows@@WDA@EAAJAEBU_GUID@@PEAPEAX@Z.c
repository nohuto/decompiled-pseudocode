/*
 * XREFs of ?QueryInterface@CMemoryManager@System@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800141C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CMemoryManager::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        Windows::System::CMemoryManager **a3)
{
  return Windows::System::CMemoryManager::QueryInterface((Windows::System::CMemoryManager *)(a1 - 48), a2, a3);
}
