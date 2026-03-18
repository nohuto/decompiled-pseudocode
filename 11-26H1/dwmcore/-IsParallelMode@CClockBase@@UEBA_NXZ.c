/*
 * XREFs of ?IsParallelMode@CClockBase@@UEBA_NXZ @ 0x1801A46F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CClockBase::IsParallelMode(CClockBase *this)
{
  return *((_BYTE *)this + 88);
}
