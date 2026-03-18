/*
 * XREFs of _ALIGN_MEM @ 0x1401B3918
 * Callers:
 *     SetupAAHeader @ 0x14013BB0C (SetupAAHeader.c)
 *     BuildTileAAInfo @ 0x1402F8FC0 (BuildTileAAInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ALIGN_MEM(unsigned int *a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // eax

  v2 = a2 + 8;
  if ( a2 + 8 < a2 )
  {
    v3 = -2147024362;
    v4 = -1;
  }
  else
  {
    v3 = 0;
    v4 = v2 & 0xFFFFFFF8;
  }
  *a1 = v4;
  return v3;
}
