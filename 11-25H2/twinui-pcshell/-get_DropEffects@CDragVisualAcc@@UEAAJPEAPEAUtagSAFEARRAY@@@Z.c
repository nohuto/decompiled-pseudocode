/*
 * XREFs of ?get_DropEffects@CDragVisualAcc@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x180527BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDragVisualAcc::get_DropEffects(
        CDragVisualAcc *this,
        struct tagSAFEARRAY **a2,
        struct tagSAFEARRAY **a3)
{
  const OLECHAR *v3; // rax
  const OLECHAR *v4; // rcx

  v3 = (const OLECHAR *)*((_QWORD *)this + 17);
  v4 = &LocaleName;
  if ( v3 )
    v4 = v3;
  return AccessibilityHelpers::GetBSTRSafeArray(v4, (unsigned __int16 *)a2, a3);
}
