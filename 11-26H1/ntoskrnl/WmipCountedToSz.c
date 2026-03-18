/*
 * XREFs of WmipCountedToSz @ 0x140A0D7C0
 * Callers:
 *     WmipAddDataSource @ 0x140A0BC24 (WmipAddDataSource.c)
 *     WmipPrepareWnodeSI @ 0x140A0F5E4 (WmipPrepareWnodeSI.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

_WORD *__fastcall WmipCountedToSz(unsigned __int16 *a1)
{
  unsigned __int64 v1; // rdi
  _WORD *Pool2; // rax
  _WORD *v4; // rbx

  v1 = *a1;
  Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
  v4 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, a1 + 1, (unsigned int)v1);
    v4[v1 >> 1] = 0;
  }
  return v4;
}
