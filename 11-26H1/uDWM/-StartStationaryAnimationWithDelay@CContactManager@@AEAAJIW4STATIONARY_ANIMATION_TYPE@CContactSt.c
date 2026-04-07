/*
 * XREFs of ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x1800032EC
 * Callers:
 *     ?StartStationaryAnimation@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K@Z @ 0x1800029F4 (-StartStationaryAnimation@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryV.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180012410 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJPEFBUTlwPair@CTransitionVisualController@@I@Z @ 0x180002954 (-AddMultipleAndSet@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJPEFBUTlwPair@CTra.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180003280 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCContactStationaryVisual@@@@YAJ_KPEAPEAVCContactStationaryVisual@@@Z @ 0x180003410 (--$CreateTouchVisual@VCContactStationaryVisual@@@@YAJ_KPEAPEAVCContactStationaryVisual@@@Z.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x1800036B0 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x1800130EC (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CContactManager::StartStationaryAnimationWithDelay(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 *a4,
        __int64 a5,
        unsigned __int64 a6,
        char a7)
{
  __int64 v7; // rax
  int Touch; // eax
  CContactManager *v12; // rcx
  int v13; // ebx
  CContactManager *v14; // rcx
  int v15; // eax
  struct CVisual *v16; // r8
  int v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+34h] [rbp-1Ch]
  int v21; // [rsp+3Ch] [rbp-14h]
  CBaseObject *v22; // [rsp+40h] [rbp-10h]

  v7 = *a4;
  v19 = a2;
  v20 = v7;
  v21 = 0;
  v22 = 0LL;
  Touch = CreateTouchVisual<CContactStationaryVisual>(a6);
  v13 = Touch;
  if ( Touch < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Touch, 0x7A1u, 0LL);
    goto LABEL_5;
  }
  if ( (int)CContactManager::AddToTouchNode(v12, a6, v22) < 0 )
  {
    v16 = v22;
LABEL_11:
    if ( v13 >= 0 )
      return (unsigned int)v13;
    goto LABEL_6;
  }
  v15 = CContactStationaryVisual::Start(v22, a3, a4, a5, a7);
  v13 = v15;
  if ( v15 >= 0 )
  {
    DynArray<CTransitionVisualController::TlwPair,0>::AddMultipleAndSet((__int64 *)(a1 + 120), (__int64)&v19);
    v16 = v22;
    goto LABEL_11;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x7A4u, 0LL);
LABEL_5:
  v16 = v22;
LABEL_6:
  if ( v16 )
  {
    CContactManager::RemoveFromTouchNode(v14, a6, v16);
    if ( v22 )
      CBaseObject::Release(v22);
  }
  return (unsigned int)v13;
}
