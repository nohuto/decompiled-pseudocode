/*
 * XREFs of sub_1800DB441 @ 0x1800DB441
 * Callers:
 *     <none>
 * Callees:
 *     ??1TaskStack@details@Concurrency@@QEAA@XZ @ 0x18000E660 (--1TaskStack@details@Concurrency@@QEAA@XZ.c)
 */

void __fastcall sub_1800DB441(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 296) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 296) &= ~2u;
    Concurrency::details::TaskStack::~TaskStack((Concurrency::details::TaskStack *)(a2 + 80));
  }
}
