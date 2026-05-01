/*
 * XREFs of _dynamic_initializer_for__eduPackageFamilyName__ @ 0x1800AE320
 * Callers:
 *     <none>
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800AD118 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

int dynamic_initializer_for__eduPackageFamilyName__()
{
  qword_18089A2C0 = (__int64)winrt::impl::create_hstring_on_heap(
                               (winrt::impl *)L"MicrosoftCorporationII.Flowerlight_8wekyb3d8bbwe",
                               (winrt::impl *)0x30);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__eduPackageFamilyName__);
}
