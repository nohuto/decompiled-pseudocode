/*
 * XREFs of ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x18002FA00
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18002C418 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@.c)
 *     ?StartStationaryAnimation@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K@Z @ 0x18008F130 (-StartStationaryAnimation@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryV.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18002D1A0 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCContactStationaryVisual@@@@YAJ_KPEAPEAVCContactStationaryVisual@@@Z @ 0x18002FB94 (--$CreateTouchVisual@VCContactStationaryVisual@@@@YAJ_KPEAPEAVCContactStationaryVisual@@@Z.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x18002FCAC (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x1800304B4 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
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
  __int64 v16; // rax
  unsigned int v17; // edx
  __int64 v18; // rax
  int v20; // eax
  __int128 v22; // [rsp+30h] [rbp-20h] BYREF
  CBaseObject *v23; // [rsp+40h] [rbp-10h]

  v7 = *a4;
  HIDWORD(v22) = 0;
  v23 = 0LL;
  LODWORD(v22) = a2;
  *(_QWORD *)((char *)&v22 + 4) = v7;
  Touch = CreateTouchVisual<CContactStationaryVisual>(a6);
  v13 = Touch;
  if ( Touch < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Touch, 0x7A1u, 0LL);
    goto LABEL_5;
  }
  if ( CContactManager::AddToTouchNode(v12, a6, v23) < 0 )
  {
LABEL_12:
    if ( v13 >= 0 )
      return (unsigned int)v13;
    goto LABEL_5;
  }
  v15 = CContactStationaryVisual::Start(v23, a3, a4, a5, a7);
  v13 = v15;
  if ( v15 >= 0 )
  {
    v16 = *(unsigned int *)(a1 + 144);
    v17 = v16 + 1;
    if ( (int)v16 + 1 < (unsigned int)v16 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
    }
    else if ( v17 > *(_DWORD *)(a1 + 140) )
    {
      v20 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 120, 24, 1, &v22);
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0xBEu, 0LL);
    }
    else
    {
      v14 = (CContactManager *)(3 * v16);
      v18 = *(_QWORD *)(a1 + 120);
      *(_OWORD *)(v18 + 8LL * (_QWORD)v14) = v22;
      *(_QWORD *)(v18 + 8LL * (_QWORD)v14 + 16) = v23;
      *(_DWORD *)(a1 + 144) = v17;
    }
    goto LABEL_12;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x7A4u, 0LL);
LABEL_5:
  if ( v23 )
  {
    CContactManager::RemoveFromTouchNode(v14, a6, (struct CVisualProxy **)v23);
    if ( v23 )
      CBaseObject::Release(v23);
  }
  return (unsigned int)v13;
}
