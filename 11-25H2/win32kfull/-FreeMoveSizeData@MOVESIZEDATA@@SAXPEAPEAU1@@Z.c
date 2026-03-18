/*
 * XREFs of ?FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z @ 0x140228654
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z @ 0x1402AA91C (-xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z.c)
 *     EditionFreeMoveSizeDataOnThreadDestroy @ 0x1402AC170 (EditionFreeMoveSizeDataOnThreadDestroy.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall MOVESIZEDATA::FreeMoveSizeData(struct MOVESIZEDATA **a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rbx
  _QWORD *v4; // rdx
  __int64 v5; // rax
  _QWORD *v6; // r8

  v3 = PtiCurrent((__int64)a1, a2);
  v4 = (_QWORD *)*((_QWORD *)v3 + 89);
  v5 = *v4;
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  HMAssignmentUnlock(*((_QWORD *)v3 + 89) + 16LL);
  Win32FreePool(*((void **)v3 + 89));
  *((_QWORD *)v3 + 89) = 0LL;
  *a1 = 0LL;
}
