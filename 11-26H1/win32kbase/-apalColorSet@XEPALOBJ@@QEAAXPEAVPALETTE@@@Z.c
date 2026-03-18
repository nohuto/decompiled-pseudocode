/*
 * XREFs of ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1401F64D4
 * Callers:
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1401A2194 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x140019050 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 */

void __fastcall XEPALOBJ::apalColorSet(XEPALOBJ *this, struct PALETTE *a2)
{
  __int64 v4; // rsi
  unsigned int *v5; // rdx

  v4 = *(_QWORD *)(W32GetSessionState(this) + 88);
  v5 = *(unsigned int **)(*(_QWORD *)this + 120LL);
  if ( v5 != *(unsigned int **)this )
    HmgDecrementShareReferenceCount(v4, v5);
  HmgIncrementShareReferenceCount(v4, (unsigned int *)a2);
  *(_DWORD *)(*(_QWORD *)this + 28LL) = *((_DWORD *)a2 + 7);
  *(_QWORD *)(*(_QWORD *)this + 112LL) = *((_QWORD *)a2 + 14);
  *(_QWORD *)(*(_QWORD *)this + 120LL) = a2;
}
