/*
 * XREFs of UserSetScaleFactorsFromRemoteMetric @ 0x140187784
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019DDA0 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserSetScaleFactorsFromRemoteMetric(int a1, int a2, int a3)
{
  __int64 result; // rax

  if ( a1 )
  {
    result = W32GetUserSessionState(a1, a2, a3);
    *(_DWORD *)(*(_QWORD *)(result + 19904) + 2236LL) |= 0x40u;
  }
  else
  {
    result = W32GetUserSessionState(0, a2, a3);
    *(_DWORD *)(*(_QWORD *)(result + 19904) + 2236LL) &= ~0x40u;
  }
  return result;
}
