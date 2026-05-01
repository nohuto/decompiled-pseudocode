/*
 * XREFs of ?IsInHighZOrderBand@CClassicWindow@@UEBA_NXZ @ 0x180124E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CClassicWindow::IsInHighZOrderBand(CClassicWindow *this)
{
  __int64 v1; // rcx
  char v2; // bl
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 2);
  v2 = 0;
  v4 = 0;
  if ( !(unsigned int)GetWindowBand(v1, &v4) )
    return 0;
  if ( v4 == 16 || v4 == 2 )
    return 1;
  return v2;
}
