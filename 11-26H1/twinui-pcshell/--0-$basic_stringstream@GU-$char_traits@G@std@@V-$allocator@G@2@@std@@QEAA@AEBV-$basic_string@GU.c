/*
 * XREFs of ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x18013BA68
 * Callers:
 *     _anonymous_namespace_::TimeStringToTimePoint @ 0x18013B524 (_anonymous_namespace_--TimeStringToTimePoint.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion @ 0x18013B8F4 (_anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion.c)
 *     ?GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@UShellViewAnimationProperties@3UI@WindowsUdk@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18026D23C (-GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@W.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
        __int64 a1,
        _QWORD *a2)
{
  int v4; // ebx
  unsigned __int64 v5; // rax
  size_t v6; // rbx
  char *v7; // rdi

  v4 = 0;
  *(_QWORD *)a1 = &std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbtable'{for `std::basic_istream<unsigned short>'};
  *(_QWORD *)(a1 + 16) = &std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbtable'{for `std::basic_ostream<unsigned short>'};
  std::basic_ios<unsigned short>::basic_ios<unsigned short>(a1 + 152);
  std::basic_iostream<unsigned short>::basic_iostream<unsigned short>(a1, a1 + 24, 0LL);
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1) = &std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 - 4) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 152;
  std::basic_streambuf<unsigned short>::basic_streambuf<unsigned short>(a1 + 24);
  *(_QWORD *)(a1 + 24) = &std::basic_stringbuf<unsigned short>::`vftable';
  v5 = a2[2];
  if ( a2[3] > 7uLL )
    a2 = (_QWORD *)*a2;
  if ( v5 > 0x7FFFFFFF )
  {
    std::_Xbad_alloc();
    __debugbreak();
    JUMPOUT(0x18013BBB0LL);
  }
  if ( v5 )
  {
    v6 = 2 * v5;
    v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(2 * v5);
    memcpy_0(v7, a2, v6);
    *(_QWORD *)(a1 + 128) = &v7[v6];
    std::basic_streambuf<unsigned short>::setg(a1 + 24, v7, v7);
    std::basic_streambuf<unsigned short>::setp(a1 + 24, v7, v7, *(_QWORD *)(a1 + 128));
    v4 = 1;
  }
  else
  {
    *(_QWORD *)(a1 + 128) = 0LL;
  }
  *(_DWORD *)(a1 + 136) = v4;
  return a1;
}
