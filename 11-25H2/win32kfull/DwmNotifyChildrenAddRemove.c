/*
 * XREFs of DwmNotifyChildrenAddRemove @ 0x14026D92C
 * Callers:
 *     ?zzzDwmStartRedirection@@YAJXZ @ 0x1402B4DB4 (-zzzDwmStartRedirection@@YAJXZ.c)
 *     xxxDwmStopRedirection @ 0x1402B5280 (xxxDwmStopRedirection.c)
 * Callees:
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x14018AAC4 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x14018FE40 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 */

void __fastcall DwmNotifyChildrenAddRemove(struct tagDESKTOP *a1, int a2)
{
  if ( a2 )
  {
    DwmNotifyChildrenCreateDestroy(a1, 1LL);
    DwmNotifyChildrenLinkUnlink(a1, 1);
  }
  else
  {
    DwmNotifyChildrenLinkUnlink(a1, 0);
    DwmNotifyChildrenCreateDestroy(a1, 0LL);
  }
}
