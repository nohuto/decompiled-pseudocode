/*
 * XREFs of ?Add@?$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x1402347D0
 * Callers:
 *     ?SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x140059520 (-SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEB.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Grow@?$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z @ 0x14009E3B0 (-Grow@-$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z.c)
 */

__int64 __fastcall CStructDynamicArray<InjectManipulationArgs>::Add(__int64 a1, _OWORD *a2)
{
  _DWORD *v2; // rsi
  int v3; // ebx
  _DWORD *v6; // r14
  _OWORD *v7; // rax

  v2 = (_DWORD *)(a1 + 8);
  v3 = 0;
  v6 = (_DWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 8) == *(_DWORD *)(a1 + 12) )
  {
    v3 = CDynamicArray<InjectManipulationArgs *,2003858261>::Grow(a1);
    if ( v3 < 0 )
      return (unsigned int)v3;
    v6 = (_DWORD *)(a1 + 8);
  }
  if ( *v2 < *(_DWORD *)(a1 + 12) )
  {
    v7 = (_OWORD *)Win32AllocPoolZInitImpl(256LL, 0x80uLL, 0x32644344u);
    if ( v7 )
    {
      *v7 = *a2;
      v7[1] = a2[1];
      v7[2] = a2[2];
      v7[3] = a2[3];
      v7[4] = a2[4];
      v7[5] = a2[5];
      v7[6] = a2[6];
      v7[7] = a2[7];
      *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)(*v6)++) = v7;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v3;
}
