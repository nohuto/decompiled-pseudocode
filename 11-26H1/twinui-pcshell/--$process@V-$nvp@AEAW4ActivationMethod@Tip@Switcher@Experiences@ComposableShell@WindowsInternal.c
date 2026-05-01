/*
 * XREFs of ??$process@V?$nvp@AEAW4ActivationMethod@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@tson@@V?$nvp@AEAI@2@V?$nvp@AEA_N@2@V42@V42@V42@V?$nvp@AEAW4SwitcherType@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4ActivationMethod@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEA_N@1@222$$QEAV?$nvp@AEAW4SwitcherType@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@@Z @ 0x180490E2C
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1804910F8 (--$serialize@Vinput_archive@tson@@@_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@Com.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801770A8 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801771BC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$process@V?$nvp@AEAI@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x180326BC0 (--$process@V-$nvp@AEAI@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x180330CD4 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<enum WindowsInternal::ComposableShell::Experiences::Switcher::Tip::ActivationMethod &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<enum WindowsInternal::ComposableShell::Experiences::Switcher::Tip::SwitcherType &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  char v8; // r10
  int v9; // esi
  _DWORD *v13; // r14
  __int64 v14; // rax
  bool *v15; // rdi
  __int64 v16; // rdx
  char *v17; // rax
  char v18; // cl
  bool v19; // al
  __int64 v20; // rdx
  int v22; // [rsp+50h] [rbp+8h] BYREF

  v8 = *(_BYTE *)(a2 + 8);
  v9 = 0;
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v8;
  v13 = *(_DWORD **)(a2 + 16);
  v22 = 0;
  if ( tson::input_archive::search(this) )
  {
    tson::input_archive::consume_expected_marker(this, 18, -2147023267);
    tson::read_buffer::consume_n(*(tson::read_buffer **)this, &v22, 4uLL);
    v9 = v22;
  }
  *v13 = v9;
  tson::input_archive::process<tson::nvp<unsigned int &>>((__int64)this, a3);
  v14 = *a4;
  *((_BYTE *)this + 24) = *((_BYTE *)a4 + 8);
  *((_QWORD *)this + 2) = v14;
  v15 = (bool *)a4[2];
  if ( !tson::input_archive::search(this) )
  {
    v19 = 0;
    goto LABEL_8;
  }
  tson::input_archive::consume_expected_marker(this, 10, -2147023267);
  v16 = *(_QWORD *)this;
  v17 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v17 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v18 = *v17;
    *(_QWORD *)(v16 + 8) = v17 + 1;
    v19 = v18 != 0;
LABEL_8:
    *v15 = v19;
    goto LABEL_9;
  }
  *(_BYTE *)(v16 + 24) = 1;
LABEL_9:
  v20 = a5;
  a5 = a8;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<enum WindowsInternal::ComposableShell::Experiences::Switcher::Tip::SwitcherType &>>(
           this,
           v20);
}
