/*
 * XREFs of sub_140A89B4C @ 0x140A89B4C
 * Callers:
 *     sub_14088686C @ 0x14088686C (sub_14088686C.c)
 *     sub_140886950 @ 0x140886950 (sub_140886950.c)
 *     sub_1409EA1DC @ 0x1409EA1DC (sub_1409EA1DC.c)
 *     sub_1409EC190 @ 0x1409EC190 (sub_1409EC190.c)
 *     sub_140B6F720 @ 0x140B6F720 (sub_140B6F720.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A89B4C(int a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  void *Pool2; // rax

  v2 = 0;
  Pool2 = 0LL;
  if ( a1 && (Pool2 = (void *)ExAllocatePool2(0x100uLL)) == 0LL )
  {
    return (unsigned int)-1073741801;
  }
  else if ( a2 )
  {
    *a2 = Pool2;
  }
  else if ( Pool2 )
  {
    ExFreePoolWithTag(Pool2, 0);
  }
  return v2;
}
