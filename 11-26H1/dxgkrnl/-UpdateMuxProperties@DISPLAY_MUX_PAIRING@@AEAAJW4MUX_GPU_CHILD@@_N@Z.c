/*
 * XREFs of ?UpdateMuxProperties@DISPLAY_MUX_PAIRING@@AEAAJW4MUX_GPU_CHILD@@_N@Z @ 0x1400900B8
 * Callers:
 *     ?CheckForNewMuxPairing@DISPLAY_MUX_PAIRING@@AEAAJXZ @ 0x14008AF18 (-CheckForNewMuxPairing@DISPLAY_MUX_PAIRING@@AEAAJXZ.c)
 *     ?DrtToggleMuxPosition@DISPLAY_MUX_PAIRING@@QEAAJXZ @ 0x14008BFF4 (-DrtToggleMuxPosition@DISPLAY_MUX_PAIRING@@QEAAJXZ.c)
 *     ?SwitchMux@DISPLAY_MUX_PAIRING@@QEAAJU_LUID@@I@Z @ 0x14008FCEC (-SwitchMux@DISPLAY_MUX_PAIRING@@QEAAJU_LUID@@I@Z.c)
 *     ?UpdateMuxPosition@DISPLAY_MUX_PAIRING@@QEAAXXZ @ 0x140090010 (-UpdateMuxPosition@DISPLAY_MUX_PAIRING@@QEAAXXZ.c)
 * Callees:
 *     ?SetDeviceProperties@DISPLAY_MUX_DEVICE@@QEAAJPEBUDXG_DISPLAYMUX_DEV_UPDATE_DEV_PROP@@@Z @ 0x14008F3DC (-SetDeviceProperties@DISPLAY_MUX_DEVICE@@QEAAJPEBUDXG_DISPLAYMUX_DEV_UPDATE_DEV_PROP@@@Z.c)
 *     Feature_MdmFixD0IncompletePairingCrash__private_IsEnabledDeviceUsageNoInline @ 0x1400915E0 (Feature_MdmFixD0IncompletePairingCrash__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DISPLAY_MUX_PAIRING::UpdateMuxProperties(__int64 a1, int a2, char a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // [rsp+20h] [rbp-39h] BYREF
  int v12; // [rsp+28h] [rbp-31h]
  __int64 v13; // [rsp+30h] [rbp-29h] BYREF
  int v14; // [rsp+38h] [rbp-21h]
  _QWORD v15[10]; // [rsp+40h] [rbp-19h] BYREF

  if ( a2 )
  {
    if ( !(unsigned int)Feature_MdmFixD0IncompletePairingCrash__private_IsEnabledDeviceUsageNoInline()
      || *(_QWORD *)(a1 + 16) && *(_QWORD *)(a1 + 24) )
    {
      v7 = *(_QWORD *)(a1 + 16);
      v11 = *(_QWORD *)(v7 + 16);
      v8 = *(_DWORD *)(v7 + 356);
      v9 = *(_QWORD *)(a1 + 24);
      v12 = v8;
      v13 = *(_QWORD *)(v9 + 16);
      v14 = *(_DWORD *)(v9 + 356);
      memset(v15, 0, 0x48uLL);
      v15[6] = 0x100000003LL;
      v10 = &v11;
      if ( a2 != 1 )
        v10 = &v13;
      v15[7] = v10;
      LODWORD(v15[8]) = 12;
      if ( !a3 )
      {
        v15[0] = 0x100000000LL;
        v15[1] = &v11;
        v15[4] = &v13;
        LODWORD(v15[2]) = 12;
        v15[3] = 0x100000001LL;
        LODWORD(v15[5]) = 12;
      }
      return DISPLAY_MUX_DEVICE::SetDeviceProperties(
               *(DISPLAY_MUX_DEVICE **)(a1 + 8),
               (const struct DXG_DISPLAYMUX_DEV_UPDATE_DEV_PROP *)v15);
    }
    else
    {
      WdLogSingleEntry0(2LL);
      result = 3221225534LL;
      WdLogGlobalForLineNumber = 2008;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 1999;
  }
  return result;
}
