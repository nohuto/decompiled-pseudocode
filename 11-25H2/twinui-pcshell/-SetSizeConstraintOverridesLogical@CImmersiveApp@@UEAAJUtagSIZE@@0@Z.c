/*
 * XREFs of ?SetSizeConstraintOverridesLogical@CImmersiveApp@@UEAAJUtagSIZE@@0@Z @ 0x180304800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::SetSizeConstraintOverridesLogical(
        CImmersiveApp *this,
        struct tagSIZE a2,
        struct tagSIZE a3)
{
  __int64 result; // rax

  *(struct tagSIZE *)((char *)this + 740) = a2;
  result = 0LL;
  *(struct tagSIZE *)((char *)this + 748) = a3;
  return result;
}
