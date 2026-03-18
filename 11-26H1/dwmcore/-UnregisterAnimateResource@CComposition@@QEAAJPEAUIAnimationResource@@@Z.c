/*
 * XREFs of ?UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x18016A578
 * Callers:
 *     ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x18016A508 (-UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x180163BF0 (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 */

__int64 __fastcall CComposition::UnregisterAnimateResource(CComposition *this, struct IAnimationResource *a2)
{
  unsigned int v2; // ebx
  struct IAnimationResource *v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  v2 = 0;
  if ( !(unsigned int)DynArray<CChannelContext *,1>::Remove((__int64 *)this + 734, (__int64 *)&v4) )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x6E5u, 0LL);
  }
  return v2;
}
