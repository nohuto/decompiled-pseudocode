/*
 * XREFs of sub_1800DB498 @ 0x1800DB498
 * Callers:
 *     <none>
 * Callees:
 *     ??1TaskStack@details@Concurrency@@QEAA@XZ @ 0x18000E660 (--1TaskStack@details@Concurrency@@QEAA@XZ.c)
 */

void __fastcall sub_1800DB498(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 360) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 360) &= ~1u;
    Concurrency::details::TaskStack::~TaskStack((Concurrency::details::TaskStack *)(a2 + 144));
  }
}
