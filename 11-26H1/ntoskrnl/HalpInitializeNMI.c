/*
 * XREFs of HalpInitializeNMI @ 0x14057ED34
 * Callers:
 *     HalpInitializeErrSrc @ 0x140BE9E50 (HalpInitializeErrSrc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInitializeNMI(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 8) == 3 )
  {
    dword_140E108C4 = 1;
    HalpNmiInfo = *(_DWORD *)(a2 + 28);
    dword_140E108C8 = 0;
  }
  return 0LL;
}
