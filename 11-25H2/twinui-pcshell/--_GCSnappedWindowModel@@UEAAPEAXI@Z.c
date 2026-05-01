/*
 * XREFs of ??_GCSnappedWindowModel@@UEAAPEAXI@Z @ 0x18023A6C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSnappedWindowModel@@UEAA@XZ @ 0x1800BBF3C (--1CSnappedWindowModel@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CSnappedWindowModel *__fastcall CSnappedWindowModel::`scalar deleting destructor'(CSnappedWindowModel *this, char a2)
{
  CSnappedWindowModel::~CSnappedWindowModel(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
