/*
 * XREFs of ?AddUndispatchedFrameToThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1401105B8
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x140188830 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x140208F90 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall CTouchProcessor::AddUndispatchedFrameToThreadFrameList(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  _QWORD *v2; // rbx
  char *v3; // rax
  __int64 v4; // rcx

  v2 = (_QWORD *)((char *)a2 + 24);
  v3 = (char *)PtiCurrent() + 1272;
  v4 = *(_QWORD *)v3;
  if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 )
    __fastfail(3u);
  *v2 = v4;
  v2[1] = v3;
  *(_QWORD *)(v4 + 8) = v2;
  *(_QWORD *)v3 = v2;
}
