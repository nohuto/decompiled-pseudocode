/*
 * XREFs of PfSnAltProfileTreeCompareByScenarioId @ 0x1409EA1EC
 * Callers:
 *     PfSnAltProfileFindByScenarioId @ 0x1409EA150 (PfSnAltProfileFindByScenarioId.c)
 *     PfSnSetAltPrefetchParam @ 0x140B6B900 (PfSnSetAltPrefetchParam.c)
 * Callees:
 *     wcsncmp @ 0x1405381A0 (wcsncmp.c)
 */

int __fastcall PfSnAltProfileTreeCompareByScenarioId(wchar_t *Str2, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v4; // eax

  v2 = *((_DWORD *)Str2 + 15);
  if ( *(_DWORD *)(a2 + 92) > v2 )
    return 1;
  if ( *(_DWORD *)(a2 + 92) < v2 )
    return -1;
  v4 = *((_DWORD *)Str2 + 16);
  if ( *(_DWORD *)(a2 + 96) > v4 )
    return 1;
  if ( *(_DWORD *)(a2 + 96) >= v4 )
    return wcsncmp((const wchar_t *)(a2 + 32), Str2, 0x1EuLL);
  else
    return -1;
}
