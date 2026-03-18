/*
 * XREFs of ?Lookup@ChunkView@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@PEAPEAUIInspectable@@@Z @ 0x1802A0570
 * Callers:
 *     ?Lookup@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@PEAPEAUIInspectable@@@Z @ 0x1802A0430 (-Lookup@-$NaiveSplitView@U_GUID@@PEAUIInspectable@@U-$DefaultEqualityPredicate@U_GUID@@@Internal.c)
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::ChunkView::Lookup(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // r9
  char v4; // di
  __int64 v8; // rbx
  unsigned int v9; // ebp
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rax
  __int128 v15; // [rsp+28h] [rbp-40h] BYREF

  LODWORD(v3) = 0;
  v4 = 0;
  v8 = 0LL;
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 12LL);
  while ( (int)v3 >= 0 )
  {
    if ( (unsigned int)v8 >= v9 )
      goto LABEL_11;
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v8 + 16);
    v15 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v10 + 48LL))(v10, &v15);
    v3 = (unsigned int)v11;
    if ( v11 >= 0 )
    {
      v13 = *a2 - v15;
      if ( *a2 == (_QWORD)v15 )
        v13 = a2[1] - *((_QWORD *)&v15 + 1);
      if ( !v13 )
      {
        v4 = 1;
        LODWORD(v3) = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)v10 + 56LL))(
                        v10,
                        a3,
                        v12,
                        v3);
        if ( (int)v3 < 0 )
          break;
LABEL_11:
        if ( v4 )
          return (unsigned int)v3;
        LODWORD(v3) = -2147483637;
        break;
      }
      LODWORD(v3) = 0;
      v4 = 0;
    }
    v8 = (unsigned int)(v8 + 1);
  }
  *a3 = 0LL;
  return (unsigned int)v3;
}
