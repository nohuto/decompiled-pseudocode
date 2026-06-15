/*
 * XREFs of ?UpdateFormatAndPeriodicitySensitivity@CSaDeviceProxy@@IEAAXHHH@Z @ 0x18007CB28
 * Callers:
 *     ?OnStreamGroupLazyRequestStatusChanged@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x18007CA00 (-OnStreamGroupLazyRequestStatusChanged@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x18007CA40 (-OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x1800806C0 (-OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?OnStreamGroupSensitivityToFormatChanged@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x1800FEBA0 (-OnStreamGroupSensitivityToFormatChanged@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CSaDeviceProxy::UpdateFormatAndPeriodicitySensitivity(CSaDeviceProxy *this, int a2, int a3, int a4)
{
  *((_DWORD *)this + 30) += a2;
  *((_DWORD *)this + 29) += a3;
  *((_DWORD *)this + 31) += a4;
  *((_QWORD *)this + 16) = GetTickCount64();
}
