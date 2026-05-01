/*
 * XREFs of TabletModeDragPattern::GenerateStringWithMap @ 0x180532B44
 * Callers:
 *     ?GenerateAppResizeDropEffect@TabletModeDragPattern@@YAJPEAUIAppLayoutOperation@@W4ResizeAction@@PEAV?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@PEAPEAG@Z @ 0x180532820 (-GenerateAppResizeDropEffect@TabletModeDragPattern@@YAJPEAUIAppLayoutOperation@@W4ResizeAction@@.c)
 *     ?GenerateWindowArrangementDropEffect@TabletModeDragPattern@@YAJPEAUIApplicationView@@PEAUIAppLayout@@W4ARRANGEMENT_ACTION@@PEAV?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@PEAPEAG@Z @ 0x180532DBC (-GenerateWindowArrangementDropEffect@TabletModeDragPattern@@YAJPEAUIApplicationView@@PEAUIAppLay.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800712B0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@W_ea_1800712B0.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@IG@Z @ 0x1801DEDF4 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHI.c)
 *     TabletModeDragPattern::GetWindowTitleWithMap @ 0x18053308C (TabletModeDragPattern--GetWindowTitleWithMap.c)
 *     ?InitializeMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1805331D8 (-InitializeMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabletModeDragPattern::GenerateStringWithMap(
        int a1,
        ApplicationViewHelpers *a2,
        ApplicationViewHelpers *a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        wchar_t **a7)
{
  int v10; // eax
  unsigned int v11; // ebx
  int WindowTitleWithMap; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  wchar_t *v18; // rax
  __int64 v20; // [rsp+20h] [rbp-60h] BYREF
  __int64 v21; // [rsp+28h] [rbp-58h]
  __int64 v22; // [rsp+30h] [rbp-50h]
  __int64 v23; // [rsp+38h] [rbp-48h] BYREF
  __int64 v24; // [rsp+40h] [rbp-40h]
  __int64 v25; // [rsp+48h] [rbp-38h]
  wchar_t *v26; // [rsp+50h] [rbp-30h] BYREF
  __int64 v27; // [rsp+58h] [rbp-28h]
  __int64 v28; // [rsp+60h] [rbp-20h]
  const wchar_t *v29[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  *a7 = 0LL;
  memset(v29, 0, sizeof(v29));
  v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
          (__int64)v29,
          &_ImageBase,
          a5);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    if ( a2 )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
      v21 = -1LL;
      v22 = -1LL;
      WindowTitleWithMap = TabletModeDragPattern::GetWindowTitleWithMap(a2);
      v11 = WindowTitleWithMap;
      if ( WindowTitleWithMap < 0 )
      {
        v13 = 65LL;
LABEL_6:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (int)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
          (const char *)(unsigned int)WindowTitleWithMap);
LABEL_7:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
        goto LABEL_30;
      }
    }
    else
    {
      WindowTitleWithMap = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
                             (__int64)&v20,
                             &_ImageBase,
                             0x7D1u);
      v11 = WindowTitleWithMap;
      if ( WindowTitleWithMap < 0 )
      {
        v13 = 69LL;
        goto LABEL_6;
      }
    }
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    if ( a3 )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v23);
      v24 = -1LL;
      v25 = -1LL;
      v14 = TabletModeDragPattern::GetWindowTitleWithMap(a3);
      v11 = v14;
      if ( v14 < 0 )
      {
        v15 = 76LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (int)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
          (const char *)(unsigned int)v14);
LABEL_14:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v23);
        goto LABEL_7;
      }
    }
    else
    {
      v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
              (__int64)&v23,
              &_ImageBase,
              0x7D1u);
      v11 = v14;
      if ( v14 < 0 )
      {
        v15 = 80LL;
        goto LABEL_13;
      }
    }
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    if ( a1 == 2 )
    {
      if ( a6 )
      {
        v16 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeMessage(
                &v26,
                v29[0],
                v20);
        v11 = v16;
        if ( v16 < 0 )
        {
          v17 = 90LL;
LABEL_21:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v17,
            (int)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
            (const char *)(unsigned int)v16);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v26);
          goto LABEL_14;
        }
      }
      else
      {
        v16 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
                &v26,
                v29[0],
                v20,
                v23);
        v11 = v16;
        if ( v16 < 0 )
        {
          v17 = 94LL;
          goto LABEL_21;
        }
      }
    }
    else if ( a6 )
    {
      v16 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeMessage(
              &v26,
              v29[0],
              v20);
      v11 = v16;
      if ( v16 < 0 )
      {
        v17 = 101LL;
        goto LABEL_21;
      }
    }
    else
    {
      v16 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
              &v26,
              v29[0],
              v20);
      v11 = v16;
      if ( v16 < 0 )
      {
        v17 = 106LL;
        goto LABEL_21;
      }
    }
    v18 = v26;
    v26 = 0LL;
    v28 = 0LL;
    v27 = 0LL;
    *a7 = v18;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v26);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v23);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
    v11 = 0;
    goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B,
    (int)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
    (const char *)(unsigned int)v10);
LABEL_30:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v29);
  return v11;
}
