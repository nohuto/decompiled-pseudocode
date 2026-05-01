/*
 * XREFs of ?IsApplicationRunning@CImmersiveApp@@UEBA_NXZ @ 0x180195880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CImmersiveApp::IsApplicationRunning(CImmersiveApp *this)
{
  return *((_BYTE *)this + 456) & 1;
}
