/*
 * XREFs of ??_GJointResize@@UEAAPEAXI@Z @ 0x18020D278
 * Callers:
 *     ??_EJointResize@@WBI@EAAPEAXI@Z @ 0x180515120 (--_EJointResize@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1JointResize@@UEAA@XZ @ 0x18029F448 (--1JointResize@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

JointResize *__fastcall JointResize::`scalar deleting destructor'(JointResize *this, char a2)
{
  JointResize::~JointResize(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x338);
  return this;
}
