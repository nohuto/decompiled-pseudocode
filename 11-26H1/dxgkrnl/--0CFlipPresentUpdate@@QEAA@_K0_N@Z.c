/*
 * XREFs of ??0CFlipPresentUpdate@@QEAA@_K0_N@Z @ 0x14002598C
 * Callers:
 *     ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1400245EC (-ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z.c)
 * Callees:
 *     <none>
 */

CFlipPresentUpdate *__fastcall CFlipPresentUpdate::CFlipPresentUpdate(
        CFlipPresentUpdate *this,
        __int64 a2,
        __int64 a3,
        char a4)
{
  _QWORD *v4; // r11
  CFlipPresentUpdate *result; // rax

  *((_QWORD *)this + 1) = 0LL;
  v4 = (_QWORD *)(((unsigned __int64)this + 24) & -(__int64)((CFlipPresentUpdate *)((char *)this + 16) != 0LL));
  v4[1] = v4;
  *v4 = v4;
  *(_QWORD *)this = &CFlipPresentUpdate::`vftable'{for `CFlipTokenOperation'};
  *((_QWORD *)this + 2) = &CFlipPresentUpdate::`vftable'{for `CFlipQueuedObject'};
  result = this;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = a2;
  *((_BYTE *)this + 72) = a4;
  *((_QWORD *)this + 10) = a3;
  *((_DWORD *)this + 22) = 0;
  return result;
}
