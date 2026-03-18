/*
 * XREFs of EditionMouseCaptureHitTest @ 0x1401544C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z @ 0x14005BB80 (-IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     TransformVectorWithInputTargetPrecedence @ 0x140154510 (TransformVectorWithInputTargetPrecedence.c)
 */

__int64 __fastcall EditionMouseCaptureHitTest(__int64 a1, __int64 a2, __int64 a3)
{
  struct tagTHREADINFO *v6; // rax
  __int64 result; // rax

  v6 = PtiCurrent(a1, a2);
  result = IsThreadDesktopComposed(v6);
  if ( (_DWORD)result )
    return TransformVectorWithInputTargetPrecedence(a1, a2, a3);
  return result;
}
