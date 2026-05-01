/*
 * XREFs of ??_GCRotationManagerSync@@UEAAPEAXI@Z @ 0x18020F130
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRotationManagerSync@@UEAA@XZ @ 0x18020F16C (--1CRotationManagerSync@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CRotationManagerSync *__fastcall CRotationManagerSync::`scalar deleting destructor'(
        CRotationManagerSync *this,
        char a2)
{
  CRotationManagerSync::~CRotationManagerSync(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA8);
  return this;
}
