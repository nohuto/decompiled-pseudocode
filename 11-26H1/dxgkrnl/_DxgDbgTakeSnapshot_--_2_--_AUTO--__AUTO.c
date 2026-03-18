/*
 * XREFs of _DxgDbgTakeSnapshot_::_2_::_AUTO::__AUTO @ 0x14020C84C
 * Callers:
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x14018FF6C (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgDbgTakeSnapshot_::_2_::_AUTO::__AUTO(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
    ExFreePoolWithTag(v2, 0x52445476u);
  if ( *(_QWORD *)(a1 + 8) )
    WdDbgDestroySnapshot();
}
