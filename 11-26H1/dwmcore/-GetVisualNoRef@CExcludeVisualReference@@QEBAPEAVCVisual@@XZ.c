/*
 * XREFs of ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x180195048
 * Callers:
 *     ?Hide@CExcludeVisualReference@@QEAAJXZ @ 0x180194FAC (-Hide@CExcludeVisualReference@@QEAAJXZ.c)
 *     ?Show@CExcludeVisualReference@@UEAAJXZ @ 0x180195000 (-Show@CExcludeVisualReference@@UEAAJXZ.c)
 *     ?ForEachCursorVisual@CComposition@@QEAAJV?$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@@Z @ 0x18020899C (-ForEachCursorVisual@CComposition@@QEAAJV-$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@.c)
 *     ?RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z @ 0x180208D58 (-RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z.c)
 *     ?AddCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18022A5AC (-AddCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?AddCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z @ 0x18022A68C (-AddCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ?EnsureVisualTree@CursorVisualData@CComposition@@QEAAXXZ @ 0x18022A9E4 (-EnsureVisualTree@CursorVisualData@CComposition@@QEAAXXZ.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18022B0E0 (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?RemoveCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z @ 0x18022B188 (-RemoveCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x180262E00 (-AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ @ 0x18004CD80 (-IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

struct CVisual *__fastcall CExcludeVisualReference::GetVisualNoRef(CExcludeVisualReference *this)
{
  __int64 v1; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 1);
  if ( !v1 )
    return 0LL;
  if ( !g_pComposition
    || GetCurrentThreadId() != CComposition::s_compositionThreadId
    && !CTreeLock::IsLockedByCurrentThread((CComposition *)((char *)g_pComposition + 5696)) )
  {
    ModuleFailFastForHRESULT(-2003304313, retaddr);
  }
  return *(struct CVisual **)(v1 + 64);
}
