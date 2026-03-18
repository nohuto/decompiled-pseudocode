/*
 * XREFs of ?cRef@RBRUSH@@QEAAJJH@Z @ 0x14030A944
 * Callers:
 *     ?vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@HH@Z @ 0x14030A9D8 (-vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@HH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RBRUSH::cRef(RBRUSH *this, unsigned int a2, int a3)
{
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  if ( a3 )
  {
    GreProbeAndWriteToUntrustedVa(this, 4uLL, &v4, 4uLL, 1uLL);
    return v4;
  }
  else
  {
    *(_DWORD *)this = a2;
  }
  return a2;
}
