/*
 * XREFs of ??_E?$_Node_str@G@std@@UEAAPEAXI@Z @ 0x18014A9B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall std::_Node_str<unsigned short>::`vector deleting destructor'(void **a1, char a2)
{
  free(a1[5]);
  *a1 = &std::_Node_endif::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
