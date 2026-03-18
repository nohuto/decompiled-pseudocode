/*
 * XREFs of ?SetIntegerProperty@CCursorVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x14022E2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1400DAA80 (-SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@.c)
 */

__int64 __fastcall DirectComposition::CCursorVisualMarshaler::SetIntegerProperty(
        DirectComposition::CCursorVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        unsigned __int64 a4,
        bool *a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  if ( a3 == 54 )
  {
    if ( *((_BYTE *)this + 392) == ((_DWORD)a4 != 0) )
      return v5;
    *((_DWORD *)this + 92) |= 4u;
    *((_BYTE *)this + 392) = (_DWORD)a4 != 0;
    goto LABEL_8;
  }
  if ( a3 == 55 )
  {
    if ( *((_BYTE *)this + 393) == ((_DWORD)a4 != 0) )
      return v5;
    *((_DWORD *)this + 92) |= 8u;
    *((_BYTE *)this + 393) = (_DWORD)a4 != 0;
LABEL_8:
    *a5 = 1;
    return v5;
  }
  return (unsigned int)DirectComposition::CVisualMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
}
