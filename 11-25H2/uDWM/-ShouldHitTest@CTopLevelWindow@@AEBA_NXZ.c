/*
 * XREFs of ?ShouldHitTest@CTopLevelWindow@@AEBA_NXZ @ 0x180005CD0
 * Callers:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180005BA4 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow::ShouldHitTest(CTopLevelWindow *this)
{
  __int64 v1; // rdx
  bool result; // al
  char v3; // cl

  v1 = *((_QWORD *)this + 89);
  result = 1;
  v3 = *(_BYTE *)(v1 + 672);
  if ( (v3 & 1) == 0 || (*(_BYTE *)(v1 + 676) & 1) != 0 || (v3 & 4) != 0 )
    return 0;
  return result;
}
