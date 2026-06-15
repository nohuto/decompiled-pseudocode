/*
 * XREFs of ??_E_Node_capture@std@@UEAAPEAXI@Z @ 0x18014AAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

std::_Node_capture *__fastcall std::_Node_capture::`vector deleting destructor'(std::_Node_capture *this, char a2)
{
  *(_QWORD *)this = &std::_Node_endif::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
