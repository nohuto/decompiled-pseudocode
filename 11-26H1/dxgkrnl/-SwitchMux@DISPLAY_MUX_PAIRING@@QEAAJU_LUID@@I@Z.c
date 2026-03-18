/*
 * XREFs of ?SwitchMux@DISPLAY_MUX_PAIRING@@QEAAJU_LUID@@I@Z @ 0x14008FCEC
 * Callers:
 *     ?SwitchMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@I@Z @ 0x14008FC34 (-SwitchMux@DISPLAY_MUX_MGR@@QEAAJU_LUID@@I@Z.c)
 * Callees:
 *     ?DestroyActivePairing@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAY_MUX_PAIRING_DESTROYED_REASON@@@Z @ 0x14008BA7C (-DestroyActivePairing@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAY_MUX_PAIRING_DESTROYED_REASON@@@Z.c)
 *     ?GetGpuChild@DISPLAY_MUX_PAIRING@@AEBA?AW4MUX_GPU_CHILD@@U_LUID@@I@Z @ 0x14008C51C (-GetGpuChild@DISPLAY_MUX_PAIRING@@AEBA-AW4MUX_GPU_CHILD@@U_LUID@@I@Z.c)
 *     ?IsOperational@DISPLAY_MUX_PAIRING@@AEBA_NXZ @ 0x14008CDA8 (-IsOperational@DISPLAY_MUX_PAIRING@@AEBA_NXZ.c)
 *     ?SetPairingStatus@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J@Z @ 0x14008F658 (-SetPairingStatus@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J@Z.c)
 *     ?SwitchMux@DISPLAY_MUX_DEVICE@@QEAAJW4MUX_GPU_CHILD@@@Z @ 0x14008FBA4 (-SwitchMux@DISPLAY_MUX_DEVICE@@QEAAJW4MUX_GPU_CHILD@@@Z.c)
 *     ?UpdateMuxProperties@DISPLAY_MUX_PAIRING@@AEAAJW4MUX_GPU_CHILD@@_N@Z @ 0x1400900B8 (-UpdateMuxProperties@DISPLAY_MUX_PAIRING@@AEAAJW4MUX_GPU_CHILD@@_N@Z.c)
 */

__int64 __fastcall DISPLAY_MUX_PAIRING::SwitchMux(DISPLAY_MUX_PAIRING *this, struct _LUID a2, unsigned int a3)
{
  __int64 v3; // rsi
  DWORD LowPart; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  unsigned int GpuChild; // eax
  int v10; // eax
  __int64 v11; // r8
  unsigned int v12; // ebp
  unsigned int v13; // ebx
  LONG HighPart; // [rsp+4Ch] [rbp+14h]

  HighPart = a2.HighPart;
  v3 = a3;
  LowPart = a2.LowPart;
  if ( DISPLAY_MUX_PAIRING::IsOperational(this) )
  {
    GpuChild = DISPLAY_MUX_PAIRING::GetGpuChild(v7, v6, v3);
    if ( GpuChild )
    {
      v10 = DISPLAY_MUX_DEVICE::SwitchMux(*((_QWORD *)this + 1), GpuChild);
      v12 = v10;
      if ( v10 >= 0 )
      {
        LOBYTE(v11) = 1;
        result = DISPLAY_MUX_PAIRING::UpdateMuxProperties(this, *(unsigned int *)(*((_QWORD *)this + 1) + 72LL), v11);
        v13 = result;
        if ( (int)result < 0 )
        {
          DISPLAY_MUX_PAIRING::DestroyActivePairing((__int64)this, 4);
          DISPLAY_MUX_PAIRING::SetPairingStatus(this, 8, v13);
          return v13;
        }
      }
      else
      {
        WdLogSingleEntry4(2LL, HighPart, LowPart, v3, v10);
        result = v12;
        WdLogGlobalForLineNumber = 1885;
      }
    }
    else
    {
      WdLogSingleEntry3(2LL, HighPart, LowPart, v3);
      result = 3221226021LL;
      WdLogGlobalForLineNumber = 1877;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    result = 3221225534LL;
    WdLogGlobalForLineNumber = 1867;
  }
  return result;
}
