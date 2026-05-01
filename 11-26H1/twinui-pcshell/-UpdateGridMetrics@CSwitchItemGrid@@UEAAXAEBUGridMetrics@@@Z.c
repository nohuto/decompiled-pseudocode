/*
 * XREFs of ?UpdateGridMetrics@CSwitchItemGrid@@UEAAXAEBUGridMetrics@@@Z @ 0x1804C7B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSwitchItemGrid::UpdateGridMetrics(CSwitchItemGrid *this, const struct GridMetrics *a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  _OWORD *v4; // rax
  __int128 v5; // xmm1

  v2 = (_QWORD *)((char *)this - 208);
  v3 = 4LL;
  v4 = v2 + 32;
  do
  {
    *v4 = *(_OWORD *)a2;
    v4[1] = *((_OWORD *)a2 + 1);
    v4[2] = *((_OWORD *)a2 + 2);
    v4[3] = *((_OWORD *)a2 + 3);
    v4[4] = *((_OWORD *)a2 + 4);
    v4[5] = *((_OWORD *)a2 + 5);
    v4[6] = *((_OWORD *)a2 + 6);
    v4 += 8;
    v5 = *((_OWORD *)a2 + 7);
    a2 = (const struct GridMetrics *)((char *)a2 + 128);
    *(v4 - 1) = v5;
    --v3;
  }
  while ( v3 );
  CMultitaskingViewElementBase::_LayoutChildren(v2, 0, 0LL);
}
