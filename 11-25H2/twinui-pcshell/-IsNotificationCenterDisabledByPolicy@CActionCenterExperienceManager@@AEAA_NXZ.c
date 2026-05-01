/*
 * XREFs of ?IsNotificationCenterDisabledByPolicy@CActionCenterExperienceManager@@AEAA_NXZ @ 0x18035F2A4
 * Callers:
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x1803609C0 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Equal@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NQEBG@Z @ 0x180190FA4 (-_Equal@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_NQEBG@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 */

char __fastcall CActionCenterExperienceManager::IsNotificationCenterDisabledByPolicy(
        CActionCenterExperienceManager *this)
{
  _BYTE *v2; // rdx
  char v3; // bl
  int pvData; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-BCh] BYREF
  DWORD v6; // [rsp+48h] [rbp-B8h] BYREF
  void *v7[4]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v8[528]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v9[528]; // [rsp+280h] [rbp+180h] BYREF

  pcbData = 4;
  pvData = 0;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Policies\\Microsoft\\Windows\\Explorer",
          L"DisableNotificationCenter",
          0x10u,
          0LL,
          &pvData,
          &pcbData) )
    return pvData == 1;
  memset_0(v8, 0, 0x208uLL);
  v6 = 520;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Policies\\Microsoft\\Windows\\Explorer",
          L"DisableNotificationCenter",
          2u,
          0LL,
          v8,
          &v6) )
  {
    v2 = v8;
LABEL_5:
    std::wstring::wstring((char **)v7, v2);
    v3 = std::wstring::_Equal((char *)v7, (char *)L"1");
    std::wstring::_Tidy_deallocate(v7);
    return v3;
  }
  pvData = 0;
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_CURRENT_USER,
          L"Software\\Policies\\Microsoft\\Windows\\Explorer",
          L"DisableNotificationCenter",
          0x10u,
          0LL,
          &pvData,
          &pcbData) )
    return pvData == 1;
  memset_0(v9, 0, 0x208uLL);
  v6 = 520;
  if ( !RegGetValueW(
          HKEY_CURRENT_USER,
          L"Software\\Policies\\Microsoft\\Windows\\Explorer",
          L"DisableNotificationCenter",
          2u,
          0LL,
          v9,
          &v6) )
  {
    v2 = v9;
    goto LABEL_5;
  }
  return 0;
}
