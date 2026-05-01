/*
 * XREFs of wil::ResultFromException__lambda_c2b84dc65f1ba037143a467dc4ccf5a8___ @ 0x1804658D8
 * Callers:
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1800626E0 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18013AB58 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall wil::ResultFromException__lambda_c2b84dc65f1ba037143a467dc4ccf5a8___(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 *v2; // rsi
  __int64 *i; // rbx
  std::_Ref_count_base *v4; // rcx

  v1 = *a1;
  v2 = *(__int64 **)(*a1 + 440);
  for ( i = *(__int64 **)a1[1]; ; std::shared_ptr<KBViewInfo>::operator=(i - 2, i) )
  {
    i += 2;
    if ( i == v2 )
      break;
  }
  v4 = *(std::_Ref_count_base **)(*(_QWORD *)(v1 + 440) - 8LL);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  *(_QWORD *)(v1 + 440) -= 16LL;
  return 0LL;
}
