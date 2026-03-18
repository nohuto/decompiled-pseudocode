/*
 * XREFs of ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1401BD260
 * Callers:
 *     ?SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1401917F0 (-SetBufferProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMP.c)
 *     ?SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140240970 (-SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x1400A77FC (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall DirectComposition::CBaseExpressionMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  unsigned int v6; // ebx
  __int64 v9; // rax
  _OWORD *v10; // rax

  v6 = 0;
  if ( a3 != 5 )
    return (unsigned int)-1073741811;
  if ( !*(_QWORD *)(a1 + 88) )
  {
    switch ( a5 )
    {
      case 12LL:
        if ( *(_DWORD *)a4 == 1 )
        {
          v9 = Win32AllocPoolWithQuotaImpl(a1, 0xCuLL, 0x6D654344u);
          if ( !v9 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(a1 + 88) = v9;
          *(_QWORD *)v9 = *(_QWORD *)a4;
          *(_DWORD *)(v9 + 8) = *(_DWORD *)(a4 + 8);
          goto LABEL_13;
        }
        break;
      case 16LL:
        if ( *(_DWORD *)a4 == 2 )
        {
          v10 = (_OWORD *)Win32AllocPoolWithQuotaImpl(a1, 0x10uLL, 0x6D654344u);
          if ( !v10 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(a1 + 88) = v10;
          *v10 = *(_OWORD *)a4;
LABEL_13:
          *(_DWORD *)(a1 + 16) &= ~0x80u;
LABEL_16:
          *a6 = 1;
          return v6;
        }
        break;
      case 0LL:
        *(_DWORD *)(a1 + 16) &= ~0x80u;
        goto LABEL_16;
    }
    return (unsigned int)-1073741811;
  }
  return (unsigned int)-1073741790;
}
