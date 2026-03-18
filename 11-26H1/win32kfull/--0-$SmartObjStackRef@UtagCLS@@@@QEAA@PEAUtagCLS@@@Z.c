/*
 * XREFs of ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z @ 0x1401516B4
 * Callers:
 *     xxxSetClassData @ 0x140151060 (xxxSetClassData.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(_QWORD *a1, __int64 a2)
{
  struct tagTHREADINFO *v4; // rax
  _QWORD *v5; // r9
  struct tagTHREADINFO *v6; // r10
  _QWORD *result; // rax

  v4 = PtiCurrent((__int64)a1);
  v5 = a1 + 1;
  v6 = v4;
  a1[1] = 0LL;
  *a1 = gSmartObjNullRef;
  if ( a2 )
  {
    *a1 = *(_QWORD *)(a2 + 128);
    ++*(_DWORD *)(*(_QWORD *)(a2 + 128) + 8LL);
  }
  *v5 = *((_QWORD *)v4 + 209);
  result = a1;
  *((_QWORD *)v6 + 209) = v5;
  return result;
}
