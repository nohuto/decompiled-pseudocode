/*
 * XREFs of ??_GCRotationManagerSync@@UEAAPEAXI@Z @ 0x1801FF890
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRotationManagerSync@@UEAA@XZ @ 0x1801FF8CC (--1CRotationManagerSync@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
