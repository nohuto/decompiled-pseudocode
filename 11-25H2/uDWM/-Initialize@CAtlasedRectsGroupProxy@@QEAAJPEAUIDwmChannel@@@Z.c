/*
 * XREFs of ?Initialize@CAtlasedRectsGroupProxy@@QEAAJPEAUIDwmChannel@@@Z @ 0x180006444
 * Callers:
 *     ??$CreateProxy@VCAtlasedRectsGroupProxy@@@CCompositor@@IEAAJPEAPEAVCAtlasedRectsGroupProxy@@@Z @ 0x180006364 (--$CreateProxy@VCAtlasedRectsGroupProxy@@@CCompositor@@IEAAJPEAPEAVCAtlasedRectsGroupProxy@@@Z.c)
 * Callees:
 *     ?Initialize@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z @ 0x1800076B4 (-Initialize@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAtlasedRectsGroupProxy::Initialize(CAtlasedRectsGroupProxy *this, struct IDwmChannel *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CResourceProxy::Initialize(this, 2LL, a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xEu, 0LL);
  else
    return 0;
  return v3;
}
