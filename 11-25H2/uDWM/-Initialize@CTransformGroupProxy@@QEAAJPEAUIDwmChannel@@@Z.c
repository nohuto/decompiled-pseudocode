/*
 * XREFs of ?Initialize@CTransformGroupProxy@@QEAAJPEAUIDwmChannel@@@Z @ 0x1800D1818
 * Callers:
 *     ??$CreateProxy@VCTransformGroupProxy@@@CCompositor@@IEAAJPEAPEAVCTransformGroupProxy@@@Z @ 0x18006FA24 (--$CreateProxy@VCTransformGroupProxy@@@CCompositor@@IEAAJPEAPEAVCTransformGroupProxy@@@Z.c)
 * Callees:
 *     ?Initialize@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z @ 0x1800076B4 (-Initialize@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTransformGroupProxy::Initialize(CTransformGroupProxy *this, struct IDwmChannel *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CResourceProxy::Initialize((__int64)this, 0x25u, (__int64)a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xEu, 0LL);
  else
    return 0;
  return v3;
}
