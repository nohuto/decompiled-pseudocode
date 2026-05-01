/*
 * XREFs of ?IsControlCenterDisabledByPolicy@CControlCenterExperienceManager@@AEAA_NXZ @ 0x18036CCDC
 * Callers:
 *     ?ShowExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x1802BDA6C (-ShowExperience@CControlCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?_Equal@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NQEBG@Z @ 0x1800303F0 (-_Equal@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_NQEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

bool __fastcall CControlCenterExperienceManager::IsControlCenterDisabledByPolicy(CControlCenterExperienceManager *this)
{
  bool v2; // bl
  int pvData; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-BCh] BYREF
  DWORD v5; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v6[4]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v7[528]; // [rsp+70h] [rbp-90h] BYREF

  pvData = 0;
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_CURRENT_USER,
          L"Software\\Policies\\Microsoft\\Windows\\Explorer",
          L"DisableControlCenter",
          0x10u,
          0LL,
          &pvData,
          &pcbData) )
    return pvData == 1;
  memset_0(v7, 0, 0x208uLL);
  v5 = 520;
  if ( RegGetValueW(
         HKEY_CURRENT_USER,
         L"Software\\Policies\\Microsoft\\Windows\\Explorer",
         L"DisableControlCenter",
         2u,
         0LL,
         v7,
         &v5) )
  {
    return 0;
  }
  std::wstring::wstring((__int64)v6, (__int64)v7);
  v2 = std::wstring::_Equal((__int64)v6, (__int64)L"1");
  std::wstring::_Tidy_deallocate(v6);
  return v2;
}
