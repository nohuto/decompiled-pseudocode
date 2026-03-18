/*
 * XREFs of ?assertDhpdev@SURFACE@@QEAA_NXZ @ 0x14012802C
 * Callers:
 *     ?vDeleteDriverRealization@SURFACE@@QEAAXXZ @ 0x14008E610 (-vDeleteDriverRealization@SURFACE@@QEAAXXZ.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400F36E0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 */

char __fastcall SURFACE::assertDhpdev(SURFACE *this)
{
  __int64 v2; // r9

  if ( *((_QWORD *)this + 6) )
    return 1;
  v2 = *((_QWORD *)this + 5);
  if ( !v2 || MEMORY[0x6F8] == v2 )
    return 1;
  GrepCaptureLiveMemoryDump(0x190u, 45LL, (__int64)this, v2, MEMORY[0x6F8], 0);
  return 0;
}
