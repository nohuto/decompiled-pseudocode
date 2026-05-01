/*
 * XREFs of ??_GCOperation@CDelayIAMOperations@@UEAAPEAXI@Z @ 0x1802E4C00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CDelayIAMOperations::COperation *__fastcall CDelayIAMOperations::COperation::`scalar deleting destructor'(
        CDelayIAMOperations::COperation *this,
        char a2)
{
  *(_QWORD *)this = &CDelayIAMOperations::COperation::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
