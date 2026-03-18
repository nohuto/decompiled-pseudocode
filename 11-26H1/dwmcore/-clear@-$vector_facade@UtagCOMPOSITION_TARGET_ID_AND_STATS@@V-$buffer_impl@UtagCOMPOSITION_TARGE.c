/*
 * XREFs of ?clear@?$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V?$buffer_impl@UtagCOMPOSITION_TARGET_ID_AND_STATS@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18018D068
 * Callers:
 *     ??1?$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V?$buffer_impl@UtagCOMPOSITION_TARGET_ID_AND_STATS@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180229AA0 (--1-$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V-$buffer_impl@UtagCOMPOSITION_TARGET_ID.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 */

_QWORD *__fastcall detail::vector_facade<tagCOMPOSITION_TARGET_ID_AND_STATS,detail::buffer_impl<tagCOMPOSITION_TARGET_ID_AND_STATS,4,1,detail::liberal_expansion_policy>>::clear(
        __int64 *a1)
{
  _QWORD *result; // rax
  __int64 v2; // r8
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  result = (_QWORD *)0xEEEEEEEEEEEEEEEFLL;
  v2 = 0xEEEEEEEEEEEEEEEFuLL * ((a1[1] - *a1) >> 3);
  if ( v2 )
  {
    result = stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v5, *a1, v2);
    *(_QWORD *)(v4 + 8) += -120 * v3;
  }
  return result;
}
