/*
 * XREFs of ??$process@V?$nvp@AEAG@tson@@V12@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V?$nvp@AEAV?$optional@_N@std@@@2@V42@V42@V?$nvp@AEA_N@2@V42@V42@V42@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@0000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@22$$QEAV?$nvp@AEA_N@1@222@Z @ 0x1805A2198
 * Callers:
 *     ??$process@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@tson@@V?$nvp@AEAG@2@V32@V32@V32@V32@V32@V32@V32@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V42@V?$nvp@AEAV?$optional@_N@std@@@2@V52@V52@V?$nvp@AEA_N@2@V52@V52@V52@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@1111111$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@2$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@33$$QEAV?$nvp@AEA_N@1@333@Z @ 0x1805A30E4 (--$process@V-$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationMode_ea_1805A30E4.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDAAC (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DE2F0 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ??$process@V?$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x1800DF4A8 (--$process@V-$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ??$process@V?$nvp@AEAV?$optional@_N@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@@Z @ 0x1805A2C50 (--$process@V-$nvp@AEAV-$optional@_N@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAV-$opt.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>,tson::nvp<bool &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>>(
        tson::output_archive *this,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        __int64 *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8

  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, a2);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, a3);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, a4);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, a5);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, a6);
  v15 = *a7;
  *((_BYTE *)this + 8) = *((_BYTE *)a7 + 8);
  *(_QWORD *)this = v15;
  tson::save_nothrow((__int64)this, (const void **)a7[2], v16);
  v17 = *a8;
  *((_BYTE *)this + 8) = *((_BYTE *)a8 + 8);
  *(_QWORD *)this = v17;
  tson::save_nothrow((__int64)this, (const void **)a8[2], v18);
  tson::output_archive::process<tson::nvp<std::optional<bool> &>>(this);
  tson::output_archive::process<tson::nvp<std::optional<bool> &>>(this);
  tson::output_archive::process<tson::nvp<std::optional<bool> &>>(this);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, a12);
  return tson::output_archive::process<tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>,tson::nvp<std::optional<bool> &>>(this);
}
