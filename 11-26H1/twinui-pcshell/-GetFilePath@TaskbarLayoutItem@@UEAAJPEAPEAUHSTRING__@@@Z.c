/*
 * XREFs of ?GetFilePath@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18031E520
 * Callers:
 *     ?GetFilePath@TaskbarLayoutItem@@W7EAAJPEAPEAUHSTRING__@@@Z @ 0x18031E5A0 (-GetFilePath@TaskbarLayoutItem@@W7EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18006002C (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall TaskbarLayoutItem::GetFilePath(TaskbarLayoutItem *this, HSTRING *a2)
{
  __int64 v3; // r9
  HSTRING *v4; // r10
  const WCHAR *v5; // rcx
  HRESULT String; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  if ( !*((_QWORD *)this + 6) )
    return 2147647529LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount((_QWORD *)this + 6);
  v5 = &pvData;
  if ( *(_QWORD *)v3 )
    v5 = *(const WCHAR **)v3;
  String = WindowsCreateString(v5, *(_DWORD *)(v3 + 8), v4);
  v7 = String;
  if ( String >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x39,
    (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutitem.cpp",
    (const char *)(unsigned int)String);
  return v7;
}
