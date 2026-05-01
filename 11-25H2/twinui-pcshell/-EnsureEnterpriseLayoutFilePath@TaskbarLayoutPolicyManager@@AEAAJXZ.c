/*
 * XREFs of ?EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x1802B15E0
 * Callers:
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x18016BF80 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18031DCB4 (-GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180086830 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x18014B510 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ?SHRegGetStringEx@@YAJPEAUHKEY__@@PEBG1HPEAGK@Z @ 0x18020A5F8 (-SHRegGetStringEx@@YAJPEAUHKEY__@@PEBG1HPEAGK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall TaskbarLayoutPolicyManager::EnsureEnterpriseLayoutFilePath(
        TaskbarLayoutPolicyManager *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v5; // rbx
  unsigned int v6; // r9d
  int String; // ebx
  __int64 v8; // rdx
  int v10[4]; // [rsp+30h] [rbp-238h] BYREF
  unsigned __int16 v11[264]; // [rsp+40h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  v10[0] = 0;
  v5 = -2147483647LL;
  if ( (int)SHRegGetBOOLWithREGSAM(
              HKEY_CURRENT_USER,
              L"SOFTWARE\\Policies\\Microsoft\\Windows\\Explorer",
              L"LockedStartLayout",
              a4,
              v10) < 0
    || !v10[0] )
  {
    v5 = -2147483646LL;
    if ( (int)SHRegGetBOOLWithREGSAM(
                HKEY_LOCAL_MACHINE,
                L"SOFTWARE\\Policies\\Microsoft\\Windows\\Explorer",
                L"LockedStartLayout",
                v6,
                v10) < 0
      || !v10[0] )
    {
      return 2147943568LL;
    }
  }
  String = SHRegGetStringEx(
             (HKEY)v5,
             L"SOFTWARE\\Policies\\Microsoft\\Windows\\Explorer",
             L"StartLayoutFile",
             2u,
             v11,
             0x104u);
  if ( String < 0 )
  {
    v8 = 571LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)String);
    return (unsigned int)String;
  }
  String = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
             (__int64)this + 32,
             (__int64)v11,
             0xFFFFFFFFFFFFFFFFuLL);
  if ( String < 0 )
  {
    v8 = 572LL;
    goto LABEL_7;
  }
  return 0LL;
}
