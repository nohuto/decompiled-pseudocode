/*
 * XREFs of ?EndFigure@CPolygonBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x180160BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?pop_back@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180160C40 (-pop_back@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansio.c)
 */

void __fastcall CPolygonBuilder::EndFigure(CPolygonBuilder *this, enum D2D1_FIGURE_END a2)
{
  __int64 v2; // rdx
  __int64 *v3; // rbx
  float *v4; // rax

  v2 = *((_QWORD *)this + 3);
  v3 = (__int64 *)((char *)this + 16);
  v4 = (float *)*((_QWORD *)this + 2);
  if ( *(float *)(v2 - 8) == *v4 && *(float *)(v2 - 4) == v4[1] )
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::pop_back((char *)this + 16);
  if ( (unsigned __int64)((v3[1] - *v3) >> 3) < 3 )
    detail::vector_facade<CResponseItemBase *,detail::buffer_impl<CResponseItemBase *,2,1,detail::liberal_expansion_policy>>::clear(v3);
}
