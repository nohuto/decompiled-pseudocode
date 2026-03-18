/*
 * XREFs of ?GetPreferenceDword@CSettingsManager@@UEAAJPEBGPEAK@Z @ 0x140002910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSettingsManager::GetPreferenceDword(
        CSettingsManager *this,
        const unsigned __int16 *a2,
        unsigned int *a3)
{
  return CSettingsManager::GetDword(this, 0LL, a2, a3);
}
