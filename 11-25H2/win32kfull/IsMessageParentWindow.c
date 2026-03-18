/*
 * XREFs of IsMessageParentWindow @ 0x14004BF48
 * Callers:
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x14004BB78 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     UnlinkWindow @ 0x14004BBDC (UnlinkWindow.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x14018FE40 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     LinkWindow @ 0x1402B6200 (LinkWindow.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsMessageParentWindow(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0LL;
  if ( v1 )
    v2 = *(_QWORD *)(v1 + 112);
  return a1 == v2;
}
