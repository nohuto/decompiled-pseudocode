/*
 * XREFs of ?UnregisterCanvas@OneCoreUAPInputHost@@UEAAJPEAX@Z @ 0x1800A1F60
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180010150 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall OneCoreUAPInputHost::UnregisterCanvas(OneCoreUAPInputHost *this, void *a2)
{
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  if ( a2 )
  {
    std::_Mutex_base::lock((std::_Mutex_base *)&DelegatedInkCanvasProcessor::s_contextLock);
    if ( DelegatedInkCanvasProcessor::s_inkCanvasContext == a2 )
      DelegatedInkCanvasProcessor::s_inkCanvasContext = 0LL;
    _Mtx_unlock((_Mtx_t)&DelegatedInkCanvasProcessor::s_contextLock);
  }
  else
  {
    v2 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\delegatedinkcanvas\\lib\\delegate"
           "dinkcanvasprocessor.cpp",
      (const char *)0x80070057LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)0x80070057LL);
  }
  return v2;
}
