/*
 * XREFs of ?vKeepIt@SURFREF@@QEAAXXZ @ 0x140188C04
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1400239C0 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x140019050 (HmgIncrementShareReferenceCount.c)
 */

void __fastcall SURFREF::vKeepIt(unsigned int **this)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(this);
  HmgIncrementShareReferenceCount(*(_QWORD *)(SessionState + 88), this[4]);
}
