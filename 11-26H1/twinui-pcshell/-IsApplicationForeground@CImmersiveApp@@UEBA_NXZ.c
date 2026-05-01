/*
 * XREFs of ?IsApplicationForeground@CImmersiveApp@@UEBA_NXZ @ 0x1802018B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CImmersiveApp::IsApplicationForeground(CImmersiveApp *this)
{
  return (*((_DWORD *)this + 114) & 2) != 0;
}
