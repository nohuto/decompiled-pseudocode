/*
 * XREFs of ?HasKey@ChunkView@?$NaiveSplitView@PEAUHSTRING__@@PEAU1@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U73456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x18054A430
 * Callers:
 *     ?HasKey@?$NaiveSplitView@PEAUHSTRING__@@PEAU1@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U73456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x18054A390 (-HasKey@-$NaiveSplitView@PEAUHSTRING__@@PEAU1@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Intern.c)
 * Callees:
 *     ??RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z @ 0x180548228 (--RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::ChunkView::HasKey(
        __int64 a1,
        HSTRING a2,
        _BYTE *a3)
{
  unsigned int v6; // ebp
  int v7; // ebx
  __int64 i; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  bool v12; // [rsp+50h] [rbp+8h] BYREF
  HSTRING string; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0;
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 12LL);
  v12 = 0;
  v7 = 0;
  for ( i = 0LL; v7 >= 0 && (unsigned int)i < v6; i = (unsigned int)(i + 1) )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * i + 16);
    string = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v9 + 48LL))(v9, &string);
    if ( v7 >= 0 )
    {
      v7 = XWinRT::StringEquals::operator()(v10, a2, string, &v12);
      if ( v7 >= 0 && v12 )
      {
        *a3 = 1;
        WindowsDeleteString(string);
        return (unsigned int)v7;
      }
    }
    WindowsDeleteString(string);
    string = 0LL;
  }
  return (unsigned int)v7;
}
