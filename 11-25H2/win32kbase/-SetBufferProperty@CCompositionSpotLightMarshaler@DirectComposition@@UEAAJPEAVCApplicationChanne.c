/*
 * XREFs of ?SetBufferProperty@CCompositionSpotLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14014B840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionSpotLightMarshaler::SetBufferProperty(
        DirectComposition::CCompositionSpotLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  int v7; // eax
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  int v11; // eax

  v6 = 0;
  *a6 = 0;
  if ( a3 != 12 )
  {
    if ( a3 == 7 )
    {
      if ( a5 == 12 )
      {
        *(_QWORD *)((char *)this + 132) = *(_QWORD *)a4;
        v11 = a4[2];
        *((_DWORD *)this + 4) |= 0x1000u;
        *((_DWORD *)this + 35) = v11;
        goto LABEL_4;
      }
    }
    else if ( a3 == 10 )
    {
      if ( a5 == 16 )
      {
        v10 = *(_OWORD *)a4;
        *((_DWORD *)this + 4) |= 0x4000u;
        *(_OWORD *)((char *)this + 152) = v10;
        goto LABEL_4;
      }
    }
    else if ( a3 == 15 && a5 == 16 )
    {
      v9 = *(_OWORD *)a4;
      *((_DWORD *)this + 4) |= 0x40000u;
      *(_OWORD *)((char *)this + 168) = v9;
      goto LABEL_4;
    }
    return (unsigned int)-1073741811;
  }
  if ( a5 != 12 )
    return (unsigned int)-1073741811;
  *((_QWORD *)this + 15) = *(_QWORD *)a4;
  v7 = a4[2];
  *((_DWORD *)this + 4) |= 0x10000u;
  *((_DWORD *)this + 32) = v7;
LABEL_4:
  *a6 = 1;
  return v6;
}
