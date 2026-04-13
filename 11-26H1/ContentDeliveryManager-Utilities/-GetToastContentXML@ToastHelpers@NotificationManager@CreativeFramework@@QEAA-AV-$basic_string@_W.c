/*
 * XREFs of ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x1800A8D70
 * Callers:
 *     ?LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ @ 0x18009FF2C (-LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x18004B5F0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18004B620 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x18005C330 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005C76C (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18005C9D0 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?length@?$char_traits@_W@std@@SA_KPEB_W@Z @ 0x18005E9A4 (-length@-$char_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180068120 (--4-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z @ 0x180089A80 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z.c)
 *     ?reserve@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K@Z @ 0x180099150 (-reserve@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K@Z.c)
 *     ?Encode@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV45@@Z @ 0x1800A7CF0 (-Encode@ToastHelpers@NotificationManager@CreativeFramework@@AEAA-AV-$basic_string@_WU-$char_trai.c)
 *     ?ReplaceAll@Details@NotificationManager@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x1800A917C (-ReplaceAll@Details@NotificationManager@CreativeFramework@@YA-AV-$basic_string@_WU-$char_traits@.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall CreativeFramework::NotificationManager::ToastHelpers::GetToastContentXML(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // r15d
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  int v8; // r15d
  __int64 v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // r9
  _QWORD *v12; // r8
  __int64 *v13; // rdx
  _QWORD *v14; // rax
  _QWORD *i; // rax
  int v17; // [rsp+20h] [rbp-69h]
  _QWORD *v18; // [rsp+28h] [rbp-61h]
  _QWORD v19[4]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v20[4]; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v21[4]; // [rsp+70h] [rbp-19h] BYREF
  _QWORD v22[4]; // [rsp+90h] [rbp+7h] BYREF

  v18 = a2;
  v4 = 0;
  std::wstring::wstring((__int64)v20, a1);
  v6 = *(_QWORD **)(a1 + 32);
  v7 = (_QWORD *)*v6;
  while ( v7 != v6 )
  {
    v19[3] = 7LL;
    v19[2] = 0LL;
    LOWORD(v19[0]) = 0;
    v8 = v4 | 2;
    v9 = std::char_traits<wchar_t>::length(L"{");
    std::wstring::reserve(v19, v7[6] + v9);
    std::wstring::append(v19, L"{");
    std::wstring::append(v19, v7 + 4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    v10 = std::wstring::append(v19, L"}");
    std::wstring::wstring((__int64)v21, (__int64)v10);
    v17 = v8 | 4;
    v4 = v8 & 0xFFFFFFF9 | 4;
    std::wstring::_Tidy(v19, 1, 0LL);
    v11 = v7 + 8;
    if ( v7[11] >= 8uLL )
      v11 = (_QWORD *)*v11;
    v12 = v21;
    if ( v21[3] >= 8uLL )
      v12 = (_QWORD *)v21[0];
    v13 = v20;
    if ( v20[3] >= 8uLL )
      v13 = (__int64 *)v20[0];
    v14 = (_QWORD *)CreativeFramework::NotificationManager::Details::ReplaceAll(v22, v13, v12, v11, v17, v18);
    std::wstring::operator=(v20, v14);
    std::wstring::_Tidy(v22, 1, 0LL);
    std::wstring::_Tidy(v21, 1, 0LL);
    if ( !*((_BYTE *)v7 + 25) )
    {
      v5 = v7[2];
      if ( *(_BYTE *)(v5 + 25) )
      {
        for ( i = (_QWORD *)v7[1]; !*((_BYTE *)i + 25) && v7 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
          v7 = i;
      }
      else
      {
        i = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Min((_QWORD *)v5);
      }
      v7 = i;
    }
  }
  CreativeFramework::NotificationManager::ToastHelpers::Encode(v5, a2, v20);
  std::wstring::_Tidy(v20, 1, 0LL);
  return a2;
}
