/*
 * XREFs of PATHOBJ_vGetBounds @ 0x140126120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall PATHOBJ_vGetBounds(PATHOBJ *ppo, PRECTFX prectfx)
{
  *prectfx = *(PRECTFX)(*(_QWORD *)&ppo[1] + 48LL);
  if ( *(_QWORD *)&prectfx->xLeft || prectfx->yBottom || prectfx->xRight )
  {
    ++prectfx->yBottom;
    ++prectfx->xRight;
  }
}
