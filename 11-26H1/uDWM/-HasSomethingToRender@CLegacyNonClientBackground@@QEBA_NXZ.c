/*
 * XREFs of ?HasSomethingToRender@CLegacyNonClientBackground@@QEBA_NXZ @ 0x180078940
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x180023D1C (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CLegacyNonClientBackground::HasSomethingToRender(CLegacyNonClientBackground *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 25) || *((_QWORD *)this + 24) )
    return 1;
  return result;
}
