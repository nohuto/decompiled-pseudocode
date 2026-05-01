/*
 * XREFs of wil::details::lambda_call__lambda_9a28d18710831121f161eabba1d1115d___::_lambda_call__lambda_9a28d18710831121f161eabba1d1115d___ @ 0x18066586C
 * Callers:
 *     ?ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x180666840 (-ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 *     ?ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z @ 0x180666B50 (-ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z.c)
 *     _CPinnedList::ApplyReorderTaskbarLayout_::_1_::dtor$2 @ 0x1806DD120 (_CPinnedList--ApplyReorderTaskbarLayout_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::lambda_call__lambda_9a28d18710831121f161eabba1d1115d___::_lambda_call__lambda_9a28d18710831121f161eabba1d1115d___(
        _BYTE *a1)
{
  unsigned int v1; // ebx
  _QWORD *v3; // rax
  __int64 v4; // rdx

  v1 = 0;
  if ( a1[8] )
  {
    a1[8] = 0;
    v3 = *(_QWORD **)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
    {
      v4 = 0LL;
      do
      {
        ILFree(*(LPITEMIDLIST *)(*v3 + 8 * v4));
        v3 = *(_QWORD **)a1;
        v4 = ++v1;
      }
      while ( (unsigned __int64)v1 < *(_QWORD *)(*(_QWORD *)a1 + 8LL) );
    }
  }
}
