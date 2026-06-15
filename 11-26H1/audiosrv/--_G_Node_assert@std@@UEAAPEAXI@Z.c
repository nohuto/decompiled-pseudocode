/*
 * XREFs of ??_G_Node_assert@std@@UEAAPEAXI@Z @ 0x18014AA80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1_Node_assert@std@@UEAA@XZ @ 0x18014A804 (--1_Node_assert@std@@UEAA@XZ.c)
 */

struct std::_Node_base **__fastcall std::_Node_assert::`scalar deleting destructor'(
        struct std::_Node_base **this,
        char a2)
{
  std::_Node_assert::~_Node_assert(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
