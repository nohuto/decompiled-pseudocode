/*
 * XREFs of UserSetScaleFactorsFromRemoteMetric @ 0x14014D8A0
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14017A6FC (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserSetScaleFactorsFromRemoteMetric(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (_DWORD)a1 )
  {
    result = W32GetUserSessionState(a1, a2);
    *(_DWORD *)(*(_QWORD *)(result + 19872) + 2236LL) |= 0x40u;
  }
  else
  {
    result = W32GetUserSessionState(a1, a2);
    *(_DWORD *)(*(_QWORD *)(result + 19872) + 2236LL) &= ~0x40u;
  }
  return result;
}
