/*
 * XREFs of ??$?RV?$nvp@AEA_N@tson@@V01@V01@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@00@Z @ 0x1801851C0
 * Callers:
 *     ??$?RAEAU_tip_InputSwitcherHideTest@@@input_archive@tson@@QEAAAEAV01@AEAU_tip_InputSwitcherHideTest@@@Z @ 0x18061241C (--$-RAEAU_tip_InputSwitcherHideTest@@@input_archive@tson@@QEAAAEAV01@AEAU_tip_InputSwitcherHideT.c)
 *     ??$?RAEAU_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@input_archive@tson@@QEAAAEAV01@AEAU_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@Z @ 0x1806161CC (--$-RAEAU_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@input_archive@tson@@QEAAAEAV01@AEAU_t.c)
 * Callees:
 *     ??$process@AEA_N@input_archive@tson@@AEAAXAEA_N@Z @ 0x18018523C (--$process@AEA_N@input_archive@tson@@AEAAXAEA_N@Z.c)
 */

__int64 __fastcall tson::input_archive::operator()<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  char v4; // r10
  char v8; // dl
  __int64 v9; // rax

  v4 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 24) = v4;
  tson::input_archive::process<bool &>(a1, *(_QWORD *)(a2 + 16));
  v8 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a3;
  *(_BYTE *)(a1 + 24) = v8;
  tson::input_archive::process<bool &>(a1, *(_QWORD *)(a3 + 16));
  v9 = *a4;
  *(_BYTE *)(a1 + 24) = *((_BYTE *)a4 + 8);
  *(_QWORD *)(a1 + 16) = v9;
  tson::input_archive::process<bool &>(a1, a4[2]);
  return a1;
}
