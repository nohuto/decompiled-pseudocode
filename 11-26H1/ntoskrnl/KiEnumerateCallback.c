/*
 * XREFs of KiEnumerateCallback @ 0x1404F6DD0
 * Callers:
 *     <none>
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14029AFF0 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x140424890 (ExDereferenceCallBackBlock.c)
 *     KiEnumerateNmiSxCallback @ 0x140535898 (KiEnumerateNmiSxCallback.c)
 */

__int64 __fastcall KiEnumerateCallback(int a1, struct _EX_RUNDOWN_REF **a2, __int64 a3, unsigned __int64 *a4)
{
  struct _EX_RUNDOWN_REF *v7; // rdx
  struct _EX_RUNDOWN_REF *v8; // rax

  if ( !a1 )
    return KiEnumerateNmiSxCallback(a2, a3, a4);
  if ( a1 == 1 )
  {
    v7 = *a2;
    if ( v7 )
    {
      ExDereferenceCallBackBlock(&KiBoundsCallback, v7);
      *a2 = 0LL;
    }
    else
    {
      v8 = ExReferenceCallBackBlock(&KiBoundsCallback, 0LL);
      if ( v8 )
      {
        *a2 = v8;
        *a4 = v8[1].Count;
        return 1LL;
      }
    }
  }
  return 0LL;
}
