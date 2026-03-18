/*
 * XREFs of HUBDSM_CheckingIfIgnoreHWSerNumIsSet @ 0x140020B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfIgnoreHWSerNumIsSet(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 960) + 1652LL) & 1) != 0 ? 4089 : 4061;
}
