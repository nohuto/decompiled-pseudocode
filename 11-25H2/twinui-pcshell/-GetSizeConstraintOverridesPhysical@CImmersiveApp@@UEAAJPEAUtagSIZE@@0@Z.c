/*
 * XREFs of ?GetSizeConstraintOverridesPhysical@CImmersiveApp@@UEAAJPEAUtagSIZE@@0@Z @ 0x180302330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::GetSizeConstraintOverridesPhysical(
        CImmersiveApp *this,
        struct tagSIZE *a2,
        struct tagSIZE *a3)
{
  *a2 = *(struct tagSIZE *)((char *)this + 708);
  *a3 = *(struct tagSIZE *)((char *)this + 716);
  return 0LL;
}
