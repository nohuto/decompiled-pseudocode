/*
 * XREFs of ??$?4UNexusPolicyManager@@$0A@@?$weak_ptr@UNexusPolicyManager@@@std@@QEAAAEAV01@AEBV?$shared_ptr@UNexusPolicyManager@@@1@@Z @ 0x18033ADB4
 * Callers:
 *     ??$make_shared@UNexusPolicyManager@@$$V@std@@YA?AV?$shared_ptr@UNexusPolicyManager@@@0@XZ @ 0x180340084 (--$make_shared@UNexusPolicyManager@@$$V@std@@YA-AV-$shared_ptr@UNexusPolicyManager@@@0@XZ.c)
 *     ?Instance@?$singleton_with_factory@UNexusPolicyManager@@U?$singleton_initialize_factory@UNexusPolicyManager@@@xblib@@@xblib@@SA?AV?$shared_ptr@UNexusPolicyManager@@@std@@XZ @ 0x18034B674 (-Instance@-$singleton_with_factory@UNexusPolicyManager@@U-$singleton_initialize_factory@UNexusPo.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801C8264 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::weak_ptr<NexusPolicyManager>::operator=<NexusPolicyManager,0>(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  std::_Ref_count_base *v6; // rcx

  v2 = a2[1];
  v4 = 0LL;
  v5 = 0LL;
  if ( v2 )
  {
    v4 = *a2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 12));
    v5 = v2;
  }
  *a1 = v4;
  v6 = (std::_Ref_count_base *)a1[1];
  a1[1] = v5;
  if ( v6 )
    std::_Ref_count_base::_Decwref(v6);
  return a1;
}
