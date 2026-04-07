/*
 * XREFs of ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x18002AE84
 * Callers:
 *     ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18002A9F4 (-AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4Window.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18002ABE4 (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 * Callees:
 *     ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x1800182B0 (-CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ.c)
 */

void __fastcall CWindowData::TrackOwnedWindows(CWindowData *this, char a2)
{
  unsigned __int8 v3; // cl
  __int64 v4; // r9
  __int64 v5; // rdx

  v3 = *((_BYTE *)this + 737);
  if ( a2 != v3 >> 7 )
  {
    v4 = 0LL;
    *((_BYTE *)this + 737) = (a2 << 7) | v3 & 0x7F;
    if ( a2 )
    {
      CWindowData::CheckOwnedWindowEligibilityForOwner(this);
    }
    else if ( *((_DWORD *)this + 158) )
    {
      do
      {
        v5 = *(_QWORD *)(*((_QWORD *)this + 76) + 8 * v4);
        v4 = (unsigned int)(v4 + 1);
        *(_BYTE *)(v5 + 738) &= ~1u;
      }
      while ( (unsigned int)v4 < *((_DWORD *)this + 158) );
    }
  }
}
