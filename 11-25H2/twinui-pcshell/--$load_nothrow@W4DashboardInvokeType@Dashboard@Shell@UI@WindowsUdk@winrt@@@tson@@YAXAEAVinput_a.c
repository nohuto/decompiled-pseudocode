/*
 * XREFs of ??$load_nothrow@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@tson@@YAXAEAVinput_archive@0@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@Z @ 0x1805A1A40
 * Callers:
 *     ??$?RV?$nvp@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V?$nvp@AEA_N@1@V31@V31@V?$nvp@AEAJ@1@V21@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEA_N@1@22$$QEAV?$nvp@AEAJ@1@1@Z @ 0x18059F818 (--$-RV-$nvp@AEAV-$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@tso.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801852D0 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801853E4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?value@?$optional@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@std@@QEGAAAEAW4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@XZ @ 0x18020E8B8 (-value@-$optional@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@w.c)
 *     ??$?RAEAW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@input_archive@tson@@QEAAAEAV01@AEAW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18059F6AC (--$-RAEAW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@input_archive@tson@@QEAAAEAV.c)
 */

char __fastcall tson::load_nothrow<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType>(
        tson::input_archive *a1,
        __int64 a2)
{
  bool v4; // si
  char *v5; // rax
  __int64 v6; // rdx
  char v7; // cl
  _DWORD *v8; // rax

  v4 = 0;
  LOBYTE(v5) = tson::input_archive::search(a1);
  if ( (_BYTE)v5 )
  {
    tson::input_archive::consume_expected_marker(a1, 10, -2147023267);
    v6 = *(_QWORD *)a1;
    v5 = *(char **)(*(_QWORD *)a1 + 8LL);
    if ( (unsigned __int64)v5 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
    {
      *(_BYTE *)(v6 + 24) = 1;
    }
    else
    {
      v7 = *v5++;
      *(_QWORD *)(v6 + 8) = v5;
      v4 = v7 != 0;
    }
  }
  *(_BYTE *)(a2 + 4) = 0;
  if ( v4 )
  {
    *(_DWORD *)a2 = 0;
    *(_BYTE *)(a2 + 4) = 1;
    try
    {
      v8 = (_DWORD *)std::optional<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>::value(a2);
      LOBYTE(v5) = (unsigned __int8)tson::input_archive::operator()<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType &>(
                                      a1,
                                      v8);
    }
    catch ( ... )
    {
      LOBYTE(v5) = (_BYTE)a1;
      if ( *((int *)a1 + 2) >= 0 )
        *((_DWORD *)a1 + 2) = -2147024882;
    }
  }
  return (char)v5;
}
