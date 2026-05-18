/*
 * XREFs of sub_1800D84EC @ 0x1800D84EC
 * Callers:
 *     <none>
 * Callees:
 *     ??1TaskStack@details@Concurrency@@QEAA@XZ @ 0x18000E660 (--1TaskStack@details@Concurrency@@QEAA@XZ.c)
 */

void __fastcall sub_1800D84EC(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 144) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 144) &= ~1u;
    Concurrency::details::TaskStack::~TaskStack((Concurrency::details::TaskStack *)(a2 + 96));
  }
}
