/*
 * XREFs of ?CreateNode@?$XHashMap@PEAUHSTRING__@@PEAU1@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@PEAUHSTRING__@@@XWinRT@@@XWinRT@@AEAAJAEBQEAUHSTRING__@@IIPEAPEAVCNode@12@@Z @ 0x18056C9D4
 * Callers:
 *     ?SetAt@?$XHashMap@PEAUHSTRING__@@PEAU1@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@PEAUHSTRING__@@@XWinRT@@@XWinRT@@QEAAJAEBQEAUHSTRING__@@0PEAPEAUTXPOSITION@2@@Z @ 0x180570304 (-SetAt@-$XHashMap@PEAUHSTRING__@@PEAU1@UKeyTraits@-$HashMap@PEAUHSTRING__@@PEAU1@U-$DefaultHash@.c)
 * Callees:
 *     ?InitHashTable@?$XHashMap@PEAUHSTRING__@@PEAU1@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@PEAUHSTRING__@@@XWinRT@@@XWinRT@@QEAAJI_NPEA_N@Z @ 0x18056E600 (-InitHashTable@-$XHashMap@PEAUHSTRING__@@PEAU1@UKeyTraits@-$HashMap@PEAUHSTRING__@@PEAU1@U-$Defa.c)
 *     ?NewNode@?$XHashMap@PEAUHSTRING__@@PEAU1@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@PEAUHSTRING__@@@XWinRT@@@XWinRT@@AEAAJAEBQEAUHSTRING__@@IIPEAPEAVCNode@12@@Z @ 0x18056F574 (-NewNode@-$XHashMap@PEAUHSTRING__@@PEAU1@UKeyTraits@-$HashMap@PEAUHSTRING__@@PEAU1@U-$DefaultHas.c)
 */

__int64 __fastcall XWinRT::XHashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<HSTRING__ *>>::CreateNode(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        _QWORD *a5)
{
  bool v5; // zf
  int v7; // esi
  int v9; // ebx
  __int64 v10; // rdx
  __int64 result; // rax
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  char v13; // [rsp+50h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 8) == 0LL;
  v7 = a3;
  v12[0] = 0LL;
  v9 = a1;
  if ( !v5 )
    goto LABEL_5;
  v10 = *(unsigned int *)(a1 + 24);
  LOBYTE(a3) = 1;
  v13 = 0;
  result = XWinRT::XHashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<HSTRING__ *>>::InitHashTable(
             a1,
             v10,
             a3,
             &v13);
  if ( (int)result < 0 )
    return result;
  if ( !v13 )
    return 2147942414LL;
LABEL_5:
  result = XWinRT::XHashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<HSTRING__ *>>::NewNode(
             v9,
             a2,
             v7,
             a4,
             (__int64)v12);
  if ( (int)result >= 0 )
  {
    *a5 = v12[0];
    return 0LL;
  }
  return result;
}
