/*
 * XREFs of ??$process@V?$nvp@AEAW4ShellTransitionType@Transitions@Udwm@winrt@@@tson@@V?$nvp@AEA_N@2@V32@V?$nvp@AEAW4RotationState@Rotation@Private@Transitions@Udwm@winrt@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4ShellTransitionType@Transitions@Udwm@winrt@@@1@$$QEAV?$nvp@AEA_N@1@1$$QEAV?$nvp@AEAW4RotationState@Rotation@Private@Transitions@Udwm@winrt@@@1@@Z @ 0x1800D21D8
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1800D2580 (--$serialize@Vinput_archive@tson@@@_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transi.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800D22D4 (--$process@V-$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1800D44CC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1800D56D8 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<enum winrt::Udwm::Transitions::ShellTransitionType &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<enum winrt::Udwm::Transitions::Private::Rotation::RotationState &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  char v5; // r10
  int v6; // ebx
  _DWORD *v10; // r15
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // r8
  int *v14; // rax
  __int64 v15; // rax
  _DWORD *v16; // rsi
  int *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8

  v5 = *(_BYTE *)(a2 + 8);
  v6 = 0;
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v5;
  v10 = *(_DWORD **)(a2 + 16);
  v11 = 0;
  if ( tson::input_archive::search(this) )
  {
    LOBYTE(v12) = 18;
    tson::input_archive::consume_expected_marker(this, v12, 2147944029LL);
    v13 = *(_QWORD *)this;
    v14 = *(int **)(*(_QWORD *)this + 8LL);
    if ( (unsigned __int64)(v14 + 1) > *(_QWORD *)(*(_QWORD *)this + 16LL) )
    {
      *(_BYTE *)(v13 + 24) = 1;
    }
    else
    {
      v11 = *v14;
      *(_QWORD *)(v13 + 8) = v14 + 1;
    }
  }
  *v10 = v11;
  tson::input_archive::process<tson::nvp<bool &>>(this, a3);
  tson::input_archive::process<tson::nvp<bool &>>(this, a4);
  v15 = *a5;
  *((_BYTE *)this + 24) = *((_BYTE *)a5 + 8);
  *((_QWORD *)this + 2) = v15;
  v16 = (_DWORD *)a5[2];
  LOBYTE(v17) = tson::input_archive::search(this);
  if ( (_BYTE)v17 )
  {
    LOBYTE(v18) = 18;
    tson::input_archive::consume_expected_marker(this, v18, 2147944029LL);
    v19 = *(_QWORD *)this;
    v17 = *(int **)(*(_QWORD *)this + 8LL);
    if ( (unsigned __int64)(v17 + 1) > *(_QWORD *)(*(_QWORD *)this + 16LL) )
    {
      *(_BYTE *)(v19 + 24) = 1;
    }
    else
    {
      v6 = *v17;
      *(_QWORD *)(v19 + 8) = v17 + 1;
    }
  }
  *v16 = v6;
  return (char)v17;
}
