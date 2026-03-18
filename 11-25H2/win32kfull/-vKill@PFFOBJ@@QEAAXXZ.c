/*
 * XREFs of ?vKill@PFFOBJ@@QEAAXXZ @ 0x140107C84
 * Callers:
 *     ?bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z @ 0x1401071B4 (-bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x14010FBC0 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PFFOBJ::vKill(PFFOBJ *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  __int64 i; // rdx
  __int64 v6; // rax

  v2 = *(_QWORD *)this;
  v3 = *(_DWORD *)(v2 + 52);
  if ( (v3 & 1) == 0 )
  {
    *(_DWORD *)(v2 + 52) = v3 | 1;
    v4 = 0LL;
    for ( i = *(_QWORD *)this; (unsigned int)v4 < *(_DWORD *)(*(_QWORD *)this + 216LL); v4 = (unsigned int)(v4 + 1) )
    {
      v6 = *(_QWORD *)(i + 8 * v4 + 224);
      if ( v6 )
        *(_DWORD *)(v6 + 12) |= 2u;
      i = *(_QWORD *)this;
    }
  }
}
