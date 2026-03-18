/*
 * XREFs of VslAllocatePool @ 0x1402D2320
 * Callers:
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 * Callees:
 *     VslpLockPagesForTransfer @ 0x1402D3E38 (VslpLockPagesForTransfer.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslAllocatePool(unsigned __int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  int v7; // ebx
  void *Pool2; // rsi
  __int64 v9; // rax
  _QWORD *v10; // rdi
  int v11; // ebx

  v7 = a1;
  if ( a1 > 0x1FA000 )
    return 3221225659LL;
  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 3221225626LL;
  v9 = ExAllocatePool2(0x40uLL);
  v10 = (_QWORD *)v9;
  if ( !v9 )
  {
    v11 = -1073741670;
LABEL_5:
    ExFreePoolWithTag(Pool2, 0);
    return (unsigned int)v11;
  }
  v11 = VslpLockPagesForTransfer(v9, (_DWORD)Pool2, v7, 1, 0);
  if ( v11 < 0 )
  {
    ExFreePoolWithTag(v10, 0);
    goto LABEL_5;
  }
  *a3 = v10[7];
  *a4 = *v10;
  *a5 = v10;
  return 0LL;
}
