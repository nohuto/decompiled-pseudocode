/*
 * XREFs of ?EnsureVisualTree@CursorVisualData@CComposition@@QEAAXXZ @ 0x18022A9E4
 * Callers:
 *     ?AddCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18022A5AC (-AddCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?AddCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z @ 0x18022A68C (-AddCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z.c)
 * Callees:
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x180195048 (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180218218 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 */

void __fastcall CComposition::CursorVisualData::EnsureVisualTree(struct CVisualTree **this)
{
  CVisual *VisualNoRef; // rax

  if ( CExcludeVisualReference::GetVisualNoRef((CExcludeVisualReference *)this) )
  {
    if ( !this[3] )
    {
      VisualNoRef = CExcludeVisualReference::GetVisualNoRef((CExcludeVisualReference *)this);
      CVisual::GetVisualTree(VisualNoRef, this + 3);
    }
  }
}
