/*
 * XREFs of ?ShouldHitTest@CTopLevelWindow@@AEBA_NXZ @ 0x180059764
 * Callers:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180013BB4 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow::ShouldHitTest(CTopLevelWindow *this)
{
  __int64 v1; // rdx
  bool result; // al
  char v3; // cl

  v1 = *((_QWORD *)this + 87);
  result = 1;
  v3 = *(_BYTE *)(v1 + 736);
  if ( (v3 & 1) == 0 || (*(_BYTE *)(v1 + 740) & 1) != 0 || (v3 & 4) != 0 )
    return 0;
  return result;
}
