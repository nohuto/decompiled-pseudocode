/*
 * XREFs of ??0DXGPROCESS_NONPAGED@@QEAA@XZ @ 0x140055308
 * Callers:
 *     ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x1403AF9DC (-Initialize@DXGPROCESS@@QEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

DXGPROCESS_NONPAGED *__fastcall DXGPROCESS_NONPAGED::DXGPROCESS_NONPAGED(DXGPROCESS_NONPAGED *this)
{
  _QWORD *v1; // rbx
  DXGPROCESS_NONPAGED *result; // rax

  v1 = (_QWORD *)((char *)this + 104);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 15);
  v1[1] = v1;
  *v1 = v1;
  result = this;
  *((_QWORD *)this + 16) = 0LL;
  *((_WORD *)this + 68) = 0;
  *((_BYTE *)this + 138) = 0;
  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 3) = 0LL;
  *((_OWORD *)this + 4) = 0LL;
  return result;
}
