/*
 * XREFs of ??$Make@U?$GitInvokeHelper@U?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$GitInvokeHelper@U?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@@12@XZ @ 0x1802BE7BC
 * Callers:
 *     ??$CreateGitHelper@U?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@Windows@@@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@2@PEAPEAU342@@Z @ 0x1801ED560 (--$CreateGitHelper@U-$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@P.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$GitInvokeHelper@U?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@QEAA@XZ @ 0x180401774 (--0-$GitInvokeHelper@U-$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::TopLevelAppView *,Windows::Internal::ComposableShell::TopLevelViewCollectionChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::TopLevelAppView *,Windows::Internal::ComposableShell::TopLevelViewCollectionChangedEventArgs *>>,2>,>(
        __int64 *a1)
{
  _OWORD *v2; // rax
  __int64 v3; // rdi

  *a1 = 0LL;
  v2 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
    *((_QWORD *)v2 + 6) = 0LL;
    v3 = Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::TopLevelAppView *,Windows::Internal::ComposableShell::TopLevelViewCollectionChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::TopLevelAppView *,Windows::Internal::ComposableShell::TopLevelViewCollectionChangedEventArgs *>>,2>::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::TopLevelAppView *,Windows::Internal::ComposableShell::TopLevelViewCollectionChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::TopLevelAppView *,Windows::Internal::ComposableShell::TopLevelViewCollectionChangedEventArgs *>>,2>(v2);
    if ( *a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v3;
  }
  return a1;
}
