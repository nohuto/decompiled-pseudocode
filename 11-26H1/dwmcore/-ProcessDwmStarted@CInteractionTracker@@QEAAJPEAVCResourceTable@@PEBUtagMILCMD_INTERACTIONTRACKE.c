/*
 * XREFs of ?ProcessDwmStarted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_DWMSTARTED@@@Z @ 0x1801DA444
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessDwmStarted(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_DWMSTARTED *a3)
{
  bool v6; // zf

  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 12);
  if ( *((_BYTE *)a3 + 8) )
  {
    v6 = *((_QWORD *)this + 6) == 0LL;
    *((_DWORD *)this + 46) = *((_DWORD *)a3 + 3);
    *(_QWORD *)((char *)this + 188) = *((unsigned int *)a3 + 4);
    if ( !v6 )
      CResource::InvalidateConsumingAnimationsInternal((__int64)this);
    if ( *((_QWORD *)this + 6) )
      CResource::InvalidateConsumingAnimationsInternal((__int64)this);
    v6 = *((_QWORD *)this + 6) == 0LL;
    *((_DWORD *)this + 60) = *((_DWORD *)a3 + 5);
    if ( !v6 )
    {
      CResource::InvalidateConsumingAnimationsInternal((__int64)this);
      if ( *((_QWORD *)this + 6) )
        CResource::InvalidateConsumingAnimationsInternal((__int64)this);
    }
    *((_BYTE *)this + 596) |= 0x12u;
  }
  return 0LL;
}
