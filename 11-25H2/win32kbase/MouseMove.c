/*
 * XREFs of MouseMove @ 0x1402168E0
 * Callers:
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1401F9570 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F96E0 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1401F9820 (-xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140039910 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x14021F414 (-AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z.c)
 */

void __fastcall MouseMove(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v3; // edi
  CMouseProcessor *MouseProcessor; // rax

  v2 = a2;
  v3 = a1;
  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor(a1, a2);
  if ( MouseProcessor )
    CMouseProcessor::AccessibilityMouseMove(MouseProcessor, v3, v2);
}
