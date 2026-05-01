/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V?$nvp@AEAW4SnapControlType@SnapComponent@Shell@Internal@Windows@winrt@@@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000$$QEAV?$nvp@AEAW4SnapControlType@SnapComponent@Shell@Internal@Windows@winrt@@@1@0@Z @ 0x18059C994
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V?$nvp@AEAW4__MIDL___MIDL_itf_inputswitchexperiencemanager_0000_0000_0001@@@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000$$QEAV?$nvp@AEAW4__MIDL___MIDL_itf_inputswitchexperiencemanager_0000_0000_0001@@@1@0@Z @ 0x18059C8D0 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V-$nvp@AEAW4__MIDL___MIDL_itf_inputswitchexperienc.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801770A8 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801771BC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<enum winrt::Windows::Internal::Shell::SnapComponent::SnapControlType &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  char v7; // r10
  bool *v10; // rsi
  __int64 v11; // rdx
  char *v12; // rax
  char v13; // cl
  bool v14; // al
  __int64 v15; // rax
  bool *v16; // rdi
  __int64 v17; // rdx
  char *v18; // rax
  char v19; // cl
  bool v20; // al

  v7 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v7;
  v10 = *(bool **)(a2 + 16);
  if ( tson::input_archive::search(this) )
  {
    tson::input_archive::consume_expected_marker(this, 10, -2147023267);
    v11 = *(_QWORD *)this;
    v12 = *(char **)(*(_QWORD *)this + 8LL);
    if ( (unsigned __int64)v12 >= *(_QWORD *)(*(_QWORD *)this + 16LL) )
    {
      *(_BYTE *)(v11 + 24) = 1;
      goto LABEL_7;
    }
    v13 = *v12;
    *(_QWORD *)(v11 + 8) = v12 + 1;
    v14 = v13 != 0;
  }
  else
  {
    v14 = 0;
  }
  *v10 = v14;
LABEL_7:
  v15 = *a3;
  *((_BYTE *)this + 24) = *((_BYTE *)a3 + 8);
  *((_QWORD *)this + 2) = v15;
  v16 = (bool *)a3[2];
  if ( !tson::input_archive::search(this) )
  {
    v20 = 0;
    goto LABEL_12;
  }
  tson::input_archive::consume_expected_marker(this, 10, -2147023267);
  v17 = *(_QWORD *)this;
  v18 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v18 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v19 = *v18;
    *(_QWORD *)(v17 + 8) = v18 + 1;
    v20 = v19 != 0;
LABEL_12:
    *v16 = v20;
    return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<enum winrt::Windows::Internal::Shell::SnapComponent::SnapControlType &>,tson::nvp<bool &>>(
             this,
             a7);
  }
  *(_BYTE *)(v17 + 24) = 1;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<enum winrt::Windows::Internal::Shell::SnapComponent::SnapControlType &>,tson::nvp<bool &>>(
           this,
           a7);
}
