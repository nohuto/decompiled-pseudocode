/*
 * XREFs of sub_140A847CC @ 0x140A847CC
 * Callers:
 *     sub_14088046C @ 0x14088046C (sub_14088046C.c)
 *     sub_140880550 @ 0x140880550 (sub_140880550.c)
 *     sub_1409EDA0C @ 0x1409EDA0C (sub_1409EDA0C.c)
 *     sub_1409EF9C0 @ 0x1409EF9C0 (sub_1409EF9C0.c)
 *     sub_140B6C624 @ 0x140B6C624 (sub_140B6C624.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A847CC(int a1, _QWORD *a2)
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
