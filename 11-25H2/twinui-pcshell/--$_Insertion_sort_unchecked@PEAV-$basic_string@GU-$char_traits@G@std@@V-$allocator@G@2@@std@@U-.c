/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0U?$less@X@0@@Z @ 0x18033E1B0
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@X@2@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0_JU?$less@X@0@@Z @ 0x18033E9EC (--$_Sort_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@X@2@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AEF48 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x18023A6FC (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$_Move_backward_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEAV10@00@Z @ 0x18033E3D8 (--$_Move_backward_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEA.c)
 */

unsigned __int16 *__fastcall std::_Insertion_sort_unchecked<std::wstring *,std::less<void>>(
        unsigned __int16 *a1,
        unsigned __int16 *a2)
{
  unsigned __int16 *i; // rdi
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  int v7; // eax
  __int64 v8; // r11
  unsigned __int16 *j; // rbx
  int v11; // eax
  _OWORD v12[2]; // [rsp+20h] [rbp-48h] BYREF

  if ( a1 != a2 )
  {
    for ( i = a1 + 16; i != a2; i += 16 )
    {
      v5 = *(_OWORD *)i;
      v6 = *((_OWORD *)i + 1);
      *((_QWORD *)i + 2) = 0LL;
      *((_QWORD *)i + 3) = 7LL;
      v12[0] = v5;
      *i = 0;
      v12[1] = v6;
      LOBYTE(v7) = std::wstring::compare(v12, a1);
      if ( v7 >= 0 )
      {
        for ( j = i; ; std::wstring::operator=(v8, (__int64)j) )
        {
          j -= 16;
          LOBYTE(v11) = std::wstring::compare(v12, j);
          if ( v11 >= 0 )
            break;
        }
      }
      else
      {
        std::_Move_backward_unchecked<std::wstring *,std::wstring *>(a1, i, i + 16);
        v8 = (__int64)a1;
      }
      std::wstring::operator=(v8, (__int64)v12);
      std::wstring::_Tidy_deallocate((void **)v12);
    }
  }
  return a2;
}
