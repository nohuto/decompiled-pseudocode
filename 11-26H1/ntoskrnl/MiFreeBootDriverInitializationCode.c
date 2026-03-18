/*
 * XREFs of MiFreeBootDriverInitializationCode @ 0x140864340
 * Callers:
 *     <none>
 * Callees:
 *     MiFreeDriverInitialization @ 0x140AC90AC (MiFreeDriverInitialization.c)
 */

__int64 __fastcall MiFreeBootDriverInitializationCode(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 104) & 0x40000000) == 0 )
    MiFreeDriverInitialization();
  return 0LL;
}
