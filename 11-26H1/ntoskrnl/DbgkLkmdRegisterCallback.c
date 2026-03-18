/*
 * XREFs of DbgkLkmdRegisterCallback @ 0x14078B4D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14029BA90 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x140435D80 (ExDereferenceCallBackBlock.c)
 *     ExCompareExchangeCallBack @ 0x140463604 (ExCompareExchangeCallBack.c)
 *     ExAllocateCallBack @ 0x140B30CE4 (ExAllocateCallBack.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkLkmdRegisterCallback(__int64 a1, signed __int64 a2, int a3)
{
  unsigned int i; // ebx
  signed __int64 *v8; // rdi
  struct _EX_RUNDOWN_REF *v9; // rax
  struct _EX_RUNDOWN_REF *v10; // rdi
  unsigned int j; // ebx

  if ( (a3 & 3) == 3 )
    return 3221225485LL;
  for ( i = 0; i < 8; ++i )
  {
    v8 = (signed __int64 *)&stru_140E3E928.SavedApcState.ApcListHead[i + 2];
    v9 = ExReferenceCallBackBlock(v8, a2);
    if ( v9 )
    {
      if ( a1 == v9[1].Count )
      {
        ExDereferenceCallBackBlock(v8, v9);
        return 3221227288LL;
      }
      ExDereferenceCallBackBlock(v8, v9);
    }
  }
  v10 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, a2);
  if ( !v10 )
    return 3221225495LL;
  for ( j = 0; j < 8; ++j )
  {
    if ( ExCompareExchangeCallBack((signed __int64 *)&stru_140E3E928.SavedApcState.ApcListHead[j + 2], v10, 0LL) )
    {
      *(_DWORD *)&stru_140E3E928.SavedApcStateFill[16 * j + 40] = a3;
      return 0LL;
    }
  }
  ExFreePoolWithTag(v10, 0);
  return 3221226539LL;
}
