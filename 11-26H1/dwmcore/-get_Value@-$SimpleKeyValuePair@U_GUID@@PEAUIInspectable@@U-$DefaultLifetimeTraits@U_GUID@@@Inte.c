/*
 * XREFs of ?get_Value@?$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1802A21C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Localize@ReferencedGitCookie@?$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAJPEAPEAUIInspectable@@@Z @ 0x1802A02B8 (-Localize@ReferencedGitCookie@-$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAJPEAPEAUIInspe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleKeyValuePair<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>::get_Value(
        __int64 a1,
        __int64 *a2)
{
  unsigned int v2; // ebx
  bool v3; // zf
  __int64 v4; // rcx

  v2 = 0;
  v3 = *(_BYTE *)(a1 + 88) == 0;
  v4 = *(_QWORD *)(a1 + 80);
  if ( v3 )
  {
    *a2 = v4;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  else
  {
    return (unsigned int)XWinRT::detail::GitStorageType<IInspectable>::ReferencedGitCookie::Localize(v4, a2);
  }
  return v2;
}
