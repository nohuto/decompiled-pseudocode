/*
 * XREFs of ??_GPositionAdjustmentHistory@@UEAAPEAXI@Z @ 0x180211400
 * Callers:
 *     <none>
 * Callees:
 *     ??1PositionAdjustmentHistory@@UEAA@XZ @ 0x1802C3C98 (--1PositionAdjustmentHistory@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

PositionAdjustmentHistory *__fastcall PositionAdjustmentHistory::`scalar deleting destructor'(
        PositionAdjustmentHistory *this,
        char a2)
{
  PositionAdjustmentHistory::~PositionAdjustmentHistory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
