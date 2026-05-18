/*
 * XREFs of sub_1800D839D @ 0x1800D839D
 * Callers:
 *     <none>
 * Callees:
 *     ??1TaskStack@details@Concurrency@@QEAA@XZ @ 0x18000E660 (--1TaskStack@details@Concurrency@@QEAA@XZ.c)
 */

void __fastcall sub_1800D839D(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~4u;
    Concurrency::details::TaskStack::~TaskStack((Concurrency::details::TaskStack *)(a2 + 64));
  }
}
