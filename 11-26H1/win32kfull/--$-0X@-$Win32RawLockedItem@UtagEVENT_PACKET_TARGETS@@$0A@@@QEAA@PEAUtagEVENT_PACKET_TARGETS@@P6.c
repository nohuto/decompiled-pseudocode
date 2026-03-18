/*
 * XREFs of ??$?0X@?$Win32RawLockedItem@UtagEVENT_PACKET_TARGETS@@$0A@@@QEAA@PEAUtagEVENT_PACKET_TARGETS@@P6AX0@Z@Z @ 0x1402EF7C4
 * Callers:
 *     xxxCsEvent @ 0x1402EF878 (xxxCsEvent.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

_QWORD *__fastcall Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>::Win32RawLockedItem<tagEVENT_PACKET_TARGETS,0>(
        _QWORD *a1,
        __int64 a2)
{
  struct tagTHREADINFO *v4; // rax
  _QWORD *result; // rax

  v4 = PtiCurrent((__int64)a1);
  *a1 = *((_QWORD *)v4 + 47);
  *((_QWORD *)v4 + 47) = a1;
  a1[2] = DestroyEventPacketTargets;
  result = a1;
  a1[1] = a2;
  return result;
}
