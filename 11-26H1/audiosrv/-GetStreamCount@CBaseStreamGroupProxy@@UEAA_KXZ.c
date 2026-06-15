/*
 * XREFs of ?GetStreamCount@CBaseStreamGroupProxy@@UEAA_KXZ @ 0x1800FDF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseStreamGroupProxy::GetStreamCount(CBaseStreamGroupProxy *this)
{
  return (__int64)(*((_QWORD *)this + 28) - *((_QWORD *)this + 27)) >> 3;
}
