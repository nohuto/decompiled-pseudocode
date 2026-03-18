/*
 * XREFs of ?SetIntegerProperty@CGlobalDCompVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x14022E3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CGlobalDCompVisualMarshaler::SetIntegerProperty(
        DirectComposition::CGlobalDCompVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx
  int v6; // r8d

  v5 = 0;
  if ( a3 )
  {
    v6 = a3 - 2;
    if ( v6 )
    {
      if ( v6 != 1 )
        return (unsigned int)-1073741811;
      if ( *((_DWORD *)this + 21) == (_DWORD)a4 )
        return v5;
      *((_DWORD *)this + 4) |= 0x100u;
      *((_DWORD *)this + 21) = a4;
    }
    else
    {
      if ( *((_BYTE *)this + 80) == ((_DWORD)a4 != 0) )
        return v5;
      *((_DWORD *)this + 4) |= 0x80u;
      *((_BYTE *)this + 80) = (_DWORD)a4 != 0;
    }
    *a5 = 1;
    return v5;
  }
  if ( *((_QWORD *)this + 7) != a4 )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    *((_QWORD *)this + 7) = a4;
    *a5 = 1;
  }
  return v5;
}
