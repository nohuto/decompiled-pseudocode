/*
 * XREFs of ?SetBufferProperty@CWindowNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140236640
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140185FB0 (-SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSIT.c)
 */

__int64 __fastcall DirectComposition::CWindowNodeMarshaler::SetBufferProperty(
        __int64 a1,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // r10d
  __int128 v7; // xmm0
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm0

  v6 = 0;
  *a6 = 0;
  if ( a3 > 0x3E )
  {
    switch ( a3 )
    {
      case '?':
        if ( a4 && a5 == 16 )
        {
          v16 = *(_OWORD *)a4;
          *(_DWORD *)(a1 + 336) |= 0x1000u;
          *(_OWORD *)(a1 + 456) = v16;
          goto LABEL_43;
        }
        return (unsigned int)-1073741811;
      case '@':
        if ( a4 && a5 == 16 )
        {
          v15 = *(_OWORD *)a4;
          *(_DWORD *)(a1 + 336) |= 0x2000u;
          *(_OWORD *)(a1 + 472) = v15;
          goto LABEL_43;
        }
        return (unsigned int)-1073741811;
      case 'C':
        if ( a4 && a5 == 8 )
        {
          v14 = *(_QWORD *)a4;
          *(_DWORD *)(a1 + 336) |= 0x10000u;
          *(_QWORD *)(a1 + 504) = v14;
          goto LABEL_43;
        }
        return (unsigned int)-1073741811;
      case 'D':
        if ( a4 && a5 == 8 )
        {
          v13 = *(_QWORD *)a4;
          *(_DWORD *)(a1 + 336) |= 0x20000u;
          *(_QWORD *)(a1 + 512) = v13;
          goto LABEL_43;
        }
        return (unsigned int)-1073741811;
    }
  }
  else
  {
    switch ( a3 )
    {
      case '>':
        if ( a4 && a5 == 16 )
        {
          v12 = *(_OWORD *)a4;
          *(_DWORD *)(a1 + 336) |= 0x800u;
          *(_OWORD *)(a1 + 436) = v12;
          goto LABEL_43;
        }
        return (unsigned int)-1073741811;
      case '3':
        if ( a4 && a5 == 16 )
        {
          v11 = *(_OWORD *)a4;
          *(_DWORD *)(a1 + 336) |= 1u;
          *(_OWORD *)(a1 + 340) = v11;
          goto LABEL_43;
        }
        return (unsigned int)-1073741811;
      case '4':
        if ( a4 && a5 == 16 )
        {
          v10 = *(_OWORD *)a4;
          *(_DWORD *)(a1 + 336) |= 2u;
          *(_OWORD *)(a1 + 356) = v10;
          goto LABEL_43;
        }
        return (unsigned int)-1073741811;
      case '5':
        if ( a4 && a5 == 16 )
        {
          v9 = *(_OWORD *)a4;
          *(_DWORD *)(a1 + 336) |= 4u;
          *(_OWORD *)(a1 + 372) = v9;
          goto LABEL_43;
        }
        return (unsigned int)-1073741811;
      case '6':
        if ( a4 && a5 == 8 )
        {
          v8 = *(_QWORD *)a4;
          *(_DWORD *)(a1 + 336) |= 8u;
          *(_QWORD *)(a1 + 388) = v8;
          goto LABEL_43;
        }
        return (unsigned int)-1073741811;
      case '7':
        if ( a4 && a5 == 16 )
        {
          v7 = *(_OWORD *)a4;
          *(_DWORD *)(a1 + 336) |= 0x10u;
          *(_OWORD *)(a1 + 396) = v7;
LABEL_43:
          *a6 = 1;
          return v6;
        }
        return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)DirectComposition::CVisualMarshaler::SetBufferProperty(a1, a2, a3, a4, a5, a6);
}
