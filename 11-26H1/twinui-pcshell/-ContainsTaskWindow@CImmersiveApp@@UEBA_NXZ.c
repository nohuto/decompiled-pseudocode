/*
 * XREFs of ?ContainsTaskWindow@CImmersiveApp@@UEBA_NXZ @ 0x1802FCEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CImmersiveApp::ContainsTaskWindow(CImmersiveApp *this)
{
  return *((_QWORD *)this + 43) != 0LL;
}
