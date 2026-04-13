/*
 * XREFs of ?QueryInterface@ContextualSuggestionsManager@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ContextualSuggestionsManager::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  return ContentManagement::ContextualSuggestionsManager::QueryInterface(a1 - 48, a2, a3);
}
