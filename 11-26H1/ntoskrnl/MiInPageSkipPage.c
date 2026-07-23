/*
 * XREFs of MiInPageSkipPage @ 0x14038F000
 * Callers:
 *     MiValidatePagefilePageHash @ 0x14038ED2C (MiValidatePagefilePageHash.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiInPageSkipPage(__int64 a1)
{
  return a1 == qword_140E36170 || (*(_DWORD *)(a1 + 32) & 0x70000) == 0x70000 && *(_QWORD *)(a1 + 8) == -3LL;
}
