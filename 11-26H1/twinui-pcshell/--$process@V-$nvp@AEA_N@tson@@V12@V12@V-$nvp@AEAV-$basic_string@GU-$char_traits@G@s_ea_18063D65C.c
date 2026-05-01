/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V32@V12@V?$nvp@AEA_K@2@V12@V?$nvp@AEAW4BootModeType@CloudPCHelpers@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@010$$QEAV?$nvp@AEA_K@1@0$$QEAV?$nvp@AEAW4BootModeType@CloudPCHelpers@@@1@@Z @ 0x18063D65C
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_BootToCloudPCTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x18063DEBC (--$serialize@Voutput_archive@tson@@@_tip_BootToCloudPCTest@@QEAAXAEAVoutput_archive@tson@@@Z.c)
 * Callees:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DF188 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DFC8C (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@@Z @ 0x1802B8708 (--$process@V-$nvp@AEA_K@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_K@1@@Z.c)
 */

void __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<unsigned __int64 &>,tson::nvp<bool &>,tson::nvp<enum CloudPCHelpers::BootModeType &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8,
        __int64 *a9,
        __int64 a10,
        __int64 *a11)
{
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8

  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, a2);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, a3);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, a4);
  LOBYTE(v14) = *(_BYTE *)(a5 + 8);
  *(_QWORD *)this = *(_QWORD *)a5;
  *((_BYTE *)this + 8) = v14;
  tson::save_nothrow((__int64)this, *(const void ***)(a5 + 16), v14);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, a6);
  v15 = *a7;
  *((_BYTE *)this + 8) = *((_BYTE *)a7 + 8);
  *(_QWORD *)this = v15;
  tson::save_nothrow((__int64)this, (const void **)a7[2], v16);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, a8);
  tson::output_archive::process<tson::nvp<unsigned __int64 &>>((__int64)this, a9);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, a10);
  v17 = *a11;
  *((_BYTE *)this + 8) = *((_BYTE *)a11 + 8);
  *(_QWORD *)this = v17;
  tson::output_archive::saveValue(this, *(unsigned int *)a11[2], v18);
}
