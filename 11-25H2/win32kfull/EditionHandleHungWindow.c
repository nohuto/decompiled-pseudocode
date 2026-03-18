/*
 * XREFs of EditionHandleHungWindow @ 0x14014BC00
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x14014BC38 (-ProcessHungWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x14014BC9C (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 */

void __fastcall EditionHandleHungWindow(__int64 a1)
{
  struct tagWND *v1; // rbx

  v1 = *(struct tagWND **)(a1 + 80);
  if ( *(_QWORD *)(*((_QWORD *)v1 + 3) + 40LL) )
  {
    if ( IsHungWindow(*(const struct tagWND **)(a1 + 80)) )
      ProcessHungWindow(v1);
  }
}
