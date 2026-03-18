/*
 * XREFs of ?Initialize@CCursorVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x14022CF30
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x140054680 (-Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CCursorVisualMarshaler::Initialize(
        DirectComposition::CCursorVisualMarshaler *this)
{
  int v2; // eax
  int v3; // edx

  v2 = DirectComposition::CVisualMarshaler::Initialize(this);
  v3 = 0;
  if ( v2 < 0 )
    v3 = v2;
  if ( v3 >= 0 )
    *((_BYTE *)this + 392) = 1;
  return (unsigned int)v3;
}
