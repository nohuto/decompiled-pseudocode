/*
 * XREFs of ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z @ 0x1401B19BC
 * Callers:
 *     NtUserCreateWindowEx @ 0x1400391A0 (NtUserCreateWindowEx.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(_QWORD *a1, __int64 a2)
{
  struct tagTHREADINFO *v4; // rax
  _QWORD *result; // rax

  v4 = PtiCurrent((__int64)a1, a2);
  a1[1] = 0LL;
  *a1 = gSmartObjNullRef;
  a1[1] = *((_QWORD *)v4 + 209);
  *((_QWORD *)v4 + 209) = a1 + 1;
  result = a1;
  a1[2] = a2;
  return result;
}
