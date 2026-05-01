/*
 * XREFs of ??$com_agile_query@AEAPEAUIApplicationViewChangeListener@@@wil@@YA?AV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationViewChangeListener@@W4AgileReferenceOptions@@@Z @ 0x180084A58
 * Callers:
 *     ?RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewChangeListener@@@Z @ 0x180084970 (-RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewCh.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall wil::com_agile_query<IApplicationViewChangeListener * &>(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // r8
  int AgileReference; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *a2;
  *a1 = 0LL;
  AgileReference = RoGetAgileReference(0LL, &GUID_727f9e97_76ee_497b_a942_b6371328485c, v3, a1);
  if ( AgileReference < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x721,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)AgileReference,
      1);
  return a1;
}
