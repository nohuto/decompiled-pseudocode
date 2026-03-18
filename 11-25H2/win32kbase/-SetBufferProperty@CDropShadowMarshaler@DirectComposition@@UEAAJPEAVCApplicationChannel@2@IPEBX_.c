/*
 * XREFs of ?SetBufferProperty@CDropShadowMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x140137710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDropShadowMarshaler::SetBufferProperty(
        DirectComposition::CDropShadowMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  int v7; // eax
  __int128 v9; // xmm0

  v6 = 0;
  *a6 = 0;
  if ( a3 == 4 )
  {
    if ( !a4 || a5 != 12 )
      return v6;
    *((_DWORD *)this + 25) = *a4;
    *((_DWORD *)this + 26) = a4[1];
    v7 = a4[2];
    *((_DWORD *)this + 4) |= 0x400u;
    *((_DWORD *)this + 27) = v7;
    goto LABEL_5;
  }
  if ( a3 == 2 )
  {
    if ( !a4 || a5 != 16 )
      return (unsigned int)-1073741811;
    v9 = *(_OWORD *)a4;
    *((_DWORD *)this + 4) |= 0x100u;
    *((_OWORD *)this + 5) = v9;
LABEL_5:
    *a6 = 1;
    return v6;
  }
  return 3221225485LL;
}
