/*
 * XREFs of HalpInitializeNMI @ 0x140581254
 * Callers:
 *     HalpInitializeErrSrc @ 0x140BEFE50 (HalpInitializeErrSrc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInitializeNMI(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 8) == 3 )
  {
    dword_140E109F4 = 1;
    HalpNmiInfo = *(_DWORD *)(a2 + 28);
    dword_140E109F8 = 0;
  }
  return 0LL;
}
