/*
 * XREFs of ?_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18039E670
 * Callers:
 *     ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x18039D590 (-LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180030E44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x180033BDC (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ?_SetDefaults@RetailDemoExperienceManager@@AEAAXXZ @ 0x180200F6C (-_SetDefaults@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x18029EC40 (-_Tidy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$ba.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_ParseScreenInt@RetailDemoExperienceManager@@CAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N1@Z @ 0x18039E914 (-_ParseScreenInt@RetailDemoExperienceManager@@CAHAEBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_ParseScreenRect@RetailDemoExperienceManager@@CA?AUtagRECT@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18039EA40 (-_ParseScreenRect@RetailDemoExperienceManager@@CA-AUtagRECT@@AEBV-$basic_string@GU-$char_traits@.c)
 *     ?_SplitString@RetailDemoExperienceManager@@CA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x18039EE5C (-_SplitString@RetailDemoExperienceManager@@CA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall RetailDemoExperienceManager::_ParseExperienceArguments(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rdi
  _QWORD *v4; // rsi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  int v19; // eax
  __int64 v20[3]; // [rsp+20h] [rbp-29h] BYREF
  DWORD pdwDefaultLayout; // [rsp+38h] [rbp-11h] BYREF
  _QWORD v22[3]; // [rsp+40h] [rbp-9h] BYREF
  _BYTE v23[16]; // [rsp+58h] [rbp+Fh] BYREF
  _QWORD v24[4]; // [rsp+68h] [rbp+1Fh] BYREF

  RetailDemoExperienceManager::_SetDefaults((RetailDemoExperienceManager *)a1);
  RetailDemoExperienceManager::_SplitString(v22, v2, 38LL);
  v3 = (_QWORD *)v22[0];
  v4 = (_QWORD *)v22[1];
  while ( v3 != v4 )
  {
    std::wstring::wstring((__int64)v24, v3);
    RetailDemoExperienceManager::_SplitString(v20, v24, 61LL);
    LOBYTE(v5) = std::wstring::compare(v20[0], (__int64)L"zBand");
    if ( v5 )
    {
      LOBYTE(v6) = std::wstring::compare(v20[0], (__int64)L"topmost");
      if ( v6 )
      {
        LOBYTE(v8) = std::wstring::compare(v20[0], (__int64)L"docked");
        if ( v8 )
        {
          LOBYTE(v10) = std::wstring::compare(v20[0], (__int64)L"dockedSide");
          if ( v10 )
          {
            LOBYTE(v12) = std::wstring::compare(v20[0], (__int64)L"adjustDesktop");
            if ( v12 )
            {
              LOBYTE(v14) = std::wstring::compare(v20[0], (__int64)L"dockedWidth");
              if ( v14 )
              {
                LOBYTE(v16) = std::wstring::compare(v20[0], (__int64)L"dockedMargin");
                if ( v16 )
                {
                  LOBYTE(v18) = std::wstring::compare(v20[0], (__int64)L"dockedHeight");
                  if ( v18 )
                  {
                    LOBYTE(v19) = std::wstring::compare(v20[0], (__int64)L"floatingRect");
                    if ( !v19 )
                      *(_OWORD *)(a1 + 364) = *(_OWORD *)RetailDemoExperienceManager::_ParseScreenRect(v23, v20[0] + 32);
                  }
                  else
                  {
                    *(_DWORD *)(a1 + 360) = RetailDemoExperienceManager::_ParseScreenInt(v20[0] + 32, 0LL, 0LL);
                  }
                }
                else
                {
                  LOBYTE(v17) = 1;
                  *(_DWORD *)(a1 + 356) = RetailDemoExperienceManager::_ParseScreenInt(v20[0] + 32, v17, 0LL);
                }
              }
              else
              {
                LOBYTE(v15) = 1;
                *(_DWORD *)(a1 + 352) = RetailDemoExperienceManager::_ParseScreenInt(v20[0] + 32, v15, 0LL);
              }
            }
            else
            {
              LOBYTE(v13) = std::wstring::compare(v20[0] + 32, (__int64)L"true");
              *(_BYTE *)(a1 + 381) = v13 == 0;
            }
          }
          else
          {
            LOBYTE(v11) = std::wstring::compare(v20[0] + 32, (__int64)L"right");
            *(_BYTE *)(a1 + 382) = v11 == 0;
            pdwDefaultLayout = 0;
            GetProcessDefaultLayout(&pdwDefaultLayout);
            if ( pdwDefaultLayout == 1 )
              *(_BYTE *)(a1 + 382) = *(_BYTE *)(a1 + 382) == 0;
          }
        }
        else
        {
          LOBYTE(v9) = std::wstring::compare(v20[0] + 32, (__int64)L"true");
          *(_BYTE *)(a1 + 380) = v9 == 0;
        }
      }
      else
      {
        LOBYTE(v7) = std::wstring::compare(v20[0] + 32, (__int64)L"true");
        *(_BYTE *)(a1 + 348) = v7 == 0;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 344) = _o__wtol();
    }
    std::vector<std::wstring>::_Tidy((__int64)v20);
    std::wstring::_Tidy_deallocate(v24);
    v3 += 4;
  }
  std::vector<std::wstring>::_Tidy((__int64)v22);
}
