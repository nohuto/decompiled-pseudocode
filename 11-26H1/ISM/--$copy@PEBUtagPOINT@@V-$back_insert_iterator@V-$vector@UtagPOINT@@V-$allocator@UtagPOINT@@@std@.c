/*
 * XREFs of ??$copy@PEBUtagPOINT@@V?$back_insert_iterator@V?$vector@UtagPOINT@@V?$allocator@UtagPOINT@@@std@@@std@@@std@@@std@@YA?AV?$back_insert_iterator@V?$vector@UtagPOINT@@V?$allocator@UtagPOINT@@@std@@@std@@@0@PEBUtagPOINT@@0V10@@Z @ 0x18014CE74
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18014FC80 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180157F1C (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 * Callees:
 *     ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@AEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x18002E060 (--$_Emplace_reallocate@ULampUpdateState@@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateSta.c)
 */

_QWORD *__fastcall std::copy<tagPOINT const *,std::back_insert_iterator<std::vector<tagPOINT>>>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 *i; // rdi
  __int64 *v8; // rdx
  _QWORD *result; // rax

  for ( i = a2; i != a3; ++i )
  {
    v8 = (__int64 *)a4[1];
    if ( v8 == (__int64 *)a4[2] )
    {
      std::vector<LampUpdateState>::_Emplace_reallocate<LampUpdateState>(a4, (__int64)v8, i);
    }
    else
    {
      *v8 = *i;
      a4[1] += 8LL;
    }
  }
  result = a1;
  *a1 = a4;
  return result;
}
