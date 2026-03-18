/*
 * XREFs of PnpiGrowResourceList @ 0x1400CF46C
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1400CE578 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     WPP_RECORDER_SF_dL @ 0x140052490 (WPP_RECORDER_SF_dL.c)
 *     WPP_RECORDER_SF_ddL @ 0x140054D20 (WPP_RECORDER_SF_ddL.c)
 *     ACPIInternalGrowBuffer @ 0x1400A9ADC (ACPIInternalGrowBuffer.c)
 */

__int64 __fastcall PnpiGrowResourceList(const void **a1, _DWORD *a2, int a3)
{
  int v3; // ebx
  _DWORD *v4; // rdi
  int v6; // eax
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  int v9; // r15d
  __int64 result; // rax
  __int64 Pool2; // rax

  v3 = 0;
  v4 = a2;
  if ( *a1 && (v6 = *a2) != 0 )
  {
    v7 = 8 * v6;
    v8 = 8 * v6 + 64;
    v9 = v6 + 8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(WPP_GLOBAL_Control->DeviceExtension, 4, a3, 32);
    result = ACPIInternalGrowBuffer(a1, v7, v8);
    if ( (int)result >= 0 )
      v3 = v9;
    *v4 = v3;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_dL(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)a2, 14, 31);
    }
    Pool2 = ExAllocatePool2(256LL, 64LL, 1383097153LL);
    *a1 = (const void *)Pool2;
    if ( Pool2 )
    {
      *v4 = 8;
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
