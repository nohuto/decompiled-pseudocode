/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAW4SwitcherType@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAW4SwitcherType@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@@Z @ 0x180480690
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAW4SwitcherType@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAW4SwitcherType@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@@Z @ 0x1804805A0 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAW4SwitcherType@Tip@Switcher@Experiences@Composab.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801852D0 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801853E4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$consume@E@read_buffer@tson@@QEAA_NAEAE@Z @ 0x1802CA618 (--$consume@E@read_buffer@tson@@QEAA_NAEAE@Z.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<enum WindowsInternal::ComposableShell::Experiences::Switcher::Tip::SwitcherType &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 *a3)
{
  char v3; // r9
  bool *v6; // r14
  char v7; // di
  __int64 v8; // rdx
  char *v9; // rax
  char v10; // cl
  bool v11; // al
  __int64 v12; // rax
  _BYTE *v13; // rsi
  char result; // al
  char v15; // [rsp+30h] [rbp+8h] BYREF

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
  v13 = (_BYTE *)a3[2];
  v15 = 0;
  result = tson::input_archive::search(this);
  if ( result )
  {
    tson::input_archive::consume_expected_marker(this, 12, -2147023267);
    result = tson::read_buffer::consume<unsigned char>(*(_QWORD *)this, &v15);
    v7 = v15;
  }
  *v13 = v7;
  return result;
}
