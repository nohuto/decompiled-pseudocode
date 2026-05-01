/*
 * XREFs of ??$process@V?$nvp@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$nvp@AEA_N@2@V42@V42@V?$nvp@AEAJ@2@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEA_N@1@22$$QEAV?$nvp@AEAJ@1@1@Z @ 0x1805C6AE4
 * Callers:
 *     ??$?RV?$nvp@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V?$nvp@AEA_N@1@V31@V31@V?$nvp@AEAJ@1@V21@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEA_N@1@22$$QEAV?$nvp@AEAJ@1@1@Z @ 0x1805C3A08 (--$-RV-$nvp@AEAV-$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winr_ea_1805C3A08.c)
 * Callees:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DF188 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800DF434 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800E00F0 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800E0448 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?value@?$optional@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@std@@QEGAAAEAW4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@XZ @ 0x180201AC4 (-value@-$optional@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@w.c)
 *     ??$?RV?$nvp@_N@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@_N@1@@Z @ 0x180325840 (--$-RV-$nvp@_N@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@_N@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAJ@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1805C818C (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAJ@2@V-$nvp@AEAV-$basic_string@GU-$c_ea_1805C818C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall tson::output_archive::process<tson::nvp<std::optional<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType> &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  char v11; // r10
  __int64 v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // r8
  char v15; // cl
  __int64 v16; // r8
  const char *v18; // [rsp+30h] [rbp-18h] BYREF
  char v19; // [rsp+38h] [rbp-10h]
  char v20; // [rsp+39h] [rbp-Fh]

  v11 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v11;
  v12 = *(_QWORD *)(a2 + 16);
  tson::output_archive::startNode(this);
  v18 = "has_value";
  v19 = 9;
  v20 = *(_BYTE *)(v12 + 4);
  tson::output_archive::operator()<tson::nvp<bool>>((__int64)this, (__int64)&v18);
  if ( *(_BYTE *)(v12 + 4) )
  {
    v13 = (unsigned int *)std::optional<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>::value(v12);
    *(_QWORD *)this = "value";
    *((_BYTE *)this + 8) = 5;
    tson::output_archive::saveValue(this, *v13, v14);
  }
  tson::output_archive::finishNode(this);
  v15 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)this = *(_QWORD *)a3;
  *((_BYTE *)this + 8) = v15;
  tson::save_nothrow((__int64)this, *(const void ***)(a3 + 16), v16);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>>(
           (_DWORD)this,
           a4,
           a5,
           a6,
           a7,
           a8);
}
