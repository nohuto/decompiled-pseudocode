/*
 * XREFs of ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x18007E090
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18016303C (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?ShrinkExpressionList@CExpressionManager@@CAXAEAV?$DynArray@PEAVCBaseExpression@@$00@@@Z @ 0x18016DB10 (-ShrinkExpressionList@CExpressionManager@@CAXAEAV-$DynArray@PEAVCBaseExpression@@$00@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall DynArrayImpl<1>::ShrinkToSize(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  void *v4; // rcx
  void *v5; // rdi
  unsigned __int64 v6; // rdx
  unsigned int v7; // esi
  HANDLE v8; // rax
  void *v9; // rdi
  HANDLE ProcessHeap; // rax

  result = a2;
  v4 = *(void **)(a1 + 8);
  v5 = *(void **)a1;
  if ( *(void **)a1 != v4 )
  {
    v6 = a2 * (unsigned __int64)*(unsigned int *)(a1 + 24);
    result = 0xFFFFFFFFLL;
    if ( v6 <= 0xFFFFFFFF )
    {
      v7 = v6;
      if ( *(_DWORD *)(a1 + 24) <= *(_DWORD *)(a1 + 16) )
      {
        memcpy_0(v4, v5, (unsigned int)v6);
        v9 = *(void **)a1;
        if ( *(_QWORD *)a1 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v9);
        }
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
        result = *(unsigned int *)(a1 + 16);
        goto LABEL_11;
      }
      if ( v5 )
      {
        v8 = GetProcessHeap();
        result = (__int64)HeapReAlloc(v8, 0, v5, v7);
      }
      else
      {
        result = (__int64)MIDL_user_allocate((unsigned int)v6);
      }
      if ( result )
      {
        *(_QWORD *)a1 = result;
        result = *(unsigned int *)(a1 + 24);
LABEL_11:
        *(_DWORD *)(a1 + 20) = result;
      }
    }
  }
  return result;
}
