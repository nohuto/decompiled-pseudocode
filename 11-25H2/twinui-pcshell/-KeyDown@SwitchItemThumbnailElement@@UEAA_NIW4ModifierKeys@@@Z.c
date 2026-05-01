/*
 * XREFs of ?KeyDown@SwitchItemThumbnailElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x1804C1810
 * Callers:
 *     <none>
 * Callees:
 *     ?Close@SwitchItemThumbnailElement@@IEAAXXZ @ 0x1804C11BC (-Close@SwitchItemThumbnailElement@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall SwitchItemThumbnailElement::KeyDown(SwitchItemThumbnailElement *a1, int a2, int a3)
{
  char result; // al

  result = 0;
  if ( a2 == 13 || a2 == 32 )
    return (*(__int64 (__fastcall **)(SwitchItemThumbnailElement *))(*(_QWORD *)a1 + 312LL))(a1);
  if ( a2 == 46 || (a2 == 87 || a2 == 115) && a3 == 2 )
  {
    SwitchItemThumbnailElement::Close(a1);
    return 1;
  }
  return result;
}
