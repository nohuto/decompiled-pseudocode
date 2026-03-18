/*
 * XREFs of ?bNext@BEZIER@@QEAAHPEAU_POINTFIX@@@Z @ 0x1400A7A58
 * Callers:
 *     ?vNextPoint@LINER@pathwide@@AEAAXXZ @ 0x1400A7190 (-vNextPoint@LINER@pathwide@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall BEZIER::bNext(BEZIER *this, struct _POINTFIX *a2)
{
  if ( *((_DWORD *)this + 42) )
    return BEZIER32::bNext(this, a2);
  else
    return BEZIER64::bNext(this, a2);
}
