/*
 * XREFs of ?IsEqualByHostId@CImmersiveApp@@UEAAJ_KPEAH@Z @ 0x1801FCE60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::IsEqualByHostId(CImmersiveApp *this, __int64 a2, int *a3)
{
  *a3 = *((_QWORD *)this + 99) == a2;
  return 0LL;
}
