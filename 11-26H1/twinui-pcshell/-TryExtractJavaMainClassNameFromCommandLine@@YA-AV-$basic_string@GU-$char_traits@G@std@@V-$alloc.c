/*
 * XREFs of ?TryExtractJavaMainClassNameFromCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x180577B80
 * Callers:
 *     ?GetAppIdForSpecialCategoryApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGI@Z @ 0x1805769D0 (-GetAppIdForSpecialCategoryApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180033674 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetJavaOption@@YA?AW4JavaOption@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV23@@Z @ 0x1805776EC (-GetJavaOption@@YA-AW4JavaOption@@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ?IsJavawExe@@YA_NPEBG@Z @ 0x180577B40 (-IsJavawExe@@YA_NPEBG@Z.c)
 *     ?TryGetNameFromPath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x180577CF8 (-TryGetNameFromPath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBV12@@Z.c)
 */

_QWORD *__fastcall TryExtractJavaMainClassNameFromCommandLine(_QWORD *a1)
{
  __int64 v2; // rdx
  const WCHAR *v3; // r8
  int JavaOption; // ebx
  const unsigned __int16 **v5; // rax
  const unsigned __int16 *v6; // rdx
  __int64 *v7; // r14
  int v8; // esi
  __int64 *i; // rdi
  _QWORD *NameFromPath; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  int pNumArgs; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v15[4]; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v16[4]; // [rsp+48h] [rbp-28h] BYREF

  std::wstring::wstring((__int64)a1);
  JavaOption = 0;
  pNumArgs = 0;
  if ( *(_QWORD *)(v2 + 24) > 7uLL )
    v3 = *(const WCHAR **)v2;
  v5 = (const unsigned __int16 **)CommandLineToArgvW(v3, &pNumArgs);
  v7 = (__int64 *)v5;
  if ( pNumArgs > 0 && IsJavawExe(*v5, v6) )
  {
    v8 = 1;
    for ( i = v7 + 1; ; ++i )
    {
      if ( v8 >= pNumArgs )
        goto LABEL_16;
      if ( *(_WORD *)*i != 45 )
        break;
      if ( JavaOption == 2 )
        goto LABEL_16;
      std::wstring::wstring((__int64)v16);
      std::wstring::wstring((__int64)v15, *i);
      JavaOption = GetJavaOption((__int64)v15, v16);
      std::wstring::_Tidy_deallocate(v15);
      if ( JavaOption == 1 )
      {
        ++v8;
        ++i;
      }
      else if ( JavaOption == 3 )
      {
        NameFromPath = (_QWORD *)TryGetNameFromPath(v15, v16);
        std::wstring::operator=(a1, NameFromPath);
        std::wstring::_Tidy_deallocate(v15);
        v11 = v16;
LABEL_15:
        std::wstring::_Tidy_deallocate(v11);
        goto LABEL_16;
      }
      std::wstring::_Tidy_deallocate(v16);
      ++v8;
    }
    std::wstring::wstring((__int64)v15, *i);
    v12 = (_QWORD *)TryGetNameFromPath(v16, v15);
    std::wstring::operator=(a1, v12);
    std::wstring::_Tidy_deallocate(v16);
    v11 = v15;
    goto LABEL_15;
  }
LABEL_16:
  LocalFree(v7);
  return a1;
}
