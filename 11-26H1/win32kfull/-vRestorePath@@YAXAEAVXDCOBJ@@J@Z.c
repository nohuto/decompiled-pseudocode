/*
 * XREFs of ?vRestorePath@@YAXAEAVXDCOBJ@@J@Z @ 0x140114280
 * Callers:
 *     ?GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z @ 0x140076DCC (-GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?vDestroy@DC@@QEAAXXZ @ 0x1401142AC (-vDestroy@DC@@QEAAXXZ.c)
 */

void __fastcall vRestorePath(struct XDCOBJ *a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)a1;
  if ( *(_QWORD *)(v1 + 200) )
  {
    if ( (*(_DWORD *)(v1 + 248) & 2) == 0 )
      DC::vDestroy((DC *)v1);
  }
}
