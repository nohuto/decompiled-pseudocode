/*
 * XREFs of ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z @ 0x14004D0E8
 * Callers:
 *     NtUserCreateWindowEx @ 0x14004D200 (NtUserCreateWindowEx.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(_QWORD *a1, __int64 a2)
{
  struct tagTHREADINFO *v4; // rax
  _QWORD *result; // rax

  v4 = PtiCurrent((__int64)a1);
  a1[1] = 0LL;
  *a1 = gSmartObjNullRef;
  a1[1] = *((_QWORD *)v4 + 209);
  *((_QWORD *)v4 + 209) = a1 + 1;
  result = a1;
  a1[2] = a2;
  return result;
}
