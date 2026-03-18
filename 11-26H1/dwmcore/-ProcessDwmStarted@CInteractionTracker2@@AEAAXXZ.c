/*
 * XREFs of ?ProcessDwmStarted@CInteractionTracker2@@AEAAXXZ @ 0x180274A00
 * Callers:
 *     ?CleanDirties@CInteractionTracker2@@IEAAXXZ @ 0x180272760 (-CleanDirties@CInteractionTracker2@@IEAAXXZ.c)
 * Callees:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 */

void __fastcall CInteractionTracker2::ProcessDwmStarted(CInteractionTracker2 *this)
{
  bool v2; // zf
  int v3; // edi

  if ( (*((_BYTE *)this + 828) & 1) != 0 )
  {
    v2 = *((_QWORD *)this + 6) == 0LL;
    v3 = *((_DWORD *)this + 49);
    *((_QWORD *)this + 53) = *(_QWORD *)((char *)this + 188);
    *((_DWORD *)this + 108) = 0;
    if ( !v2 )
      CResource::InvalidateConsumingAnimationsInternal((__int64)this);
    if ( *((_QWORD *)this + 6) )
      CResource::InvalidateConsumingAnimationsInternal((__int64)this);
    v2 = *((_QWORD *)this + 6) == 0LL;
    *((_DWORD *)this + 120) = v3;
    if ( !v2 )
    {
      CResource::InvalidateConsumingAnimationsInternal((__int64)this);
      if ( *((_QWORD *)this + 6) )
        CResource::InvalidateConsumingAnimationsInternal((__int64)this);
    }
    *((_BYTE *)this + 828) |= 0x24u;
  }
}
