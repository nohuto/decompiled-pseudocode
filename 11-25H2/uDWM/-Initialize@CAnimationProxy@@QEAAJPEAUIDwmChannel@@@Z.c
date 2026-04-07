/*
 * XREFs of ?Initialize@CAnimationProxy@@QEAAJPEAUIDwmChannel@@@Z @ 0x18008B920
 * Callers:
 *     ??$CreateProxy@VCAnimationProxy@@@CCompositor@@IEAAJPEAPEAVCAnimationProxy@@@Z @ 0x18008A7F4 (--$CreateProxy@VCAnimationProxy@@@CCompositor@@IEAAJPEAPEAVCAnimationProxy@@@Z.c)
 * Callees:
 *     ?Initialize@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z @ 0x1800076B4 (-Initialize@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAnimationProxy::Initialize(CAnimationProxy *this, struct IDwmChannel *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CResourceProxy::Initialize((__int64)this, 0, (__int64)a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xDu, 0LL);
  else
    return 0;
  return v3;
}
