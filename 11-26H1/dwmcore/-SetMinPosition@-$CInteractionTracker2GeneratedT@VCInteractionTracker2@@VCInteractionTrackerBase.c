/*
 * XREFs of ?SetMinPosition@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@QEAAJUD2D_POINT_2F@@@Z @ 0x18024C230
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802767F4 (-SetProperty@-$CInteractionTracker2GeneratedT@VCInteractionTracker2@@VCInteractionTrackerBase@@@.c)
 * Callees:
 *     ??9@YA_NAEBUD2D_VECTOR_2F@@0@Z @ 0x1802060FC (--9@YA_NAEBUD2D_VECTOR_2F@@0@Z.c)
 */

__int64 __fastcall CInteractionTracker2GeneratedT<CInteractionTracker2,CInteractionTrackerBase>::SetMinPosition(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // rdx
  __int64 v3; // r8
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a2;
  if ( operator!=((float *)&v6, (float *)(a1 + 220)) )
  {
    *(_BYTE *)(v3 + 830) |= 2u;
    *v2 = a2;
  }
  return 0LL;
}
