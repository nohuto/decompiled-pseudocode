/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAW4RemoteDesktopLocalAction@Shell@Internal@Windows@winrt@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAW4RemoteDesktopLocalAction@Shell@Internal@Windows@winrt@@@1@@Z @ 0x180617B2C
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEA_K@2@V12@V?$nvp@AEAW4BootModeType@CloudPCHelpers@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEA_K@1@0$$QEAV?$nvp@AEAW4BootModeType@CloudPCHelpers@@@1@@Z @ 0x180617C04 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEA_K@2@V12@V-$nvp@AEAW4BootModeType@CloudPCHelpers@@@2@@in.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_PerformLocalActionTipTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1806220FC (--$serialize@Vinput_archive@tson@@@_tip_PerformLocalActionTipTest@@QEAAXAEAVinput_archive@tson@@.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801852D0 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801853E4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x180331D14 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<enum winrt::Windows::Internal::Shell::RemoteDesktopLocalAction &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 *a3)
{
  char v3; // r9
  bool *v6; // r14
  int v7; // edi
  __int64 v8; // rdx
  char *v9; // rax
  char v10; // cl
  bool v11; // al
  __int64 v12; // rax
  _DWORD *v13; // rsi
  char result; // al
  int v15; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v3;
  v6 = *(bool **)(a2 + 16);
  v7 = 0;
  if ( tson::input_archive::search(this) )
  {
    tson::input_archive::consume_expected_marker(this, 10, -2147023267);
    v8 = *(_QWORD *)this;
    v9 = *(char **)(*(_QWORD *)this + 8LL);
    if ( (unsigned __int64)v9 >= *(_QWORD *)(*(_QWORD *)this + 16LL) )
    {
      *(_BYTE *)(v8 + 24) = 1;
      goto LABEL_7;
    }
    v10 = *v9;
    *(_QWORD *)(v8 + 8) = v9 + 1;
    v11 = v10 != 0;
  }
  else
  {
    v11 = 0;
  }
  *v6 = v11;
LABEL_7:
  v12 = *a3;
  *((_BYTE *)this + 24) = *((_BYTE *)a3 + 8);
  *((_QWORD *)this + 2) = v12;
  v13 = (_DWORD *)a3[2];
  v15 = 0;
  result = tson::input_archive::search(this);
  if ( result )
  {
    tson::input_archive::consume_expected_marker(this, 18, -2147023267);
    result = tson::read_buffer::consume_n(*(tson::read_buffer **)this, &v15, 4uLL);
    v7 = v15;
  }
  *v13 = v7;
  return result;
}
