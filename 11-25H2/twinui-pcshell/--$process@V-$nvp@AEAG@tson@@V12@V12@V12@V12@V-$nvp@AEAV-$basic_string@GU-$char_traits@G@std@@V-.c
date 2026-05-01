/*
 * XREFs of ??$process@V?$nvp@AEAG@tson@@V12@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V32@V?$nvp@AEAV?$optional@_N@std@@@2@V?$nvp@AEA_N@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@0000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@$$QEAV?$nvp@AEA_N@1@@Z @ 0x1805A1FC4
 * Callers:
 *     ??$process@V?$nvp@AEAH@tson@@V?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@2@V?$nvp@AEAG@2@V42@V42@V42@V42@V42@V42@V42@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V52@V52@V?$nvp@AEAV?$optional@_N@std@@@2@V?$nvp@AEA_N@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAH@1@$$QEAV?$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@1@$$QEAV?$nvp@AEAG@1@2222222$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@33$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@$$QEAV?$nvp@AEA_N@1@@Z @ 0x1805A23A4 (--$process@V-$nvp@AEAH@tson@@V-$nvp@AEAW4AppInstallState@InstallControl@Preview@Store@Applicatio.c)
 * Callees:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DE2F0 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ??$process@V?$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x1800DF4A8 (--$process@V-$nvp@AEAG@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ??$process@V?$nvp@AEAV?$optional@_N@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@@Z @ 0x1805A2C50 (--$process@V-$nvp@AEAV-$optional@_N@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAV-$opt.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<unsigned short &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<std::optional<bool> &>,tson::nvp<bool &>>(
        tson::output_archive *this,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        __int64 *a8,
        __int64 *a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8

  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, a2);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, a3);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, a4);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, a5);
  tson::output_archive::process<tson::nvp<unsigned short &>>((__int64)this, a6);
  v14 = *a7;
  *((_BYTE *)this + 8) = *((_BYTE *)a7 + 8);
  *(_QWORD *)this = v14;
  tson::save_nothrow((__int64)this, (const void **)a7[2], v15);
  v16 = *a8;
  *((_BYTE *)this + 8) = *((_BYTE *)a8 + 8);
  *(_QWORD *)this = v16;
  tson::save_nothrow((__int64)this, (const void **)a8[2], v17);
  v18 = *a9;
  *((_BYTE *)this + 8) = *((_BYTE *)a9 + 8);
  *(_QWORD *)this = v18;
  tson::save_nothrow((__int64)this, (const void **)a9[2], v19);
  tson::output_archive::process<tson::nvp<std::optional<bool> &>>(this);
  return tson::output_archive::process<tson::nvp<bool &>>((__int64)this, a11);
}
