/*
 * XREFs of ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x18004F2C4
 * Callers:
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180012EFC (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18005F274 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180003280 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x18004F36C (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 *     ??$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJ_KPEAPEAVCPenBarrelKeyVisual@@@Z @ 0x18004F3F8 (--$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJ_KPEAPEAVCPenBarrelKeyVisual@@@Z.c)
 *     ?ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z @ 0x18005ED6C (-ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CContactManager::StartPenBarrelVisual(
        CContactManager *this,
        struct CPenContact *a2,
        unsigned __int64 a3)
{
  unsigned int v3; // ebx
  CPenBarrelKeyVisual **v4; // rsi
  int Touch; // eax
  CContactManager *v9; // rcx

  v3 = 0;
  v4 = (CPenBarrelKeyVisual **)((char *)a2 + 8);
  if ( !*((_QWORD *)a2 + 1) )
  {
    Touch = CreateTouchVisual<CPenBarrelKeyVisual>(a3);
    v3 = Touch;
    if ( Touch < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Touch, 0x7CBu, 0LL);
      return v3;
    }
    CPenBarrelKeyVisual::ShowBarrel(*v4, (*((_DWORD *)a2 + 6) & 0x10) != 0);
    CContactManager::AddToTouchNode(v9, a3, *v4);
  }
  CPenBarrelKeyVisual::Start(*v4, (const struct tagPOINT *)((char *)a2 + 28), *((_DWORD *)a2 + 1), *(_DWORD *)a2);
  return v3;
}
