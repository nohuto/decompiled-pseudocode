/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V?$nvp@AEAW4SnapControlType@SnapComponent@Shell@Internal@Windows@winrt@@@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000$$QEAV?$nvp@AEAW4SnapControlType@SnapComponent@Shell@Internal@Windows@winrt@@@1@0@Z @ 0x1802AB778
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_SnapFlyoutShowTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800E0DEC (--$serialize@Voutput_archive@tson@@@_tip_SnapFlyoutShowTest@@QEAAXAEAVoutput_archive@tson@@@Z.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800DF434 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DFC8C (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<enum winrt::Windows::Internal::Shell::SnapComponent::SnapControlType &>,tson::nvp<bool &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8)
{
  __int64 v11; // rax
  __int64 v12; // r8

  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, a2);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, a3);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, a4);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, a5);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, a6);
  v11 = *a7;
  *((_BYTE *)this + 8) = *((_BYTE *)a7 + 8);
  *(_QWORD *)this = v11;
  tson::output_archive::saveValue(this, *(unsigned int *)a7[2], v12);
  return tson::output_archive::process<tson::nvp<bool &>>((__int64)this, a8);
}
