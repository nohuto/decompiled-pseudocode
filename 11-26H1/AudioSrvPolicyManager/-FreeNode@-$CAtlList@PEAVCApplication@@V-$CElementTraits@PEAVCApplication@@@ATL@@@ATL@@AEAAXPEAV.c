/*
 * XREFs of ?FreeNode@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180020334
 * Callers:
 *     ?RemoveAll@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXXZ @ 0x18002035C (-RemoveAll@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x18003CDC4 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXXZ @ 0x18002035C (-RemoveAll@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::FreeNode(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  bool v3; // zf

  result = *(_QWORD *)(a1 + 32);
  *a2 = result;
  v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v3 )
    return ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::RemoveAll();
  return result;
}
