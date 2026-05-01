/*
 * XREFs of ?GetKeyPathForHwnd@Util@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@Z @ 0x180626F20
 * Callers:
 *     ?CreateKeyForHwnd@Util@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@_J@Z @ 0x1806253D0 (-CreateKeyForHwnd@Util@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6A.c)
 *     ?TryOpenKeyForHwnd@Util@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@_J@Z @ 0x18062C7A0 (-TryOpenKeyForHwnd@Util@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6.c)
 * Callees:
 *     ??_D?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800651EC (--_D-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x18033B100 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1803408B0 (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?str@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x1803539B8 (-str@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU-$c.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Util::GetKeyPathForHwnd(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD v7[2]; // [rsp+30h] [rbp-108h] BYREF
  _BYTE v8[8]; // [rsp+40h] [rbp-F8h] BYREF
  _BYTE v9[240]; // [rsp+48h] [rbp-F0h] BYREF

  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(v7);
  v4 = std::operator<<<unsigned short,std::char_traits<unsigned short>>(
         (__int64)v8,
         (__int64)L"Software\\Microsoft\\Windows\\CurrentVersion\\WindowProperties");
  v5 = std::operator<<<unsigned short,std::char_traits<unsigned short>>(v4, (__int64)L"\\");
  std::basic_ostream<unsigned short>::operator<<(v5, a2);
  std::basic_stringbuf<unsigned short>::str((__int64)v9, a1);
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbase destructor'((__int64)v7);
  return a1;
}
