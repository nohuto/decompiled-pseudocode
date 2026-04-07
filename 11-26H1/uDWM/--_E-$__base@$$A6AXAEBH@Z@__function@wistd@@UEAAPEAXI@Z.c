/*
 * XREFs of ??_E?$__base@$$A6AXAEBH@Z@__function@wistd@@UEAAPEAXI@Z @ 0x180090B40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall wistd::__function::__base<void (int const &)>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &wistd::__function::__base<void (int const &)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)8);
  return a1;
}
