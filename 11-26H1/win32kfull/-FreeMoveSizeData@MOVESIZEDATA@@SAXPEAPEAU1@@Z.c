/*
 * XREFs of ?FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z @ 0x140261F74
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z @ 0x1402C72E8 (-xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z.c)
 *     EditionFreeMoveSizeDataOnThreadDestroy @ 0x1402C8230 (EditionFreeMoveSizeDataOnThreadDestroy.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall MOVESIZEDATA::FreeMoveSizeData(struct MOVESIZEDATA **a1)
{
  struct tagTHREADINFO *v2; // rbx
  _QWORD *v3; // rdx
  __int64 v4; // rax
  _QWORD *v5; // rcx

  v2 = PtiCurrent((__int64)a1);
  v3 = (_QWORD *)*((_QWORD *)v2 + 88);
  v4 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  HMAssignmentUnlock(*((_QWORD *)v2 + 88) + 16LL);
  Win32FreePool(*((void **)v2 + 88));
  *((_QWORD *)v2 + 88) = 0LL;
  *a1 = 0LL;
}
