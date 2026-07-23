/*
 * XREFs of KiGetProcessorClassForPolicy @ 0x140231FC4
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x140220510 (KiCheckPreferredHeteroProcessor.c)
 *     KiSearchForNewThreadsOnTarget @ 0x140241E30 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     <none>
 */

char __fastcall KiGetProcessorClassForPolicy(__int64 a1, int a2, unsigned __int8 a3)
{
  __int64 v3; // r9
  unsigned int v4; // eax

  v3 = *(_QWORD *)(a1 + 35424);
  v4 = a2 - 3;
  if ( v3 )
  {
    if ( v4 > 1 )
      return *(_BYTE *)(v3 + 4LL * a3 + 4);
    else
      return *(_BYTE *)(v3 + 4LL * a3 + 5);
  }
  else if ( v4 <= 1 )
  {
    return *(_BYTE *)(a1 + 35354);
  }
  else
  {
    return *(_BYTE *)(a1 + 35353);
  }
}
