/*
 * XREFs of ?EnableVmBusChannel@@YAJPEAVDXGVMBUSCHANNEL@@_N@Z @ 0x14020E290
 * Callers:
 *     ?EnableVmBusChannel@DXGVAILGUESTOBJECT@@QEAAJ_N@Z @ 0x1400830A0 (-EnableVmBusChannel@DXGVAILGUESTOBJECT@@QEAAJ_N@Z.c)
 *     ?EnableVmBusChannel@DXGVAILOBJECT@@QEAAJXZ @ 0x140083134 (-EnableVmBusChannel@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ?Enable@DXGVMBUSCHANNEL@@QEAAJ_N@Z @ 0x14020DFE4 (-Enable@DXGVMBUSCHANNEL@@QEAAJ_N@Z.c)
 */

__int64 __fastcall EnableVmBusChannel(struct DXGVMBUSCHANNEL *a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return DXGVMBUSCHANNEL::Enable(a1, a2);
  return result;
}
