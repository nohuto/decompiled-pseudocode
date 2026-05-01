/*
 * XREFs of ?GetCertSignerHashFromExe@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180571CD0
 * Callers:
 *     ?ComputeAppIdFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180576934 (-ComputeAppIdFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG.c)
 *     ?ComposeWin32AppIdForJavaApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV?$basic_string_view@GU?$char_traits@G@std@@@2@@Z @ 0x1805775C8 (-ComposeWin32AppIdForJavaApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?HashAndBase32Encode@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180571D4C (-HashAndBase32Encode@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG@Z.c)
 *     ?TryGetCertSubjectName@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG_N@Z @ 0x180571EBC (-TryGetCertSubjectName@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG_N.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetCertSignerHashFromExe(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rdx
  _QWORD v6[4]; // [rsp+30h] [rbp-38h] BYREF

  LOBYTE(a3) = 1;
  TryGetCertSubjectName(v6, a2, a3);
  if ( v6[2] )
  {
    v4 = v6;
    if ( v6[3] > 7uLL )
      v4 = (_QWORD *)v6[0];
    HashAndBase32Encode(a1, v4);
  }
  else
  {
    std::wstring::wstring(a1);
  }
  std::wstring::_Tidy_deallocate(v6);
  return a1;
}
