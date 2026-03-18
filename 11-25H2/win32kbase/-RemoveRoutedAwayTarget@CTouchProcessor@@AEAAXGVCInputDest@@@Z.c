/*
 * XREFs of ?RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1402092F0
 * Callers:
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x140201C90 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x140039A7C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1401FF184 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z @ 0x14020028C (-FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z.c)
 */

void __fastcall CTouchProcessor::RemoveRoutedAwayTarget(PERESOURCE *a1, unsigned __int16 a2, CInputDest *a3)
{
  struct CInputPointerNode *NodeById; // rax
  struct tagCPointerRoutedAwayTarget **v6; // rdi
  struct tagCPointerRoutedAwayTarget **v7; // rbx

  NodeById = CTouchProcessor::FindNodeById(a1, a2, 0, 0);
  if ( NodeById )
  {
    v6 = (struct tagCPointerRoutedAwayTarget **)((char *)NodeById + 280);
    v7 = (struct tagCPointerRoutedAwayTarget **)*((_QWORD *)NodeById + 35);
    if ( v7 != (struct tagCPointerRoutedAwayTarget **)((char *)NodeById + 280) )
    {
      while ( v7 != v6 )
      {
        if ( CInputDest::operator==((int *)v7 + 4, (__int64)a3) )
        {
          CTouchProcessor::FreeRoutedAwayTarget(a1, (struct tagCPointerRoutedAwayTarget ***)v7);
          break;
        }
        v7 = (struct tagCPointerRoutedAwayTarget **)*v7;
      }
    }
  }
  CInputDest::~CInputDest(a3);
}
