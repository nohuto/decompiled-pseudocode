/*
 * XREFs of CmpAllocateLayerInfoForKcb @ 0x140A79B08
 * Callers:
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpCreateKeyControlBlock @ 0x1408C4070 (CmpCreateKeyControlBlock.c)
 *     CmpCreateLayerLink @ 0x140A79A78 (CmpCreateLayerLink.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpAllocateLayerInfoForKcb(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD *Pool2; // rax

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 192) )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      *Pool2 = 0LL;
      Pool2[1] = 0LL;
      Pool2[3] = 0LL;
      Pool2[2] = a1;
      Pool2[5] = Pool2 + 4;
      Pool2[4] = Pool2 + 4;
      Pool2[7] = Pool2 + 6;
      Pool2[6] = Pool2 + 6;
      *(_QWORD *)(a1 + 192) = Pool2;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}
