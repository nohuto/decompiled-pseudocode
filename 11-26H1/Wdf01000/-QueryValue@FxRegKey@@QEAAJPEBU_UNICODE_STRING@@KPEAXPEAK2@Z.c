/*
 * XREFs of ?QueryValue@FxRegKey@@QEAAJPEBU_UNICODE_STRING@@KPEAXPEAK2@Z @ 0x14003EA7C
 * Callers:
 *     imp_WdfRegistryQueryMemory @ 0x140078F20 (imp_WdfRegistryQueryMemory.c)
 * Callees:
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x14003F1C0 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 */

int __fastcall FxRegKey::QueryValue(
        FxRegKey *this,
        const _UNICODE_STRING *ValueName,
        unsigned int ValueLength,
        void *Value,
        unsigned int *ValueLengthQueried,
        unsigned int *ValueType)
{
  return FxRegKey::_QueryValue(
           this->m_Globals,
           this->m_Key,
           ValueName,
           ValueLength,
           Value,
           ValueLengthQueried,
           ValueType);
}
