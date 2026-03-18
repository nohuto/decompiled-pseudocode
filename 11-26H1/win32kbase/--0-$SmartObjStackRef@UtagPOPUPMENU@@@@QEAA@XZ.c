/*
 * XREFs of ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1401C97E0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(_QWORD *a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax

  v3 = PtiCurrent((__int64)a1, a2);
  a1[1] = 0LL;
  *a1 = &gSmartObjNullRef;
  a1[1] = *((_QWORD *)v3 + 209);
  *((_QWORD *)v3 + 209) = a1 + 1;
  return a1;
}
