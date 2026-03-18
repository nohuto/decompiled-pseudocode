/*
 * XREFs of ?ProcessApplyPositionShift@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_APPLYPOSITIONSHIFT@@PEBXI@Z @ 0x18021A980
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z @ 0x180270440 (-ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessApplyPositionShift(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_APPLYPOSITIONSHIFT *a3,
        char *a4)
{
  char *v5; // rbx
  unsigned int i; // edi
  int v8; // edx
  float v9; // xmm0_4
  unsigned int v10; // ebx

  v5 = a4 + 4;
  for ( i = 0; i < *((_DWORD *)a3 + 2); ++i )
  {
    v8 = *((_DWORD *)v5 - 1);
    if ( v8 == 2 )
    {
      v10 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x35Du, 0LL);
      return v10;
    }
    if ( v8 )
      v9 = *((float *)this + 47);
    else
      v9 = *((float *)this + 46);
    if ( v9 >= *((float *)v5 + 1) )
      CInteractionTracker::ApplyPositionShift(this);
    v5 += 12;
  }
  return 0;
}
