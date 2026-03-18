/*
 * XREFs of ?PopRoutedAwayTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x140134EE8
 * Callers:
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1402088EC (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1401F6E78 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1401FF184 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z @ 0x14020028C (-FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall CTouchProcessor::PopRoutedAwayTarget(CTouchProcessor *a1, __int64 a2, unsigned __int16 a3)
{
  struct CInputPointerNode *NodeById; // rax
  struct tagCPointerRoutedAwayTarget **v7; // rax
  struct tagCPointerRoutedAwayTarget *v8; // rbx

  *(_DWORD *)(a2 + 113) = 0;
  *(_WORD *)(a2 + 117) = 0;
  *(_BYTE *)(a2 + 119) = 0;
  memset((void *)a2, 0, 0x70uLL);
  *(_BYTE *)(a2 + 112) = 0;
  NodeById = CTouchProcessor::FindNodeById(a1, a3, 0, 0);
  if ( NodeById )
  {
    v7 = (struct tagCPointerRoutedAwayTarget **)((char *)NodeById + 280);
    v8 = *v7;
    if ( *v7 != (struct tagCPointerRoutedAwayTarget *)v7 )
    {
      CInputDest::operator=(a2, (char *)v8 + 16);
      CTouchProcessor::FreeRoutedAwayTarget(a1, v8);
    }
  }
  return a2;
}
