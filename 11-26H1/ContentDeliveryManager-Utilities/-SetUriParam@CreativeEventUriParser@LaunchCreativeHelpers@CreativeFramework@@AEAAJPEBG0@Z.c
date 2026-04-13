/*
 * XREFs of ?SetUriParam@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@AEAAJPEBG0@Z @ 0x180072914
 * Callers:
 *     ?Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z @ 0x1800722E8 (-Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180072A58 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 */

__int64 __fastcall CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser::SetUriParam(
        CreativeFramework::LaunchCreativeHelpers::CreativeEventUriParser *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  wchar_t **i; // rbx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  for ( i = &off_18017EA20; ; i += 2 )
  {
    if ( i == (wchar_t **)&std::invalid_argument `RTTI Type Descriptor' )
      goto LABEL_8;
    if ( CompareStringOrdinal(a2, -1, *i, -1, 1) == 2 )
      break;
  }
  if ( *((_DWORD *)i + 2) == -1 )
  {
LABEL_8:
    v7 = -2147024809;
    v8 = 93LL;
    goto LABEL_9;
  }
  v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (char *)this + 24 * *((int *)i + 2),
         a3,
         -1LL);
  if ( (v7 & 0x80000000) == 0 )
    return v7;
  v8 = 94LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\launchcreative\\creativeeventuriparser.cpp",
    (const char *)v7);
  return v7;
}
