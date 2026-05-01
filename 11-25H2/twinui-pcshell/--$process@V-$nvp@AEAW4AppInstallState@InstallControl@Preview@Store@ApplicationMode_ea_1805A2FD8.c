/*
 * XREFs of ??$process@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@tson@@V?$nvp@AEAG@2@V32@V32@V32@V32@V32@V32@V32@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V42@V?$nvp@AEAV?$optional@_N@std@@@2@V52@V52@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@1111111$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@2$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@33@Z @ 0x1805A2FD8
 * Callers:
 *     ??$process@V?$nvp@AEAH@tson@@V?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAG@2@V52@V52@V52@V52@V52@V52@V52@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V62@V?$nvp@AEAV?$optional@_N@std@@@2@V72@V72@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAH@1@$$QEAV?$nvp@AEAW4AppInstallType@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@3333333$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@4$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@55@Z @ 0x1805A25B0 (--$process@V-$nvp@AEAH@tson@@V-$nvp@AEAW4AppInstallType@InstallControl@Preview@Stor_ea_1805A25B0.c)
 * Callees:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DE2F0 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800DE4B8 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ??$process@V?$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x1800DF4A8 (--$process@V-$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 */

void __fastcall tson::output_archive::process<tson::nvp<enum winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        __int64 *a8,
        __int64 *a9,
        __int64 *a10,
        __int64 *a11,
        __int64 *a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  char v15; // r10
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r8

  v15 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v15;
  tson::output_archive::saveValue(this, **(unsigned int **)(a2 + 16), (__int64)a3);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, a3);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, a4);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, a5);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, a6);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, a7);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, a8);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, a9);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, a10);
  v19 = *a11;
  *((_BYTE *)this + 8) = *((_BYTE *)a11 + 8);
  *(_QWORD *)this = v19;
  tson::save_nothrow((__int64)this, (const void **)a11[2], v20);
  v21 = *a12;
  *((_BYTE *)this + 8) = *((_BYTE *)a12 + 8);
  *(_QWORD *)this = v21;
  tson::save_nothrow((__int64)this, (const void **)a12[2], v22);
  tson::output_archive::process<tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>>(
    this,
    a13,
    a14,
    a15);
}
