/*
 * XREFs of ??_GJointResizeAcc@@UEAAPEAXI@Z @ 0x180213C70
 * Callers:
 *     <none>
 * Callees:
 *     ??1JointResizeAcc@@UEAA@XZ @ 0x180213CAC (--1JointResizeAcc@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

JointResizeAcc *__fastcall JointResizeAcc::`scalar deleting destructor'(JointResizeAcc *this, char a2)
{
  JointResizeAcc::~JointResizeAcc(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x78);
  return this;
}
