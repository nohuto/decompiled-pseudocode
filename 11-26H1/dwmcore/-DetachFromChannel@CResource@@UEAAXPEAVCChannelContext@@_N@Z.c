/*
 * XREFs of ?DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18014C720
 * Callers:
 *     ?DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18014C630 (-DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CGenericInk@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18026F7A0 (-DetachFromChannel@CGenericInk@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CSynchronousSuperWetInk@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180284B60 (-DetachFromChannel@CSynchronousSuperWetInk@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CResource::DetachFromChannel(CResource *this, struct CChannelContext *a2)
{
  if ( a2 == *((struct CChannelContext **)this + 7) )
    *((_QWORD *)this + 7) = 0LL;
}
