/*
 * XREFs of KiRestoreThreadIptState @ 0x1405ECF30
 * Callers:
 *     SwapContext @ 0x14072FFB0 (SwapContext.c)
 * Callees:
 *     KiRestoreIptState @ 0x1404F380C (KiRestoreIptState.c)
 *     KiInitIptState @ 0x1405ECDBC (KiInitIptState.c)
 */

unsigned __int64 __fastcall KiRestoreThreadIptState(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 592) & 0x100LL) != 0 )
    return KiRestoreIptState(*(unsigned __int64 **)(a1 + 1112));
  else
    return KiInitIptState();
}
