/*
 * XREFs of HmgDecProcessHandleCount @ 0x140179250
 * Callers:
 *     HmgSetOwner @ 0x140015EC0 (HmgSetOwner.c)
 *     HmgInsertObjectInternal @ 0x14001F910 (HmgInsertObjectInternal.c)
 *     GreSetBrushOwner @ 0x1400711D0 (GreSetBrushOwner.c)
 *     HmgAllocFast @ 0x1401C5500 (HmgAllocFast.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C8C80 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 * Callees:
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     HmgDecProcessHandleCountFastOpt @ 0x1401C8258 (HmgDecProcessHandleCountFastOpt.c)
 */

__int64 __fastcall HmgDecProcessHandleCount(unsigned int a1)
{
  __int64 v2; // rcx
  __int64 SessionState; // rax

  if ( !(unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    return HmgDecProcessHandleCountFastOpt(&WPP_MAIN_CB.Queue.Wcb.DeviceContext, a1);
  SessionState = W32GetSessionState(v2);
  return HmgDecProcessHandleCountFastOpt(*(_QWORD *)(SessionState + 88), a1);
}
