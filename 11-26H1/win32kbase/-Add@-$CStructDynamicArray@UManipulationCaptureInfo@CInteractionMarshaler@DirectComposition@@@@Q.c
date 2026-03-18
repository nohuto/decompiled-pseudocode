/*
 * XREFs of ?Add@?$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@QEAAJAEBUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@Z @ 0x14017E1D4
 * Callers:
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z @ 0x14017E000 (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@I_K@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Grow@?$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z @ 0x14017E280 (-Grow@-$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z.c)
 */

__int64 __fastcall CStructDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo>::Add(
        __int64 a1,
        _OWORD *a2)
{
  _DWORD *v2; // rbp
  int v3; // ebx
  _DWORD *v6; // rsi
  _OWORD *v7; // rax

  v2 = (_DWORD *)(a1 + 8);
  v3 = 0;
  v6 = (_DWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 8) == *(_DWORD *)(a1 + 12) )
  {
    v3 = CDynamicArray<InjectManipulationArgs *,2003858261>::Grow();
    if ( v3 < 0 )
      return (unsigned int)v3;
    v6 = (_DWORD *)(a1 + 8);
  }
  if ( *v2 < *(_DWORD *)(a1 + 12) )
  {
    v7 = (_OWORD *)Win32AllocPoolZInitImpl(256LL, 0x10uLL, 0x32644344u);
    if ( v7 )
    {
      *v7 = *a2;
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
